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

// Function SteamParty.CreateSessionGameCallbackProxy.CreateSessionGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InGameType                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AutoStartSession               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateSessionGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCreateSessionGameCallbackProxy* UCreateSessionGameCallbackProxy::STATIC_CreateSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType, bool AutoStartSession)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.CreateSessionGameCallbackProxy.CreateSessionGame");
	}

	UCreateSessionGameCallbackProxy_CreateSessionGame_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;
	params.InGameType = InGameType;
	params.AutoStartSession = AutoStartSession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.CreateSessionPartyCallbackProxy.CreateSessionParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InGameType                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AutoStartSession               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCreateSessionPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCreateSessionPartyCallbackProxy* UCreateSessionPartyCallbackProxy::STATIC_CreateSessionParty(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType, bool AutoStartSession)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.CreateSessionPartyCallbackProxy.CreateSessionParty");
	}

	UCreateSessionPartyCallbackProxy_CreateSessionParty_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;
	params.InGameType = InGameType;
	params.AutoStartSession = AutoStartSession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.DestroySessionGameCallbackProxy.DestroySessionGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDestroySessionGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDestroySessionGameCallbackProxy* UDestroySessionGameCallbackProxy::STATIC_DestroySessionGame(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.DestroySessionGameCallbackProxy.DestroySessionGame");
	}

	UDestroySessionGameCallbackProxy_DestroySessionGame_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.DestroySessionPartyCallbackProxy.DestroySessionParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDestroySessionPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDestroySessionPartyCallbackProxy* UDestroySessionPartyCallbackProxy::STATIC_DestroySessionParty(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.DestroySessionPartyCallbackProxy.DestroySessionParty");
	}

	UDestroySessionPartyCallbackProxy_DestroySessionParty_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.EndSessionGameCallbackProxy.EndSessionGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEndSessionGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEndSessionGameCallbackProxy* UEndSessionGameCallbackProxy::STATIC_EndSessionGame(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.EndSessionGameCallbackProxy.EndSessionGame");
	}

	UEndSessionGameCallbackProxy_EndSessionGame_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.EndSessionPartyCallbackProxy.EndSessionParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEndSessionPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEndSessionPartyCallbackProxy* UEndSessionPartyCallbackProxy::STATIC_EndSessionParty(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.EndSessionPartyCallbackProxy.EndSessionParty");
	}

	UEndSessionPartyCallbackProxy_EndSessionParty_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.FindSessionsGameCallbackProxy.GetGameType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFindSessionsGameCallbackProxy::STATIC_GetGameType(const struct FBlueprintSessionResult& Result)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.FindSessionsGameCallbackProxy.GetGameType");
	}

	UFindSessionsGameCallbackProxy_GetGameType_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.FindSessionsGameCallbackProxy.FindSessionsGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InGameType                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindSessionsGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindSessionsGameCallbackProxy* UFindSessionsGameCallbackProxy::STATIC_FindSessionsGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.FindSessionsGameCallbackProxy.FindSessionsGame");
	}

	UFindSessionsGameCallbackProxy_FindSessionsGame_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;
	params.InGameType = InGameType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.FindSessionsPartyCallbackProxy.GetGameType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFindSessionsPartyCallbackProxy::STATIC_GetGameType(const struct FBlueprintSessionResult& Result)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.FindSessionsPartyCallbackProxy.GetGameType");
	}

	UFindSessionsPartyCallbackProxy_GetGameType_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.FindSessionsPartyCallbackProxy.FindSessionsParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InGameType                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFindSessionsPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFindSessionsPartyCallbackProxy* UFindSessionsPartyCallbackProxy::STATIC_FindSessionsParty(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.FindSessionsPartyCallbackProxy.FindSessionsParty");
	}

	UFindSessionsPartyCallbackProxy_FindSessionsParty_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;
	params.InGameType = InGameType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.InviteSessionCallbackProxy.InviteSessionCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInviteSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInviteSessionCallbackProxy* UInviteSessionCallbackProxy::STATIC_InviteSessionCallback(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.InviteSessionCallbackProxy.InviteSessionCallback");
	}

	UInviteSessionCallbackProxy_InviteSessionCallback_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.JoinSessionGameCallbackProxy.JoinSessionGame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UJoinSessionGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJoinSessionGameCallbackProxy* UJoinSessionGameCallbackProxy::STATIC_JoinSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.JoinSessionGameCallbackProxy.JoinSessionGame");
	}

	UJoinSessionGameCallbackProxy_JoinSessionGame_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.JoinSessionPartyCallbackProxy.JoinSessionParty
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UJoinSessionPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UJoinSessionPartyCallbackProxy* UJoinSessionPartyCallbackProxy::STATIC_JoinSessionParty(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.JoinSessionPartyCallbackProxy.JoinSessionParty");
	}

	UJoinSessionPartyCallbackProxy_JoinSessionParty_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.StartSessionGameCallbackProxy.StartSessionGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStartSessionGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStartSessionGameCallbackProxy* UStartSessionGameCallbackProxy::STATIC_StartSessionGame(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.StartSessionGameCallbackProxy.StartSessionGame");
	}

	UStartSessionGameCallbackProxy_StartSessionGame_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.StartSessionPartyCallbackProxy.StartSessionParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStartSessionPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStartSessionPartyCallbackProxy* UStartSessionPartyCallbackProxy::STATIC_StartSessionParty(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.StartSessionPartyCallbackProxy.StartSessionParty");
	}

	UStartSessionPartyCallbackProxy_StartSessionParty_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconClient.ServerSetHandshakeComplete
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void ASteamBeaconClient::ServerSetHandshakeComplete()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.ServerSetHandshakeComplete");
	}

	ASteamBeaconClient_ServerSetHandshakeComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconClient.OnRep_PlayerState
