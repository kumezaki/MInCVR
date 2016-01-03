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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1_1285;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1281;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_1117;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Object[]
struct ObjectU5BU5D_t1_156;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_15.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m1_9313_gshared (ValueCollection_t1_1285 * __this, Dictionary_2_t1_1281 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m1_9313(__this, ___dictionary, method) (( void (*) (ValueCollection_t1_1285 *, Dictionary_2_t1_1281 *, const MethodInfo*))ValueCollection__ctor_m1_9313_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_9314_gshared (ValueCollection_t1_1285 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_9314(__this, ___item, method) (( void (*) (ValueCollection_t1_1285 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_9314_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_9315_gshared (ValueCollection_t1_1285 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_9315(__this, method) (( void (*) (ValueCollection_t1_1285 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_9315_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_9316_gshared (ValueCollection_t1_1285 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_9316(__this, ___item, method) (( bool (*) (ValueCollection_t1_1285 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_9316_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_9317_gshared (ValueCollection_t1_1285 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_9317(__this, ___item, method) (( bool (*) (ValueCollection_t1_1285 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_9317_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_9318_gshared (ValueCollection_t1_1285 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_9318(__this, method) (( Object_t* (*) (ValueCollection_t1_1285 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_9318_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m1_9319_gshared (ValueCollection_t1_1285 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m1_9319(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1_1285 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m1_9319_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_9320_gshared (ValueCollection_t1_1285 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_9320(__this, method) (( Object_t * (*) (ValueCollection_t1_1285 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_9320_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_9321_gshared (ValueCollection_t1_1285 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_9321(__this, method) (( bool (*) (ValueCollection_t1_1285 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_9321_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_9322_gshared (ValueCollection_t1_1285 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_9322(__this, method) (( bool (*) (ValueCollection_t1_1285 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_9322_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_9323_gshared (ValueCollection_t1_1285 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_9323(__this, method) (( Object_t * (*) (ValueCollection_t1_1285 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_9323_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m1_9324_gshared (ValueCollection_t1_1285 * __this, ObjectU5BU5D_t1_156* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m1_9324(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1_1285 *, ObjectU5BU5D_t1_156*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m1_9324_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1286  ValueCollection_GetEnumerator_m1_9325_gshared (ValueCollection_t1_1285 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m1_9325(__this, method) (( Enumerator_t1_1286  (*) (ValueCollection_t1_1285 *, const MethodInfo*))ValueCollection_GetEnumerator_m1_9325_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m1_9326_gshared (ValueCollection_t1_1285 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m1_9326(__this, method) (( int32_t (*) (ValueCollection_t1_1285 *, const MethodInfo*))ValueCollection_get_Count_m1_9326_gshared)(__this, method)
