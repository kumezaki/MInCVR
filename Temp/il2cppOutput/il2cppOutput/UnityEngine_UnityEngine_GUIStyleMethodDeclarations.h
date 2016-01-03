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

// UnityEngine.GUIStyle
struct GUIStyle_t5_41;
// UnityEngine.GUIStyleState
struct GUIStyleState_t5_203;
// UnityEngine.RectOffset
struct RectOffset_t5_40;
// UnityEngine.Font
struct Font_t5_163;
// UnityEngine.GUIContent
struct GUIContent_t5_191;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t5_33;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ImagePosition.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_TextClipping.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_Internal_DrawArguments.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Internal_DrawWithTextSelectionArgume.h"

// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" void GUIStyle__ctor_m5_1495 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C" void GUIStyle__ctor_m5_1496 (GUIStyle_t5_41 * __this, GUIStyle_t5_41 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C" void GUIStyle__cctor_m5_1497 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m5_1498 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InternalOnAfterDeserialize()
extern "C" void GUIStyle_InternalOnAfterDeserialize_m5_1499 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" GUIStyleState_t5_203 * GUIStyle_get_normal_m5_1500 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_normal(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_normal_m5_1501 (GUIStyle_t5_41 * __this, GUIStyleState_t5_203 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_hover()
extern "C" GUIStyleState_t5_203 * GUIStyle_get_hover_m5_1502 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_hover(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_hover_m5_1503 (GUIStyle_t5_41 * __this, GUIStyleState_t5_203 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_active()
extern "C" GUIStyleState_t5_203 * GUIStyle_get_active_m5_1504 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_active(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_active_m5_1505 (GUIStyle_t5_41 * __this, GUIStyleState_t5_203 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onNormal()
extern "C" GUIStyleState_t5_203 * GUIStyle_get_onNormal_m5_1506 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onNormal(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_onNormal_m5_1507 (GUIStyle_t5_41 * __this, GUIStyleState_t5_203 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onHover()
extern "C" GUIStyleState_t5_203 * GUIStyle_get_onHover_m5_1508 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onHover(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_onHover_m5_1509 (GUIStyle_t5_41 * __this, GUIStyleState_t5_203 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onActive()
extern "C" GUIStyleState_t5_203 * GUIStyle_get_onActive_m5_1510 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onActive(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_onActive_m5_1511 (GUIStyle_t5_41 * __this, GUIStyleState_t5_203 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_focused()
extern "C" GUIStyleState_t5_203 * GUIStyle_get_focused_m5_1512 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_focused(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_focused_m5_1513 (GUIStyle_t5_41 * __this, GUIStyleState_t5_203 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onFocused()
extern "C" GUIStyleState_t5_203 * GUIStyle_get_onFocused_m5_1514 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onFocused(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_onFocused_m5_1515 (GUIStyle_t5_41 * __this, GUIStyleState_t5_203 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_border()
extern "C" RectOffset_t5_40 * GUIStyle_get_border_m5_1516 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_border(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_border_m5_1517 (GUIStyle_t5_41 * __this, RectOffset_t5_40 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" RectOffset_t5_40 * GUIStyle_get_margin_m5_1518 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_margin(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_margin_m5_1519 (GUIStyle_t5_41 * __this, RectOffset_t5_40 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" RectOffset_t5_40 * GUIStyle_get_padding_m5_1520 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_padding_m5_1521 (GUIStyle_t5_41 * __this, RectOffset_t5_40 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_overflow()
extern "C" RectOffset_t5_40 * GUIStyle_get_overflow_m5_1522 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_overflow(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_overflow_m5_1523 (GUIStyle_t5_41 * __this, RectOffset_t5_40 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_clipOffset()
extern "C" Vector2_t5_54  GUIStyle_get_clipOffset_m5_1524 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_clipOffset(UnityEngine.Vector2)
extern "C" void GUIStyle_set_clipOffset_m5_1525 (GUIStyle_t5_41 * __this, Vector2_t5_54  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::get_font()
extern "C" Font_t5_163 * GUIStyle_get_font_m5_1526 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C" void GUIStyle_set_font_m5_1527 (GUIStyle_t5_41 * __this, Font_t5_163 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern "C" float GUIStyle_get_lineHeight_m5_1528 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Internal_Draw_m5_1529 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1530 (GUIStyle_t5_41 * __this, Rect_t5_32  ___position, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1531 (GUIStyle_t5_41 * __this, Rect_t5_32  ___position, String_t* ___text, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.Texture,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1532 (GUIStyle_t5_41 * __this, Rect_t5_32  ___position, Texture_t5_33 * ___image, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1533 (GUIStyle_t5_41 * __this, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" void GUIStyle_Draw_m5_1534 (GUIStyle_t5_41 * __this, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1535 (GUIStyle_t5_41 * __this, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawCursor(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
extern "C" void GUIStyle_DrawCursor_m5_1536 (GUIStyle_t5_41 * __this, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, int32_t ___controlID, int32_t ___Character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C" void GUIStyle_DrawWithTextSelection_m5_1537 (GUIStyle_t5_41 * __this, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, int32_t ___controlID, int32_t ___firstSelectedCharacter, int32_t ___lastSelectedCharacter, bool ___drawSelectionAsComposition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32)
extern "C" void GUIStyle_DrawWithTextSelection_m5_1538 (GUIStyle_t5_41 * __this, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, int32_t ___controlID, int32_t ___firstSelectedCharacter, int32_t ___lastSelectedCharacter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" GUIStyle_t5_41 * GUIStyle_get_none_m5_1539 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" Vector2_t5_54  GUIStyle_GetCursorPixelPosition_m5_1540 (GUIStyle_t5_41 * __this, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, int32_t ___cursorStringIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C" int32_t GUIStyle_GetCursorStringIndex_m5_1541 (GUIStyle_t5_41 * __this, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, Vector2_t5_54  ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetNumCharactersThatFitWithinWidth(System.String,System.Single)
extern "C" int32_t GUIStyle_GetNumCharactersThatFitWithinWidth_m5_1542 (GUIStyle_t5_41 * __this, String_t* ___text, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern "C" Vector2_t5_54  GUIStyle_CalcSize_m5_1543 (GUIStyle_t5_41 * __this, GUIContent_t5_191 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSizeWithConstraints(UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C" Vector2_t5_54  GUIStyle_CalcSizeWithConstraints_m5_1544 (GUIStyle_t5_41 * __this, GUIContent_t5_191 * ___content, Vector2_t5_54  ___constraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcScreenSize(UnityEngine.Vector2)
extern "C" Vector2_t5_54  GUIStyle_CalcScreenSize_m5_1545 (GUIStyle_t5_41 * __this, Vector2_t5_54  ___contentSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_CalcHeight_m5_1546 (GUIStyle_t5_41 * __this, GUIContent_t5_191 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
extern "C" bool GUIStyle_get_isHeightDependantOnWidth_m5_1547 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_CalcMinMaxWidth_m5_1548 (GUIStyle_t5_41 * __this, GUIContent_t5_191 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
extern "C" String_t* GUIStyle_ToString_m5_1549 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m5_1550 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InitCopy(UnityEngine.GUIStyle)
extern "C" void GUIStyle_InitCopy_m5_1551 (GUIStyle_t5_41 * __this, GUIStyle_t5_41 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m5_1552 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m5_1553 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m5_1554 (GUIStyle_t5_41 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m5_1555 (GUIStyle_t5_41 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignStyleState(System.Int32,System.IntPtr)
extern "C" void GUIStyle_AssignStyleState_m5_1556 (GUIStyle_t5_41 * __this, int32_t ___idx, IntPtr_t ___srcStyleState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m5_1557 (GUIStyle_t5_41 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
extern "C" void GUIStyle_AssignRectOffset_m5_1558 (GUIStyle_t5_41 * __this, int32_t ___idx, IntPtr_t ___srcRectOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
extern "C" int32_t GUIStyle_get_imagePosition_m5_1559 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_imagePosition(UnityEngine.ImagePosition)
extern "C" void GUIStyle_set_imagePosition_m5_1560 (GUIStyle_t5_41 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.GUIStyle::get_alignment()
extern "C" int32_t GUIStyle_get_alignment_m5_1561 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" void GUIStyle_set_alignment_m5_1562 (GUIStyle_t5_41 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
extern "C" bool GUIStyle_get_wordWrap_m5_1563 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" void GUIStyle_set_wordWrap_m5_1564 (GUIStyle_t5_41 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextClipping UnityEngine.GUIStyle::get_clipping()
extern "C" int32_t GUIStyle_get_clipping_m5_1565 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)
extern "C" void GUIStyle_set_clipping_m5_1566 (GUIStyle_t5_41 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_contentOffset()
extern "C" Vector2_t5_54  GUIStyle_get_contentOffset_m5_1567 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_contentOffset(UnityEngine.Vector2)
extern "C" void GUIStyle_set_contentOffset_m5_1568 (GUIStyle_t5_41 * __this, Vector2_t5_54  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_contentOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_get_contentOffset_m5_1569 (GUIStyle_t5_41 * __this, Vector2_t5_54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_contentOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_set_contentOffset_m5_1570 (GUIStyle_t5_41 * __this, Vector2_t5_54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_Internal_clipOffset()
extern "C" Vector2_t5_54  GUIStyle_get_Internal_clipOffset_m5_1571 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_Internal_clipOffset(UnityEngine.Vector2)
extern "C" void GUIStyle_set_Internal_clipOffset_m5_1572 (GUIStyle_t5_41 * __this, Vector2_t5_54  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_Internal_clipOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_get_Internal_clipOffset_m5_1573 (GUIStyle_t5_41 * __this, Vector2_t5_54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_Internal_clipOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_set_Internal_clipOffset_m5_1574 (GUIStyle_t5_41 * __this, Vector2_t5_54 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m5_1575 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fixedWidth(System.Single)
extern "C" void GUIStyle_set_fixedWidth_m5_1576 (GUIStyle_t5_41 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m5_1577 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fixedHeight(System.Single)
extern "C" void GUIStyle_set_fixedHeight_m5_1578 (GUIStyle_t5_41 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m5_1579 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m5_1580 (GUIStyle_t5_41 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m5_1581 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m5_1582 (GUIStyle_t5_41 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C" float GUIStyle_Internal_GetLineHeight_m5_1583 (Object_t * __this /* static, unused */, IntPtr_t ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetFontInternal(UnityEngine.Font)
extern "C" void GUIStyle_SetFontInternal_m5_1584 (GUIStyle_t5_41 * __this, Font_t5_163 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternalDuringLoadingThread()
extern "C" Font_t5_163 * GUIStyle_GetFontInternalDuringLoadingThread_m5_1585 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternal()
extern "C" Font_t5_163 * GUIStyle_GetFontInternal_m5_1586 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::get_fontSize()
extern "C" int32_t GUIStyle_get_fontSize_m5_1587 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C" void GUIStyle_set_fontSize_m5_1588 (GUIStyle_t5_41 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.GUIStyle::get_fontStyle()
extern "C" int32_t GUIStyle_get_fontStyle_m5_1589 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
extern "C" void GUIStyle_set_fontStyle_m5_1590 (GUIStyle_t5_41 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_richText()
extern "C" bool GUIStyle_get_richText_m5_1591 (GUIStyle_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
extern "C" void GUIStyle_set_richText_m5_1592 (GUIStyle_t5_41 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.GUIContent,UnityEngine.Internal_DrawArguments&)
extern "C" void GUIStyle_Internal_Draw_m5_1593 (Object_t * __this /* static, unused */, GUIContent_t5_191 * ___content, Internal_DrawArguments_t5_212 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Internal_Draw2_m5_1594 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_Draw2_m5_1595 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_32 * ___position, GUIContent_t5_191 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawPrefixLabel(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Internal_DrawPrefixLabel_m5_1596 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawPrefixLabel(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_DrawPrefixLabel_m5_1597 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_32 * ___position, GUIContent_t5_191 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetCursorFlashOffset()
extern "C" float GUIStyle_Internal_GetCursorFlashOffset_m5_1598 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawCursor(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Color)
extern "C" void GUIStyle_Internal_DrawCursor_m5_1599 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, int32_t ___pos, Color_t5_164  ___cursorColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawCursor(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Color&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_DrawCursor_m5_1600 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_32 * ___position, GUIContent_t5_191 * ___content, int32_t ___pos, Color_t5_164 * ___cursorColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawWithTextSelection(UnityEngine.GUIContent,UnityEngine.Internal_DrawWithTextSelectionArguments&)
extern "C" void GUIStyle_Internal_DrawWithTextSelection_m5_1601 (Object_t * __this /* static, unused */, GUIContent_t5_191 * ___content, Internal_DrawWithTextSelectionArguments_t5_213 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m5_1602 (Object_t * __this /* static, unused */, Font_t5_163 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_GetCursorPixelPosition_m5_1603 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, int32_t ___cursorStringIndex, Vector2_t5_54 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5_1604 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_32 * ___position, GUIContent_t5_191 * ___content, int32_t ___cursorStringIndex, Vector2_t5_54 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C" int32_t GUIStyle_Internal_GetCursorStringIndex_m5_1605 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_32  ___position, GUIContent_t5_191 * ___content, Vector2_t5_54  ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" int32_t GUIStyle_INTERNAL_CALL_Internal_GetCursorStringIndex_m5_1606 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_32 * ___position, GUIContent_t5_191 * ___content, Vector2_t5_54 * ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetNumCharactersThatFitWithinWidth(System.IntPtr,System.String,System.Single)
extern "C" int32_t GUIStyle_Internal_GetNumCharactersThatFitWithinWidth_m5_1607 (Object_t * __this /* static, unused */, IntPtr_t ___target, String_t* ___text, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSize_m5_1608 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_191 * ___content, Vector2_t5_54 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSizeWithConstraints_m5_1609 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_191 * ___content, Vector2_t5_54  ___maxSize, Vector2_t5_54 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_CalcSizeWithConstraints_m5_1610 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_191 * ___content, Vector2_t5_54 * ___maxSize, Vector2_t5_54 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_Internal_CalcHeight_m5_1611 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_191 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_Internal_CalcMinMaxWidth_m5_1612 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_191 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
extern "C" GUIStyle_t5_41 * GUIStyle_op_Implicit_m5_1613 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
