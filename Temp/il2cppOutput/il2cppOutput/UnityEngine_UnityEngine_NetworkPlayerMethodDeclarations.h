﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"

// System.Void UnityEngine.NetworkPlayer::.ctor(System.String,System.Int32)
extern "C" void NetworkPlayer__ctor_m5_464 (NetworkPlayer_t5_66 * __this, String_t* ___ip, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetIPAddress(System.Int32)
extern "C" String_t* NetworkPlayer_Internal_GetIPAddress_m5_465 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetPort(System.Int32)
extern "C" int32_t NetworkPlayer_Internal_GetPort_m5_466 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetExternalIP()
extern "C" String_t* NetworkPlayer_Internal_GetExternalIP_m5_467 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetExternalPort()
extern "C" int32_t NetworkPlayer_Internal_GetExternalPort_m5_468 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetLocalIP()
extern "C" String_t* NetworkPlayer_Internal_GetLocalIP_m5_469 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetLocalPort()
extern "C" int32_t NetworkPlayer_Internal_GetLocalPort_m5_470 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetPlayerIndex()
extern "C" int32_t NetworkPlayer_Internal_GetPlayerIndex_m5_471 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetGUID(System.Int32)
extern "C" String_t* NetworkPlayer_Internal_GetGUID_m5_472 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetLocalGUID()
extern "C" String_t* NetworkPlayer_Internal_GetLocalGUID_m5_473 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::GetHashCode()
extern "C" int32_t NetworkPlayer_GetHashCode_m5_474 (NetworkPlayer_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::Equals(System.Object)
extern "C" bool NetworkPlayer_Equals_m5_475 (NetworkPlayer_t5_66 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_ipAddress()
extern "C" String_t* NetworkPlayer_get_ipAddress_m5_476 (NetworkPlayer_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::get_port()
extern "C" int32_t NetworkPlayer_get_port_m5_477 (NetworkPlayer_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_guid()
extern "C" String_t* NetworkPlayer_get_guid_m5_478 (NetworkPlayer_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::ToString()
extern "C" String_t* NetworkPlayer_ToString_m5_479 (NetworkPlayer_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_externalIP()
extern "C" String_t* NetworkPlayer_get_externalIP_m5_480 (NetworkPlayer_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::get_externalPort()
extern "C" int32_t NetworkPlayer_get_externalPort_m5_481 (NetworkPlayer_t5_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkPlayer::get_unassigned()
extern "C" NetworkPlayer_t5_66  NetworkPlayer_get_unassigned_m5_482 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::op_Equality(UnityEngine.NetworkPlayer,UnityEngine.NetworkPlayer)
extern "C" bool NetworkPlayer_op_Equality_m5_483 (Object_t * __this /* static, unused */, NetworkPlayer_t5_66  ___lhs, NetworkPlayer_t5_66  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::op_Inequality(UnityEngine.NetworkPlayer,UnityEngine.NetworkPlayer)
extern "C" bool NetworkPlayer_op_Inequality_m5_484 (Object_t * __this /* static, unused */, NetworkPlayer_t5_66  ___lhs, NetworkPlayer_t5_66  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