// (Native, Public)
void ASteamBeaconClient::OnRep_PlayerState()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.OnRep_PlayerState");
	}

	ASteamBeaconClient_OnRep_PlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconClient.OnRep_LobbyState
// (Native, Public)
void ASteamBeaconClient::OnRep_LobbyState()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.OnRep_LobbyState");
	}

	ASteamBeaconClient_OnRep_LobbyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconClient.OnPartyDisbanded
// (Net, NetReliable, Native, Event, Public, NetClient)
void ASteamBeaconClient::OnPartyDisbanded()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.OnPartyDisbanded");
	}

	ASteamBeaconClient_OnPartyDisbanded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconClient.LeaveParty
// (Native, Public, BlueprintCallable)
void ASteamBeaconClient::LeaveParty()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.LeaveParty");
	}

	ASteamBeaconClient_LeaveParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconClient.KickFromParty
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerToKick                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   Reason                         (ConstParm, Parm, NativeAccessSpecifierPublic)
void ASteamBeaconClient::KickFromParty(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.KickFromParty");
	}

	ASteamBeaconClient_KickFromParty_Params params;
	params.PlayerToKick = PlayerToKick;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconClient.GetPlayerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASteamBeaconPlayerState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASteamBeaconPlayerState* ASteamBeaconClient::GetPlayerState()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.GetPlayerState");
	}

	ASteamBeaconClient_GetPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconClient.GetPartyState
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASteamBeaconState*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASteamBeaconState* ASteamBeaconClient::GetPartyState()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.GetPartyState");
	}

	ASteamBeaconClient_GetPartyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconClient.ClientJoinGameSession
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FSteamBeaconSessionResult InSearchResult                 (Parm, NativeAccessSpecifierPublic)
// bool                           bIsPartyHostCreatingServer     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASteamBeaconClient::ClientJoinGameSession(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.ClientJoinGameSession");
	}

	ASteamBeaconClient_ClientJoinGameSession_Params params;
	params.InSearchResult = InSearchResult;
	params.bIsPartyHostCreatingServer = bIsPartyHostCreatingServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconClient.ClientJoinGameServer
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 GameServerURL                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASteamBeaconClient::ClientJoinGameServer(const struct FString& GameServerURL)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.ClientJoinGameServer");
	}

	ASteamBeaconClient_ClientJoinGameServer_Params params;
	params.GameServerURL = GameServerURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconClient.ChatToPartyMember
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASteamBeaconPlayerState* InPlayer                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASteamBeaconClient::ChatToPartyMember(class ASteamBeaconPlayerState* InPlayer)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconClient.ChatToPartyMember");
	}

	ASteamBeaconClient_ChatToPartyMember_Params params;
	params.InPlayer = InPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGameInstance.SendPartySessionInviteToFriend
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGameInstance::SendPartySessionInviteToFriend(class APlayerController* PlayerController, const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.SendPartySessionInviteToFriend");
	}

	USteamBeaconGameInstance_SendPartySessionInviteToFriend_Params params;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.SavePartyInfo
// (Native, Public, BlueprintCallable)
void USteamBeaconGameInstance::SavePartyInfo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.SavePartyInfo");
	}

	USteamBeaconGameInstance_SavePartyInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGameInstance.RestorePartyInfo
