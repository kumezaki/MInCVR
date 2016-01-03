﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t5_78;
// UnityEngine.UI.Text
struct Text_t6_64;
// UnityEngine.UI.Image
struct Image_t6_65;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t6_68;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t6_69;
// UnityEngine.GameObject
struct GameObject_t5_107;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t1_920;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t6_73;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t6_67;

#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"

// UnityEngine.UI.Dropdown
struct  Dropdown_t6_71  : public Selectable_t6_56
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t5_78 * ___m_Template_16;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6_64 * ___m_CaptionText_17;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t6_65 * ___m_CaptionImage_18;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6_64 * ___m_ItemText_19;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t6_65 * ___m_ItemImage_20;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_21;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t6_68 * ___m_Options_22;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t6_69 * ___m_OnValueChanged_23;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t5_107 * ___m_Dropdown_24;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t5_107 * ___m_Blocker_25;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t1_920 * ___m_Items_26;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t6_73 * ___m_AlphaTweenRunner_27;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_28;
};
struct Dropdown_t6_71_StaticFields{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t6_67 * ___s_NoOptionData_29;
};
