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

// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.GetFlagStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_GameStatus_TR_C::GetFlagStatus()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.GetFlagStatus");
	}

	UWBP_GameStatus_TR_C_GetFlagStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_ATeamSco
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_GameStatus_TR_C::Get_ATeamSco()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_ATeamSco");
	}

	UWBP_GameStatus_TR_C_Get_ATeamSco_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_GameStatus_TR_C::GetText_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.GetText_1");
	}

	UWBP_GameStatus_TR_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_PlayerIsTeamA_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_GameStatus_TR_C::Get_PlayerIsTeamA_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_PlayerIsTeamA_Visibility_1");
	}

	UWBP_GameStatus_TR_C_Get_PlayerIsTeamA_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_PlayerIsTeamB_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_GameStatus_TR_C::Get_PlayerIsTeamB_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_PlayerIsTeamB_Visibility_1");
	}

	UWBP_GameStatus_TR_C_Get_PlayerIsTeamB_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_ATeamScoreBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_GameStatus_TR_C::Get_ATeamScoreBar_Percent_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_ATeamScoreBar_Percent_1");
	}

	UWBP_GameStatus_TR_C_Get_ATeamScoreBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_BTeamScoreBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_GameStatus_TR_C::Get_BTeamScoreBar_Percent_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_BTeamScoreBar_Percent_1");
	}

	UWBP_GameStatus_TR_C_Get_BTeamScoreBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_BTeamScoreText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_GameStatus_TR_C::Get_BTeamScoreText_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_BTeamScoreText_Text_1");
	}

	UWBP_GameStatus_TR_C_Get_BTeamScoreText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_ATeamScoreText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_GameStatus_TR_C::Get_ATeamScoreText_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_ATeamScoreText_Text_1");
	}

	UWBP_GameStatus_TR_C_Get_ATeamScoreText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_TimeLeftText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_GameStatus_TR_C::Get_TimeLeftText_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Get_TimeLeftText_Text_1");
	}

	UWBP_GameStatus_TR_C_Get_TimeLeftText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_GameStatus_TR_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.Construct");
	}

	UWBP_GameStatus_TR_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.ExecuteUbergraph_WBP_GameStatus_TR
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameStatus_TR_C::ExecuteUbergraph_WBP_GameStatus_TR(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_TR.WBP_GameStatus_TR_C.ExecuteUbergraph_WBP_GameStatus_TR");
	}

	UWBP_GameStatus_TR_C_ExecuteUbergraph_WBP_GameStatus_TR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