// (Native, Public, BlueprintCallable)
void USteamBeaconGameInstance::RestorePartyInfo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.RestorePartyInfo");
	}

	USteamBeaconGameInstance_RestorePartyInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGameInstance.RemoveSteamPlayerSession
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamBeaconGameInstance::RemoveSteamPlayerSession(class APlayerState* InPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.RemoveSteamPlayerSession");
	}

	USteamBeaconGameInstance_RemoveSteamPlayerSession_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction SteamParty.SteamBeaconGameInstance.OnJoinGameSessionComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamBeaconGameInstance::OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("DelegateFunction SteamParty.SteamBeaconGameInstance.OnJoinGameSessionComplete__DelegateSignature");
	}

	USteamBeaconGameInstance_OnJoinGameSessionComplete__DelegateSignature_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction SteamParty.SteamBeaconGameInstance.OnCreateGameSessionCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamBeaconGameInstance::OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("DelegateFunction SteamParty.SteamBeaconGameInstance.OnCreateGameSessionCompleted__DelegateSignature");
	}

	USteamBeaconGameInstance_OnCreateGameSessionCompleted__DelegateSignature_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGameInstance.JoinSessionFromSteamBeacon
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamBeaconSessionResult InSearchResult                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bIsPartyHostCreatingServer     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGameInstance::JoinSessionFromSteamBeacon(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.JoinSessionFromSteamBeacon");
	}

	USteamBeaconGameInstance_JoinSessionFromSteamBeacon_Params params;
	params.InSearchResult = InSearchResult;
	params.bIsPartyHostCreatingServer = bIsPartyHostCreatingServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.JoinPartyToSessionBP
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult InSearchResult                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void USteamBeaconGameInstance::JoinPartyToSessionBP(struct FBlueprintSessionResult* InSearchResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.JoinPartyToSessionBP");
	}

	USteamBeaconGameInstance_JoinPartyToSessionBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InSearchResult != nullptr)
		*InSearchResult = params.InSearchResult;

}


// Function SteamParty.SteamBeaconGameInstance.JoinPartyToHostGameSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGameInstance::JoinPartyToHostGameSession()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.JoinPartyToHostGameSession");
	}

	USteamBeaconGameInstance_JoinPartyToHostGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.JoinFriendPartySession
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamBeaconGameInstance::JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.JoinFriendPartySession");
	}

	USteamBeaconGameInstance_JoinFriendPartySession_Params params;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGameInstance.IsPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGameInstance::IsPartyLeader()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.IsPartyLeader");
	}

	USteamBeaconGameInstance_IsPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.IsPartyFull
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGameInstance::IsPartyFull()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.IsPartyFull");
	}

	USteamBeaconGameInstance_IsPartyFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.IsInParty
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGameInstance::IsInParty()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.IsInParty");
	}

	USteamBeaconGameInstance_IsInParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.HostParty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGameInstance::HostParty(int MaxPlayers)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.HostParty");
	}

	USteamBeaconGameInstance_HostParty_Params params;
	params.MaxPlayers = MaxPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.HostGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGameInstance::HostGame(int MaxPlayers)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.HostGame");
	}

	USteamBeaconGameInstance_HostGame_Params params;
	params.MaxPlayers = MaxPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetSteamFriendAvatar
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamParty_ESteamAvatarSize    InAvatarSize                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* USteamBeaconGameInstance::GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, SteamParty_ESteamAvatarSize InAvatarSize)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.GetSteamFriendAvatar");
	}

	USteamBeaconGameInstance_GetSteamFriendAvatar_Params params;
	params.FriendUniqueNetId = FriendUniqueNetId;
	params.InAvatarSize = InAvatarSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetPlayerIdString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamBeaconGameInstance::GetPlayerIdString(const struct FUniqueNetIdRepl& UniqueNetId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.GetPlayerIdString");
	}

	USteamBeaconGameInstance_GetPlayerIdString_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetPartyCount
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamBeaconGameInstance::GetPartyCount()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.GetPartyCount");
	}

	USteamBeaconGameInstance_GetPartyCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetMaxPartyCount
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamBeaconGameInstance::GetMaxPartyCount()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.GetMaxPartyCount");
	}

	USteamBeaconGameInstance_GetMaxPartyCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.GetHostCurrentGameSessionId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamBeaconGameInstance::GetHostCurrentGameSessionId()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.GetHostCurrentGameSessionId");
	}

	USteamBeaconGameInstance_GetHostCurrentGameSessionId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGameInstance.DumpDebugParty
// (Native, Public, BlueprintCallable)
void USteamBeaconGameInstance::DumpDebugParty()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.DumpDebugParty");
	}

	USteamBeaconGameInstance_DumpDebugParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGameInstance.DisbandParty
// (Final, Native, Public, BlueprintCallable)
void USteamBeaconGameInstance::DisbandParty()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.DisbandParty");
	}

	USteamBeaconGameInstance_DisbandParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGameInstance.DirectTravelToGameSession
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ServerURL                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamBeaconGameInstance::DirectTravelToGameSession(const struct FString& ServerURL)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.DirectTravelToGameSession");
	}

	USteamBeaconGameInstance_DirectTravelToGameSession_Params params;
	params.ServerURL = ServerURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGameInstance.DestroyGameSession
