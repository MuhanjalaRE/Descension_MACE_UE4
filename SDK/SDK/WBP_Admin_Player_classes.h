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

// WidgetBlueprintGeneratedClass WBP_Admin_Player.WBP_Admin_Player_C
// 0x0068 (FullSize[0x02A0] - InheritedSize[0x0238])
class UWBP_Admin_Player_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Button_3;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button_549;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_359;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_742;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Kick;                                                      // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ServerBan;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Spectate;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     TeamChange;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                               // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_92;                                              // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_342;                                             // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerState*                                PlayerState;                                               // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Admin_Player.WBP_Admin_Player_C");
		}
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
	struct FText GetText_1();
	void OnFail_9DAA53B142F280B98AD0068073C2551F(bool bSuccess);
	void OnSuccess_9DAA53B142F280B98AD0068073C2551F(bool bSuccess);
	void Construct();
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Spectate_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Kick_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnKickReason(const struct FText& Reason);
	void BndEvt__ServerBan_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void Ban();
	void OnBan(const struct FText& Reason);
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_548_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Admin_Player(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
