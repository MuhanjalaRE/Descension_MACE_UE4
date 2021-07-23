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

// Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.AddCategoryBinding
struct UWBP_PlayerExpressionPanel_C_AddCategoryBinding_Params
{
	struct FText                                       Category;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Display_Text;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.HandleEntry
struct UWBP_PlayerExpressionPanel_C_HandleEntry_Params
{
	class UWBP_PlayerExpressionEntry_C*                Expression;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.HandleFirstKeyPress
struct UWBP_PlayerExpressionPanel_C_HandleFirstKeyPress_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsAbortKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEventReply                                 Return_Value;                                              // (Parm, OutParm)
	bool                                               Handled;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.AddChatBinding
struct UWBP_PlayerExpressionPanel_C_AddChatBinding_Params
{
	struct FText                                       DisplayText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ExpressionIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
