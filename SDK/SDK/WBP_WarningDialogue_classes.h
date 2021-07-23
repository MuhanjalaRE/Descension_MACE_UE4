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

// WidgetBlueprintGeneratedClass WBP_WarningDialogue.WBP_WarningDialogue_C
// 0x0090 (FullSize[0x02C8] - InheritedSize[0x0238])
class UWBP_WarningDialogue_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     CancelButton;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     OkButton;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_3;                                               // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_4;                                               // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_71;                                              // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       OkMessage;                                                 // 0x0268(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       CancelMessage;                                             // 0x0280(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnOk;                                                      // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              Enable_Delay;                                              // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D8TM[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Warning_Message;                                           // 0x02B0(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WarningDialogue.WBP_WarningDialogue_C");
		}
		return ptr;
	}



	UMG_ESlateVisibility Get_CancelButton_Visibility_1();
	void Construct();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__OkButton_K2Node_ComponentBoundEvent_109_OnButtonClickedEvent__DelegateSignature();
	void Enable_Ok();
	void ExecuteUbergraph_WBP_WarningDialogue(int EntryPoint);
	void OnOk__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
