#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t5_107;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t5_327;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,MInC_Player>
struct Dictionary_2_t1_954;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Instantiation
struct  Instantiation_t7_4  : public MonoBehaviour_t5_100
{
	// UnityEngine.GameObject Instantiation::prefab
	GameObject_t5_107 * ___prefab_2;
	// System.Int32 Instantiation::maxNumClones
	int32_t ___maxNumClones_3;
	// System.Single Instantiation::radius
	float ___radius_4;
	// UnityEngine.GameObject Instantiation::infoCanvas
	GameObject_t5_107 * ___infoCanvas_5;
	// System.Int32 Instantiation::numClones
	int32_t ___numClones_6;
	// UnityEngine.GameObject[] Instantiation::clones
	GameObjectU5BU5D_t5_327* ___clones_7;
	// System.Int32 Instantiation::numSeqs
	int32_t ___numSeqs_8;
	// System.String Instantiation::playerID
	String_t* ___playerID_9;
	// System.Collections.Generic.Dictionary`2<System.String,MInC_Player> Instantiation::PlayerDictionary
	Dictionary_2_t1_954 * ___PlayerDictionary_10;
	// System.Boolean Instantiation::checkPlayerList
	bool ___checkPlayerList_11;
	// System.Boolean Instantiation::blockTrigger
	bool ___blockTrigger_12;
	// System.Boolean Instantiation::displayText
	bool ___displayText_13;
	// System.Boolean Instantiation::like
	bool ___like_14;
	// System.Boolean Instantiation::mute
	bool ___mute_15;
	// System.Int32 Instantiation::octave
	int32_t ___octave_16;
	// System.Int32 Instantiation::speed
	int32_t ___speed_17;
};
