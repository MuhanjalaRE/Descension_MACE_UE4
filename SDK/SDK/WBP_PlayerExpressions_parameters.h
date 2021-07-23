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

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.ProcessInput
struct UWBP_PlayerExpressions_C_ProcessInput_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsAbortKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Handled;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.FindCategory
struct UWBP_PlayerExpressions_C_FindCategory_Params
{
	struct FText                                       Category;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_PlayerExpressionPanel_C*                Return_Value;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.SwitchToCategory
struct UWBP_PlayerExpressions_C_SwitchToCategory_Params
{
	struct FText                                       Category;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.EndKeyHandling
struct UWBP_PlayerExpressions_C_EndKeyHandling_Params
{
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.FocusAndBegin
struct UWBP_PlayerExpressions_C_FocusAndBegin_Params
{
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.FindOrCreateCategory
struct UWBP_PlayerExpressions_C_FindOrCreateCategory_Params
{
	struct FText                                       Category;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_PlayerExpressionPanel_C*                Return_Value;                                              // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.PopulateSelf
struct UWBP_PlayerExpressions_C_PopulateSelf_Params
{
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.Clear
struct UWBP_PlayerExpressions_C_Clear_Params
{
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.OnKeyDown
struct UWBP_PlayerExpressions_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.Construct
struct UWBP_PlayerExpressions_C_Construct_Params
{
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.OnFocusLost
struct UWBP_PlayerExpressions_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_PlayerExpressions.WBP_PlayerExpressions_C.ExecuteUbergraph_WBP_PlayerExpressions
struct UWBP_PlayerExpressions_C_ExecuteUbergraph_WBP_PlayerExpressions_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
