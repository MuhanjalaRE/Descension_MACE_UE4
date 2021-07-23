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

// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// 0x0010 (FullSize[0x0AB8] - InheritedSize[0x0AA8])
class ABP_PlayerController_C : public AMAPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DeathEffects_C*                         DeathEffects;                                              // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C");
		}
		return ptr;
	}



	void SetupDeathEffects();
	void ClearDeathEffects();
	void ExecuteUbergraph_BP_PlayerController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
