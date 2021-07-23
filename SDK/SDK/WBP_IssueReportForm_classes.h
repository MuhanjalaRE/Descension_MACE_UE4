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

// WidgetBlueprintGeneratedClass WBP_IssueReportForm.WBP_IssueReportForm_C
// 0x0079 (FullSize[0x02B1] - InheritedSize[0x0238])
class UWBP_IssueReportForm_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_95;                                                 // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     CancelButton;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                           CircularThrobber_1;                                        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*                   DescriptionTextBox;                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     OkButton;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*                   ReproduceTextBox;                                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                             SeverityComboBox;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            SummaryTextBox;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_10;                                              // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnConnect;                                                 // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               InProgress;                                                // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OD7E[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget*                                     MainMenuWidget;                                            // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USoundBase*                                  Key_Sound;                                                 // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasExistedForSomeTime;                                    // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_IssueReportForm.WBP_IssueReportForm_C");
		}
		return ptr;
	}



	void ResetForm();
	UMG_ESlateVisibility GetVisibility_2();
	UMG_ESlateVisibility GetVisibility_1();
	UMG_ESlateVisibility Get_TextBlock_9_Visibility_1();
	bool Get_OkButton_bIsEnabled_1();
	class UWidget* OnGenerateWidget_1(const struct FString& Item);
	void OnFail_AF91C2684799695ADBF1D1BBC53F98F2();
	void OnSuccess_AF91C2684799695ADBF1D1BBC53F98F2();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__OkButton_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ReproduceTextBox_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__DescriptionTextBox_K2Node_ComponentBoundEvent_7_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void BndEvt__SummaryTextBox_K2Node_ComponentBoundEvent_15_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void Construct();
	void ExecuteUbergraph_WBP_IssueReportForm(int EntryPoint);
	void OnConnect__DelegateSignature(const struct FText& Password);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
