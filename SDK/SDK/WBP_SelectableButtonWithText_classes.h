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

// WidgetBlueprintGeneratedClass WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C
// 0x0078 (FullSize[0x0430] - InheritedSize[0x03B8])
class UWBP_SelectableButtonWithText_C : public UWBP_SelectableButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     DefaultBorder;                                             // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     DefaultButton;                                             // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  DefaultTextBlock;                                          // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NewItemBadge_C*                         NewItemBadge;                                              // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x03E8(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	int                                                Font_Size;                                                 // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FName                                       Font_Typeface;                                             // 0x0404(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MPA9[0x3];                                     // 0x040D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   NewItemBadgePosition;                                      // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   NewItemBadgeSize;                                          // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   LockBadgePosition;                                         // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   LockBadgeSize;                                             // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SelectableButtonWithText.WBP_SelectableButtonWithText_C");
		}
		return ptr;
	}



	void UpdateSlotAnchor(class UWidget* Item, const struct FVector2D& InPosition, const struct FVector2D& InSize);
	UMG_ESlateVisibility Get_NewItemBadge_Visibility_1();
	UMG_ESlateVisibility GetVisibility_1();
	struct FText Get_DefaultTextBlock_Text_1();
	struct FSlateColor Get_DefaultTextBlock_ColorAndOpacity_1();
	struct FLinearColor Get_DefaultBorder_BrushColor_0_1();
	void OnSelected();
	void OnActive();
	void OnPressed();
	void OnUpdateDisabled();
	void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_58_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_69_OnButtonReleasedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_SelectableButtonWithText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
