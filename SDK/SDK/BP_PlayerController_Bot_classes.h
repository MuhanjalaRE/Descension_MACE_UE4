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

// BlueprintGeneratedClass BP_PlayerController_Bot.BP_PlayerController_Bot_C
// 0x0010 (FullSize[0x0388] - InheritedSize[0x0378])
class ABP_PlayerController_Bot_C : public AAIPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DeathEffects_C*                         DeathEffects;                                              // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController_Bot.BP_PlayerController_Bot_C");
		}
		return ptr;
	}



	void SetupDeathEffects_2();
	void ClearDeathEffects_2();
	void ExecuteUbergraph_BP_PlayerController_Bot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
