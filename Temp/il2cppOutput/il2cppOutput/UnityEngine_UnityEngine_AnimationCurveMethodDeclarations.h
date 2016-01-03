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

// UnityEngine.AnimationCurve
struct AnimationCurve_t5_65;
struct AnimationCurve_t5_65_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t5_296;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m5_459 (AnimationCurve_t5_65 * __this, KeyframeU5BU5D_t5_296* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m5_460 (AnimationCurve_t5_65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m5_461 (AnimationCurve_t5_65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m5_462 (AnimationCurve_t5_65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m5_463 (AnimationCurve_t5_65 * __this, KeyframeU5BU5D_t5_296* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t5_65_marshal(const AnimationCurve_t5_65& unmarshaled, AnimationCurve_t5_65_marshaled& marshaled);
extern "C" void AnimationCurve_t5_65_marshal_back(const AnimationCurve_t5_65_marshaled& marshaled, AnimationCurve_t5_65& unmarshaled);
extern "C" void AnimationCurve_t5_65_marshal_cleanup(AnimationCurve_t5_65_marshaled& marshaled);
