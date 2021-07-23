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

// Function SteamParty.CreateSessionGameCallbackProxy.CreateSessionGame
struct UCreateSessionGameCallbackProxy_CreateSessionGame_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PublicConnections;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLAN;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InGameType;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoStartSession;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCreateSessionGameCallbackProxy*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.CreateSessionPartyCallbackProxy.CreateSessionParty
struct UCreateSessionPartyCallbackProxy_CreateSessionParty_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PublicConnections;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLAN;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InGameType;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoStartSession;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCreateSessionPartyCallbackProxy*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.DestroySessionGameCallbackProxy.DestroySessionGame
struct UDestroySessionGameCallbackProxy_DestroySessionGame_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDestroySessionGameCallbackProxy*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.DestroySessionPartyCallbackProxy.DestroySessionParty
struct UDestroySessionPartyCallbackProxy_DestroySessionParty_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDestroySessionPartyCallbackProxy*           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.EndSessionGameCallbackProxy.EndSessionGame
struct UEndSessionGameCallbackProxy_EndSessionGame_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEndSessionGameCallbackProxy*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.EndSessionPartyCallbackProxy.EndSessionParty
struct UEndSessionPartyCallbackProxy_EndSessionParty_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEndSessionPartyCallbackProxy*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.FindSessionsGameCallbackProxy.GetGameType
struct UFindSessionsGameCallbackProxy_GetGameType_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.FindSessionsGameCallbackProxy.FindSessionsGame
struct UFindSessionsGameCallbackProxy_FindSessionsGame_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLAN;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InGameType;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFindSessionsGameCallbackProxy*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.FindSessionsPartyCallbackProxy.GetGameType
struct UFindSessionsPartyCallbackProxy_GetGameType_Params
{
	struct FBlueprintSessionResult                     Result;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.FindSessionsPartyCallbackProxy.FindSessionsParty
struct UFindSessionsPartyCallbackProxy_FindSessionsParty_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxResults;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLAN;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InGameType;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFindSessionsPartyCallbackProxy*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.InviteSessionCallbackProxy.InviteSessionCallback
struct UInviteSessionCallbackProxy_InviteSessionCallback_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInviteSessionCallbackProxy*                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.JoinSessionGameCallbackProxy.JoinSessionGame
struct UJoinSessionGameCallbackProxy_JoinSessionGame_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     SearchResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UJoinSessionGameCallbackProxy*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.JoinSessionPartyCallbackProxy.JoinSessionParty
struct UJoinSessionPartyCallbackProxy_JoinSessionParty_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     SearchResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UJoinSessionPartyCallbackProxy*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.StartSessionGameCallbackProxy.StartSessionGame
struct UStartSessionGameCallbackProxy_StartSessionGame_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStartSessionGameCallbackProxy*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.StartSessionPartyCallbackProxy.StartSessionParty
struct UStartSessionPartyCallbackProxy_StartSessionParty_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStartSessionPartyCallbackProxy*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconClient.ServerSetHandshakeComplete
struct ASteamBeaconClient_ServerSetHandshakeComplete_Params
{
};

// Function SteamParty.SteamBeaconClient.OnRep_PlayerState
struct ASteamBeaconClient_OnRep_PlayerState_Params
{
};

// Function SteamParty.SteamBeaconClient.OnRep_LobbyState
struct ASteamBeaconClient_OnRep_LobbyState_Params
{
};

// Function SteamParty.SteamBeaconClient.OnPartyDisbanded
struct ASteamBeaconClient_OnPartyDisbanded_Params
{
};

// Function SteamParty.SteamBeaconClient.LeaveParty
struct ASteamBeaconClient_LeaveParty_Params
{
};

// Function SteamParty.SteamBeaconClient.KickFromParty
struct ASteamBeaconClient_KickFromParty_Params
{
	struct FUniqueNetIdRepl                            PlayerToKick;                                              // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Reason;                                                    // (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconClient.GetPlayerState
struct ASteamBeaconClient_GetPlayerState_Params
{
	class ASteamBeaconPlayerState*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconClient.GetPartyState
struct ASteamBeaconClient_GetPartyState_Params
{
	class ASteamBeaconState*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconClient.ClientJoinGameSession
struct ASteamBeaconClient_ClientJoinGameSession_Params
{
	struct FSteamBeaconSessionResult                   InSearchResult;                                            // (Parm, NativeAccessSpecifierPublic)
	bool                                               bIsPartyHostCreatingServer;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconClient.ClientJoinGameServer
struct ASteamBeaconClient_ClientJoinGameServer_Params
{
	struct FString                                     GameServerURL;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconClient.ChatToPartyMember
struct ASteamBeaconClient_ChatToPartyMember_Params
{
	class ASteamBeaconPlayerState*                     InPlayer;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.SendPartySessionInviteToFriend
struct USteamBeaconGameInstance_SendPartySessionInviteToFriend_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            FriendUniqueNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.SavePartyInfo
struct USteamBeaconGameInstance_SavePartyInfo_Params
{
};

// Function SteamParty.SteamBeaconGameInstance.RestorePartyInfo
struct USteamBeaconGameInstance_RestorePartyInfo_Params
{
};

// Function SteamParty.SteamBeaconGameInstance.RemoveSteamPlayerSession
struct USteamBeaconGameInstance_RemoveSteamPlayerSession_Params
{
	class APlayerState*                                InPlayerState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction SteamParty.SteamBeaconGameInstance.OnJoinGameSessionComplete__DelegateSignature
struct USteamBeaconGameInstance_OnJoinGameSessionComplete__DelegateSignature_Params
{
	bool                                               bWasSuccessful;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction SteamParty.SteamBeaconGameInstance.OnCreateGameSessionCompleted__DelegateSignature
struct USteamBeaconGameInstance_OnCreateGameSessionCompleted__DelegateSignature_Params
{
	bool                                               bWasSuccessful;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.JoinSessionFromSteamBeacon
struct USteamBeaconGameInstance_JoinSessionFromSteamBeacon_Params
{
	struct FSteamBeaconSessionResult                   InSearchResult;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bIsPartyHostCreatingServer;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.JoinPartyToSessionBP
struct USteamBeaconGameInstance_JoinPartyToSessionBP_Params
{
	struct FBlueprintSessionResult                     InSearchResult;                                            // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.JoinPartyToHostGameSession
struct USteamBeaconGameInstance_JoinPartyToHostGameSession_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.JoinFriendPartySession
struct USteamBeaconGameInstance_JoinFriendPartySession_Params
{
	struct FUniqueNetIdRepl                            FriendUniqueNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.IsPartyLeader
struct USteamBeaconGameInstance_IsPartyLeader_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.IsPartyFull
struct USteamBeaconGameInstance_IsPartyFull_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.IsInParty
struct USteamBeaconGameInstance_IsInParty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.HostParty
struct USteamBeaconGameInstance_HostParty_Params
{
	int                                                MaxPlayers;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.HostGame
struct USteamBeaconGameInstance_HostGame_Params
{
	int                                                MaxPlayers;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.GetSteamFriendAvatar
struct USteamBeaconGameInstance_GetSteamFriendAvatar_Params
{
	struct FUniqueNetIdRepl                            FriendUniqueNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamParty_ESteamAvatarSize                        InAvatarSize;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.GetPlayerIdString
struct USteamBeaconGameInstance_GetPlayerIdString_Params
{
	struct FUniqueNetIdRepl                            UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.GetPartyCount
struct USteamBeaconGameInstance_GetPartyCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.GetMaxPartyCount
struct USteamBeaconGameInstance_GetMaxPartyCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.GetHostCurrentGameSessionId
struct USteamBeaconGameInstance_GetHostCurrentGameSessionId_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.DumpDebugParty
struct USteamBeaconGameInstance_DumpDebugParty_Params
{
};

// Function SteamParty.SteamBeaconGameInstance.DisbandParty
struct USteamBeaconGameInstance_DisbandParty_Params
{
};

// Function SteamParty.SteamBeaconGameInstance.DirectTravelToGameSession
struct USteamBeaconGameInstance_DirectTravelToGameSession_Params
{
	struct FString                                     ServerURL;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.DestroyGameSession
struct USteamBeaconGameInstance_DestroyGameSession_Params
{
};

// Function SteamParty.SteamBeaconGameInstance.ClearPartyBeacons
struct USteamBeaconGameInstance_ClearPartyBeacons_Params
{
};

// Function SteamParty.SteamBeaconGameInstance.AddCustomPlayerStateData
struct USteamBeaconGameInstance_AddCustomPlayerStateData_Params
{
	class ASteamBeaconPlayerState*                     InPlayerState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGameInstance.AcceptPartyInvite
struct USteamBeaconGameInstance_AcceptPartyInvite_Params
{
};

// Function SteamParty.SteamBeaconGISubsystem.SendPartySessionInviteToFriend
struct USteamBeaconGISubsystem_SendPartySessionInviteToFriend_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            FriendUniqueNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.SavePartyInfo
struct USteamBeaconGISubsystem_SavePartyInfo_Params
{
};

// Function SteamParty.SteamBeaconGISubsystem.RestorePartyInfo
struct USteamBeaconGISubsystem_RestorePartyInfo_Params
{
};

// Function SteamParty.SteamBeaconGISubsystem.RemoveSteamPlayerSession
struct USteamBeaconGISubsystem_RemoveSteamPlayerSession_Params
{
	class APlayerState*                                InPlayerState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction SteamParty.SteamBeaconGISubsystem.OnJoinGameSessionComplete__DelegateSignature
struct USteamBeaconGISubsystem_OnJoinGameSessionComplete__DelegateSignature_Params
{
	bool                                               bWasSuccessful;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction SteamParty.SteamBeaconGISubsystem.OnCreateGameSessionCompleted__DelegateSignature
struct USteamBeaconGISubsystem_OnCreateGameSessionCompleted__DelegateSignature_Params
{
	bool                                               bWasSuccessful;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.JoinSessionFromSteamBeacon
struct USteamBeaconGISubsystem_JoinSessionFromSteamBeacon_Params
{
	struct FSteamBeaconSessionResult                   InSearchResult;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bIsPartyHostCreatingServer;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.JoinPartyToSessionBP
struct USteamBeaconGISubsystem_JoinPartyToSessionBP_Params
{
	struct FBlueprintSessionResult                     InSearchResult;                                            // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.JoinPartyToHostGameSession
struct USteamBeaconGISubsystem_JoinPartyToHostGameSession_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.JoinFriendPartySession
struct USteamBeaconGISubsystem_JoinFriendPartySession_Params
{
	struct FUniqueNetIdRepl                            FriendUniqueNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.IsPartyLeader
struct USteamBeaconGISubsystem_IsPartyLeader_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.IsPartyFull
struct USteamBeaconGISubsystem_IsPartyFull_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.IsInParty
struct USteamBeaconGISubsystem_IsInParty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.HostParty
struct USteamBeaconGISubsystem_HostParty_Params
{
	int                                                MaxPlayers;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.HostGame
struct USteamBeaconGISubsystem_HostGame_Params
{
	int                                                MaxPlayers;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.GetSteamFriendAvatar
struct USteamBeaconGISubsystem_GetSteamFriendAvatar_Params
{
	struct FUniqueNetIdRepl                            FriendUniqueNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamParty_ESteamAvatarSize                        InAvatarSize;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.GetPlayerIdString
struct USteamBeaconGISubsystem_GetPlayerIdString_Params
{
	struct FUniqueNetIdRepl                            UniqueNetId;                                               // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.GetPartyCount
struct USteamBeaconGISubsystem_GetPartyCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.GetMaxPartyCount
struct USteamBeaconGISubsystem_GetMaxPartyCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.GetHostCurrentGameSessionId
struct USteamBeaconGISubsystem_GetHostCurrentGameSessionId_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.DumpDebugParty
struct USteamBeaconGISubsystem_DumpDebugParty_Params
{
};

// Function SteamParty.SteamBeaconGISubsystem.DisbandParty
struct USteamBeaconGISubsystem_DisbandParty_Params
{
};

// Function SteamParty.SteamBeaconGISubsystem.DirectTravelToGameSession
struct USteamBeaconGISubsystem_DirectTravelToGameSession_Params
{
	struct FString                                     ServerURL;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconGISubsystem.DestroyGameSession
struct USteamBeaconGISubsystem_DestroyGameSession_Params
{
};

// Function SteamParty.SteamBeaconGISubsystem.ClearPartyBeacons
struct USteamBeaconGISubsystem_ClearPartyBeacons_Params
{
};

// Function SteamParty.SteamBeaconGISubsystem.AcceptPartyInvite
struct USteamBeaconGISubsystem_AcceptPartyInvite_Params
{
};

// Function SteamParty.SteamBeaconHost.GetPartyState
struct ASteamBeaconHost_GetPartyState_Params
{
	class ASteamBeaconState*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconHost.DisbandParty
struct ASteamBeaconHost_DisbandParty_Params
{
};

// Function SteamParty.SteamBeaconPlayerController.UnMutePlayerVoice
struct ASteamBeaconPlayerController_UnMutePlayerVoice_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerController.StopPlayerTalking
struct ASteamBeaconPlayerController_StopPlayerTalking_Params
{
};

// Function SteamParty.SteamBeaconPlayerController.StartPlayerTalking
struct ASteamBeaconPlayerController_StartPlayerTalking_Params
{
};

// Function SteamParty.SteamBeaconPlayerController.MutePlayerVoice
struct ASteamBeaconPlayerController_MutePlayerVoice_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerController.IsPlayerVoiceMuted
struct ASteamBeaconPlayerController_IsPlayerVoiceMuted_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerController.IsPlayerControllerUniqueIdMatch
struct ASteamBeaconPlayerController_IsPlayerControllerUniqueIdMatch_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerStateChanged
struct ASteamBeaconPlayerController_BPEvent_PlayerStateChanged_Params
{
	class ASteamBeaconPlayerState*                     InPlayerBeaconStateChanged;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerLeftParty
struct ASteamBeaconPlayerController_BPEvent_PlayerLeftParty_Params
{
	class ASteamBeaconPlayerState*                     InPlayerStateLeft;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerJoinedParty
struct ASteamBeaconPlayerController_BPEvent_PlayerJoinedParty_Params
{
	class ASteamBeaconPlayerState*                     InPlayerStateJoined;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyStateChanged
struct ASteamBeaconPlayerController_BPEvent_PartyStateChanged_Params
{
};

// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyOwnerChanged
struct ASteamBeaconPlayerController_BPEvent_PartyOwnerChanged_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                                // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyJoiningGame
struct ASteamBeaconPlayerController_BPEvent_PartyJoiningGame_Params
{
};

// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyInviteReceived
struct ASteamBeaconPlayerController_BPEvent_PartyInviteReceived_Params
{
	struct FString                                     FriendName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostReconnecting
struct ASteamBeaconPlayerController_BPEvent_PartyHostReconnecting_Params
{
};

// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostConnectionFailure
struct ASteamBeaconPlayerController_BPEvent_PartyHostConnectionFailure_Params
{
};

// Function SteamParty.SteamBeaconPlayerController.BPEvent_ChatMessageReceived
struct ASteamBeaconPlayerController_BPEvent_ChatMessageReceived_Params
{
	struct FPartyMessage                               InPartyMessage;                                            // (Parm, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerState.SpawnConvertedPlayerState
struct ASteamBeaconPlayerState_SpawnConvertedPlayerState_Params
{
	class APlayerState*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerState.ServerSetPlayerProfileLevel
struct ASteamBeaconPlayerState_ServerSetPlayerProfileLevel_Params
{
	int                                                InPlayerProfileLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerState.ServerSendPartyMessage
struct ASteamBeaconPlayerState_ServerSendPartyMessage_Params
{
	struct FPartyMessage                               ChatMessage;                                               // (Parm, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerState.SendPartyMessage
struct ASteamBeaconPlayerState_SendPartyMessage_Params
{
	struct FPartyMessage                               ChatMessage;                                               // (Parm, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerState.OnPartyMessageReceived
struct ASteamBeaconPlayerState_OnPartyMessageReceived_Params
{
	struct FPartyMessage                               InPartyMessage;                                            // (Parm, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerState.IsPlayerPartyLeader
struct ASteamBeaconPlayerState_IsPlayerPartyLeader_Params
{
	class APlayerState*                                InPlayerState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerState.IsPlayer
struct ASteamBeaconPlayerState_IsPlayer_Params
{
	class APlayerState*                                InPlayerState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerState.IsPartyLeader
struct ASteamBeaconPlayerState_IsPartyLeader_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerState.InitializePlayerStateData
struct ASteamBeaconPlayerState_InitializePlayerStateData_Params
{
};

// Function SteamParty.SteamBeaconPlayerState.GetPlayerUniqueId
struct ASteamBeaconPlayerState_GetPlayerUniqueId_Params
{
	struct FUniqueNetIdRepl                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconPlayerState.GetDisplayName
struct ASteamBeaconPlayerState_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconState.RemoveAllPlayers
struct ASteamBeaconState_RemoveAllPlayers_Params
{
};

// Function SteamParty.SteamBeaconState.OnRep_PartyOwnerUniqueId
struct ASteamBeaconState_OnRep_PartyOwnerUniqueId_Params
{
};

// Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated_NetRefresh
struct ASteamBeaconState_OnLobbyStateInfoUpdated_NetRefresh_Params
{
};

// Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated
struct ASteamBeaconState_OnLobbyStateInfoUpdated_Params
{
};

// Function SteamParty.SteamBeaconState.GetPartyPlayer
struct ASteamBeaconState_GetPartyPlayer_Params
{
	struct FUniqueNetIdRepl                            UniqueId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASteamBeaconPlayerState*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconState.GetPartyLeader
struct ASteamBeaconState_GetPartyLeader_Params
{
	class ASteamBeaconPlayerState*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamBeaconState.GetAllPartyMembers
struct ASteamBeaconState_GetAllPartyMembers_Params
{
	TArray<class ASteamBeaconPlayerState*>             InPlayerArray;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamGetFriendsCallbackProxy.RequestSteamFriendsList
struct USteamGetFriendsCallbackProxy_RequestSteamFriendsList_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USteamGetFriendsCallbackProxy*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamPartyComponent.UnMutePlayerVoice
struct USteamPartyComponent_UnMutePlayerVoice_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamPartyComponent.StopPlayerTalking
struct USteamPartyComponent_StopPlayerTalking_Params
{
};

// Function SteamParty.SteamPartyComponent.StartPlayerTalking
struct USteamPartyComponent_StartPlayerTalking_Params
{
};

// Function SteamParty.SteamPartyComponent.MutePlayerVoice
struct USteamPartyComponent_MutePlayerVoice_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamPartyComponent.IsPlayerVoiceMuted
struct USteamPartyComponent_IsPlayerVoiceMuted_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamPartyComponent.IsPlayerControllerUniqueIdMatch
struct USteamPartyComponent_IsPlayerControllerUniqueIdMatch_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamPartyComponent.GetPartyPlayer
struct USteamPartyComponent_GetPartyPlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASteamBeaconPlayerState*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamPartyComponent.GetPartyLeader
struct USteamPartyComponent_GetPartyLeader_Params
{
	class ASteamBeaconPlayerState*                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamPartyComponent.GetAllPartyMembers
struct USteamPartyComponent_GetAllPartyMembers_Params
{
	TArray<class ASteamBeaconPlayerState*>             InPlayerArray;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamPartyFunctionLibrary.SendSessionInviteToFriend
struct USteamPartyFunctionLibrary_SendSessionInviteToFriend_Params
{
	struct FUniqueNetIdRepl                            FriendUniqueNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsParty;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamPartyFunctionLibrary.JoinFriendPartySession
struct USteamPartyFunctionLibrary_JoinFriendPartySession_Params
{
	struct FUniqueNetIdRepl                            FriendUniqueNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamPartyFunctionLibrary.IsUniqueIdEqual
struct USteamPartyFunctionLibrary_IsUniqueIdEqual_Params
{
	struct FUniqueNetIdRepl                            FirstUniqueNetId;                                          // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            SecondUniqueNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamPartyFunctionLibrary.GetUniqueNetId
struct USteamPartyFunctionLibrary_GetUniqueNetId_Params
{
	class APlayerState*                                PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            ReturnValue;                                               // (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.SteamPartyFunctionLibrary.GetSteamFriendAvatar
struct USteamPartyFunctionLibrary_GetSteamFriendAvatar_Params
{
	struct FUniqueNetIdRepl                            FriendUniqueNetId;                                         // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamParty_ESteamAvatarSize                        InAvatarSize;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.UpdateSessionGameCallbackProxy.UpdateSessionGame
struct UUpdateSessionGameCallbackProxy_UpdateSessionGame_Params
{
	int                                                MaxPlayers;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PublicSearchable;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowInvites;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               JoinViaPresence;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               JoinViaPresenceFriendsOnly;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUpdateSessionGameCallbackProxy*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SteamParty.UpdateSessionPartyCallbackProxy.UpdateSessionParty
struct UUpdateSessionPartyCallbackProxy_UpdateSessionParty_Params
{
	int                                                MaxPlayers;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PublicSearchable;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowInvites;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               JoinViaPresence;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               JoinViaPresenceFriendsOnly;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUpdateSessionPartyCallbackProxy*            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
