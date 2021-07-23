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

// WidgetBlueprintGeneratedClass WBP_KickPlayer.WBP_KickPlayer_C
// 0x0080 (FullSize[0x02B8] - InheritedSize[0x0238])
class UWBP_KickPlayer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     CancelButton;                                              // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ImgAvatar;                                                 // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     OkButton;                                                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextButton;                                                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextMessage;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextPlayerName;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextTitle;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnKick;                                                    // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       PlayerName;                                                // 0x0288(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               RemoveWhenClose;                                           // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               LeaveParty;                                                // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_R875[0x6];                                     // 0x02A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLeave;                                                   // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KickPlayer.WBP_KickPlayer_C");
		}
		return ptr;
	}



	void SetPlayerData(const struct FUniqueNetIdRepl& UniqueNetIdRepl, const struct FText& PlayerName);
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_KickPlayer(int EntryPoint);
	void OnLeave__DelegateSignature();
	void OnKick__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
