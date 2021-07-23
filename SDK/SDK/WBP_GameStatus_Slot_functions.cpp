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

// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ScorePct                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HasFlag                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsLocalPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_GameStatus_Slot_C::Update(class APlayerState* Player, float ScorePct, bool HasFlag, bool IsLocalPlayer)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Update");
	}

	UWBP_GameStatus_Slot_C_Update_Params params;
	params.Player = Player;
	params.ScorePct = ScorePct;
	params.HasFlag = HasFlag;
	params.IsLocalPlayer = IsLocalPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Get_ATeamScoreText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_GameStatus_Slot_C::Get_ATeamScoreText_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Get_ATeamScoreText_Text_1");
	}

	UWBP_GameStatus_Slot_C_Get_ATeamScoreText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_GameStatus_Slot_C::GetVisibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.GetVisibility_1");
	}

	UWBP_GameStatus_Slot_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Get_TopPlayerIsLocalIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_GameStatus_Slot_C::Get_TopPlayerIsLocalIcon_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Get_TopPlayerIsLocalIcon_Visibility_1");
	}

	UWBP_GameStatus_Slot_C_Get_TopPlayerIsLocalIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Get_TopPlayerHasFlagIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_GameStatus_Slot_C::Get_TopPlayerHasFlagIcon_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_GameStatus_Slot.WBP_GameStatus_Slot_C.Get_TopPlayerHasFlagIcon_Visibility_1");
	}

	UWBP_GameStatus_Slot_C_Get_TopPlayerHasFlagIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
