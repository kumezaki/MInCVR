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

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t1_1255;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m1_8892_gshared (Predicate_1_t1_1255 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m1_8892(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1_1255 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1_8892_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m1_8893_gshared (Predicate_1_t1_1255 * __this, UIVertex_t5_173  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m1_8893(__this, ___obj, method) (( bool (*) (Predicate_1_t1_1255 *, UIVertex_t5_173 , const MethodInfo*))Predicate_1_Invoke_m1_8893_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m1_8894_gshared (Predicate_1_t1_1255 * __this, UIVertex_t5_173  ___obj, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1_8894(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1_1255 *, UIVertex_t5_173 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m1_8894_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m1_8895_gshared (Predicate_1_t1_1255 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1_8895(__this, ___result, method) (( bool (*) (Predicate_1_t1_1255 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m1_8895_gshared)(__this, ___result, method)