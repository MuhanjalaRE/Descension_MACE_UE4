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

// WidgetBlueprintGeneratedClass WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C
// 0x00D0 (FullSize[0x0488] - InheritedSize[0x03B8])
class UWBP_Loadouts_ItemSlot_C : public UWBP_SelectableButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     BindingButton;                                             // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_1;                                                  // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    ImageSizeBox;                                              // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ItemImage;                                                 // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ItemName;                                                  // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   ItemScaleBox;                                              // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BindingIcon_C*                          WBP_BindingIcon;                                           // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                      ItemInfo;                                                  // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UClass*>                              ItemList;                                                  // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnNewItemSelected;                                         // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       ItemType;                                                  // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Image_Width;                                               // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bNeedsBindDisplay;                                         // 0x0444(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               ShowNoBindingIcon;                                         // 0x0445(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B67G[0x2];                                     // 0x0446(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    Jump_to_Item;                                              // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Jump_to_Slot_Unlock;                                       // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    QuickEquipped;                                             // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              LastClickTime;                                             // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RKGM[0x4];                                     // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Current_Item_SKin;                                         // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Loadouts_ItemSlot.WBP_Loadouts_ItemSlot_C");
		}
		return ptr;
	}



	struct FText Get_BindingButton_ToolTipText_1();
	struct FSlateColor GetTextColor();
	struct FSlateColor GetBrushColor();
	struct FLinearColor GetImageColor();
	class UWidget* GetToolTipWidget_1();
	void SetItemInfo(class UClass* ItemInfo, const struct FName& BindingName);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_119_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_129_OnButtonReleasedEvent__DelegateSignature();
	void OnSelected();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BindingButton_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature();
	void Click();
	void ExecuteUbergraph_WBP_Loadouts_ItemSlot(int EntryPoint);
	void QuickEquipped__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button);
	void Jump_to_Slot_Unlock__DelegateSignature();
	void Jump_to_Item__DelegateSignature(class UClass* Object_Info);
	void OnNewItemSelected__DelegateSignature(class UClass* New_Item);
	void OnClicked__DelegateSignature(class UWBP_Loadouts_ItemSlot_C* Item_Slot);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
