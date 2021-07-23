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

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.GetMaxValue2_1
struct UWBP_MatchHistoryPanel_C_GetMaxValue2_1_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.GetMaxValue1_1
struct UWBP_MatchHistoryPanel_C_GetMaxValue1_1_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.UpdateStatistics
struct UWBP_MatchHistoryPanel_C_UpdateStatistics_Params
{
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.ResetStatistics
struct UWBP_MatchHistoryPanel_C_ResetStatistics_Params
{
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.GetStatistics
struct UWBP_MatchHistoryPanel_C_GetStatistics_Params
{
	struct FMatchHistory                               MatchHistory;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.GetVisibility_1
struct UWBP_MatchHistoryPanel_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.OnFocusReceived
struct UWBP_MatchHistoryPanel_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.Set Selected Match
struct UWBP_MatchHistoryPanel_C_Set_Selected_Match_Params
{
	class UWBP_MatchHistoryRow_C*                      Matchr_Row;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.OnFail_AF56C4AE43AE5AC8993AB38B3825525B
struct UWBP_MatchHistoryPanel_C_OnFail_AF56C4AE43AE5AC8993AB38B3825525B_Params
{
	TArray<struct FMatchHistory>                       MatchHistory;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.OnSuccess_AF56C4AE43AE5AC8993AB38B3825525B
struct UWBP_MatchHistoryPanel_C_OnSuccess_AF56C4AE43AE5AC8993AB38B3825525B_Params
{
	TArray<struct FMatchHistory>                       MatchHistory;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.OnGetMatchHistory
struct UWBP_MatchHistoryPanel_C_OnGetMatchHistory_Params
{
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_68_OnSelectionChangedEvent__DelegateSignature
struct UWBP_MatchHistoryPanel_C_BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_68_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
struct UWBP_MatchHistoryPanel_C_BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params
{
	float                                              CurrentOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.Construct
struct UWBP_MatchHistoryPanel_C_Construct_Params
{
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.Cleanup Loop
struct UWBP_MatchHistoryPanel_C_Cleanup_Loop_Params
{
};

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.ExecuteUbergraph_WBP_MatchHistoryPanel
struct UWBP_MatchHistoryPanel_C_ExecuteUbergraph_WBP_MatchHistoryPanel_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
