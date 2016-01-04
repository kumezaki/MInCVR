using UnityEngine;
using UnityEngine.UI;
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;

public class MInC_Player {
	public int clonePos = -1;
	public bool Missing = false;
	public int SeqPos_Cur = 0;	// 0 is no sequence; 1 is first sequence
	public int SeqPos_Next = 0;	// 0 is no sequence; 1 is first sequence
	public int SeqSpeed_Cur = 0;
	public int SeqSpeed_Next = 0;
	public int SeqOctave_Cur = 0;
	public int SeqOctave_Next = 0;
	public int SeqMute_Cur = 0;
	public int SeqMute_Next = 0;
	public int Like = 0;

	public MInC_Player(int _clonePos)
	{
		clonePos = _clonePos;
	}
}

public class Instantiation : MonoBehaviour {
	
	public GameObject prefab;
	public int maxNumClones;
	public float radius;
	
	GameObject infoCanvas;

	int numClones;
	GameObject[] clones;
	
#if !UNITY_EDITOR
	int numSeqs;
#endif

	string playerID;

	Dictionary<string,MInC_Player> PlayerDictionary = new Dictionary<string, MInC_Player>();

	bool checkPlayerList = false;

	bool blockTrigger = false;

	bool displayText = false;

	bool like = false;
	bool mute = false;
	int octave = 0;
	int speed = 0;

#if !UNITY_EDITOR
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_StartAudioEngine ();
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_StopAudioEngine ();
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_AddPlayer (char[] player_id, int length, int firstperson);
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_RemovePlayer (char[] player_id, int length);
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_SetScore (char[] score_text, int length);
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_SetSequence (char[] player_id, int length, int val);
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_SetSpeed (char[] player_id, int length, int val);
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_SetOctave (char[] player_id, int length, int seq_num);
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_SetMute (char[] player_id, int length, int seq_num);
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_SetPlayerAngle (char[] player_id, int length, float val); // normalized
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_SetPlayerAmp (char[] player_id, int length, float val);
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_SetPlayerFreq (char[] player_id, int length, float val);
	#if UNITY_IPHONE
	[DllImport ("__Internal")]
	#endif
	private static extern int PluginFunc_SetOrientation (float angle); // angle -1..+1
#endif

	void Start() {

		numClones = 0;
		clones = new GameObject[maxNumClones];

		infoCanvas = GameObject.Find ("/InfoCanvas");
		SetGameObjectsDisplayText ();

		string url_score_list = "http://healthyboys.com/MInC/score_list.php";
		WWW www_score_list = new WWW(url_score_list);
		StartCoroutine(WaitForRequest_ScoreList(www_score_list));

		string url_player_id = "http://healthyboys.com/MInC/player_id.php";
		WWW www_player_id = new WWW(url_player_id);
		StartCoroutine(WaitForRequest_PlayerID(www_player_id));

		#if !UNITY_EDITOR
		if (Application.platform == RuntimePlatform.IPhonePlayer)
			Debug.Log ("PluginFunc_StartAudioEngine " + PluginFunc_StartAudioEngine ());
		else
			Debug.Log ("PluginFunc_StartAudioEngine " + "dummy value");
		#endif
	}

