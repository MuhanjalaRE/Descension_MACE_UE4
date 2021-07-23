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

// BlueprintGeneratedClass TestCTFFlag.TestCTFFlag_C
// 0x0030 (FullSize[0x0530] - InheritedSize[0x0500])
class ATestCTFFlag_C : public AMACTFFlag
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_FlagTrail;                                               // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             IdleLoopSound;                                             // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Team_Id;                                                   // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6QA0[0x7];                                     // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    NewVar_1;                                                  // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMACharacter*                                CurrentHolder;                                             // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass TestCTFFlag.TestCTFFlag_C");
		}
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TestCTFFlag(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
