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

// WidgetBlueprintGeneratedClass WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C
// 0x00A4 (FullSize[0x045C] - InheritedSize[0x03B8])
class UWBP_Loadouts_SkinListItem_C : public UWBP_SelectableButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_1;                                                  // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      CheckBox;                                                  // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    ImageSizeBox;                                              // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ItemImage;                                                 // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ItemName;                                                  // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   ItemScaleBox;                                              // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LockIcon;                                                  // 0x03F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     UnlockButton;                                              // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                      Skin_Class;                                                // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              LastTimeHovered;                                           // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OYZ0[0x4];                                     // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    JumpToSkinOnStore;                                         // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    QuickEquipped;                                             // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              LastClickTime;                                             // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                OriginalSelectedBackgroundColor;                           // 0x043C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TextColor;                                                 // 0x044C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Loadouts_SkinListItem.WBP_Loadouts_SkinListItem_C");
		}
		return ptr;
	}



	void GetHasValidColor(bool* Return);
	UMG_ESlateVisibility Get_CheckBox_Visibility_1();
	UMG_ESlateVisibility Get_LockIcon_Visibility_1();
	struct FLinearColor GetBrushColor_1();
	struct FSlateColor Get_ItemName_ColorAndOpacity_1();
	void Construct();
	void BndEvt__UnlockButton_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_55_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Item_Info(class UClass* New_Skin_Class);
	void ExecuteUbergraph_WBP_Loadouts_SkinListItem(int EntryPoint);
	void QuickEquipped__DelegateSignature(class UWBP_SelectableButton_C* Selected_Button);
	void JumpToSkinOnStore__DelegateSignature(class UClass* CosmeticConfiguration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