// (Final, Native, Public, BlueprintCallable)
void USteamBeaconGameInstance::DestroyGameSession()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.DestroyGameSession");
	}

	USteamBeaconGameInstance_DestroyGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGameInstance.ClearPartyBeacons
// (Native, Public, BlueprintCallable)
void USteamBeaconGameInstance::ClearPartyBeacons()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.ClearPartyBeacons");
	}

	USteamBeaconGameInstance_ClearPartyBeacons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGameInstance.AddCustomPlayerStateData
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamBeaconGameInstance::AddCustomPlayerStateData(class ASteamBeaconPlayerState* InPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.AddCustomPlayerStateData");
	}

	USteamBeaconGameInstance_AddCustomPlayerStateData_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGameInstance.AcceptPartyInvite
// (Native, Public, BlueprintCallable)
void USteamBeaconGameInstance::AcceptPartyInvite()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGameInstance.AcceptPartyInvite");
	}

	USteamBeaconGameInstance_AcceptPartyInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGISubsystem.SendPartySessionInviteToFriend
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGISubsystem::SendPartySessionInviteToFriend(class APlayerController* PlayerController, const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.SendPartySessionInviteToFriend");
	}

	USteamBeaconGISubsystem_SendPartySessionInviteToFriend_Params params;
	params.PlayerController = PlayerController;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.SavePartyInfo
// (Native, Public, BlueprintCallable)
void USteamBeaconGISubsystem::SavePartyInfo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.SavePartyInfo");
	}

	USteamBeaconGISubsystem_SavePartyInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGISubsystem.RestorePartyInfo
// (Native, Public, BlueprintCallable)
void USteamBeaconGISubsystem::RestorePartyInfo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.RestorePartyInfo");
	}

	USteamBeaconGISubsystem_RestorePartyInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGISubsystem.RemoveSteamPlayerSession
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamBeaconGISubsystem::RemoveSteamPlayerSession(class APlayerState* InPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.RemoveSteamPlayerSession");
	}

	USteamBeaconGISubsystem_RemoveSteamPlayerSession_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction SteamParty.SteamBeaconGISubsystem.OnJoinGameSessionComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamBeaconGISubsystem::OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("DelegateFunction SteamParty.SteamBeaconGISubsystem.OnJoinGameSessionComplete__DelegateSignature");
	}

	USteamBeaconGISubsystem_OnJoinGameSessionComplete__DelegateSignature_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction SteamParty.SteamBeaconGISubsystem.OnCreateGameSessionCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamBeaconGISubsystem::OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("DelegateFunction SteamParty.SteamBeaconGISubsystem.OnCreateGameSessionCompleted__DelegateSignature");
	}

	USteamBeaconGISubsystem_OnCreateGameSessionCompleted__DelegateSignature_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGISubsystem.JoinSessionFromSteamBeacon
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSteamBeaconSessionResult InSearchResult                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bIsPartyHostCreatingServer     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGISubsystem::JoinSessionFromSteamBeacon(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.JoinSessionFromSteamBeacon");
	}

	USteamBeaconGISubsystem_JoinSessionFromSteamBeacon_Params params;
	params.InSearchResult = InSearchResult;
	params.bIsPartyHostCreatingServer = bIsPartyHostCreatingServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.JoinPartyToSessionBP
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult InSearchResult                 (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void USteamBeaconGISubsystem::JoinPartyToSessionBP(struct FBlueprintSessionResult* InSearchResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.JoinPartyToSessionBP");
	}

	USteamBeaconGISubsystem_JoinPartyToSessionBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InSearchResult != nullptr)
		*InSearchResult = params.InSearchResult;

}


