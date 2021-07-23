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

// BlueprintGeneratedClass BP_RingLauncherAttachment.BP_RingLauncherAttachment_C
// 0x0008 (FullSize[0x05D8] - InheritedSize[0x05D0])
class ABP_RingLauncherAttachment_C : public AMAWeaponAttachment
{
public:
	class UParticleSystemComponent*                    P_Tempest_Idle;                                            // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_RingLauncherAttachment.BP_RingLauncherAttachment_C");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
