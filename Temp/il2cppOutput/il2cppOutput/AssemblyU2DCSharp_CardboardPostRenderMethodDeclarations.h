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

// CardboardPostRender
struct CardboardPostRender_t7_32;
// UnityEngine.Camera
struct Camera_t5_93;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5_180;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t5_293;
// UnityEngine.Color[]
struct ColorU5BU5D_t5_294;
// System.Int32[]
struct Int32U5BU5D_t1_159;

#include "codegen/il2cpp-codegen.h"

// System.Void CardboardPostRender::.ctor()
extern "C" void CardboardPostRender__ctor_m7_258 (CardboardPostRender_t7_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::.cctor()
extern "C" void CardboardPostRender__cctor_m7_259 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardPostRender::get_camera()
extern "C" Camera_t5_93 * CardboardPostRender_get_camera_m7_260 (CardboardPostRender_t7_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::set_camera(UnityEngine.Camera)
extern "C" void CardboardPostRender_set_camera_m7_261 (CardboardPostRender_t7_32 * __this, Camera_t5_93 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::Reset()
extern "C" void CardboardPostRender_Reset_m7_262 (CardboardPostRender_t7_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::Awake()
extern "C" void CardboardPostRender_Awake_m7_263 (CardboardPostRender_t7_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::OnRenderObject()
extern "C" void CardboardPostRender_OnRenderObject_m7_264 (CardboardPostRender_t7_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::RebuildDistortionMesh()
extern "C" void CardboardPostRender_RebuildDistortionMesh_m7_265 (CardboardPostRender_t7_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::ComputeMeshPoints(System.Int32,System.Int32,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector2[]&)
extern "C" void CardboardPostRender_ComputeMeshPoints_m7_266 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, Vector3U5BU5D_t5_180** ___vertices, Vector2U5BU5D_t5_293** ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] CardboardPostRender::ComputeMeshColors(System.Int32,System.Int32,UnityEngine.Vector2[],System.Int32[],System.Boolean)
extern "C" ColorU5BU5D_t5_294* CardboardPostRender_ComputeMeshColors_m7_267 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, Vector2U5BU5D_t5_293* ___tex, Int32U5BU5D_t1_159* ___indices, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] CardboardPostRender::ComputeMeshIndices(System.Int32,System.Int32,System.Boolean)
extern "C" Int32U5BU5D_t1_159* CardboardPostRender_ComputeMeshIndices_m7_268 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawUILayer()
extern "C" void CardboardPostRender_DrawUILayer_m7_269 (CardboardPostRender_t7_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::ComputeUIMatrix()
extern "C" void CardboardPostRender_ComputeUIMatrix_m7_270 (CardboardPostRender_t7_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawSettingsButton()
extern "C" void CardboardPostRender_DrawSettingsButton_m7_271 (CardboardPostRender_t7_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawAlignmentMarker()
extern "C" void CardboardPostRender_DrawAlignmentMarker_m7_272 (CardboardPostRender_t7_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawVRBackButton()
extern "C" void CardboardPostRender_DrawVRBackButton_m7_273 (CardboardPostRender_t7_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;