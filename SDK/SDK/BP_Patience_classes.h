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

// BlueprintGeneratedClass BP_Patience.BP_Patience_C
// 0x0004 (FullSize[0x01BC] - InheritedSize[0x01B8])
class UBP_Patience_C : public UAugment
{
public:
	float                                              Energy_Returned;                                           // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Patience.BP_Patience_C");
		}
		return ptr;
	}



	float GetCurrentEnergyChangeRate();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
