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

// BlueprintGeneratedClass BP_Resupply2.BP_Resupply2_C
// 0x000C (FullSize[0x01C4] - InheritedSize[0x01B8])
class UBP_Resupply2_C : public UAugment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Resupply_Percentage;                                       // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Resupply2.BP_Resupply2_C");
		}
		return ptr;
	}



	void OnGivenTo();
	void OnRemoved();
	void ExecuteUbergraph_BP_Resupply2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
