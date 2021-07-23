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

// ScriptStruct UnrealEdMessages.AssetEditorRequestOpenAsset
// 0x0010
struct FAssetEditorRequestOpenAsset
{
	struct FString                                     AssetName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UnrealEdMessages.FileServerReady
// 0x0020
struct FFileServerReady
{
	TArray<struct FString>                             AddressList;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                       InstanceId;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
