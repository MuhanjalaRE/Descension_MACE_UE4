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

// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.UpdateDisplay
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ObjectivePrompt_C::UpdateDisplay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.UpdateDisplay");
	}

	UWBP_ObjectivePrompt_C_UpdateDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.ObjectiveNotEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMidairObjectiveInfo    MidairObjectiveInfo            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_ObjectivePrompt_C::ObjectiveNotEmpty(const struct FMidairObjectiveInfo& MidairObjectiveInfo)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.ObjectiveNotEmpty");
	}

	UWBP_ObjectivePrompt_C_ObjectiveNotEmpty_Params params;
	params.MidairObjectiveInfo = MidairObjectiveInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.OnPromptChanged
// (Event, Public, BlueprintEvent)
void UWBP_ObjectivePrompt_C::OnPromptChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.OnPromptChanged");
	}

	UWBP_ObjectivePrompt_C_OnPromptChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.OnObjectiveCompleted
// (Event, Public, BlueprintEvent)
void UWBP_ObjectivePrompt_C::OnObjectiveCompleted()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.OnObjectiveCompleted");
	}

	UWBP_ObjectivePrompt_C_OnObjectiveCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.ExecuteUbergraph_WBP_ObjectivePrompt
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ObjectivePrompt_C::ExecuteUbergraph_WBP_ObjectivePrompt(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ObjectivePrompt.WBP_ObjectivePrompt_C.ExecuteUbergraph_WBP_ObjectivePrompt");
	}

	UWBP_ObjectivePrompt_C_ExecuteUbergraph_WBP_ObjectivePrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
