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

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.ReserveSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamFriendInfo        SteamFriend                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_PartyPlayerRow_C::ReserveSlot(const struct FSteamFriendInfo& SteamFriend)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.ReserveSlot");
	}

	UWBP_PartyPlayerRow_C_ReserveSlot_Params params;
	params.SteamFriend = SteamFriend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.IsEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEmptyReturn                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PartyPlayerRow_C::IsEmpty(bool* IsEmptyReturn)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.IsEmpty");
	}

	UWBP_PartyPlayerRow_C_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEmptyReturn != nullptr)
		*IsEmptyReturn = params.IsEmptyReturn;

}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.SetPlayerState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* SteamBeaconPlayerState         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyPlayerRow_C::SetPlayerState(class ASteamBeaconPlayerState* SteamBeaconPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.SetPlayerState");
	}

	UWBP_PartyPlayerRow_C_SetPlayerState_Params params;
	params.SteamBeaconPlayerState = SteamBeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.IsInvited
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* BeaconPlayerStates             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PartyPlayerRow_C::IsInvited(class ASteamBeaconPlayerState* BeaconPlayerStates, bool* ret)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.IsInvited");
	}

	UWBP_PartyPlayerRow_C_IsInvited_Params params;
	params.BeaconPlayerStates = BeaconPlayerStates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ret != nullptr)
		*ret = params.ret;

}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.UpdatePlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* SteamBeaconPlayerState         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyPlayerRow_C::UpdatePlayerState(class ASteamBeaconPlayerState* SteamBeaconPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.UpdatePlayerState");
	}

	UWBP_PartyPlayerRow_C_UpdatePlayerState_Params params;
	params.SteamBeaconPlayerState = SteamBeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PartyPlayerRow_C::Clear()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Clear");
	}

	UWBP_PartyPlayerRow_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.HideParyFriendWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PartyPlayerRow_C::HideParyFriendWidget()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.HideParyFriendWidget");
	}

	UWBP_PartyPlayerRow_C_HideParyFriendWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.CheckEmptySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsALeader                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PartyPlayerRow_C::CheckEmptySlot(bool IsALeader)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.CheckEmptySlot");
	}

	UWBP_PartyPlayerRow_C_CheckEmptySlot_Params params;
	params.IsALeader = IsALeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Unselect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_PartyPlayerRow_C::Unselect()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Unselect");
	}

	UWBP_PartyPlayerRow_C_Unselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
