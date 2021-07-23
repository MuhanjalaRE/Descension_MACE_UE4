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

// WidgetBlueprintGeneratedClass WBP_PlayerStatUnit.WBP_PlayerStatUnit_C
// 0x0080 (FullSize[0x02B8] - InheritedSize[0x0238])
class UWBP_PlayerStatUnit_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TextBlock_11;                                              // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_12;                                              // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_264;                                             // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TitleBlock;                                                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Title;                                                     // 0x0260(0x0018) (Edit, BlueprintVisible)
	struct FStatValue                                  Value;                                                     // 0x0278(0x0008) (Edit, BlueprintVisible, NoDestructor)
	int                                                TotalMatches;                                              // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HMOB[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       AverageTitle;                                              // 0x0288(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       TotalTitle;                                                // 0x02A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerStatUnit.WBP_PlayerStatUnit_C");
		}
		return ptr;
	}



	struct FText GetTotal();
	struct FText GetAverage();
	struct FText GetBest();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_PlayerStatUnit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
