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
// Classes
//---------------------------------------------------------------------------

// Class SteamParty.CreateSessionGameCallbackProxy
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UCreateSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7U2N[0x60];                                    // 0x0048(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.CreateSessionGameCallbackProxy");
		}
		return ptr;
	}



	class UCreateSessionGameCallbackProxy* STATIC_CreateSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType, bool AutoStartSession);
};

// Class SteamParty.CreateSessionPartyCallbackProxy
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UCreateSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ACVD[0x60];                                    // 0x0048(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.CreateSessionPartyCallbackProxy");
		}
		return ptr;
	}



	class UCreateSessionPartyCallbackProxy* STATIC_CreateSessionParty(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN, const struct FString& InGameType, bool AutoStartSession);
};

// Class SteamParty.DestroySessionGameCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UDestroySessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X5PX[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.DestroySessionGameCallbackProxy");
		}
		return ptr;
	}



	class UDestroySessionGameCallbackProxy* STATIC_DestroySessionGame(class APlayerController* PlayerController);
};

// Class SteamParty.DestroySessionPartyCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UDestroySessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S6UB[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.DestroySessionPartyCallbackProxy");
		}
		return ptr;
	}



	class UDestroySessionPartyCallbackProxy* STATIC_DestroySessionParty(class APlayerController* PlayerController);
};

// Class SteamParty.DummyPlayerController
// 0x0000 (FullSize[0x0598] - InheritedSize[0x0598])
class ADummyPlayerController : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.DummyPlayerController");
		}
		return ptr;
	}



};

// Class SteamParty.EndSessionGameCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UEndSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_24OS[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.EndSessionGameCallbackProxy");
		}
		return ptr;
	}



	class UEndSessionGameCallbackProxy* STATIC_EndSessionGame(class APlayerController* PlayerController);
};

// Class SteamParty.EndSessionPartyCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UEndSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U9R4[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.EndSessionPartyCallbackProxy");
		}
		return ptr;
	}



	class UEndSessionPartyCallbackProxy* STATIC_EndSessionParty(class APlayerController* PlayerController);
};

// Class SteamParty.FindSessionsGameCallbackProxy
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UFindSessionsGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VPVD[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.FindSessionsGameCallbackProxy");
		}
		return ptr;
	}



	struct FString STATIC_GetGameType(const struct FBlueprintSessionResult& Result);
	class UFindSessionsGameCallbackProxy* STATIC_FindSessionsGame(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType);
};

// Class SteamParty.FindSessionsPartyCallbackProxy
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UFindSessionsPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R00N[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.FindSessionsPartyCallbackProxy");
		}
		return ptr;
	}



	struct FString STATIC_GetGameType(const struct FBlueprintSessionResult& Result);
	class UFindSessionsPartyCallbackProxy* STATIC_FindSessionsParty(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN, const struct FString& InGameType);
};

// Class SteamParty.InviteSessionCallbackProxy
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UInviteSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnInviteReceived;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4L4E[0x78];                                    // 0x0038(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.InviteSessionCallbackProxy");
		}
		return ptr;
	}



	class UInviteSessionCallbackProxy* STATIC_InviteSessionCallback(class APlayerController* PlayerController);
};

// Class SteamParty.JoinSessionGameCallbackProxy
// 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
class UJoinSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_STLA[0xF8];                                    // 0x0048(0x00F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.JoinSessionGameCallbackProxy");
		}
		return ptr;
	}



	class UJoinSessionGameCallbackProxy* STATIC_JoinSessionGame(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};

// Class SteamParty.JoinSessionPartyCallbackProxy
// 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
class UJoinSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MZOZ[0xF8];                                    // 0x0048(0x00F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.JoinSessionPartyCallbackProxy");
		}
		return ptr;
	}



	class UJoinSessionPartyCallbackProxy* STATIC_JoinSessionParty(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};

// Class SteamParty.StartSessionGameCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UStartSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F5YC[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.StartSessionGameCallbackProxy");
		}
		return ptr;
	}



	class UStartSessionGameCallbackProxy* STATIC_StartSessionGame(class APlayerController* PlayerController);
};

// Class SteamParty.StartSessionPartyCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UStartSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I6DC[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.StartSessionPartyCallbackProxy");
		}
		return ptr;
	}



	class UStartSessionPartyCallbackProxy* STATIC_StartSessionParty(class APlayerController* PlayerController);
};

