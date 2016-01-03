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

// UnityEngine.Collision
struct Collision_t5_129;
// UnityEngine.Rigidbody
struct Rigidbody_t5_130;
// UnityEngine.Collider
struct Collider_t5_128;
// UnityEngine.Transform
struct Transform_t5_79;
// UnityEngine.GameObject
struct GameObject_t5_107;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t5_131;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// UnityEngine.Component
struct Component_t5_26;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Collision::.ctor()
extern "C" void Collision__ctor_m5_1087 (Collision_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_relativeVelocity()
extern "C" Vector3_t5_55  Collision_get_relativeVelocity_m5_1088 (Collision_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Collision::get_rigidbody()
extern "C" Rigidbody_t5_130 * Collision_get_rigidbody_m5_1089 (Collision_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.Collision::get_collider()
extern "C" Collider_t5_128 * Collision_get_collider_m5_1090 (Collision_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Collision::get_transform()
extern "C" Transform_t5_79 * Collision_get_transform_m5_1091 (Collision_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
extern "C" GameObject_t5_107 * Collision_get_gameObject_m5_1092 (Collision_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
extern "C" ContactPointU5BU5D_t5_131* Collision_get_contacts_m5_1093 (Collision_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Collision::GetEnumerator()
extern "C" Object_t * Collision_GetEnumerator_m5_1094 (Collision_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_impulse()
extern "C" Vector3_t5_55  Collision_get_impulse_m5_1095 (Collision_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_impactForceSum()
extern "C" Vector3_t5_55  Collision_get_impactForceSum_m5_1096 (Collision_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Collision::get_frictionForceSum()
extern "C" Vector3_t5_55  Collision_get_frictionForceSum_m5_1097 (Collision_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Collision::get_other()
extern "C" Component_t5_26 * Collision_get_other_m5_1098 (Collision_t5_129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
