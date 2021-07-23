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

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Visibility for Team ID
struct UWBP_GameStatusBase_C_Get_Visibility_for_Team_ID_Params
{
	unsigned char                                      TeamId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMG_ESlateVisibility                               Out_Visibility;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get View Target Team ID
struct UWBP_GameStatusBase_C_Get_View_Target_Team_ID_Params
{
	unsigned char                                      TeamId;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Time Remaining Text
struct UWBP_GameStatusBase_C_Get_Time_Remaining_Text_Params
{
	struct FText                                       Text;                                                      // (Parm, OutParm)
};

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get FScore as Text
struct UWBP_GameStatusBase_C_Get_FScore_as_Text_Params
{
	float                                              Score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Round;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // (Parm, OutParm)
};

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Team B Score Text
struct UWBP_GameStatusBase_C_Get_Team_B_Score_Text_Params
{
	struct FText                                       Text;                                                      // (Parm, OutParm)
};

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Team A Score Text
struct UWBP_GameStatusBase_C_Get_Team_A_Score_Text_Params
{
	struct FText                                       Text;                                                      // (Parm, OutParm)
};

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Team B Score Pct
struct UWBP_GameStatusBase_C_Get_Team_B_Score_Pct_Params
{
	float                                              Pct;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Team A Score Pct
struct UWBP_GameStatusBase_C_Get_Team_A_Score_Pct_Params
{
	float                                              Pct;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Score by TeamID
struct UWBP_GameStatusBase_C_Get_Score_by_TeamID_Params
{
	unsigned char                                      TeamId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Score;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Get Score Pct by TeamID
struct UWBP_GameStatusBase_C_Get_Score_Pct_by_TeamID_Params
{
	unsigned char                                      TeamId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.Construct
struct UWBP_GameStatusBase_C_Construct_Params
{
};

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.CustomEvent_1
struct UWBP_GameStatusBase_C_CustomEvent_1_Params
{
};

// Function WBP_GameStatusBase.WBP_GameStatusBase_C.ExecuteUbergraph_WBP_GameStatusBase
struct UWBP_GameStatusBase_C_ExecuteUbergraph_WBP_GameStatusBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