// Function SteamParty.SteamBeaconGISubsystem.JoinPartyToHostGameSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGISubsystem::JoinPartyToHostGameSession()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.JoinPartyToHostGameSession");
	}

	USteamBeaconGISubsystem_JoinPartyToHostGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.JoinFriendPartySession
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamBeaconGISubsystem::JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.JoinFriendPartySession");
	}

	USteamBeaconGISubsystem_JoinFriendPartySession_Params params;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGISubsystem.IsPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGISubsystem::IsPartyLeader()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.IsPartyLeader");
	}

	USteamBeaconGISubsystem_IsPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.IsPartyFull
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGISubsystem::IsPartyFull()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.IsPartyFull");
	}

	USteamBeaconGISubsystem_IsPartyFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.IsInParty
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGISubsystem::IsInParty()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.IsInParty");
	}

	USteamBeaconGISubsystem_IsInParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.HostParty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGISubsystem::HostParty(int MaxPlayers)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.HostParty");
	}

	USteamBeaconGISubsystem_HostParty_Params params;
	params.MaxPlayers = MaxPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.HostGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamBeaconGISubsystem::HostGame(int MaxPlayers)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.HostGame");
	}

	USteamBeaconGISubsystem_HostGame_Params params;
	params.MaxPlayers = MaxPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.GetSteamFriendAvatar
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamParty_ESteamAvatarSize    InAvatarSize                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* USteamBeaconGISubsystem::GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, SteamParty_ESteamAvatarSize InAvatarSize)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.GetSteamFriendAvatar");
	}

	USteamBeaconGISubsystem_GetSteamFriendAvatar_Params params;
	params.FriendUniqueNetId = FriendUniqueNetId;
	params.InAvatarSize = InAvatarSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.GetPlayerIdString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        UniqueNetId                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamBeaconGISubsystem::GetPlayerIdString(const struct FUniqueNetIdRepl& UniqueNetId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.GetPlayerIdString");
	}

	USteamBeaconGISubsystem_GetPlayerIdString_Params params;
	params.UniqueNetId = UniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.GetPartyCount
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamBeaconGISubsystem::GetPartyCount()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.GetPartyCount");
	}

	USteamBeaconGISubsystem_GetPartyCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.GetMaxPartyCount
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamBeaconGISubsystem::GetMaxPartyCount()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.GetMaxPartyCount");
	}

	USteamBeaconGISubsystem_GetMaxPartyCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.GetHostCurrentGameSessionId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USteamBeaconGISubsystem::GetHostCurrentGameSessionId()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.GetHostCurrentGameSessionId");
	}

	USteamBeaconGISubsystem_GetHostCurrentGameSessionId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconGISubsystem.DumpDebugParty
// (Native, Public, BlueprintCallable)
void USteamBeaconGISubsystem::DumpDebugParty()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.DumpDebugParty");
	}

	USteamBeaconGISubsystem_DumpDebugParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGISubsystem.DisbandParty
// (Final, Native, Public, BlueprintCallable)
void USteamBeaconGISubsystem::DisbandParty()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.DisbandParty");
	}

	USteamBeaconGISubsystem_DisbandParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGISubsystem.DirectTravelToGameSession
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ServerURL                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamBeaconGISubsystem::DirectTravelToGameSession(const struct FString& ServerURL)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.DirectTravelToGameSession");
	}

	USteamBeaconGISubsystem_DirectTravelToGameSession_Params params;
	params.ServerURL = ServerURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGISubsystem.DestroyGameSession
// (Final, Native, Public, BlueprintCallable)
void USteamBeaconGISubsystem::DestroyGameSession()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.DestroyGameSession");
	}

	USteamBeaconGISubsystem_DestroyGameSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGISubsystem.ClearPartyBeacons
// (Native, Public, BlueprintCallable)
void USteamBeaconGISubsystem::ClearPartyBeacons()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.ClearPartyBeacons");
	}

	USteamBeaconGISubsystem_ClearPartyBeacons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconGISubsystem.AcceptPartyInvite
// (Native, Public, BlueprintCallable)
void USteamBeaconGISubsystem::AcceptPartyInvite()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconGISubsystem.AcceptPartyInvite");
	}

	USteamBeaconGISubsystem_AcceptPartyInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconHost.GetPartyState
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASteamBeaconState*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASteamBeaconState* ASteamBeaconHost::GetPartyState()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconHost.GetPartyState");
	}

	ASteamBeaconHost_GetPartyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconHost.DisbandParty
// (Native, Public, BlueprintCallable)
void ASteamBeaconHost::DisbandParty()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconHost.DisbandParty");
	}

	ASteamBeaconHost_DisbandParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.UnMutePlayerVoice
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASteamBeaconPlayerController::UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.UnMutePlayerVoice");
	}

	ASteamBeaconPlayerController_UnMutePlayerVoice_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.StopPlayerTalking
// (Final, Native, Public, BlueprintCallable)
void ASteamBeaconPlayerController::StopPlayerTalking()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.StopPlayerTalking");
	}

	ASteamBeaconPlayerController_StopPlayerTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.StartPlayerTalking
// (Final, Native, Public, BlueprintCallable)
void ASteamBeaconPlayerController::StartPlayerTalking()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.StartPlayerTalking");
	}

	ASteamBeaconPlayerController_StartPlayerTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.MutePlayerVoice
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASteamBeaconPlayerController::MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.MutePlayerVoice");
	}

	ASteamBeaconPlayerController_MutePlayerVoice_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.IsPlayerVoiceMuted
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ASteamBeaconPlayerController::IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.IsPlayerVoiceMuted");
	}

	ASteamBeaconPlayerController_IsPlayerVoiceMuted_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerController.IsPlayerControllerUniqueIdMatch
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ASteamBeaconPlayerController::IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.IsPlayerControllerUniqueIdMatch");
	}

	ASteamBeaconPlayerController_IsPlayerControllerUniqueIdMatch_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerBeaconStateChanged     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASteamBeaconPlayerController::BPEvent_PlayerStateChanged(class ASteamBeaconPlayerState* InPlayerBeaconStateChanged)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerStateChanged");
	}

	ASteamBeaconPlayerController_BPEvent_PlayerStateChanged_Params params;
	params.InPlayerBeaconStateChanged = InPlayerBeaconStateChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerLeftParty
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerStateLeft              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASteamBeaconPlayerController::BPEvent_PlayerLeftParty(class ASteamBeaconPlayerState* InPlayerStateLeft)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerLeftParty");
	}

	ASteamBeaconPlayerController_BPEvent_PlayerLeftParty_Params params;
	params.InPlayerStateLeft = InPlayerStateLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerJoinedParty
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* InPlayerStateJoined            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASteamBeaconPlayerController::BPEvent_PlayerJoinedParty(class ASteamBeaconPlayerState* InPlayerStateJoined)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PlayerJoinedParty");
	}

	ASteamBeaconPlayerController_BPEvent_PlayerJoinedParty_Params params;
	params.InPlayerStateJoined = InPlayerStateJoined;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyStateChanged
