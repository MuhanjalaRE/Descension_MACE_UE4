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

// WidgetBlueprintGeneratedClass WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C
// 0x0078 (FullSize[0x02B0] - InheritedSize[0x0238])
class UWBP_CosmeticGridPanelItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_1;                                                  // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      CurrentlyEquipped;                                         // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                FallbackDisplay;                                           // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      FallbackImage;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  FallbackName;                                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      IsLocked;                                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MainImageDisplay;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    MainSize;                                                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     SelectedBorder;                                            // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SelectableButtonWithIcon_C*             WBP_SelectableButtonWithIcon;                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                      Cosmetic;                                                  // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Selected;                                                  // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                                   Size_of_Widget;                                            // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CosmeticGridPanelItem.WBP_CosmeticGridPanelItem_C");
		}
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
	void SetDisplayMode(bool bShowMain);
	void Setup_For_Cosmetic(class UClass* In_Cosmetic);
	void BndEvt__WBP_SelectableButtonWithIcon_K2Node_ComponentBoundEvent_22_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button);
	void PreConstruct(bool IsDesignTime);
	void SetSelected(bool Selected);
	void Set_Equipped(bool Equipped);
	void ExecuteUbergraph_WBP_CosmeticGridPanelItem(int EntryPoint);
	void Selected__DelegateSignature(class UClass* Selected, class UWBP_CosmeticGridPanelItem_C* Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
