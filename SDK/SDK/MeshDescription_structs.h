#pragma once

// Name: mace, Version: 1.9.1.12285


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MeshDescription.EComputeNTBsOptions
enum class MeshDescription_EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None      = 0,
	EComputeNTBsOptions__Normals   = 1,
	EComputeNTBsOptions__Tangents  = 2,
	EComputeNTBsOptions__WeightedNTBs = 3,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshDescription.ElementID
// 0x0004
struct FElementID
{
	int                                                IDValue;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct MeshDescription.VertexInstanceID
// 0x0000 (0x0004 - 0x0004)
struct FVertexInstanceID : public FElementID
{

};

// ScriptStruct MeshDescription.PolygonGroupID
// 0x0000 (0x0004 - 0x0004)
struct FPolygonGroupID : public FElementID
{

};

// ScriptStruct MeshDescription.MeshTriangle
// 0x000C
struct FMeshTriangle
{
	struct FVertexInstanceID                           VertexInstanceID0;                                         // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                           VertexInstanceID1;                                         // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                           VertexInstanceID2;                                         // 0x0008(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MeshDescription.EdgeID
// 0x0000 (0x0004 - 0x0004)
struct FEdgeID : public FElementID
{

};

// ScriptStruct MeshDescription.VertexID
// 0x0000 (0x0004 - 0x0004)
struct FVertexID : public FElementID
{

};

// ScriptStruct MeshDescription.PolygonID
// 0x0000 (0x0004 - 0x0004)
struct FPolygonID : public FElementID
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
