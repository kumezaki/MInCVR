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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t1_950;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1_953;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_1117;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_1472;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1_869;
// System.Object[]
struct ObjectU5BU5D_t1_156;
// System.Predicate`1<System.Object>
struct Predicate_1_t1_969;
// System.Comparison`1<System.Object>
struct Comparison_1_t1_974;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1_5604_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1__ctor_m1_5604(__this, method) (( void (*) (List_1_t1_950 *, const MethodInfo*))List_1__ctor_m1_5604_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m1_5606_gshared (List_1_t1_950 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1_5606(__this, ___collection, method) (( void (*) (List_1_t1_950 *, Object_t*, const MethodInfo*))List_1__ctor_m1_5606_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1_5608_gshared (List_1_t1_950 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1_5608(__this, ___capacity, method) (( void (*) (List_1_t1_950 *, int32_t, const MethodInfo*))List_1__ctor_m1_5608_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m1_5610_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1_5610(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1_5610_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_5612_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_5612(__this, method) (( Object_t* (*) (List_1_t1_950 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_5612_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1_5614_gshared (List_1_t1_950 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1_5614(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_950 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1_5614_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1_5616_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1_5616(__this, method) (( Object_t * (*) (List_1_t1_950 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1_5616_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1_5618_gshared (List_1_t1_950 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1_5618(__this, ___item, method) (( int32_t (*) (List_1_t1_950 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1_5618_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1_5620_gshared (List_1_t1_950 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1_5620(__this, ___item, method) (( bool (*) (List_1_t1_950 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1_5620_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1_5622_gshared (List_1_t1_950 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1_5622(__this, ___item, method) (( int32_t (*) (List_1_t1_950 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1_5622_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1_5624_gshared (List_1_t1_950 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1_5624(__this, ___index, ___item, method) (( void (*) (List_1_t1_950 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1_5624_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1_5626_gshared (List_1_t1_950 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1_5626(__this, ___item, method) (( void (*) (List_1_t1_950 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1_5626_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_5628_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_5628(__this, method) (( bool (*) (List_1_t1_950 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_5628_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m1_5630_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1_5630(__this, method) (( bool (*) (List_1_t1_950 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1_5630_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1_5632_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1_5632(__this, method) (( Object_t * (*) (List_1_t1_950 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1_5632_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m1_5634_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1_5634(__this, method) (( bool (*) (List_1_t1_950 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1_5634_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m1_5636_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1_5636(__this, method) (( bool (*) (List_1_t1_950 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1_5636_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1_5638_gshared (List_1_t1_950 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1_5638(__this, ___index, method) (( Object_t * (*) (List_1_t1_950 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1_5638_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1_5640_gshared (List_1_t1_950 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1_5640(__this, ___index, ___value, method) (( void (*) (List_1_t1_950 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1_5640_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m1_5642_gshared (List_1_t1_950 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m1_5642(__this, ___item, method) (( void (*) (List_1_t1_950 *, Object_t *, const MethodInfo*))List_1_Add_m1_5642_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m1_5644_gshared (List_1_t1_950 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m1_5644(__this, ___newCount, method) (( void (*) (List_1_t1_950 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m1_5644_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m1_5646_gshared (List_1_t1_950 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1_5646(__this, ___collection, method) (( void (*) (List_1_t1_950 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1_5646_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m1_5648_gshared (List_1_t1_950 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1_5648(__this, ___enumerable, method) (( void (*) (List_1_t1_950 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1_5648_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m1_5650_gshared (List_1_t1_950 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1_5650(__this, ___collection, method) (( void (*) (List_1_t1_950 *, Object_t*, const MethodInfo*))List_1_AddRange_m1_5650_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1_869 * List_1_AsReadOnly_m1_5652_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1_5652(__this, method) (( ReadOnlyCollection_1_t1_869 * (*) (List_1_t1_950 *, const MethodInfo*))List_1_AsReadOnly_m1_5652_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m1_5654_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_Clear_m1_5654(__this, method) (( void (*) (List_1_t1_950 *, const MethodInfo*))List_1_Clear_m1_5654_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m1_5656_gshared (List_1_t1_950 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m1_5656(__this, ___item, method) (( bool (*) (List_1_t1_950 *, Object_t *, const MethodInfo*))List_1_Contains_m1_5656_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1_5658_gshared (List_1_t1_950 * __this, ObjectU5BU5D_t1_156* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1_5658(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_950 *, ObjectU5BU5D_t1_156*, int32_t, const MethodInfo*))List_1_CopyTo_m1_5658_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m1_5660_gshared (List_1_t1_950 * __this, Predicate_1_t1_969 * ___match, const MethodInfo* method);
#define List_1_Find_m1_5660(__this, ___match, method) (( Object_t * (*) (List_1_t1_950 *, Predicate_1_t1_969 *, const MethodInfo*))List_1_Find_m1_5660_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m1_5662_gshared (Object_t * __this /* static, unused */, Predicate_1_t1_969 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m1_5662(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1_969 *, const MethodInfo*))List_1_CheckMatch_m1_5662_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m1_5664_gshared (List_1_t1_950 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1_969 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1_5664(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1_950 *, int32_t, int32_t, Predicate_1_t1_969 *, const MethodInfo*))List_1_GetIndex_m1_5664_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1_963  List_1_GetEnumerator_m1_5666_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1_5666(__this, method) (( Enumerator_t1_963  (*) (List_1_t1_950 *, const MethodInfo*))List_1_GetEnumerator_m1_5666_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1_5668_gshared (List_1_t1_950 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m1_5668(__this, ___item, method) (( int32_t (*) (List_1_t1_950 *, Object_t *, const MethodInfo*))List_1_IndexOf_m1_5668_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m1_5670_gshared (List_1_t1_950 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1_5670(__this, ___start, ___delta, method) (( void (*) (List_1_t1_950 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1_5670_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m1_5672_gshared (List_1_t1_950 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1_5672(__this, ___index, method) (( void (*) (List_1_t1_950 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1_5672_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1_5674_gshared (List_1_t1_950 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m1_5674(__this, ___index, ___item, method) (( void (*) (List_1_t1_950 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m1_5674_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m1_5676_gshared (List_1_t1_950 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1_5676(__this, ___collection, method) (( void (*) (List_1_t1_950 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1_5676_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m1_5678_gshared (List_1_t1_950 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m1_5678(__this, ___item, method) (( bool (*) (List_1_t1_950 *, Object_t *, const MethodInfo*))List_1_Remove_m1_5678_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m1_5680_gshared (List_1_t1_950 * __this, Predicate_1_t1_969 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m1_5680(__this, ___match, method) (( int32_t (*) (List_1_t1_950 *, Predicate_1_t1_969 *, const MethodInfo*))List_1_RemoveAll_m1_5680_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1_5682_gshared (List_1_t1_950 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1_5682(__this, ___index, method) (( void (*) (List_1_t1_950 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1_5682_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m1_5684_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_Reverse_m1_5684(__this, method) (( void (*) (List_1_t1_950 *, const MethodInfo*))List_1_Reverse_m1_5684_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m1_5686_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_Sort_m1_5686(__this, method) (( void (*) (List_1_t1_950 *, const MethodInfo*))List_1_Sort_m1_5686_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1_5688_gshared (List_1_t1_950 * __this, Comparison_1_t1_974 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1_5688(__this, ___comparison, method) (( void (*) (List_1_t1_950 *, Comparison_1_t1_974 *, const MethodInfo*))List_1_Sort_m1_5688_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t1_156* List_1_ToArray_m1_5689_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_ToArray_m1_5689(__this, method) (( ObjectU5BU5D_t1_156* (*) (List_1_t1_950 *, const MethodInfo*))List_1_ToArray_m1_5689_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m1_5691_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m1_5691(__this, method) (( void (*) (List_1_t1_950 *, const MethodInfo*))List_1_TrimExcess_m1_5691_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1_5693_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1_5693(__this, method) (( int32_t (*) (List_1_t1_950 *, const MethodInfo*))List_1_get_Capacity_m1_5693_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1_5695_gshared (List_1_t1_950 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1_5695(__this, ___value, method) (( void (*) (List_1_t1_950 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1_5695_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m1_5697_gshared (List_1_t1_950 * __this, const MethodInfo* method);
#define List_1_get_Count_m1_5697(__this, method) (( int32_t (*) (List_1_t1_950 *, const MethodInfo*))List_1_get_Count_m1_5697_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m1_5699_gshared (List_1_t1_950 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1_5699(__this, ___index, method) (( Object_t * (*) (List_1_t1_950 *, int32_t, const MethodInfo*))List_1_get_Item_m1_5699_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1_5701_gshared (List_1_t1_950 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m1_5701(__this, ___index, ___value, method) (( void (*) (List_1_t1_950 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m1_5701_gshared)(__this, ___index, ___value, method)
