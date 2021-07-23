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

// BlueprintGeneratedClass BP_MortarShell.BP_MortarShell_C
// 0x0010 (FullSize[0x0818] - InheritedSize[0x0808])
class ABP_MortarShell_C : public AMAProjectile
{
public:
	unsigned char                                      UnknownData_KL0Z[0x8];                                     // 0x0808(0x0008) Fix Super Size
	class UParticleSystemComponent*                    P_GrenadeLauncher_Shell_Trail;                             // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MortarShell.BP_MortarShell_C");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