// Class SteamParty.SteamBeaconClient
// 0x0030 (FullSize[0x0378] - InheritedSize[0x0348])
class ASteamBeaconClient : public ALobbyBeaconClient
{
public:
	bool                                               bHasHandShakeCompleted;                                    // 0x0348(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C60F[0x7];                                     // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASteamBeaconState*                           BeaconLobbyState;                                          // 0x0350(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASteamBeaconPlayerState*                     BeaconPlayerState;                                         // 0x0358(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasRegisterComponentsCompleted;                           // 0x0360(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EHQM[0x17];                                    // 0x0361(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamBeaconClient");
		}
		return ptr;
	}



	void ServerSetHandshakeComplete();
	void OnRep_PlayerState();
	void OnRep_LobbyState();
	void OnPartyDisbanded();
	void LeaveParty();
	void KickFromParty(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason);
	class ASteamBeaconPlayerState* GetPlayerState();
	class ASteamBeaconState* GetPartyState();
	void ClientJoinGameSession(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer);
	void ClientJoinGameServer(const struct FString& GameServerURL);
	void ChatToPartyMember(class ASteamBeaconPlayerState* InPlayer);
};

// Class SteamParty.SteamBeaconGameInstance
// 0x0420 (FullSize[0x0588] - InheritedSize[0x0168])
class USteamBeaconGameInstance : public UGameInstance
{
public:
	struct FScriptMulticastDelegate                    OnPreLoadMapSteamParty;                                    // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                MaxPartyCount;                                             // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLAY[0x4];                                     // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LobbyBeaconPlayerStateClass;                               // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               VoiceChatEnabled;                                          // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPartyHostCreatingServer;                                 // 0x0189(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OTO9[0x2];                                     // 0x018A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PartyHostGameTravelDelay;                                  // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PartyHostGameTravelMaxRetries;                             // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentTravelRetries;                                      // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamParty_EPartyStatus                            PartyStatus;                                               // 0x0198(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0SAB[0x7];                                     // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASteamBeaconHost*                            BeaconHostObject;                                          // 0x01A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASteamBeaconListener*                        BeaconHostListener;                                        // 0x01A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASteamBeaconClient*                          BeaconClient;                                              // 0x01B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YQRA[0x68];                                    // 0x01B8(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCreateGameSessionCompleted;                              // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnJoinGameSessionComplete;                                 // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyPlayerStateChangedDelegate;                         // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyPlayerClearDelegate;                                // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyPlayerJoinDelegate;                                 // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyPlayerLeftDelegate;                                 // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7CHZ[0x308];                                   // 0x0280(0x0308) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamBeaconGameInstance");
		}
		return ptr;
	}



	bool SendPartySessionInviteToFriend(class APlayerController* PlayerController, const struct FUniqueNetIdRepl& FriendUniqueNetId);
	void SavePartyInfo();
	void RestorePartyInfo();
	void RemoveSteamPlayerSession(class APlayerState* InPlayerState);
	void OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful);
	void OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful);
	bool JoinSessionFromSteamBeacon(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer);
	void JoinPartyToSessionBP(struct FBlueprintSessionResult* InSearchResult);
	bool JoinPartyToHostGameSession();
	void JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId);
	bool IsPartyLeader();
	bool IsPartyFull();
	bool IsInParty();
	bool HostParty(int MaxPlayers);
	bool HostGame(int MaxPlayers);
	class UTexture2D* GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, SteamParty_ESteamAvatarSize InAvatarSize);
	struct FString GetPlayerIdString(const struct FUniqueNetIdRepl& UniqueNetId);
	int GetPartyCount();
	int GetMaxPartyCount();
	struct FString GetHostCurrentGameSessionId();
	void DumpDebugParty();
	void DisbandParty();
	void DirectTravelToGameSession(const struct FString& ServerURL);
	void DestroyGameSession();
	void ClearPartyBeacons();
	void AddCustomPlayerStateData(class ASteamBeaconPlayerState* InPlayerState);
	void AcceptPartyInvite();
};

// Class SteamParty.SteamBeaconGameSession
// 0x0110 (FullSize[0x0378] - InheritedSize[0x0268])
class ASteamBeaconGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData_0T4V[0x110];                                   // 0x0268(0x0110) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamBeaconGameSession");
		}
		return ptr;
	}



};

