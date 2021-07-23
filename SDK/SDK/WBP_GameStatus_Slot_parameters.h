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

// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Update
struct UWBP_GameStatus_Slot_C_Update_Params
{
	class APlayerState*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScorePct;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasFlag;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsLocalPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Get_ATeamScoreText_Text_1
struct UWBP_GameStatus_Slot_C_Get_ATeamScoreText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.GetVisibility_1
struct UWBP_GameStatus_Slot_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Get_TopPlayerIsLocalIcon_Visibility_1
struct UWBP_GameStatus_Slot_C_Get_TopPlayerIsLocalIcon_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Get_TopPlayerHasFlagIcon_Visibility_1
struct UWBP_GameStatus_Slot_C_Get_TopPlayerHasFlagIcon_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
