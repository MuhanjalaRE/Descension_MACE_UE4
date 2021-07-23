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

// WidgetBlueprintGeneratedClass WBP_CosmeticLargeDisplay.WBP_CosmeticLargeDisplay_C
// 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
class UWBP_CosmeticLargeDisplay_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  ItemText;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CosmeticGridPanelItem_C*                WBP_CosmeticGridPanelItem;                                 // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                      Test_Display;                                              // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CosmeticLargeDisplay.WBP_CosmeticLargeDisplay_C");
		}
		return ptr;
	}



	void Set_From_Cosmetic(class UClass* In_Cosmetic);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_CosmeticLargeDisplay(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
