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

// WidgetBlueprintGeneratedClass WBP_Chat.WBP_Chat_C
// 0x0088 (FullSize[0x03A0] - InheritedSize[0x0318])
class UWBP_Chat_C : public UChatWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0318(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNativeWidgetHost*                           _Host;                                                     // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_1;                                                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_52;                                                 // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            ChatEntry;                                                 // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Message_Type;                                              // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_1;                                                 // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ToggleChatModeButton;                                      // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_11;                                            // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  VoteDisplay;                                               // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              Min_Fade_Time;                                             // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max_Fade_Time;                                             // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Temp_AlwaysShow;                                           // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U930[0x7];                                     // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_MidmatchVoteDisplay_C*                  MidmatchVoteDisplay;                                       // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxOpacity;                                                // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinOpacity;                                                // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RichBoxOpacityFactor;                                      // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasExistedForSomeTime;                                    // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3DUO[0x3];                                     // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_PunishVoteDisplay_C*                    PunishVoteDisplay;                                         // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MidmatchAdminVoteDisplay_C*             MidMatchAdminVoteDisplay;                                  // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Chat.WBP_Chat_C");
		}
		return ptr;
	}



	void SetChatOpacity(float InputPin);
	struct FText Get_ChatEntry_HintText_1();
	UMG_ESlateVisibility GetVisibility_1();
	UMG_ESlateVisibility Get_ToggleChatModeButton_Visibility_1();
	struct FText Get_Message_Type_Text_1();
	void BndEvt__ChatEntry_K2Node_ComponentBoundEvent_202_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void BndEvt__ChatEntry_K2Node_ComponentBoundEvent_138_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ReceiveMessage(const struct FString& PlayerName, const struct FLinearColor& NameColor, const struct FString& Message, const struct FLinearColor& MessageColor);
	void OnFocusPrompt();
	void BndEvt__ToggleChatModeButton_K2Node_ComponentBoundEvent_394_OnButtonPressedEvent__DelegateSignature();
	void Construct();
	void ShowVoteWidget(unsigned char VoteIndex);
	void DestroyVoteWidget();
	void SetBorderOpacity(class UBorder* InputPin, float InputAlpha);
	void StartPunVote();
	void EndPunVote();
	void WasKicked();
	void ShowAdminVoteWidget(unsigned char VoteIndex);
	void DestoryAdminVoteWidget();
	void ExecuteUbergraph_WBP_Chat(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
