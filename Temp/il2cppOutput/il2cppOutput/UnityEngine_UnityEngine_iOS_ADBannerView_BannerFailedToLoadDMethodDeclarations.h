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

// UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate
struct BannerFailedToLoadDelegate_t5_113;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void BannerFailedToLoadDelegate__ctor_m5_967 (BannerFailedToLoadDelegate_t5_113 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate::Invoke()
extern "C" void BannerFailedToLoadDelegate_Invoke_m5_968 (BannerFailedToLoadDelegate_t5_113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BannerFailedToLoadDelegate_t5_113(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * BannerFailedToLoadDelegate_BeginInvoke_m5_969 (BannerFailedToLoadDelegate_t5_113 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate::EndInvoke(System.IAsyncResult)
extern "C" void BannerFailedToLoadDelegate_EndInvoke_m5_970 (BannerFailedToLoadDelegate_t5_113 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
