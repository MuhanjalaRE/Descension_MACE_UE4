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

// WidgetBlueprintGeneratedClass WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C
// 0x0078 (FullSize[0x02B0] - InheritedSize[0x0238])
class UWBP_LoadoutNamingWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_2;                                                  // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_3;                                                  // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Cancel;                                                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            EditableTextBox_1;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SubmitButton;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_3;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerLoadoutsSave*                         LoadoutSaves;                                              // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FString                                     NameStatus;                                                // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTextCancel;                                              // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnValidTextCommitted;                                      // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutNamingWidget.WBP_LoadoutNamingWidget_C");
		}
		return ptr;
	}



	UMG_ESlateVisibility Get_Border_2_Visibility_1();
	struct FText GetValidityDisplayText();
	struct FLinearColor GetBrushColor_1();
	class UWidget* GetToolTipWidget_1();
	void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void SetNameStatus(const struct FText& Input);
	void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SubmitButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void TextCommited();
	void ExecuteUbergraph_WBP_LoadoutNamingWidget(int EntryPoint);
	void OnValidTextCommitted__DelegateSignature(const struct FString& Name);
	void OnTextCancel__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