	void Update()
	{
		if (Cardboard.SDK.Triggered && !blockTrigger) {
			AdvanceSelf ();
			Debug.Log ("Cardboard.SDK.Triggered " + blockTrigger);
		}

		float self_angle = 1.0f - Cardboard.SDK.HeadPose.Orientation.eulerAngles.y / 360.0f;
		float self_angle_L = self_angle + 0.25f;

		float angle_rad = (1.0f - self_angle) * 2.0f * Mathf.PI;
		if (playerID != null) {

			MInC_Player self = PlayerDictionary [playerID];

			if (!blockTrigger)
			{
				float height = SeqPosToHeight(self.SeqPos_Cur) + 3.0f;
				infoCanvas.GetComponent<Transform> ().position = new Vector3 (Mathf.Sin (angle_rad) * radius, height, Mathf.Cos (angle_rad) * radius);
				infoCanvas.GetComponent<Transform> ().rotation = Quaternion.Euler (new Vector3 (0, -self_angle * 360.0f, 0));
			}

			GameObject infoText = GameObject.Find ("/InfoCanvas/Panel/Like Button/Text");
			string text = (self_angle * 360.0f).ToString ("F0") + "\n" + self.SeqPos_Cur.ToString ();
			if (infoText != null)
				infoText.GetComponent<Text>().text = text;
		}

		#if !UNITY_EDITOR
		PluginFunc_SetOrientation (self_angle);
		#endif

		foreach (KeyValuePair<string,MInC_Player> entry in PlayerDictionary)
		{
			MInC_Player player = PlayerDictionary[entry.Key];
			if (player.clonePos >= 0) // not self
			{
				float clone_angle = (float)player.clonePos / maxNumClones;

				float prox_L = Mathf.Abs(self_angle_L - clone_angle);
				prox_L = prox_L > 1.0f ? prox_L - 1.0f : prox_L > 0.5f ? 1.0f - prox_L : prox_L;

				float prox_C = prox_L - 0.25f;

				#if false				
				float scale_R = (prox_C + 0.25f) / 0.5f;
				float scale_L = 1.0f - scale_R;

				Vector3 v3 = clones [player.clonePos].GetComponent<Transform>().position;
				#endif

				GameObject go = clones [player.clonePos];
				if (player.SeqPos_Cur > 0)
				{
					float angle_degrees = player.SeqSpeed_Cur == 0 ? -0.5f : player.SeqSpeed_Cur == 2 ? -2.0f : -1.0f;
					go.GetComponent<Transform> ().Rotate (0,angle_degrees,0);
				}

				go.GetComponentInChildren<TextMesh> ().text = entry.Key
					+ "\n"
					+ player.SeqPos_Cur.ToString();
#if false				
					+ "\n"
					+ prox_C.ToString()
					+ "\n"
					+ player.clonePos.ToString() + ", " + clone_angle.ToString()
					+ "\n"
					+ scale_L.ToString() + " - " + scale_R.ToString()
					+ "\n"
					+ v3.x + ", " + v3.y + ", " + v3.z;
#endif
			}
		}
	}

	void OnApplicationQuit()
	{
		EndSelf (); // not sure if this is working
		Debug.Log ("OnApplicationQuit");
	}

	IEnumerator PlayerListLoop()
	{
		while (checkPlayerList) {
			yield return new WaitForSeconds(1);

			string url_player_list = "http://healthyboys.com/MInC/player_list.php?id="+playerID;
			WWW www_player_list = new WWW(url_player_list);
			StartCoroutine(WaitForRequest_PlayerList(www_player_list));
		}
	}

	IEnumerator WaitForRequest_ScoreList(WWW www)
	{
		yield return www;
		// check for errors
		if (www.error == null)
		{
			Debug.Log("WaitForRequest_ScoreList Ok!: \n" + www.text);
		} else {
			Debug.Log("WaitForRequest_ScoreList Error: "+ www.error);
		}    
	}

	IEnumerator WaitForRequest_PlayerID(WWW www)
	{
		yield return www;
		// check for errors
		if (www.error == null)
		{
			playerID = www.text.Substring(0, www.text.Length - 1);
			PlayerDictionary.Add (playerID,new MInC_Player(-1)); // -1 is self
			UpdateSelfHeight ();

			char[] playerID_char = playerID.ToCharArray();
			#if !UNITY_EDITOR
			PluginFunc_AddPlayer (playerID_char,playerID_char.Length,1);
			#endif

			GetScore();

			GetAvgMod();

			Debug.Log("WaitForRequest_PlayerID Ok!: \n" + playerID);
		} else {
			Debug.Log("WaitForRequest_PlayerID Error: "+ www.error);
		}
	}
	
