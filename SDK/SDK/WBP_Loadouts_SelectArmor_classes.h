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

// WidgetBlueprintGeneratedClass WBP_Loadouts_SelectArmor.WBP_Loadouts_SelectArmor_C
// 0x00E8 (FullSize[0x04A0] - InheritedSize[0x03B8])
class UWBP_Loadouts_SelectArmor_C : public UWBP_SelectableButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_2;                                                  // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_1;                                                  // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icon;                                                      // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LockIcon;                                                  // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_1;                                                 // 0x03E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       Name;                                                      // 0x0400(0x0018) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Image;                                                     // 0x0418(0x0088) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Loadouts_SelectArmor.WBP_Loadouts_SelectArmor_C");
		}
		return ptr;
	}



	struct FText GetToolTipText_1();
	UMG_ESlateVisibility Get_LockIcon_Visibility_1();
	struct FLinearColor GetImageColor();
	struct FLinearColor GetBrushColor_1();
	struct FSlateColor GetTextColor();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_165_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Loadouts_SelectArmor(int EntryPoint);
	void OnClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
