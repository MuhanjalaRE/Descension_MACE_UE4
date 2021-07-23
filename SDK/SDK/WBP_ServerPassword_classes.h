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

// WidgetBlueprintGeneratedClass WBP_ServerPassword.WBP_ServerPassword_C
// 0x0051 (FullSize[0x0289] - InheritedSize[0x0238])
class UWBP_ServerPassword_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     CancelButton;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     OkButton;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            PasswordTextBox;                                           // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_6;                                               // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnConnect;                                                 // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       ServerName;                                                // 0x0270(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               RemoveWhenClose;                                           // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ServerPassword.WBP_ServerPassword_C");
		}
		return ptr;
	}



	bool Get_OkButton_bIsEnabled_1();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void ExecuteUbergraph_WBP_ServerPassword(int EntryPoint);
	void OnConnect__DelegateSignature(const struct FText& Password);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
