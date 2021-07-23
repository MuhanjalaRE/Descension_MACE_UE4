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

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.GetMaxValue2_1
struct UWBP_ProgressionEventOverlay_C_GetMaxValue2_1_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.GetMaxValue1_1
struct UWBP_ProgressionEventOverlay_C_GetMaxValue1_1_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.GetValue2_1
struct UWBP_ProgressionEventOverlay_C_GetValue2_1_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.GetValue1_1
struct UWBP_ProgressionEventOverlay_C_GetValue1_1_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Get_XPProgressText_Text_1
struct UWBP_ProgressionEventOverlay_C_Get_XPProgressText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Get_NextLevelText_Text_1
struct UWBP_ProgressionEventOverlay_C_Get_NextLevelText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Get_CurrentLevelText_Text_1
struct UWBP_ProgressionEventOverlay_C_Get_CurrentLevelText_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Tick
struct UWBP_ProgressionEventOverlay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Start
struct UWBP_ProgressionEventOverlay_C_Start_Params
{
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Construct
struct UWBP_ProgressionEventOverlay_C_Construct_Params
{
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.OnXPGiven
struct UWBP_ProgressionEventOverlay_C_OnXPGiven_Params
{
	int                                                StartingLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StartingXP;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                XPAdded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                XPForNextLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Start Next Level
struct UWBP_ProgressionEventOverlay_C_Start_Next_Level_Params
{
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.NewItemGiven
struct UWBP_ProgressionEventOverlay_C_NewItemGiven_Params
{
	class UClass*                                      LootClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.Destruct
struct UWBP_ProgressionEventOverlay_C_Destruct_Params
{
};

// Function WBP_ProgressionEventOverlay.WBP_ProgressionEventOverlay_C.ExecuteUbergraph_WBP_ProgressionEventOverlay
struct UWBP_ProgressionEventOverlay_C_ExecuteUbergraph_WBP_ProgressionEventOverlay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
