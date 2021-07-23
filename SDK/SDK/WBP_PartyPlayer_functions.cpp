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

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdateMatchTypes
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PartyPlayer_C::UpdateMatchTypes()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdateMatchTypes");
	}

	UWBP_PartyPlayer_C_UpdateMatchTypes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.Get_TextFindGame_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_PartyPlayer_C::Get_TextFindGame_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.Get_TextFindGame_Text_1");
	}

	UWBP_PartyPlayer_C_Get_TextFindGame_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.IsLeader
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PartyPlayer_C::IsLeader(bool* Return)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.IsLeader");
	}

	UWBP_PartyPlayer_C_IsLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.IsUpdated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* BeaconPlayerState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PartyPlayer_C::IsUpdated(class ASteamBeaconPlayerState* BeaconPlayerState, bool* Return)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.IsUpdated");
	}

	UWBP_PartyPlayer_C_IsUpdated_Params params;
	params.BeaconPlayerState = BeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdateEmptySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* BeaconPlayerState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyPlayer_C::UpdateEmptySlot(class ASteamBeaconPlayerState* BeaconPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdateEmptySlot");
	}

	UWBP_PartyPlayer_C_UpdateEmptySlot_Params params;
	params.BeaconPlayerState = BeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdateReservedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* BeaconPlayerState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PartyPlayer_C::UpdateReservedSlot(class ASteamBeaconPlayerState* BeaconPlayerState, bool* Return)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdateReservedSlot");
	}

	UWBP_PartyPlayer_C_UpdateReservedSlot_Params params;
	params.BeaconPlayerState = BeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.LeftPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* SteamBeaconPlayerState         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyPlayer_C::LeftPlayer(class ASteamBeaconPlayerState* SteamBeaconPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.LeftPlayer");
	}

	UWBP_PartyPlayer_C_LeftPlayer_Params params;
	params.SteamBeaconPlayerState = SteamBeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdateCurrentPatryStatus
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PartyPlayer_C::UpdateCurrentPatryStatus()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdateCurrentPatryStatus");
	}

	UWBP_PartyPlayer_C_UpdateCurrentPatryStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.ClearAllMembers
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PartyPlayer_C::ClearAllMembers()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.ClearAllMembers");
	}

	UWBP_PartyPlayer_C_ClearAllMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.HideParyFriendWidgets
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PartyPlayer_C::HideParyFriendWidgets()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.HideParyFriendWidgets");
	}

	UWBP_PartyPlayer_C_HideParyFriendWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.PartyStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PartyPlayer_C::PartyStateChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.PartyStateChanged");
	}

	UWBP_PartyPlayer_C_PartyStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdatePartyPanel
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PartyPlayer_C::UpdatePartyPanel()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdatePartyPanel");
	}

	UWBP_PartyPlayer_C_UpdatePartyPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.SetSelectedPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PartyPlayerRow_C*   PartyPlayerRow                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyPlayer_C::SetSelectedPlayer(class UWBP_PartyPlayerRow_C* PartyPlayerRow)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.SetSelectedPlayer");
	}

	UWBP_PartyPlayer_C_SetSelectedPlayer_Params params;
	params.PartyPlayerRow = PartyPlayerRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PartyPlayer_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.Construct");
	}

	UWBP_PartyPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.BndEvt__ButtonFindGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_PartyPlayer_C::BndEvt__ButtonFindGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.BndEvt__ButtonFindGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_PartyPlayer_C_BndEvt__ButtonFindGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnLobbyChatUpdate_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<MidairCE_EMAMatchType> MatchType                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<MidairCE_EMAChatMemberStateChange> ChatMemberStateChange          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerInfo             PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_PartyPlayer_C::OnLobbyChatUpdate_Event_1(TEnumAsByte<MidairCE_EMAMatchType> MatchType, TEnumAsByte<MidairCE_EMAChatMemberStateChange> ChatMemberStateChange, const struct FPlayerInfo& PlayerInfo)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnLobbyChatUpdate_Event_1");
	}

	UWBP_PartyPlayer_C_OnLobbyChatUpdate_Event_1_Params params;
	params.MatchType = MatchType;
	params.ChatMemberStateChange = ChatMemberStateChange;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.BndEvt__ButtonMatchOptions_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_PartyPlayer_C::BndEvt__ButtonMatchOptions_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.BndEvt__ButtonMatchOptions_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_PartyPlayer_C_BndEvt__ButtonMatchOptions_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnPartyPlayerStateChangedDelegate
// (BlueprintCallable, BlueprintEvent)
void UWBP_PartyPlayer_C::OnPartyPlayerStateChangedDelegate()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnPartyPlayerStateChangedDelegate");
	}

	UWBP_PartyPlayer_C_OnPartyPlayerStateChangedDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnPartyPlayerClearDelegate
// (BlueprintCallable, BlueprintEvent)
void UWBP_PartyPlayer_C::OnPartyPlayerClearDelegate()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnPartyPlayerClearDelegate");
	}

	UWBP_PartyPlayer_C_OnPartyPlayerClearDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnPartyPlayerJoinDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* SteamBeaconPlayerState         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyPlayer_C::OnPartyPlayerJoinDelegate(class ASteamBeaconPlayerState* SteamBeaconPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnPartyPlayerJoinDelegate");
	}

	UWBP_PartyPlayer_C_OnPartyPlayerJoinDelegate_Params params;
	params.SteamBeaconPlayerState = SteamBeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnPartyPlayerLeftDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* SteamBeaconPlayerState         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyPlayer_C::OnPartyPlayerLeftDelegate(class ASteamBeaconPlayerState* SteamBeaconPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnPartyPlayerLeftDelegate");
	}

	UWBP_PartyPlayer_C_OnPartyPlayerLeftDelegate_Params params;
	params.SteamBeaconPlayerState = SteamBeaconPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.ExecuteUbergraph_WBP_PartyPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyPlayer_C::ExecuteUbergraph_WBP_PartyPlayer(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.ExecuteUbergraph_WBP_PartyPlayer");
	}

	UWBP_PartyPlayer_C_ExecuteUbergraph_WBP_PartyPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayer.WBP_PartyPlayer_C.On Player Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyPlayer_C::On_Player_Selected__DelegateSignature(class APlayerState* Player)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayer.WBP_PartyPlayer_C.On Player Selected__DelegateSignature");
	}

	UWBP_PartyPlayer_C_On_Player_Selected__DelegateSignature_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
