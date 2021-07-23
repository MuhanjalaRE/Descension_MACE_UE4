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

// BlueprintGeneratedClass BP_GrenadeLauncher_Explosion.BP_GrenadeLauncher_Explosion_C
// 0x0018 (FullSize[0x0268] - InheritedSize[0x0250])
class ABP_GrenadeLauncher_Explosion_C : public AMAImpactEffect
{
public:
	class UAudioComponent*                             Audio;                                                     // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                             Decal;                                                     // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrenadeLauncher_Explosion.BP_GrenadeLauncher_Explosion_C");
		}
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
