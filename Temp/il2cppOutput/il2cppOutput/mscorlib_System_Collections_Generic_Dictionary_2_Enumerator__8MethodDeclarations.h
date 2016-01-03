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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1281;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_9333_gshared (Enumerator_t1_1287 * __this, Dictionary_2_t1_1281 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_9333(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1287 *, Dictionary_2_t1_1281 *, const MethodInfo*))Enumerator__ctor_m1_9333_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_9334_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_9334(__this, method) (( Object_t * (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_9334_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_9335_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_9335(__this, method) (( void (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_9335_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_9336_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_9336(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_9336_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_9337_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_9337(__this, method) (( Object_t * (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_9337_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_9338_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_9338(__this, method) (( Object_t * (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_9338_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_9339_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_9339(__this, method) (( bool (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_MoveNext_m1_9339_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1283  Enumerator_get_Current_m1_9340_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_9340(__this, method) (( KeyValuePair_2_t1_1283  (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_get_Current_m1_9340_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m1_9341_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_9341(__this, method) (( int32_t (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_9341_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_9342_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_9342(__this, method) (( Object_t * (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_9342_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_9343_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_9343(__this, method) (( void (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_Reset_m1_9343_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_9344_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_9344(__this, method) (( void (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_VerifyState_m1_9344_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_9345_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_9345(__this, method) (( void (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_9345_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_9346_gshared (Enumerator_t1_1287 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_9346(__this, method) (( void (*) (Enumerator_t1_1287 *, const MethodInfo*))Enumerator_Dispose_m1_9346_gshared)(__this, method)
