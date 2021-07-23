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

// Function WBP_Leaderboard.WBP_Leaderboard_C.Set Selected Player
struct UWBP_Leaderboard_C_Set_Selected_Player_Params
{
	class UWBP_LeaderBoardRow_C*                       Player_Row;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.SetLeaderboardSeasonAndGameMode
struct UWBP_Leaderboard_C_SetLeaderboardSeasonAndGameMode_Params
{
	struct FName                                       GameMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<MidairCE_EMALeaderboardRequest>        LeaderBoardRequestType;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.GetVisibility_1
struct UWBP_Leaderboard_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.Validate Entry Index
struct UWBP_Leaderboard_C_Validate_Entry_Index_Params
{
	int                                                Entry_Count;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.OnFail_5D0BD61349684A77B1F14281DB4BC02B
struct UWBP_Leaderboard_C_OnFail_5D0BD61349684A77B1F14281DB4BC02B_Params
{
	TArray<struct FSteamLeaderBoard>                   ScoreList;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                EntryCount;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.OnSuccess_5D0BD61349684A77B1F14281DB4BC02B
struct UWBP_Leaderboard_C_OnSuccess_5D0BD61349684A77B1F14281DB4BC02B_Params
{
	TArray<struct FSteamLeaderBoard>                   ScoreList;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                EntryCount;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.Populate
struct UWBP_Leaderboard_C_Populate_Params
{
	struct FName                                       GameMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<MidairCE_EMALeaderboardRequest>        LeaderBoardRequestType;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.PreConstruct
struct UWBP_Leaderboard_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.Construct
struct UWBP_Leaderboard_C_Construct_Params
{
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature
struct UWBP_Leaderboard_C_BndEvt__WBP_SelectableTextButton_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature_Params
{
	class UWBP_SelectableButton_C*                     Clicked_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_51_OnUserScrolledEvent__DelegateSignature
struct UWBP_Leaderboard_C_BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_51_OnUserScrolledEvent__DelegateSignature_Params
{
	float                                              CurrentOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.Cleanup Loop
struct UWBP_Leaderboard_C_Cleanup_Loop_Params
{
};

// Function WBP_Leaderboard.WBP_Leaderboard_C.ExecuteUbergraph_WBP_Leaderboard
struct UWBP_Leaderboard_C_ExecuteUbergraph_WBP_Leaderboard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
