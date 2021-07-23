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

// BlueprintGeneratedClass BP_Blink_Art.BP_Blink_Art_C
// 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
class UBP_Blink_Art_C : public UAugment_Blink_Art
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     StartLocation;                                             // 0x00F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndLocation;                                               // 0x0104(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Blink_Art.BP_Blink_Art_C");
		}
		return ptr;
	}



	void StartBlink(const struct FVector& Location);
	void StopBlink(const struct FVector& Location);
	void ExecuteUbergraph_BP_Blink_Art(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
