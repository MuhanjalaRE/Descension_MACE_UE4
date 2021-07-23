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

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.ReserveSlot
struct UWBP_PartyPlayerRow_C_ReserveSlot_Params
{
	struct FSteamFriendInfo                            SteamFriend;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.IsEmpty
struct UWBP_PartyPlayerRow_C_IsEmpty_Params
{
	bool                                               IsEmptyReturn;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.SetPlayerState
struct UWBP_PartyPlayerRow_C_SetPlayerState_Params
{
	class ASteamBeaconPlayerState*                     SteamBeaconPlayerState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.IsInvited
struct UWBP_PartyPlayerRow_C_IsInvited_Params
{
	class ASteamBeaconPlayerState*                     BeaconPlayerStates;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ret;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.UpdatePlayerState
struct UWBP_PartyPlayerRow_C_UpdatePlayerState_Params
{
	class ASteamBeaconPlayerState*                     SteamBeaconPlayerState;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Clear
struct UWBP_PartyPlayerRow_C_Clear_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.HideParyFriendWidget
struct UWBP_PartyPlayerRow_C_HideParyFriendWidget_Params
{
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.CheckEmptySlot
struct UWBP_PartyPlayerRow_C_CheckEmptySlot_Params
{
	bool                                               IsALeader;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PartyPlayerRow.WBP_PartyPlayerRow_C.Unselect
struct UWBP_PartyPlayerRow_C_Unselect_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
