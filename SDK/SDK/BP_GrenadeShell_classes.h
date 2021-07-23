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

// BlueprintGeneratedClass BP_GrenadeShell.BP_GrenadeShell_C
// 0x0018 (FullSize[0x0820] - InheritedSize[0x0808])
class ABP_GrenadeShell_C : public AMAProjectile
{
public:
	unsigned char                                      UnknownData_X07B[0x8];                                     // 0x0808(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0810(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_GrenadeLauncher_Shell_Trail;                             // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrenadeShell.BP_GrenadeShell_C");
		}
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_GrenadeShell(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
