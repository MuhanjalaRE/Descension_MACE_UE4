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

// Function WBP_ConfirmWithMatchTimer.WBP_ConfirmWithMatchTimer_C.GetDynamicText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   PromptText                     (Parm, OutParm)
void UWBP_ConfirmWithMatchTimer_C::GetDynamicText(struct FText* PromptText)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ConfirmWithMatchTimer.WBP_ConfirmWithMatchTimer_C.GetDynamicText");
	}

	UWBP_ConfirmWithMatchTimer_C_GetDynamicText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PromptText != nullptr)
		*PromptText = params.PromptText;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
