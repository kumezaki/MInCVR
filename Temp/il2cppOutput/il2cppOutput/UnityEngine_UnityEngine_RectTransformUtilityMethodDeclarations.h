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

// UnityEngine.RectTransform
struct RectTransform_t5_78;
// UnityEngine.Camera
struct Camera_t5_93;
// UnityEngine.Transform
struct Transform_t5_79;
// UnityEngine.Canvas
struct Canvas_t5_176;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
extern "C" void RectTransformUtility__cctor_m5_1312 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m5_1313 (Object_t * __this /* static, unused */, RectTransform_t5_78 * ___rect, Vector2_t5_54  ___screenPoint, Camera_t5_93 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m5_1314 (Object_t * __this /* static, unused */, RectTransform_t5_78 * ___rect, Vector2_t5_54 * ___screenPoint, Camera_t5_93 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern "C" Vector2_t5_54  RectTransformUtility_PixelAdjustPoint_m5_1315 (Object_t * __this /* static, unused */, Vector2_t5_54  ___point, Transform_t5_79 * ___elementTransform, Canvas_t5_176 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m5_1316 (Object_t * __this /* static, unused */, Vector2_t5_54  ___point, Transform_t5_79 * ___elementTransform, Canvas_t5_176 * ___canvas, Vector2_t5_54 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m5_1317 (Object_t * __this /* static, unused */, Vector2_t5_54 * ___point, Transform_t5_79 * ___elementTransform, Canvas_t5_176 * ___canvas, Vector2_t5_54 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t5_32  RectTransformUtility_PixelAdjustRect_m5_1318 (Object_t * __this /* static, unused */, RectTransform_t5_78 * ___rectTransform, Canvas_t5_176 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas,UnityEngine.Rect&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustRect_m5_1319 (Object_t * __this /* static, unused */, RectTransform_t5_78 * ___rectTransform, Canvas_t5_176 * ___canvas, Rect_t5_32 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m5_1320 (Object_t * __this /* static, unused */, RectTransform_t5_78 * ___rect, Vector2_t5_54  ___screenPoint, Camera_t5_93 * ___cam, Vector3_t5_55 * ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m5_1321 (Object_t * __this /* static, unused */, RectTransform_t5_78 * ___rect, Vector2_t5_54  ___screenPoint, Camera_t5_93 * ___cam, Vector2_t5_54 * ___localPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t5_60  RectTransformUtility_ScreenPointToRay_m5_1322 (Object_t * __this /* static, unused */, Camera_t5_93 * ___cam, Vector2_t5_54  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m5_1323 (Object_t * __this /* static, unused */, RectTransform_t5_78 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m5_1324 (Object_t * __this /* static, unused */, RectTransform_t5_78 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t5_54  RectTransformUtility_GetTransposed_m5_1325 (Object_t * __this /* static, unused */, Vector2_t5_54  ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
