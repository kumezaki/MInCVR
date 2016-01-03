#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Instantiation
struct Instantiation_t7_4;
// System.Char[]
struct CharU5BU5D_t1_16;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// UnityEngine.WWW
struct WWW_t5_88;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_198;

#include "codegen/il2cpp-codegen.h"

// System.Void Instantiation::.ctor()
extern "C" void Instantiation__ctor_m7_52 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_StartAudioEngine()
extern "C" int32_t Instantiation_PluginFunc_StartAudioEngine_m7_53 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_StopAudioEngine()
extern "C" int32_t Instantiation_PluginFunc_StopAudioEngine_m7_54 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_AddPlayer(System.Char[],System.Int32,System.Int32)
extern "C" int32_t Instantiation_PluginFunc_AddPlayer_m7_55 (Object_t * __this /* static, unused */, CharU5BU5D_t1_16* ___player_id, int32_t ___length, int32_t ___firstperson, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_RemovePlayer(System.Char[],System.Int32)
extern "C" int32_t Instantiation_PluginFunc_RemovePlayer_m7_56 (Object_t * __this /* static, unused */, CharU5BU5D_t1_16* ___player_id, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_SetScore(System.Char[],System.Int32)
extern "C" int32_t Instantiation_PluginFunc_SetScore_m7_57 (Object_t * __this /* static, unused */, CharU5BU5D_t1_16* ___score_text, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_SetSequence(System.Char[],System.Int32,System.Int32)
extern "C" int32_t Instantiation_PluginFunc_SetSequence_m7_58 (Object_t * __this /* static, unused */, CharU5BU5D_t1_16* ___player_id, int32_t ___length, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_SetSpeed(System.Char[],System.Int32,System.Int32)
extern "C" int32_t Instantiation_PluginFunc_SetSpeed_m7_59 (Object_t * __this /* static, unused */, CharU5BU5D_t1_16* ___player_id, int32_t ___length, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_SetOctave(System.Char[],System.Int32,System.Int32)
extern "C" int32_t Instantiation_PluginFunc_SetOctave_m7_60 (Object_t * __this /* static, unused */, CharU5BU5D_t1_16* ___player_id, int32_t ___length, int32_t ___seq_num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_SetMute(System.Char[],System.Int32,System.Int32)
extern "C" int32_t Instantiation_PluginFunc_SetMute_m7_61 (Object_t * __this /* static, unused */, CharU5BU5D_t1_16* ___player_id, int32_t ___length, int32_t ___seq_num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_SetPlayerAngle(System.Char[],System.Int32,System.Single)
extern "C" int32_t Instantiation_PluginFunc_SetPlayerAngle_m7_62 (Object_t * __this /* static, unused */, CharU5BU5D_t1_16* ___player_id, int32_t ___length, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_SetPlayerAmp(System.Char[],System.Int32,System.Single)
extern "C" int32_t Instantiation_PluginFunc_SetPlayerAmp_m7_63 (Object_t * __this /* static, unused */, CharU5BU5D_t1_16* ___player_id, int32_t ___length, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_SetPlayerFreq(System.Char[],System.Int32,System.Single)
extern "C" int32_t Instantiation_PluginFunc_SetPlayerFreq_m7_64 (Object_t * __this /* static, unused */, CharU5BU5D_t1_16* ___player_id, int32_t ___length, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::PluginFunc_SetOrientation(System.Single)
extern "C" int32_t Instantiation_PluginFunc_SetOrientation_m7_65 (Object_t * __this /* static, unused */, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::Start()
extern "C" void Instantiation_Start_m7_66 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::Update()
extern "C" void Instantiation_Update_m7_67 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::OnApplicationQuit()
extern "C" void Instantiation_OnApplicationQuit_m7_68 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Instantiation::PlayerListLoop()
extern "C" Object_t * Instantiation_PlayerListLoop_m7_69 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Instantiation::WaitForRequest_ScoreList(UnityEngine.WWW)
extern "C" Object_t * Instantiation_WaitForRequest_ScoreList_m7_70 (Instantiation_t7_4 * __this, WWW_t5_88 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Instantiation::WaitForRequest_PlayerID(UnityEngine.WWW)
extern "C" Object_t * Instantiation_WaitForRequest_PlayerID_m7_71 (Instantiation_t7_4 * __this, WWW_t5_88 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Instantiation::WaitForRequest_Score(UnityEngine.WWW)
extern "C" Object_t * Instantiation_WaitForRequest_Score_m7_72 (Instantiation_t7_4 * __this, WWW_t5_88 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Instantiation::WaitForRequest_AvgMod(UnityEngine.WWW)
extern "C" Object_t * Instantiation_WaitForRequest_AvgMod_m7_73 (Instantiation_t7_4 * __this, WWW_t5_88 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Instantiation::WaitForRequest_PlayerList(UnityEngine.WWW)
extern "C" Object_t * Instantiation_WaitForRequest_PlayerList_m7_74 (Instantiation_t7_4 * __this, WWW_t5_88 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Instantiation::WaitForRequest_PlayerParam(UnityEngine.WWW)
extern "C" Object_t * Instantiation_WaitForRequest_PlayerParam_m7_75 (Instantiation_t7_4 * __this, WWW_t5_88 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Instantiation::WaitForRequest_PlayerEnd(UnityEngine.WWW)
extern "C" Object_t * Instantiation_WaitForRequest_PlayerEnd_m7_76 (Instantiation_t7_4 * __this, WWW_t5_88 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::SendPlayerParamValue(System.String,System.String,System.Int32)
extern "C" void Instantiation_SendPlayerParamValue_m7_77 (Instantiation_t7_4 * __this, String_t* ___param, String_t* ___id, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::BlockTrigger_On()
extern "C" void Instantiation_BlockTrigger_On_m7_78 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::BlockTrigger_Off()
extern "C" void Instantiation_BlockTrigger_Off_m7_79 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::DisplayText_Toggle()
extern "C" void Instantiation_DisplayText_Toggle_m7_80 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::GetScore()
extern "C" void Instantiation_GetScore_m7_81 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::GetAvgMod()
extern "C" void Instantiation_GetAvgMod_m7_82 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::AdvanceSelf()
extern "C" void Instantiation_AdvanceSelf_m7_83 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::EndSelf()
extern "C" void Instantiation_EndSelf_m7_84 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::Like_Toggle()
extern "C" void Instantiation_Like_Toggle_m7_85 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::Mute_Toggle()
extern "C" void Instantiation_Mute_Toggle_m7_86 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::LIMIT_PARAM_UP(System.Int32,System.Int32)
extern "C" int32_t Instantiation_LIMIT_PARAM_UP_m7_87 (Instantiation_t7_4 * __this, int32_t ___lim, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Instantiation::LIMIT_PARAM_DOWN(System.Int32,System.Int32)
extern "C" int32_t Instantiation_LIMIT_PARAM_DOWN_m7_88 (Instantiation_t7_4 * __this, int32_t ___lim, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::Octave_Up()
extern "C" void Instantiation_Octave_Up_m7_89 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::Octave_Down()
extern "C" void Instantiation_Octave_Down_m7_90 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::Speed_Up()
extern "C" void Instantiation_Speed_Up_m7_91 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::Speed_Down()
extern "C" void Instantiation_Speed_Down_m7_92 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::SetSelfOctave()
extern "C" void Instantiation_SetSelfOctave_m7_93 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::SetSelfSpeed()
extern "C" void Instantiation_SetSelfSpeed_m7_94 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::AddObject(System.Single)
extern "C" void Instantiation_AddObject_m7_95 (Instantiation_t7_4 * __this, float ___angle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::DeleteObject()
extern "C" void Instantiation_DeleteObject_m7_96 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::updatePlayers_Begin()
extern "C" void Instantiation_updatePlayers_Begin_m7_97 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::updatePlayer(System.String[])
extern "C" void Instantiation_updatePlayer_m7_98 (Instantiation_t7_4 * __this, StringU5BU5D_t1_198* ___player_info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::updatePlayers_End()
extern "C" void Instantiation_updatePlayers_End_m7_99 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Instantiation::SeqPosToHeight(System.Int32)
extern "C" float Instantiation_SeqPosToHeight_m7_100 (Instantiation_t7_4 * __this, int32_t ___seq_num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::UpdateSelfHeight()
extern "C" void Instantiation_UpdateSelfHeight_m7_101 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::SetPlayerAudioHeight(System.Char[],System.Int32)
extern "C" void Instantiation_SetPlayerAudioHeight_m7_102 (Instantiation_t7_4 * __this, CharU5BU5D_t1_16* ___playerID_char, int32_t ___player_seqpos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Instantiation::SetGameObjectsDisplayText()
extern "C" void Instantiation_SetGameObjectsDisplayText_m7_103 (Instantiation_t7_4 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