	IEnumerator WaitForRequest_Score(WWW www)
	{
		yield return www;
		// check for errors
		if (www.error == null)
		{
			#if !UNITY_EDITOR
			numSeqs = PluginFunc_SetScore(www.text.ToCharArray(),www.text.Length);
			#endif
			PlayerDictionary [playerID].SeqPos_Cur = PlayerDictionary [playerID].SeqPos_Next = 0;
			checkPlayerList = true;
			StartCoroutine (PlayerListLoop ());

#if false
			// raise height of upper plane
			GameObject upperPlane = GameObject.Find ("/UpperPlane");
			Vector3 v3 = upperPlane.GetComponent<Transform>().position;
			#if !UNITY_EDITOR
			v3.y = SeqPosToHeight(numSeqs);
			#endif
			upperPlane.GetComponent<Transform>().position = v3;
#endif

			Debug.Log("WaitForRequest_Score Ok!: \n" + www.text);
		} else {
			Debug.Log("WaitForRequest_Score Error: "+ www.error);
		}
	}

	IEnumerator WaitForRequest_AvgMod(WWW www)
	{
		yield return www;
		// check for errors
		if (www.error == null)
		{
			Debug.Log("WaitForRequest_AvgMod Ok!: \n" + www.text);
		} else {
			Debug.Log("WaitForRequest_AvgMod Error: "+ www.error);
		}
	}
	
	IEnumerator WaitForRequest_PlayerList(WWW www)
	{
		yield return www;
		// check for errors
		if (www.error == null)
		{
			updatePlayers_Begin();

			Debug.Log("WaitForRequest_PlayerList Ok!: \n" + www.text);

			string[] players = www.text.Split('\n');
			foreach (string player in players)
			{
				Debug.Log(player);
				string[] player_info = player.Split(',');
				if (player_info.Length > 1)
				{
					if (player_info[0] != playerID)
					{
						Debug.Log(player_info);
						updatePlayer(player_info);
					}
				}
			}

			updatePlayers_End();

		} else {
			Debug.Log("WaitForRequest_PlayerList Error: "+ www.error);
		}    
	}
	
	IEnumerator WaitForRequest_PlayerParam(WWW www)
	{
		yield return www;
		// check for errors
		if (www.error == null)
		{
			Debug.Log("WaitForRequest_PlayerParam Ok!: \n" + www.text);
		} else {
			Debug.Log("WaitForRequest_PlayerParam Error: "+ www.error);
		}
	}

	IEnumerator WaitForRequest_PlayerEnd(WWW www)
	{
		yield return www;
		// check for errors
		if (www.error == null)
		{
			checkPlayerList = false;
			Debug.Log("WaitForRequest_PlayerEnd Ok!: \n" + www.text);
		} else {
			Debug.Log("WaitForRequest_PlayerEnd Error: "+ www.error);
		}
	}

	void SendPlayerParamValue(string param, string id, int val)
	{
		string url_player_pos = "http://healthyboys.com/MInC/player_" + param + ".php?id=" + id + "&val=" + val;
		Debug.Log (url_player_pos);
		WWW www_player_pos = new WWW(url_player_pos);
		StartCoroutine(WaitForRequest_PlayerParam(www_player_pos));
	}
	
	public void BlockTrigger_On() {
		blockTrigger = true;
		Debug.Log ("BlockTrigger_On "+blockTrigger);
	}

	public void BlockTrigger_Off() {
		blockTrigger = false;
		Debug.Log ("BlockTrigger_Off "+blockTrigger);
	}
	
	public void DisplayText_Toggle()
	{
		displayText = !displayText;

		SetGameObjectsDisplayText ();

		Debug.Log ("DisplayText_Toggle");
	}

	public void GetScore()
	{
		string url_score = "http://healthyboys.com/MInC/score.php?id=" + playerID + "&score_id=0";
		Debug.Log (url_score);
		WWW www_score = new WWW(url_score);
		StartCoroutine(WaitForRequest_Score(www_score));
	}
	
