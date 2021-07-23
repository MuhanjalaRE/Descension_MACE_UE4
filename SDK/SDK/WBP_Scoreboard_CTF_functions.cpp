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

// Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.GetForegroundColor_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWBP_Scoreboard_CTF_C::GetForegroundColor_2()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.GetForegroundColor_2");
	}

	UWBP_Scoreboard_CTF_C_GetForegroundColor_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.GetForegroundColor_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWBP_Scoreboard_CTF_C::GetForegroundColor_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.GetForegroundColor_1");
	}

	UWBP_Scoreboard_CTF_C_GetForegroundColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.InitCustomPinnedStats
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Scoreboard_CTF_C::InitCustomPinnedStats()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.InitCustomPinnedStats");
	}

	UWBP_Scoreboard_CTF_C_InitCustomPinnedStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.UpdatePlayerStatBox
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Scoreboard_CTF_C::UpdatePlayerStatBox()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.UpdatePlayerStatBox");
	}

	UWBP_Scoreboard_CTF_C_UpdatePlayerStatBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Scoreboard_CTF_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.Construct");
	}

	UWBP_Scoreboard_CTF_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Scoreboard_CTF_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.Tick");
	}

	UWBP_Scoreboard_CTF_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.ExecuteUbergraph_WBP_Scoreboard_CTF
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Scoreboard_CTF_C::ExecuteUbergraph_WBP_Scoreboard_CTF(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Scoreboard_CTF.WBP_Scoreboard_CTF_C.ExecuteUbergraph_WBP_Scoreboard_CTF");
	}

	UWBP_Scoreboard_CTF_C_ExecuteUbergraph_WBP_Scoreboard_CTF_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
