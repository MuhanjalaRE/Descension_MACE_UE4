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

// Function WBP_MapVoteList.WBP_MapVoteList_C.Get_TextBlock_0_Text_1
struct UWBP_MapVoteList_C_Get_TextBlock_0_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.UpdateWinningFlagOnWidgetBox
struct UWBP_MapVoteList_C_UpdateWinningFlagOnWidgetBox_Params
{
	class UPanelWidget*                                self2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	MidairCE_EMapVoteOption                            WinningOption;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.UpdateWinningFlagOnWidget
struct UWBP_MapVoteList_C_UpdateWinningFlagOnWidget_Params
{
	class UObject*                                     Object;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	MidairCE_EMapVoteOption                            WinningOption;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.Get_VoteNextMapText_Text_1
struct UWBP_MapVoteList_C_Get_VoteNextMapText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.VoteForOption
struct UWBP_MapVoteList_C_VoteForOption_Params
{
	class UWBP_MapVote_C*                              Option;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.BeginMapVote
struct UWBP_MapVoteList_C_BeginMapVote_Params
{
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.Construct
struct UWBP_MapVoteList_C_Construct_Params
{
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.Tick
struct UWBP_MapVoteList_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.OnWinningVoteUpdated
struct UWBP_MapVoteList_C_OnWinningVoteUpdated_Params
{
};

// Function WBP_MapVoteList.WBP_MapVoteList_C.ExecuteUbergraph_WBP_MapVoteList
struct UWBP_MapVoteList_C_ExecuteUbergraph_WBP_MapVoteList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
