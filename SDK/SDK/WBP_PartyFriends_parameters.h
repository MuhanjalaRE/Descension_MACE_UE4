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

// Function WBP_PartyFriends.WBP_PartyFriends_C.RefreshFriendsList
struct UWBP_PartyFriends_C_RefreshFriendsList_Params
{
	TArray<struct FSteamFriendInfo>                    InFriendsList;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_PartyFriends.WBP_PartyFriends_C.OnFailure_D0FE5EAE416AC33432519DA20EC04BD6
struct UWBP_PartyFriends_C_OnFailure_D0FE5EAE416AC33432519DA20EC04BD6_Params
{
	TArray<struct FSteamFriendInfo>                    Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_PartyFriends.WBP_PartyFriends_C.OnSuccess_D0FE5EAE416AC33432519DA20EC04BD6
struct UWBP_PartyFriends_C_OnSuccess_D0FE5EAE416AC33432519DA20EC04BD6_Params
{
	TArray<struct FSteamFriendInfo>                    Results;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_PartyFriends.WBP_PartyFriends_C.Tick
struct UWBP_PartyFriends_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PartyFriends.WBP_PartyFriends_C.UpdateFriendsList
struct UWBP_PartyFriends_C_UpdateFriendsList_Params
{
};

// Function WBP_PartyFriends.WBP_PartyFriends_C.Construct
struct UWBP_PartyFriends_C_Construct_Params
{
};

// Function WBP_PartyFriends.WBP_PartyFriends_C.ExecuteUbergraph_WBP_PartyFriends
struct UWBP_PartyFriends_C_ExecuteUbergraph_WBP_PartyFriends_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
