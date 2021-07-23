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

// Function WBP_PlayerExpressionEntry.WBP_PlayerExpressionEntry_C.Get_ChatTextBox_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_PlayerExpressionEntry_C::Get_ChatTextBox_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressionEntry.WBP_PlayerExpressionEntry_C.Get_ChatTextBox_Text_1");
	}

	UWBP_PlayerExpressionEntry_C_Get_ChatTextBox_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_PlayerExpressionEntry.WBP_PlayerExpressionEntry_C.Get_KeyBox_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_PlayerExpressionEntry_C::Get_KeyBox_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerExpressionEntry.WBP_PlayerExpressionEntry_C.Get_KeyBox_Text_1");
	}

	UWBP_PlayerExpressionEntry_C_Get_KeyBox_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
