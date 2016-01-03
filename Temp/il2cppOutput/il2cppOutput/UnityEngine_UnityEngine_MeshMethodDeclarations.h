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

// UnityEngine.Mesh
struct Mesh_t5_27;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5_180;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1_890;
// System.Object
struct Object_t;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t5_292;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1_891;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t5_293;
// System.Array
struct Array_t;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1_892;
// UnityEngine.Color[]
struct ColorU5BU5D_t5_294;
// UnityEngine.Color32[]
struct Color32U5BU5D_t5_295;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t1_893;
// System.Int32[]
struct Int32U5BU5D_t1_159;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1_894;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m5_99 (Mesh_t5_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m5_100 (Object_t * __this /* static, unused */, Mesh_t5_27 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C" void Mesh_Clear_m5_101 (Mesh_t5_27 * __this, bool ___keepVertexLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C" void Mesh_Clear_m5_102 (Mesh_t5_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" Vector3U5BU5D_t5_180* Mesh_get_vertices_m5_103 (Mesh_t5_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m5_104 (Mesh_t5_27 * __this, Vector3U5BU5D_t5_180* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetVertices_m5_105 (Mesh_t5_27 * __this, List_1_t1_890 * ___inVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVerticesInternal(System.Object)
extern "C" void Mesh_SetVerticesInternal_m5_106 (Mesh_t5_27 * __this, Object_t * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C" Vector3U5BU5D_t5_180* Mesh_get_normals_m5_107 (Mesh_t5_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetNormals_m5_108 (Mesh_t5_27 * __this, List_1_t1_890 * ___inNormals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormalsInternal(System.Object)
extern "C" void Mesh_SetNormalsInternal_m5_109 (Mesh_t5_27 * __this, Object_t * ___normals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C" Vector4U5BU5D_t5_292* Mesh_get_tangents_m5_110 (Mesh_t5_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C" void Mesh_SetTangents_m5_111 (Mesh_t5_27 * __this, List_1_t1_891 * ___inTangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangentsInternal(System.Object)
extern "C" void Mesh_SetTangentsInternal_m5_112 (Mesh_t5_27 * __this, Object_t * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C" Vector2U5BU5D_t5_293* Mesh_get_uv_m5_113 (Mesh_t5_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m5_114 (Mesh_t5_27 * __this, Vector2U5BU5D_t5_293* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C" Vector2U5BU5D_t5_293* Mesh_get_uv2_m5_115 (Mesh_t5_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array UnityEngine.Mesh::ExtractListData(System.Object)
extern "C" Array_t * Mesh_ExtractListData_m5_116 (Object_t * __this /* static, unused */, Object_t * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVsInternal(System.Array,System.Int32,System.Int32,System.Int32)
extern "C" void Mesh_SetUVsInternal_m5_117 (Mesh_t5_27 * __this, Array_t * ___uvs, int32_t ___channel, int32_t ___dim, int32_t ___arraySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C" void Mesh_SetUVs_m5_118 (Mesh_t5_27 * __this, int32_t ___channel, List_1_t1_892 * ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
extern "C" void Mesh_set_colors_m5_119 (Mesh_t5_27 * __this, ColorU5BU5D_t5_294* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C" Color32U5BU5D_t5_295* Mesh_get_colors32_m5_120 (Mesh_t5_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
extern "C" void Mesh_SetColors_m5_121 (Mesh_t5_27 * __this, List_1_t1_893 * ___inColors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors32Internal(System.Object)
extern "C" void Mesh_SetColors32Internal_m5_122 (Mesh_t5_27 * __this, Object_t * ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" void Mesh_RecalculateBounds_m5_123 (Mesh_t5_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Optimize()
extern "C" void Mesh_Optimize_m5_124 (Mesh_t5_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m5_125 (Mesh_t5_27 * __this, Int32U5BU5D_t1_159* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
extern "C" void Mesh_SetTriangles_m5_126 (Mesh_t5_27 * __this, List_1_t1_894 * ___inTriangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)
extern "C" void Mesh_SetTrianglesInternal_m5_127 (Mesh_t5_27 * __this, Object_t * ___triangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C" Int32U5BU5D_t1_159* Mesh_GetIndices_m5_128 (Mesh_t5_27 * __this, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
extern "C" void Mesh_UploadMeshData_m5_129 (Mesh_t5_27 * __this, bool ___markNoLogerReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