	public void GetAvgMod()
	{
		string url_avgmod = "http://healthyboys.com/MInC/avg_mod.php";
		Debug.Log (url_avgmod);
		WWW www_avgmod = new WWW(url_avgmod);
		StartCoroutine(WaitForRequest_AvgMod(www_avgmod));
	}

	public void AdvanceSelf()
	{
		MInC_Player self = PlayerDictionary [playerID];
		#if !UNITY_EDITOR		
		if (self.SeqPos_Cur > (numSeqs - 1))
			return;
		#endif
		self.SeqPos_Cur = ++self.SeqPos_Next;

		// send updated sequence number to server
		SendPlayerParamValue ("pos", playerID, self.SeqPos_Cur);

		// send updated sequence number to sequencer
		char[] playerID_char = playerID.ToCharArray();
		#if !UNITY_EDITOR
		PluginFunc_SetSequence (playerID_char, playerID_char.Length, self.SeqPos_Cur);
		#endif
		UpdateSelfHeight ();

#if true
		// compute ratio of vertical height to distance (magnitude)
		foreach (KeyValuePair<string,MInC_Player> entry in PlayerDictionary) {
			if (PlayerDictionary [entry.Key].clonePos >= 0) // not self
				SetPlayerAudioHeight(entry.Key.ToCharArray(), PlayerDictionary [entry.Key].SeqPos_Cur);
		}
#endif
	}

	public void EndSelf()
	{
		string url_player_end = "http://healthyboys.com/MInC/player_end.php?id=" + playerID;
		Debug.Log (url_player_end);
		WWW www_player_end = new WWW(url_player_end);
		StartCoroutine(WaitForRequest_PlayerEnd(www_player_end));
	}

	public void Like_Toggle()
	{
		Debug.Log ("Like_Toggle");

		like = !like;

		// send updated value to server
		SendPlayerParamValue ("like", playerID, (like ? 1 : 0));

		// update the display elements
		GameObject go = GameObject.Find ("/InfoCanvas/Panel/Like Button");

		Debug.Log (go.GetComponent<Image> ().sprite.name);
		Sprite sp = Resources.Load<Sprite>("Sprites/"+(like?"Heart_Red":"Heart_White"));
		if (sp == null)
			Debug.Log ("sprite not found");
		else
			go.GetComponent<Image> ().overrideSprite = sp;
	}

	public void Mute_Toggle()
	{
		Debug.Log ("Mute_Toggle");

		mute = !mute;

		// send updated value to server
		SendPlayerParamValue ("mute", playerID, (mute ? 1 : 0));

		// update the sequencer...

		// update the display elements...
	}

	int LIMIT_PARAM_UP(int lim, int val) { return (val+1)>lim ? lim : ++val; }
	int LIMIT_PARAM_DOWN(int lim, int val) { return (val-1)<lim ? lim : --val; }
	
	public void Octave_Up() {
		Debug.Log ("Octave_Up");
		octave = LIMIT_PARAM_UP(2, octave);
		SetSelfOctave ();
	}

	public void Octave_Down() {
		Debug.Log ("Octave_Down");
		octave = LIMIT_PARAM_DOWN(-2, octave);
		SetSelfOctave ();
	}
	
	public void Speed_Up() {
		Debug.Log ("Speed_Up");
		speed = LIMIT_PARAM_UP (1, speed);
		SetSelfSpeed ();
	}
	
	public void Speed_Down() {
		Debug.Log ("Speed_Down");
		speed = LIMIT_PARAM_DOWN (-1, speed);
		SetSelfSpeed ();
	}

	void SetSelfOctave() {
		char[] playerID_char = playerID.ToCharArray();
		#if !UNITY_EDITOR
		PluginFunc_SetOctave(playerID_char, playerID_char.Length, octave);
		#endif
		SendPlayerParamValue("octave", playerID, octave);

		GameObject.Find ("/InfoCanvas/Panel/8va Button").GetComponent<Button> ().interactable = octave < 2;
		GameObject.Find ("/InfoCanvas/Panel/8vb Button").GetComponent<Button> ().interactable = octave > -2;
	}
	
