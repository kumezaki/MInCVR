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

// StereoController
struct StereoController_t7_27;
// CardboardEye[]
struct CardboardEyeU5BU5D_t7_47;
// CardboardHead
struct CardboardHead_t7_31;
// UnityEngine.Camera
struct Camera_t5_93;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// CardboardEye
struct CardboardEye_t7_29;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void StereoController::.ctor()
extern "C" void StereoController__ctor_m7_333 (StereoController_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardEye[] StereoController::get_Eyes()
extern "C" CardboardEyeU5BU5D_t7_47* StereoController_get_Eyes_m7_334 (StereoController_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::get_Head()
extern "C" CardboardHead_t7_31 * StereoController_get_Head_m7_335 (StereoController_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::InvalidateEyes()
extern "C" void StereoController_InvalidateEyes_m7_336 (StereoController_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::UpdateStereoValues()
extern "C" void StereoController_UpdateStereoValues_m7_337 (StereoController_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera StereoController::get_camera()
extern "C" Camera_t5_93 * StereoController_get_camera_m7_338 (StereoController_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::set_camera(UnityEngine.Camera)
extern "C" void StereoController_set_camera_m7_339 (StereoController_t7_27 * __this, Camera_t5_93 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::Awake()
extern "C" void StereoController_Awake_m7_340 (StereoController_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::AddStereoRig()
extern "C" void StereoController_AddStereoRig_m7_341 (StereoController_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::CreateEye(Cardboard/Eye)
extern "C" void StereoController_CreateEye_m7_342 (StereoController_t7_27 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 StereoController::ComputeStereoEyePosition(Cardboard/Eye,System.Single,System.Single)
extern "C" Vector3_t5_55  StereoController_ComputeStereoEyePosition_m7_343 (StereoController_t7_27 * __this, int32_t ___eye, float ___proj11, float ___zScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnEnable()
extern "C" void StereoController_OnEnable_m7_344 (StereoController_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnDisable()
extern "C" void StereoController_OnDisable_m7_345 (StereoController_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnPreCull()
extern "C" void StereoController_OnPreCull_m7_346 (StereoController_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StereoController::EndOfFrame()
extern "C" Object_t * StereoController_EndOfFrame_m7_347 (StereoController_t7_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<get_Eyes>m__0(CardboardEye)
extern "C" bool StereoController_U3Cget_EyesU3Em__0_m7_348 (StereoController_t7_27 * __this, CardboardEye_t7_29 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::<get_Head>m__1(CardboardEye)
extern "C" CardboardHead_t7_31 * StereoController_U3Cget_HeadU3Em__1_m7_349 (Object_t * __this /* static, unused */, CardboardEye_t7_29 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<AddStereoRig>m__2(CardboardEye)
extern "C" bool StereoController_U3CAddStereoRigU3Em__2_m7_350 (StereoController_t7_27 * __this, CardboardEye_t7_29 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
