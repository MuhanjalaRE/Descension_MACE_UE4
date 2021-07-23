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

// Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.Get_ScoreDisplay_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_StatDisplay_Scoreboard_C::Get_ScoreDisplay_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.Get_ScoreDisplay_Text_1");
	}

	UWBP_StatDisplay_Scoreboard_C_Get_ScoreDisplay_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_StatDisplay_Scoreboard_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.PreConstruct");
	}

	UWBP_StatDisplay_Scoreboard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.ExecuteUbergraph_WBP_StatDisplay_Scoreboard
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StatDisplay_Scoreboard_C::ExecuteUbergraph_WBP_StatDisplay_Scoreboard(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StatDisplay_Scoreboard.WBP_StatDisplay_Scoreboard_C.ExecuteUbergraph_WBP_StatDisplay_Scoreboard");
	}

	UWBP_StatDisplay_Scoreboard_C_ExecuteUbergraph_WBP_StatDisplay_Scoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
