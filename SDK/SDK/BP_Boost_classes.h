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

// BlueprintGeneratedClass BP_Boost.BP_Boost_C
// 0x0020 (FullSize[0x01D8] - InheritedSize[0x01B8])
class UBP_Boost_C : public UAugment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              MaxBoostAccel;                                             // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TempForward;                                               // 0x01C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinEnergyCost;                                             // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxEnergyCost;                                             // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Boost.BP_Boost_C");
		}
		return ptr;
	}



	void OnActiveChanged(class AMACharacter* ReceivingCharacter);
	void ExecuteUbergraph_BP_Boost(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
