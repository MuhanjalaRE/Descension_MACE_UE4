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

// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.UpdateDisplay
struct UWBP_ObjectivePrompt_C_UpdateDisplay_Params
{
};

// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.ObjectiveNotEmpty
struct UWBP_ObjectivePrompt_C_ObjectiveNotEmpty_Params
{
	struct FMidairObjectiveInfo                        MidairObjectiveInfo;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.OnPromptChanged
struct UWBP_ObjectivePrompt_C_OnPromptChanged_Params
{
};

// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.OnObjectiveCompleted
struct UWBP_ObjectivePrompt_C_OnObjectiveCompleted_Params
{
};

// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.ExecuteUbergraph_WBP_ObjectivePrompt
struct UWBP_ObjectivePrompt_C_ExecuteUbergraph_WBP_ObjectivePrompt_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
