#pragma once

// Name: mace, Version: 1.9.1.12285


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdateMatchTypes
struct UWBP_PartyPlayer_C_UpdateMatchTypes_Params
{
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.Get_TextFindGame_Text_1
struct UWBP_PartyPlayer_C_Get_TextFindGame_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.IsLeader
struct UWBP_PartyPlayer_C_IsLeader_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.IsUpdated
struct UWBP_PartyPlayer_C_IsUpdated_Params
{
	class ASteamBeaconPlayerState*                     BeaconPlayerState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdateEmptySlot
struct UWBP_PartyPlayer_C_UpdateEmptySlot_Params
{
	class ASteamBeaconPlayerState*                     BeaconPlayerState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdateReservedSlot
struct UWBP_PartyPlayer_C_UpdateReservedSlot_Params
{
	class ASteamBeaconPlayerState*                     BeaconPlayerState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.LeftPlayer
struct UWBP_PartyPlayer_C_LeftPlayer_Params
{
	class ASteamBeaconPlayerState*                     SteamBeaconPlayerState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdateCurrentPatryStatus
struct UWBP_PartyPlayer_C_UpdateCurrentPatryStatus_Params
{
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.ClearAllMembers
struct UWBP_PartyPlayer_C_ClearAllMembers_Params
{
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.HideParyFriendWidgets
struct UWBP_PartyPlayer_C_HideParyFriendWidgets_Params
{
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.PartyStateChanged
struct UWBP_PartyPlayer_C_PartyStateChanged_Params
{
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.UpdatePartyPanel
struct UWBP_PartyPlayer_C_UpdatePartyPanel_Params
{
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.SetSelectedPlayer
struct UWBP_PartyPlayer_C_SetSelectedPlayer_Params
{
	class UWBP_PartyPlayerRow_C*                       PartyPlayerRow;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.Construct
struct UWBP_PartyPlayer_C_Construct_Params
{
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.BndEvt__ButtonFindGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UWBP_PartyPlayer_C_BndEvt__ButtonFindGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnLobbyChatUpdate_Event_1
struct UWBP_PartyPlayer_C_OnLobbyChatUpdate_Event_1_Params
{
	TEnumAsByte<MidairCE_EMAMatchType>                 MatchType;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<MidairCE_EMAChatMemberStateChange>     ChatMemberStateChange;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerInfo                                 PlayerInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.BndEvt__ButtonMatchOptions_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature
struct UWBP_PartyPlayer_C_BndEvt__ButtonMatchOptions_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnPartyPlayerStateChangedDelegate
struct UWBP_PartyPlayer_C_OnPartyPlayerStateChangedDelegate_Params
{
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnPartyPlayerClearDelegate
struct UWBP_PartyPlayer_C_OnPartyPlayerClearDelegate_Params
{
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnPartyPlayerJoinDelegate
struct UWBP_PartyPlayer_C_OnPartyPlayerJoinDelegate_Params
{
	class ASteamBeaconPlayerState*                     SteamBeaconPlayerState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.OnPartyPlayerLeftDelegate
struct UWBP_PartyPlayer_C_OnPartyPlayerLeftDelegate_Params
{
	class ASteamBeaconPlayerState*                     SteamBeaconPlayerState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.ExecuteUbergraph_WBP_PartyPlayer
struct UWBP_PartyPlayer_C_ExecuteUbergraph_WBP_PartyPlayer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyPlayer.WBP_PartyPlayer_C.On Player Selected__DelegateSignature
struct UWBP_PartyPlayer_C_On_Player_Selected__DelegateSignature_Params
{
	class APlayerState*                                Player;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