// (Event, Public, BlueprintEvent)
void ASteamBeaconPlayerController::BPEvent_PartyStateChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyStateChanged");
	}

	ASteamBeaconPlayerController_BPEvent_PartyStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyOwnerChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        InUniqueId                     (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASteamBeaconPlayerController::BPEvent_PartyOwnerChanged(const struct FUniqueNetIdRepl& InUniqueId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyOwnerChanged");
	}

	ASteamBeaconPlayerController_BPEvent_PartyOwnerChanged_Params params;
	params.InUniqueId = InUniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyJoiningGame
// (Event, Public, BlueprintEvent)
void ASteamBeaconPlayerController::BPEvent_PartyJoiningGame()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyJoiningGame");
	}

	ASteamBeaconPlayerController_BPEvent_PartyJoiningGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyInviteReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 FriendName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASteamBeaconPlayerController::BPEvent_PartyInviteReceived(const struct FString& FriendName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyInviteReceived");
	}

	ASteamBeaconPlayerController_BPEvent_PartyInviteReceived_Params params;
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostReconnecting
// (Event, Public, BlueprintEvent)
void ASteamBeaconPlayerController::BPEvent_PartyHostReconnecting()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostReconnecting");
	}

	ASteamBeaconPlayerController_BPEvent_PartyHostReconnecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostConnectionFailure
// (Event, Public, BlueprintEvent)
void ASteamBeaconPlayerController::BPEvent_PartyHostConnectionFailure()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_PartyHostConnectionFailure");
	}

	ASteamBeaconPlayerController_BPEvent_PartyHostConnectionFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerController.BPEvent_ChatMessageReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FPartyMessage           InPartyMessage                 (Parm, NativeAccessSpecifierPublic)
void ASteamBeaconPlayerController::BPEvent_ChatMessageReceived(const struct FPartyMessage& InPartyMessage)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerController.BPEvent_ChatMessageReceived");
	}

	ASteamBeaconPlayerController_BPEvent_ChatMessageReceived_Params params;
	params.InPartyMessage = InPartyMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerState.SpawnConvertedPlayerState
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerState* ASteamBeaconPlayerState::SpawnConvertedPlayerState()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.SpawnConvertedPlayerState");
	}

	ASteamBeaconPlayerState_SpawnConvertedPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.ServerSetPlayerProfileLevel
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            InPlayerProfileLevel           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASteamBeaconPlayerState::ServerSetPlayerProfileLevel(int InPlayerProfileLevel)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.ServerSetPlayerProfileLevel");
	}

	ASteamBeaconPlayerState_ServerSetPlayerProfileLevel_Params params;
	params.InPlayerProfileLevel = InPlayerProfileLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerState.ServerSendPartyMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FPartyMessage           ChatMessage                    (Parm, NativeAccessSpecifierPublic)
void ASteamBeaconPlayerState::ServerSendPartyMessage(const struct FPartyMessage& ChatMessage)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.ServerSendPartyMessage");
	}

	ASteamBeaconPlayerState_ServerSendPartyMessage_Params params;
	params.ChatMessage = ChatMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerState.SendPartyMessage
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPartyMessage           ChatMessage                    (Parm, NativeAccessSpecifierPublic)
void ASteamBeaconPlayerState::SendPartyMessage(const struct FPartyMessage& ChatMessage)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.SendPartyMessage");
	}

	ASteamBeaconPlayerState_SendPartyMessage_Params params;
	params.ChatMessage = ChatMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerState.OnPartyMessageReceived
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// struct FPartyMessage           InPartyMessage                 (Parm, NativeAccessSpecifierPublic)
void ASteamBeaconPlayerState::OnPartyMessageReceived(const struct FPartyMessage& InPartyMessage)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.OnPartyMessageReceived");
	}

	ASteamBeaconPlayerState_OnPartyMessageReceived_Params params;
	params.InPartyMessage = InPartyMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerState.IsPlayerPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ASteamBeaconPlayerState::IsPlayerPartyLeader(class APlayerState* InPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.IsPlayerPartyLeader");
	}

	ASteamBeaconPlayerState_IsPlayerPartyLeader_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.IsPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState*            InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ASteamBeaconPlayerState::IsPlayer(class APlayerState* InPlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.IsPlayer");
	}

	ASteamBeaconPlayerState_IsPlayer_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.IsPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ASteamBeaconPlayerState::IsPartyLeader()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.IsPartyLeader");
	}

	ASteamBeaconPlayerState_IsPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.InitializePlayerStateData
