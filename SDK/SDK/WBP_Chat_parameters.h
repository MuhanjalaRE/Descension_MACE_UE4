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
// Parameters
//---------------------------------------------------------------------------

// Function WBP_Chat.WBP_Chat_C.SetChatOpacity
struct UWBP_Chat_C_SetChatOpacity_Params
{
	float                                              InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Chat.WBP_Chat_C.Get_ChatEntry_HintText_1
struct UWBP_Chat_C_Get_ChatEntry_HintText_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_Chat.WBP_Chat_C.GetVisibility_1
struct UWBP_Chat_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Chat.WBP_Chat_C.Get_ToggleChatModeButton_Visibility_1
struct UWBP_Chat_C_Get_ToggleChatModeButton_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Chat.WBP_Chat_C.Get_Message Type_Text_1
struct UWBP_Chat_C_Get_Message_Type_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_Chat.WBP_Chat_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_202_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_Chat_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_202_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Chat.WBP_Chat_C.BndEvt__ChatEntry_K2Node_ComponentBoundEvent_138_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_Chat_C_BndEvt__ChatEntry_K2Node_ComponentBoundEvent_138_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_Chat.WBP_Chat_C.Tick
struct UWBP_Chat_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Chat.WBP_Chat_C.ReceiveMessage
struct UWBP_Chat_C_ReceiveMessage_Params
{
	struct FString                                     PlayerName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                                NameColor;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                                MessageColor;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Chat.WBP_Chat_C.OnFocusPrompt
struct UWBP_Chat_C_OnFocusPrompt_Params
{
};

// Function WBP_Chat.WBP_Chat_C.BndEvt__ToggleChatModeButton_K2Node_ComponentBoundEvent_394_OnButtonPressedEvent__DelegateSignature
struct UWBP_Chat_C_BndEvt__ToggleChatModeButton_K2Node_ComponentBoundEvent_394_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_Chat.WBP_Chat_C.Construct
struct UWBP_Chat_C_Construct_Params
{
};

// Function WBP_Chat.WBP_Chat_C.ShowVoteWidget
struct UWBP_Chat_C_ShowVoteWidget_Params
{
	unsigned char                                      VoteIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Chat.WBP_Chat_C.DestroyVoteWidget
struct UWBP_Chat_C_DestroyVoteWidget_Params
{
};

// Function WBP_Chat.WBP_Chat_C.SetBorderOpacity
struct UWBP_Chat_C_SetBorderOpacity_Params
{
	class UBorder*                                     InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InputAlpha;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Chat.WBP_Chat_C.StartPunVote
struct UWBP_Chat_C_StartPunVote_Params
{
};

// Function WBP_Chat.WBP_Chat_C.EndPunVote
struct UWBP_Chat_C_EndPunVote_Params
{
};

// Function WBP_Chat.WBP_Chat_C.WasKicked
struct UWBP_Chat_C_WasKicked_Params
{
};

// Function WBP_Chat.WBP_Chat_C.ShowAdminVoteWidget
struct UWBP_Chat_C_ShowAdminVoteWidget_Params
{
	unsigned char                                      VoteIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Chat.WBP_Chat_C.DestoryAdminVoteWidget
struct UWBP_Chat_C_DestoryAdminVoteWidget_Params
{
};

// Function WBP_Chat.WBP_Chat_C.ExecuteUbergraph_WBP_Chat
struct UWBP_Chat_C_ExecuteUbergraph_WBP_Chat_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
