// Name: mace, Version: 1.9.1.12285

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.AddCategoryBinding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Category                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Display_Text                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_PlayerExpressionPanel_C::AddCategoryBinding(const struct FText& Category, const struct FText& Key, const struct FText& Display_Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.AddCategoryBinding");
	}

	UWBP_PlayerExpressionPanel_C_AddCategoryBinding_Params params;
	params.Category = Category;
	params.Key = Key;
	params.Display_Text = Display_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.HandleEntry
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PlayerExpressionEntry_C* Expression                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerExpressionPanel_C::HandleEntry(class UWBP_PlayerExpressionEntry_C** Expression)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.HandleEntry");
	}

	UWBP_PlayerExpressionPanel_C_HandleEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Expression != nullptr)
		*Expression = params.Expression;

}


// Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.HandleFirstKeyPress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent               KeyEvent                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsAbortKey                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply             Return_Value                   (Parm, OutParm)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerExpressionPanel_C::HandleFirstKeyPress(const struct FKeyEvent& KeyEvent, const struct FKey& Key, bool IsAbortKey, struct FEventReply* Return_Value, bool* Handled)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.HandleFirstKeyPress");
	}

	UWBP_PlayerExpressionPanel_C_HandleFirstKeyPress_Params params;
	params.KeyEvent = KeyEvent;
	params.Key = Key;
	params.IsAbortKey = IsAbortKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
	if (Handled != nullptr)
		*Handled = params.Handled;

}


// Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.AddChatBinding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   DisplayText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            ExpressionIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerExpressionPanel_C::AddChatBinding(const struct FText& DisplayText, const struct FText& Key, int ExpressionIndex)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressionPanel.WBP_PlayerExpressionPanel_C.AddChatBinding");
	}

	UWBP_PlayerExpressionPanel_C_AddChatBinding_Params params;
	params.DisplayText = DisplayText;
	params.Key = Key;
	params.ExpressionIndex = ExpressionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
