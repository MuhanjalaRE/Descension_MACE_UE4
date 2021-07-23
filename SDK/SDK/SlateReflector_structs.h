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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateReflector.WidgetSnapshotRequest
// 0x0020
struct FWidgetSnapshotRequest
{
	struct FGuid                                       TargetInstanceId;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       SnapshotRequestId;                                         // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SlateReflector.WidgetSnapshotResponse
// 0x0020
struct FWidgetSnapshotResponse
{
	struct FGuid                                       SnapshotRequestId;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              SnapshotData;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
