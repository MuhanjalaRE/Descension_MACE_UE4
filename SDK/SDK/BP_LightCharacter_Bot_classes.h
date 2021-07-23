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

// BlueprintGeneratedClass BP_LightCharacter_Bot.BP_LightCharacter_Bot_C
// 0x0018 (FullSize[0x0BC0] - InheritedSize[0x0BA8])
class ABP_LightCharacter_Bot_C : public ABP_BaseCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    JetTrailMain;                                              // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              JetStrength;                                               // 0x0BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnRate_0_1;                                             // 0x0BBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightCharacter_Bot.BP_LightCharacter_Bot_C");
		}
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void BP_UpdateForClientPerspective(bool bFirstPerson);
	void ExecuteUbergraph_BP_LightCharacter_Bot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