// Class SteamParty.SteamBeaconGISubsystem
// 0x03D0 (FullSize[0x0400] - InheritedSize[0x0030])
class USteamBeaconGISubsystem : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnPreLoadMapSteamParty;                                    // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                MaxPartyCount;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XYK8[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LobbyBeaconPlayerStateClass;                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               VoiceChatEnabled;                                          // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPartyHostCreatingServer;                                 // 0x0051(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UZAK[0x2];                                     // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PartyHostGameTravelDelay;                                  // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PartyHostGameTravelMaxRetries;                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentTravelRetries;                                      // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamParty_EPartyStatus                            PartyStatus;                                               // 0x0060(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C81B[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASteamBeaconHost*                            BeaconHostObject;                                          // 0x0068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASteamBeaconListener*                        BeaconHostListener;                                        // 0x0070(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ASteamBeaconClient*                          BeaconClient;                                              // 0x0078(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z0KW[0x68];                                    // 0x0080(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCreateGameSessionCompleted;                              // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnJoinGameSessionComplete;                                 // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZL0[0x2F8];                                   // 0x0108(0x02F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamBeaconGISubsystem");
		}
		return ptr;
	}



	bool SendPartySessionInviteToFriend(class APlayerController* PlayerController, const struct FUniqueNetIdRepl& FriendUniqueNetId);
	void SavePartyInfo();
	void RestorePartyInfo();
	void RemoveSteamPlayerSession(class APlayerState* InPlayerState);
	void OnJoinGameSessionComplete__DelegateSignature(bool bWasSuccessful);
	void OnCreateGameSessionCompleted__DelegateSignature(bool bWasSuccessful);
	bool JoinSessionFromSteamBeacon(const struct FSteamBeaconSessionResult& InSearchResult, bool bIsPartyHostCreatingServer);
	void JoinPartyToSessionBP(struct FBlueprintSessionResult* InSearchResult);
	bool JoinPartyToHostGameSession();
	void JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId);
	bool IsPartyLeader();
	bool IsPartyFull();
	bool IsInParty();
	bool HostParty(int MaxPlayers);
	bool HostGame(int MaxPlayers);
	class UTexture2D* GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, SteamParty_ESteamAvatarSize InAvatarSize);
	struct FString GetPlayerIdString(const struct FUniqueNetIdRepl& UniqueNetId);
	int GetPartyCount();
	int GetMaxPartyCount();
	struct FString GetHostCurrentGameSessionId();
	void DumpDebugParty();
	void DisbandParty();
	void DirectTravelToGameSession(const struct FString& ServerURL);
	void DestroyGameSession();
	void ClearPartyBeacons();
	void AcceptPartyInvite();
};

// Class SteamParty.SteamBeaconHost
// 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
class ASteamBeaconHost : public ALobbyBeaconHost
{
public:
	bool                                               bIsDisbandingParty;                                        // 0x02A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsJoiningGame;                                            // 0x02A1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLevelChanging;                                          // 0x02A2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5BOV[0x5];                                     // 0x02A3(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamBeaconHost");
		}
		return ptr;
	}



	class ASteamBeaconState* GetPartyState();
	void DisbandParty();
};

// Class SteamParty.SteamBeaconListener
// 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
class ASteamBeaconListener : public AOnlineBeaconHost
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamBeaconListener");
		}
		return ptr;
	}



};

// Class SteamParty.SteamBeaconPlayerController
// 0x0028 (FullSize[0x05C0] - InheritedSize[0x0598])
class ASteamBeaconPlayerController : public APlayerController
{
public:
	class ASteamBeaconState*                           PartyBeaconState;                                          // 0x0598(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OZHC[0x18];                                    // 0x05A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               IsPushToTalk;                                              // 0x05B8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A0W0[0x7];                                     // 0x05B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamBeaconPlayerController");
		}
		return ptr;
	}



	void UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId);
	void StopPlayerTalking();
	void StartPlayerTalking();
	void MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId);
	bool IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerId);
	bool IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerId);
	void BPEvent_PlayerStateChanged(class ASteamBeaconPlayerState* InPlayerBeaconStateChanged);
	void BPEvent_PlayerLeftParty(class ASteamBeaconPlayerState* InPlayerStateLeft);
	void BPEvent_PlayerJoinedParty(class ASteamBeaconPlayerState* InPlayerStateJoined);
	void BPEvent_PartyStateChanged();
	void BPEvent_PartyOwnerChanged(const struct FUniqueNetIdRepl& InUniqueId);
	void BPEvent_PartyJoiningGame();
	void BPEvent_PartyInviteReceived(const struct FString& FriendName);
	void BPEvent_PartyHostReconnecting();
	void BPEvent_PartyHostConnectionFailure();
	void BPEvent_ChatMessageReceived(const struct FPartyMessage& InPartyMessage);
};

// Class SteamParty.SteamBeaconPlayerState
// 0x0030 (FullSize[0x0330] - InheritedSize[0x0300])
class ASteamBeaconPlayerState : public ALobbyBeaconPlayerState
{
public:
	int                                                PlayerProfileLevel;                                        // 0x0300(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ROA0[0x1C];                                    // 0x0304(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlayerTalkingStateChanged;                               // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamBeaconPlayerState");
		}
		return ptr;
	}



	class APlayerState* SpawnConvertedPlayerState();
	void ServerSetPlayerProfileLevel(int InPlayerProfileLevel);
	void ServerSendPartyMessage(const struct FPartyMessage& ChatMessage);
	void SendPartyMessage(const struct FPartyMessage& ChatMessage);
	void OnPartyMessageReceived(const struct FPartyMessage& InPartyMessage);
	bool IsPlayerPartyLeader(class APlayerState* InPlayerState);
	bool IsPlayer(class APlayerState* InPlayerState);
	bool IsPartyLeader();
	void InitializePlayerStateData();
	struct FUniqueNetIdRepl GetPlayerUniqueId();
	struct FText GetDisplayName();
};