// (Native, Event, Public, BlueprintEvent)
void ASteamBeaconPlayerState::InitializePlayerStateData()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.InitializePlayerStateData");
	}

	ASteamBeaconPlayerState_InitializePlayerStateData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconPlayerState.GetPlayerUniqueId
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUniqueNetIdRepl ASteamBeaconPlayerState::GetPlayerUniqueId()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.GetPlayerUniqueId");
	}

	ASteamBeaconPlayerState_GetPlayerUniqueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconPlayerState.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText ASteamBeaconPlayerState::GetDisplayName()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconPlayerState.GetDisplayName");
	}

	ASteamBeaconPlayerState_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconState.RemoveAllPlayers
// (Final, Native, Public, BlueprintCallable)
void ASteamBeaconState::RemoveAllPlayers()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.RemoveAllPlayers");
	}

	ASteamBeaconState_RemoveAllPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconState.OnRep_PartyOwnerUniqueId
// (Native, Public)
void ASteamBeaconState::OnRep_PartyOwnerUniqueId()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.OnRep_PartyOwnerUniqueId");
	}

	ASteamBeaconState_OnRep_PartyOwnerUniqueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated_NetRefresh
// (Native, Public)
void ASteamBeaconState::OnLobbyStateInfoUpdated_NetRefresh()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated_NetRefresh");
	}

	ASteamBeaconState_OnLobbyStateInfoUpdated_NetRefresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated
// (Net, NetReliable, Native, Event, NetMulticast, Public)
void ASteamBeaconState::OnLobbyStateInfoUpdated()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.OnLobbyStateInfoUpdated");
	}

	ASteamBeaconState_OnLobbyStateInfoUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamBeaconState.GetPartyPlayer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        UniqueId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASteamBeaconPlayerState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASteamBeaconPlayerState* ASteamBeaconState::GetPartyPlayer(const struct FUniqueNetIdRepl& UniqueId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.GetPartyPlayer");
	}

	ASteamBeaconState_GetPartyPlayer_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconState.GetPartyLeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASteamBeaconPlayerState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASteamBeaconPlayerState* ASteamBeaconState::GetPartyLeader()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.GetPartyLeader");
	}

	ASteamBeaconState_GetPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamBeaconState.GetAllPartyMembers
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class ASteamBeaconPlayerState*> InPlayerArray                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void ASteamBeaconState::GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamBeaconState.GetAllPartyMembers");
	}

	ASteamBeaconState_GetAllPartyMembers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InPlayerArray != nullptr)
		*InPlayerArray = params.InPlayerArray;

}


// Function SteamParty.SteamGetFriendsCallbackProxy.RequestSteamFriendsList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USteamGetFriendsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USteamGetFriendsCallbackProxy* USteamGetFriendsCallbackProxy::STATIC_RequestSteamFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamGetFriendsCallbackProxy.RequestSteamFriendsList");
	}

	USteamGetFriendsCallbackProxy_RequestSteamFriendsList_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.UnMutePlayerVoice
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamPartyComponent::UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.UnMutePlayerVoice");
	}

	USteamPartyComponent_UnMutePlayerVoice_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamPartyComponent.StopPlayerTalking
// (Final, Native, Public, BlueprintCallable)
void USteamPartyComponent::StopPlayerTalking()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.StopPlayerTalking");
	}

	USteamPartyComponent_StopPlayerTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamPartyComponent.StartPlayerTalking
