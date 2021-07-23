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

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.RefreshMatchType
struct UWBP_MatchMakingStatus_C_RefreshMatchType_Params
{
};

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.DeleteMatchType
struct UWBP_MatchMakingStatus_C_DeleteMatchType_Params
{
	TEnumAsByte<MidairCE_EMAMatchType>                 MatchType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.AddMatchType
struct UWBP_MatchMakingStatus_C_AddMatchType_Params
{
	TEnumAsByte<MidairCE_EMAMatchType>                 MatchType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.UpdateMatchType
struct UWBP_MatchMakingStatus_C_UpdateMatchType_Params
{
	TEnumAsByte<MidairCE_EMAMatchType>                 MatchType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.GetVisibility_3
struct UWBP_MatchMakingStatus_C_GetVisibility_3_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.GetVisibility_2
struct UWBP_MatchMakingStatus_C_GetVisibility_2_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.GetVisibility_1
struct UWBP_MatchMakingStatus_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.Get_TextLobbyStatus_Text_1
struct UWBP_MatchMakingStatus_C_Get_TextLobbyStatus_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.Construct
struct UWBP_MatchMakingStatus_C_Construct_Params
{
};

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.OnLobbyChatUpdate_Event_1
struct UWBP_MatchMakingStatus_C_OnLobbyChatUpdate_Event_1_Params
{
	TEnumAsByte<MidairCE_EMAMatchType>                 MatchType;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<MidairCE_EMAChatMemberStateChange>     ChatMemberStateChange;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfo                                 PlayerInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.Tick
struct UWBP_MatchMakingStatus_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchMakingStatus.WBP_MatchMakingStatus_C.ExecuteUbergraph_WBP_MatchMakingStatus
struct UWBP_MatchMakingStatus_C_ExecuteUbergraph_WBP_MatchMakingStatus_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
