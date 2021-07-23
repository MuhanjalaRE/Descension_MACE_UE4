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

// WidgetBlueprintGeneratedClass WBP_KickBanReason.WBP_KickBanReason_C
// 0x0049 (FullSize[0x0281] - InheritedSize[0x0238])
class UWBP_KickBanReason_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     CancelButton;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     OkButton;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            ReasonTextBox;                                             // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_8;                                               // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_10;                                              // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_71;                                              // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnOk;                                                      // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Ban;                                                       // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KickBanReason.WBP_KickBanReason_C");
		}
		return ptr;
	}



	struct FText Get_TextBlock_9_Text_1();
	struct FText Get_TextBlock_9_ToolTipText_1();
	struct FText GetText_2();
	struct FText GetText_1();
	bool Get_OkButton_bIsEnabled_1();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_KickBanReason(int EntryPoint);
	void OnOk__DelegateSignature(const struct FText& Reason);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