	void SetSelfSpeed() {
		char[] playerID_char = playerID.ToCharArray();
		#if !UNITY_EDITOR
		PluginFunc_SetSpeed(playerID_char, playerID_char.Length, speed);
		#endif
		SendPlayerParamValue("speed", playerID, speed);

		GameObject.Find ("/InfoCanvas/Panel/2x Button").GetComponent<Button> ().interactable = speed < 1;
		GameObject.Find ("/InfoCanvas/Panel/2^-1x Button").GetComponent<Button> ().interactable = speed > -1;
	}
	
	void AddObject(float angle)
	{
		float angle_adjusted = angle + Mathf.PI / 2;  // not sure why we need the visual objects to rotate by π/2
		Vector3 pos = new Vector3 (Mathf.Cos (angle_adjusted), 0, Mathf.Sin (angle_adjusted)) * radius;
		clones [numClones] = Instantiate (prefab, pos, Quaternion.identity) as GameObject;

		GameObject go = clones [numClones];

		float angle_degrees = angle / (2.0f * Mathf.PI) * 360.0f;
		go.GetComponent<Transform> ().Rotate (0,-angle_degrees,0);

		go.GetComponentInChildren<TextMesh> ().GetComponent<Renderer> ().enabled = false;
		go.GetComponentInChildren<ParticleSystem> ().GetComponent<Renderer> ().enabled = false;
	}

	void DeleteObject()
	{
		if (numClones > 0)
			Destroy (clones [--numClones]);
	}

	void updatePlayers_Begin()
	{
		foreach (KeyValuePair<string,MInC_Player> entry in PlayerDictionary)
		{
			MInC_Player player = PlayerDictionary[entry.Key];
			player.Missing = true;
		}
		PlayerDictionary[playerID].Missing = false;
	}

	void updatePlayer(string[] player_info)
	{
		string key = player_info[0];

		if (PlayerDictionary.ContainsKey(key))
		{
			Debug.Log("player w/ id "+key+" exists");
			PlayerDictionary[key].Missing = false;
		}
		else
		{
			if (numClones < maxNumClones) {
				PlayerDictionary.Add(key,new MInC_Player(numClones));
				char[] playerID_char = key.ToCharArray();
				float angle_rad = 2.0f * Mathf.PI * numClones / maxNumClones;
				#if !UNITY_EDITOR
				PluginFunc_AddPlayer (playerID_char,playerID_char.Length,0);
				PluginFunc_SetPlayerAngle(playerID_char,playerID_char.Length,angle_rad/(2.0f*Mathf.PI));
				#endif
				AddObject(angle_rad);
				numClones++;
			}
		}

		MInC_Player player = PlayerDictionary[key];
		player.SeqPos_Next = Int32.Parse(player_info[1]);
		player.SeqSpeed_Next = Int32.Parse(player_info[2]);
		player.SeqOctave_Next = Int32.Parse(player_info[3]);
		player.SeqMute_Next = Int32.Parse(player_info[4]);
		player.Like = Int32.Parse(player_info[5]);
	}

