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

// Function BP_MAHUD.BP_MAHUD_C.ProcessPlayerExpressionInput
struct ABP_MAHUD_C_ProcessPlayerExpressionInput_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsAbortKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MAHUD.BP_MAHUD_C.ReceiveBeginPlay
struct ABP_MAHUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_MAHUD.BP_MAHUD_C.StartQuickVoice
struct ABP_MAHUD_C_StartQuickVoice_Params
{
};

// Function BP_MAHUD.BP_MAHUD_C.BP_OnScoreApplied
struct ABP_MAHUD_C_BP_OnScoreApplied_Params
{
	struct FText                                       ScoreText;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MAHUD.BP_MAHUD_C.ExecuteUbergraph_BP_MAHUD
struct ABP_MAHUD_C_ExecuteUbergraph_BP_MAHUD_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