// (Final, Native, Public, BlueprintCallable)
void USteamPartyComponent::StartPlayerTalking()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.StartPlayerTalking");
	}

	USteamPartyComponent_StartPlayerTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamPartyComponent.MutePlayerVoice
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamPartyComponent::MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.MutePlayerVoice");
	}

	USteamPartyComponent_MutePlayerVoice_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SteamParty.SteamPartyComponent.IsPlayerVoiceMuted
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamPartyComponent::IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.IsPlayerVoiceMuted");
	}

	USteamPartyComponent_IsPlayerVoiceMuted_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.IsPlayerControllerUniqueIdMatch
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamPartyComponent::IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.IsPlayerControllerUniqueIdMatch");
	}

	USteamPartyComponent_IsPlayerControllerUniqueIdMatch_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.GetPartyPlayer
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        PlayerId                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASteamBeaconPlayerState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASteamBeaconPlayerState* USteamPartyComponent::GetPartyPlayer(const struct FUniqueNetIdRepl& PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.GetPartyPlayer");
	}

	USteamPartyComponent_GetPartyPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.GetPartyLeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASteamBeaconPlayerState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ASteamBeaconPlayerState* USteamPartyComponent::GetPartyLeader()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.GetPartyLeader");
	}

	USteamPartyComponent_GetPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamPartyComponent.GetAllPartyMembers
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class ASteamBeaconPlayerState*> InPlayerArray                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void USteamPartyComponent::GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyComponent.GetAllPartyMembers");
	}

	USteamPartyComponent_GetAllPartyMembers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InPlayerArray != nullptr)
		*InPlayerArray = params.InPlayerArray;

}


// Function SteamParty.SteamPartyFunctionLibrary.SendSessionInviteToFriend
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsParty                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamPartyFunctionLibrary::STATIC_SendSessionInviteToFriend(const struct FUniqueNetIdRepl& FriendUniqueNetId, bool bIsParty)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyFunctionLibrary.SendSessionInviteToFriend");
	}

	USteamPartyFunctionLibrary_SendSessionInviteToFriend_Params params;
	params.FriendUniqueNetId = FriendUniqueNetId;
	params.bIsParty = bIsParty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.JoinFriendPartySession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamPartyFunctionLibrary::STATIC_JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyFunctionLibrary.JoinFriendPartySession");
	}

	USteamPartyFunctionLibrary_JoinFriendPartySession_Params params;
	params.FriendUniqueNetId = FriendUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.IsUniqueIdEqual
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        FirstUniqueNetId               (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        SecondUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamPartyFunctionLibrary::STATIC_IsUniqueIdEqual(const struct FUniqueNetIdRepl& FirstUniqueNetId, const struct FUniqueNetIdRepl& SecondUniqueNetId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyFunctionLibrary.IsUniqueIdEqual");
	}

	USteamPartyFunctionLibrary_IsUniqueIdEqual_Params params;
	params.FirstUniqueNetId = FirstUniqueNetId;
	params.SecondUniqueNetId = SecondUniqueNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.GetUniqueNetId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        ReturnValue                    (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FUniqueNetIdRepl USteamPartyFunctionLibrary::STATIC_GetUniqueNetId(class APlayerState* PlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyFunctionLibrary.GetUniqueNetId");
	}

	USteamPartyFunctionLibrary_GetUniqueNetId_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.SteamPartyFunctionLibrary.GetSteamFriendAvatar
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUniqueNetIdRepl        FriendUniqueNetId              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SteamParty_ESteamAvatarSize    InAvatarSize                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* USteamPartyFunctionLibrary::STATIC_GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, SteamParty_ESteamAvatarSize InAvatarSize)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.SteamPartyFunctionLibrary.GetSteamFriendAvatar");
	}

	USteamPartyFunctionLibrary_GetSteamFriendAvatar_Params params;
	params.FriendUniqueNetId = FriendUniqueNetId;
	params.InAvatarSize = InAvatarSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.UpdateSessionGameCallbackProxy.UpdateSessionGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           PublicSearchable               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AllowInvites                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           JoinViaPresence                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           JoinViaPresenceFriendsOnly     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUpdateSessionGameCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUpdateSessionGameCallbackProxy* UUpdateSessionGameCallbackProxy::STATIC_UpdateSessionGame(int MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.UpdateSessionGameCallbackProxy.UpdateSessionGame");
	}

	UUpdateSessionGameCallbackProxy_UpdateSessionGame_Params params;
	params.MaxPlayers = MaxPlayers;
	params.PublicSearchable = PublicSearchable;
	params.AllowInvites = AllowInvites;
	params.JoinViaPresence = JoinViaPresence;
	params.JoinViaPresenceFriendsOnly = JoinViaPresenceFriendsOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SteamParty.UpdateSessionPartyCallbackProxy.UpdateSessionParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           PublicSearchable               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AllowInvites                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           JoinViaPresence                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           JoinViaPresenceFriendsOnly     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUpdateSessionPartyCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUpdateSessionPartyCallbackProxy* UUpdateSessionPartyCallbackProxy::STATIC_UpdateSessionParty(int MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SteamParty.UpdateSessionPartyCallbackProxy.UpdateSessionParty");
	}

	UUpdateSessionPartyCallbackProxy_UpdateSessionParty_Params params;
	params.MaxPlayers = MaxPlayers;
	params.PublicSearchable = PublicSearchable;
	params.AllowInvites = AllowInvites;
	params.JoinViaPresence = JoinViaPresence;
	params.JoinViaPresenceFriendsOnly = JoinViaPresenceFriendsOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
