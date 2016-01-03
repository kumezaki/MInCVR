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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1_894;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1_1503;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1_1476;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_1504;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t1_1218;
// System.Int32[]
struct Int32U5BU5D_t1_159;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1_1221;
// System.Comparison`1<System.Int32>
struct Comparison_1_t1_1222;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m1_8217_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1__ctor_m1_8217(__this, method) (( void (*) (List_1_t1_894 *, const MethodInfo*))List_1__ctor_m1_8217_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m1_8218_gshared (List_1_t1_894 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1_8218(__this, ___collection, method) (( void (*) (List_1_t1_894 *, Object_t*, const MethodInfo*))List_1__ctor_m1_8218_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1_8219_gshared (List_1_t1_894 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1_8219(__this, ___capacity, method) (( void (*) (List_1_t1_894 *, int32_t, const MethodInfo*))List_1__ctor_m1_8219_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m1_8220_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1_8220(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1_8220_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_8221_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_8221(__this, method) (( Object_t* (*) (List_1_t1_894 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_8221_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1_8222_gshared (List_1_t1_894 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1_8222(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_894 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1_8222_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1_8223_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1_8223(__this, method) (( Object_t * (*) (List_1_t1_894 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1_8223_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1_8224_gshared (List_1_t1_894 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1_8224(__this, ___item, method) (( int32_t (*) (List_1_t1_894 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1_8224_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1_8225_gshared (List_1_t1_894 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1_8225(__this, ___item, method) (( bool (*) (List_1_t1_894 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1_8225_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1_8226_gshared (List_1_t1_894 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1_8226(__this, ___item, method) (( int32_t (*) (List_1_t1_894 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1_8226_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1_8227_gshared (List_1_t1_894 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1_8227(__this, ___index, ___item, method) (( void (*) (List_1_t1_894 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1_8227_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1_8228_gshared (List_1_t1_894 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1_8228(__this, ___item, method) (( void (*) (List_1_t1_894 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1_8228_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_8229_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_8229(__this, method) (( bool (*) (List_1_t1_894 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_8229_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m1_8230_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1_8230(__this, method) (( bool (*) (List_1_t1_894 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1_8230_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1_8231_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1_8231(__this, method) (( Object_t * (*) (List_1_t1_894 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1_8231_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m1_8232_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1_8232(__this, method) (( bool (*) (List_1_t1_894 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1_8232_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m1_8233_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1_8233(__this, method) (( bool (*) (List_1_t1_894 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1_8233_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1_8234_gshared (List_1_t1_894 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1_8234(__this, ___index, method) (( Object_t * (*) (List_1_t1_894 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1_8234_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1_8235_gshared (List_1_t1_894 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1_8235(__this, ___index, ___value, method) (( void (*) (List_1_t1_894 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1_8235_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m1_8236_gshared (List_1_t1_894 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m1_8236(__this, ___item, method) (( void (*) (List_1_t1_894 *, int32_t, const MethodInfo*))List_1_Add_m1_8236_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m1_8237_gshared (List_1_t1_894 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m1_8237(__this, ___newCount, method) (( void (*) (List_1_t1_894 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m1_8237_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m1_8238_gshared (List_1_t1_894 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1_8238(__this, ___collection, method) (( void (*) (List_1_t1_894 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1_8238_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m1_8239_gshared (List_1_t1_894 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1_8239(__this, ___enumerable, method) (( void (*) (List_1_t1_894 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1_8239_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m1_5578_gshared (List_1_t1_894 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1_5578(__this, ___collection, method) (( void (*) (List_1_t1_894 *, Object_t*, const MethodInfo*))List_1_AddRange_m1_5578_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1_1218 * List_1_AsReadOnly_m1_8240_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1_8240(__this, method) (( ReadOnlyCollection_1_t1_1218 * (*) (List_1_t1_894 *, const MethodInfo*))List_1_AsReadOnly_m1_8240_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m1_8241_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_Clear_m1_8241(__this, method) (( void (*) (List_1_t1_894 *, const MethodInfo*))List_1_Clear_m1_8241_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m1_8242_gshared (List_1_t1_894 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m1_8242(__this, ___item, method) (( bool (*) (List_1_t1_894 *, int32_t, const MethodInfo*))List_1_Contains_m1_8242_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1_8243_gshared (List_1_t1_894 * __this, Int32U5BU5D_t1_159* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1_8243(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_894 *, Int32U5BU5D_t1_159*, int32_t, const MethodInfo*))List_1_CopyTo_m1_8243_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m1_8244_gshared (List_1_t1_894 * __this, Predicate_1_t1_1221 * ___match, const MethodInfo* method);
#define List_1_Find_m1_8244(__this, ___match, method) (( int32_t (*) (List_1_t1_894 *, Predicate_1_t1_1221 *, const MethodInfo*))List_1_Find_m1_8244_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m1_8245_gshared (Object_t * __this /* static, unused */, Predicate_1_t1_1221 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m1_8245(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1_1221 *, const MethodInfo*))List_1_CheckMatch_m1_8245_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m1_8246_gshared (List_1_t1_894 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1_1221 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1_8246(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1_894 *, int32_t, int32_t, Predicate_1_t1_1221 *, const MethodInfo*))List_1_GetIndex_m1_8246_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1217  List_1_GetEnumerator_m1_8247_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1_8247(__this, method) (( Enumerator_t1_1217  (*) (List_1_t1_894 *, const MethodInfo*))List_1_GetEnumerator_m1_8247_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1_8248_gshared (List_1_t1_894 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m1_8248(__this, ___item, method) (( int32_t (*) (List_1_t1_894 *, int32_t, const MethodInfo*))List_1_IndexOf_m1_8248_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m1_8249_gshared (List_1_t1_894 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1_8249(__this, ___start, ___delta, method) (( void (*) (List_1_t1_894 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1_8249_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m1_8250_gshared (List_1_t1_894 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1_8250(__this, ___index, method) (( void (*) (List_1_t1_894 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1_8250_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1_8251_gshared (List_1_t1_894 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m1_8251(__this, ___index, ___item, method) (( void (*) (List_1_t1_894 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m1_8251_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m1_8252_gshared (List_1_t1_894 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1_8252(__this, ___collection, method) (( void (*) (List_1_t1_894 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1_8252_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m1_8253_gshared (List_1_t1_894 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m1_8253(__this, ___item, method) (( bool (*) (List_1_t1_894 *, int32_t, const MethodInfo*))List_1_Remove_m1_8253_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m1_8254_gshared (List_1_t1_894 * __this, Predicate_1_t1_1221 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m1_8254(__this, ___match, method) (( int32_t (*) (List_1_t1_894 *, Predicate_1_t1_1221 *, const MethodInfo*))List_1_RemoveAll_m1_8254_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1_8255_gshared (List_1_t1_894 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1_8255(__this, ___index, method) (( void (*) (List_1_t1_894 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1_8255_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m1_8256_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_Reverse_m1_8256(__this, method) (( void (*) (List_1_t1_894 *, const MethodInfo*))List_1_Reverse_m1_8256_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m1_8257_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_Sort_m1_8257(__this, method) (( void (*) (List_1_t1_894 *, const MethodInfo*))List_1_Sort_m1_8257_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1_8258_gshared (List_1_t1_894 * __this, Comparison_1_t1_1222 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1_8258(__this, ___comparison, method) (( void (*) (List_1_t1_894 *, Comparison_1_t1_1222 *, const MethodInfo*))List_1_Sort_m1_8258_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t1_159* List_1_ToArray_m1_8259_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_ToArray_m1_8259(__this, method) (( Int32U5BU5D_t1_159* (*) (List_1_t1_894 *, const MethodInfo*))List_1_ToArray_m1_8259_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m1_8260_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m1_8260(__this, method) (( void (*) (List_1_t1_894 *, const MethodInfo*))List_1_TrimExcess_m1_8260_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1_8261_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1_8261(__this, method) (( int32_t (*) (List_1_t1_894 *, const MethodInfo*))List_1_get_Capacity_m1_8261_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1_8262_gshared (List_1_t1_894 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1_8262(__this, ___value, method) (( void (*) (List_1_t1_894 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1_8262_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m1_8263_gshared (List_1_t1_894 * __this, const MethodInfo* method);
#define List_1_get_Count_m1_8263(__this, method) (( int32_t (*) (List_1_t1_894 *, const MethodInfo*))List_1_get_Count_m1_8263_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m1_8264_gshared (List_1_t1_894 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1_8264(__this, ___index, method) (( int32_t (*) (List_1_t1_894 *, int32_t, const MethodInfo*))List_1_get_Item_m1_8264_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1_8265_gshared (List_1_t1_894 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m1_8265(__this, ___index, ___value, method) (( void (*) (List_1_t1_894 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m1_8265_gshared)(__this, ___index, ___value, method)
