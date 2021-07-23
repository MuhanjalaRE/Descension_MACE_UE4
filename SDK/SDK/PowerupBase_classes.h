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

// BlueprintGeneratedClass PowerupBase.PowerupBase_C
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class APowerupBase_C : public AMAPowerupBase
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass PowerupBase.PowerupBase_C");
		}
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
