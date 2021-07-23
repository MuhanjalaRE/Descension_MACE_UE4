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
// Classes
//---------------------------------------------------------------------------

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClothingSimulationFactory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationFactory");
		}
		return ptr;
	}



};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UClothingSimulationInteractor : public UObject
{
public:
	unsigned char                                      UnknownData_89MA[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
		}
		return ptr;
	}



	void PhysicsAssetUpdated();
	void ClothConfigUpdated();
};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UClothingAssetBase : public UObject
{
public:
	struct FString                                     ImportedFilePath;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       AssetGuid;                                                 // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingAssetBase");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