	void updatePlayers_End()
	{
		foreach (KeyValuePair<string,MInC_Player> entry in PlayerDictionary)
		{
			MInC_Player player = PlayerDictionary[entry.Key];
			char[] playerID_char = entry.Key.ToCharArray();

			if (player.Missing)
			{
				PlayerDictionary.Remove(entry.Key);
				#if !UNITY_EDITOR
				PluginFunc_RemovePlayer (playerID_char,playerID_char.Length);
				#endif
				Destroy(clones[player.clonePos]);
				clones[player.clonePos] = null;
			}
			else if (player.clonePos >= 0) // not self
			{
				GameObject go = clones[player.clonePos];

				/* seq position */
				if (player.SeqPos_Cur != player.SeqPos_Next)
				{
					player.SeqPos_Cur = player.SeqPos_Next;
					#if !UNITY_EDITOR
					PluginFunc_SetSequence (playerID_char, playerID_char.Length, player.SeqPos_Cur);
					#endif

					// raise height of player
					Vector3 v3 = go.GetComponent<Transform>().position;
					v3.y = SeqPosToHeight(player.SeqPos_Cur);
					go.GetComponent<Transform>().position = v3;

#if true
					// set player amplitude based on ratio of height difference to distance (magnitude)
					SetPlayerAudioHeight(playerID_char, player.SeqPos_Cur);
#endif

					bool playing = player.SeqPos_Cur > 0;
//					go.GetComponent<Renderer>().enabled = playing;
					go.GetComponentInChildren<ParticleSystem> ().GetComponent<Renderer> ().enabled = playing;
				}
				
				/* seq speed */
				if (player.SeqSpeed_Cur != player.SeqSpeed_Next)
				{
					player.SeqSpeed_Cur = player.SeqSpeed_Next;
					#if !UNITY_EDITOR
					PluginFunc_SetSpeed(playerID_char, playerID_char.Length, player.SeqSpeed_Cur);
					#endif
				}
				
				/* seq octave */
				if (player.SeqOctave_Cur != player.SeqOctave_Next)
				{
					player.SeqOctave_Cur = player.SeqOctave_Next;
					#if !UNITY_EDITOR
					PluginFunc_SetOctave(playerID_char, playerID_char.Length, player.SeqOctave_Cur);
					#endif
				}
				
				/* seq mute */
				if (player.SeqMute_Cur != player.SeqMute_Next)
				{
					player.SeqMute_Cur = player.SeqMute_Next;
					#if !UNITY_EDITOR
					PluginFunc_SetMute(playerID_char, playerID_char.Length, player.SeqMute_Cur);
					#endif
				}

				/* like ? */
				go.GetComponent<Renderer>().material.color = player.Like == 1 ? Color.red : Color.white;
			}
			
			Debug.Log("player "+entry.Key+
			          " pos="+player.SeqPos_Cur+
			          " speed="+player.SeqSpeed_Cur+
			          " octave="+player.SeqOctave_Cur+
			          " mute="+player.SeqMute_Cur+
			          " like="+player.Like);
		}
	}

	float SeqPosToHeight(int seq_num)
	{
		return seq_num * 0.5f + 0.5f;
	}

	void UpdateSelfHeight()
	{
		MInC_Player self = PlayerDictionary [playerID];

		// raise height
		GameObject cm = GameObject.Find ("/CardboardMain");
		if (cm != null)
		{
			Vector3 v = cm.GetComponent<Transform>().position;
			v.y = SeqPosToHeight(self.SeqPos_Cur);
			cm.GetComponent<Transform>().position = v;
		}
	}
	
	void SetPlayerAudioHeight(char[] playerID_char, int player_seqpos)
	{
		Vector2 v2;
		v2.x = radius;
		v2.y = SeqPosToHeight(player_seqpos) - SeqPosToHeight(PlayerDictionary[playerID].SeqPos_Cur); // vertical difference
		float ratio = v2.x / v2.magnitude;
		#if !UNITY_EDITOR
		PluginFunc_SetPlayerAmp(playerID_char,playerID_char.Length,ratio*ratio*ratio);
		PluginFunc_SetPlayerFreq(playerID_char,playerID_char.Length,ratio*ratio*ratio);
		#endif
		Debug.Log ("height to mag ratio ^ 3 " + playerID_char + ": " + ratio*ratio*ratio);
	}

	void SetGameObjectsDisplayText()
	{
		foreach (KeyValuePair<string,MInC_Player> entry in PlayerDictionary) {
			int clone_pos = PlayerDictionary [entry.Key].clonePos;
			if (clone_pos >= 0)
				clones [clone_pos].GetComponentInChildren<TextMesh> ().GetComponent<Renderer> ().enabled = displayText;
		}
	}
}
