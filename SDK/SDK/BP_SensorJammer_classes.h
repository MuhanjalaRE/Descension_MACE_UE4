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

// BlueprintGeneratedClass BP_SensorJammer.BP_SensorJammer_C
// 0x0014 (FullSize[0x01CC] - InheritedSize[0x01B8])
class UBP_SensorJammer_C : public UAugment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSensorTargetModifiers                      Jamming_Properties;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, NoDestructor)
	float                                              EnergyRegenModifier;                                       // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SensorJammer.BP_SensorJammer_C");
		}
		return ptr;
	}



	float GetCurrentEnergyChangeRate();
	void OnGivenTo();
	void OnRemoved();
	void OnAddBuddy(class AMACharacter* Buddy);
	void OnRemoveBuddy(class AMACharacter* Buddy);
	void ExecuteUbergraph_BP_SensorJammer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
