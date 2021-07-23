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

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_PlayerIsTeamA_Visibility_1
struct UWBP_GameStatus_CTF_C_Get_PlayerIsTeamA_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_PlayerIsTeamB_Visibility_1
struct UWBP_GameStatus_CTF_C_Get_PlayerIsTeamB_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_ATeamScoreBar_Percent_1
struct UWBP_GameStatus_CTF_C_Get_ATeamScoreBar_Percent_1_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_BTeamScoreBar_Percent_1
struct UWBP_GameStatus_CTF_C_Get_BTeamScoreBar_Percent_1_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_BTeamScoreText_Text_1
struct UWBP_GameStatus_CTF_C_Get_BTeamScoreText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_ATeamScoreText_Text_1
struct UWBP_GameStatus_CTF_C_Get_ATeamScoreText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Get_TimeLeftText_Text_1
struct UWBP_GameStatus_CTF_C_Get_TimeLeftText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.GetFlagBStatus
struct UWBP_GameStatus_CTF_C_GetFlagBStatus_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.GetFlagAStatus
struct UWBP_GameStatus_CTF_C_GetFlagAStatus_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.GetFlagStatus
struct UWBP_GameStatus_CTF_C_GetFlagStatus_Params
{
	unsigned char                                      TeamId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.Construct
struct UWBP_GameStatus_CTF_C_Construct_Params
{
};

// Function WBP_GameStatus_CTF.WBP_GameStatus_CTF_C.ExecuteUbergraph_WBP_GameStatus_CTF
struct UWBP_GameStatus_CTF_C_ExecuteUbergraph_WBP_GameStatus_CTF_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
