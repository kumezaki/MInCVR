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

// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t6_46;
// UnityEngine.Camera
struct Camera_t5_93;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t6_37;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t1_914;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void UnityEngine.EventSystems.PhysicsRaycaster::.ctor()
extern "C" void PhysicsRaycaster__ctor_m6_273 (PhysicsRaycaster_t6_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::get_eventCamera()
extern "C" Camera_t5_93 * PhysicsRaycaster_get_eventCamera_m6_274 (PhysicsRaycaster_t6_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_depth()
extern "C" int32_t PhysicsRaycaster_get_depth_m6_275 (PhysicsRaycaster_t6_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_finalEventMask()
extern "C" int32_t PhysicsRaycaster_get_finalEventMask_m6_276 (PhysicsRaycaster_t6_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::get_eventMask()
extern "C" LayerMask_t5_53  PhysicsRaycaster_get_eventMask_m6_277 (PhysicsRaycaster_t6_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
extern "C" void PhysicsRaycaster_set_eventMask_m6_278 (PhysicsRaycaster_t6_46 * __this, LayerMask_t5_53  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void PhysicsRaycaster_Raycast_m6_279 (PhysicsRaycaster_t6_46 * __this, PointerEventData_t6_37 * ___eventData, List_1_t1_914 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::<Raycast>m__1(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
extern "C" int32_t PhysicsRaycaster_U3CRaycastU3Em__1_m6_280 (Object_t * __this /* static, unused */, RaycastHit_t5_135  ___r1, RaycastHit_t5_135  ___r2, const MethodInfo* method) IL2CPP_METHOD_ATTR;