// Class SteamParty.SteamBeaconState
// 0x0058 (FullSize[0x0440] - InheritedSize[0x03E8])
class ASteamBeaconState : public ALobbyBeaconState
{
public:
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                        // 0x03E8(0x0028) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IQPB[0x30];                                    // 0x0410(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamBeaconState");
		}
		return ptr;
	}



	void RemoveAllPlayers();
	void OnRep_PartyOwnerUniqueId();
	void OnLobbyStateInfoUpdated_NetRefresh();
	void OnLobbyStateInfoUpdated();
	class ASteamBeaconPlayerState* GetPartyPlayer(const struct FUniqueNetIdRepl& UniqueId);
	class ASteamBeaconPlayerState* GetPartyLeader();
	void GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray);
};

// Class SteamParty.SteamGetFriendsCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class USteamGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R08Z[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamGetFriendsCallbackProxy");
		}
		return ptr;
	}



	class USteamGetFriendsCallbackProxy* STATIC_RequestSteamFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class SteamParty.SteamPartyComponent
// 0x00C8 (FullSize[0x01A0] - InheritedSize[0x00D8])
class USteamPartyComponent : public UActorComponent
{
public:
	class ASteamBeaconState*                           PartyBeaconState;                                          // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerJoinedSteamParty;                                  // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerLeftSteamParty;                                    // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerChangedSteamParty;                                 // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyStateChangedSteamParty;                             // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyOwnerChangedSteamParty;                             // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyMessageSteamParty;                                  // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyJoiningGameSteamParty;                              // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyHostConnectionFailureSteamParty;                    // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyHostReconnectingSteamParty;                         // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPartyInviteReceivedSteamParty;                           // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               IsPushToTalk;                                              // 0x0180(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZQLH[0x1F];                                    // 0x0181(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamPartyComponent");
		}
		return ptr;
	}



	void UnMutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId);
	void StopPlayerTalking();
	void StartPlayerTalking();
	void MutePlayerVoice(const struct FUniqueNetIdRepl& PlayerId);
	bool IsPlayerVoiceMuted(const struct FUniqueNetIdRepl& PlayerId);
	bool IsPlayerControllerUniqueIdMatch(const struct FUniqueNetIdRepl& PlayerId);
	class ASteamBeaconPlayerState* GetPartyPlayer(const struct FUniqueNetIdRepl& PlayerId);
	class ASteamBeaconPlayerState* GetPartyLeader();
	void GetAllPartyMembers(TArray<class ASteamBeaconPlayerState*>* InPlayerArray);
};

// Class SteamParty.SteamPartyFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamPartyFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamPartyFunctionLibrary");
		}
		return ptr;
	}



	bool STATIC_SendSessionInviteToFriend(const struct FUniqueNetIdRepl& FriendUniqueNetId, bool bIsParty);
	bool STATIC_JoinFriendPartySession(const struct FUniqueNetIdRepl& FriendUniqueNetId);
	bool STATIC_IsUniqueIdEqual(const struct FUniqueNetIdRepl& FirstUniqueNetId, const struct FUniqueNetIdRepl& SecondUniqueNetId);
	struct FUniqueNetIdRepl STATIC_GetUniqueNetId(class APlayerState* PlayerState);
	class UTexture2D* STATIC_GetSteamFriendAvatar(const struct FUniqueNetIdRepl& FriendUniqueNetId, SteamParty_ESteamAvatarSize InAvatarSize);
};

// Class SteamParty.SteamPartyNetDriver
// 0x0000 (FullSize[0x07A0] - InheritedSize[0x07A0])
class USteamPartyNetDriver : public UIpNetDriver
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.SteamPartyNetDriver");
		}
		return ptr;
	}



};

// Class SteamParty.UpdateSessionGameCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UUpdateSessionGameCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1VIB[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.UpdateSessionGameCallbackProxy");
		}
		return ptr;
	}



	class UUpdateSessionGameCallbackProxy* STATIC_UpdateSessionGame(int MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly);
};

// Class SteamParty.UpdateSessionPartyCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UUpdateSessionPartyCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HD0V[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SteamParty.UpdateSessionPartyCallbackProxy");
		}
		return ptr;
	}



	class UUpdateSessionPartyCallbackProxy* STATIC_UpdateSessionParty(int MaxPlayers, bool PublicSearchable, bool AllowInvites, bool JoinViaPresence, bool JoinViaPresenceFriendsOnly);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
