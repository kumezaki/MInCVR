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

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t1_1258;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1_8902_gshared (Comparison_1_t1_1258 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1_8902(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1_1258 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1_8902_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m1_8903_gshared (Comparison_1_t1_1258 * __this, UIVertex_t5_173  ___x, UIVertex_t5_173  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m1_8903(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1_1258 *, UIVertex_t5_173 , UIVertex_t5_173 , const MethodInfo*))Comparison_1_Invoke_m1_8903_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m1_8904_gshared (Comparison_1_t1_1258 * __this, UIVertex_t5_173  ___x, UIVertex_t5_173  ___y, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1_8904(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1_1258 *, UIVertex_t5_173 , UIVertex_t5_173 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m1_8904_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m1_8905_gshared (Comparison_1_t1_1258 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1_8905(__this, ___result, method) (( int32_t (*) (Comparison_1_t1_1258 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m1_8905_gshared)(__this, ___result, method)
