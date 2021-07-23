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

// Class Lobby.LobbyBeaconClient
// 0x0088 (FullSize[0x0348] - InheritedSize[0x02C0])
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                           LobbyState;                                                // 0x02C0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALobbyBeaconPlayerState*                     PlayerState;                                               // 0x02C8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5TRR[0x1];                                     // 0x02D0(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Lobby_ELobbyBeaconJoinState                        LobbyJoinServerState;                                      // 0x02D1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QXBC[0x76];                                    // 0x02D2(0x0076) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class Lobby.LobbyBeaconClient");
		}
		return ptr;
	}



	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString);
	void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(const struct FString& Msg);
	void ClientWasKicked(const struct FText& KickReason);
	void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
	void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
	void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};

// Class Lobby.LobbyBeaconHost
// 0x0038 (FullSize[0x02A0] - InheritedSize[0x0268])
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData_I9HP[0x8];                                     // 0x0268(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LobbyStateClass[0x28];                                     // 0x0268(0x0028) UNKNOWN PROPERTY: SoftClassProperty Lobby.LobbyBeaconHost.LobbyStateClass
	class ALobbyBeaconState*                           LobbyState;                                                // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class Lobby.LobbyBeaconHost");
		}
		return ptr;
	}



};

// Class Lobby.LobbyBeaconPlayerState
// 0x00C0 (FullSize[0x0300] - InheritedSize[0x0240])
class ALobbyBeaconPlayerState : public AInfo
{
public:
	struct FText                                       DisplayName;                                               // 0x0240(0x0018) (Net, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            UniqueId;                                                  // 0x0258(0x0028) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            PartyOwnerUniqueId;                                        // 0x0280(0x0028) (Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInLobby;                                                  // 0x02A8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I4J8[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AOnlineBeaconClient*                         ClientActor;                                               // 0x02B0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_65JX[0x48];                                    // 0x02B8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class Lobby.LobbyBeaconPlayerState");
		}
		return ptr;
	}



	void OnRep_UniqueId();
	void OnRep_PartyOwner();
	void OnRep_InLobby();
};

// Class Lobby.LobbyBeaconState
// 0x01A8 (FullSize[0x03E8] - InheritedSize[0x0240])
class ALobbyBeaconState : public AInfo
{
public:
	int                                                MaxPlayers;                                                // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FDQ9[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LobbyBeaconPlayerStateClass;                               // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BZQ2[0x8];                                     // 0x0250(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLobbyStarted;                                             // 0x0258(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FCC2[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WaitForPlayersTimeRemaining;                               // 0x025C(0x0004) (Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLobbyPlayerStateInfoArray                  Players;                                                   // 0x0260(0x0120) (Net, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GNEV[0x68];                                    // 0x0380(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class Lobby.LobbyBeaconState");
		}
		return ptr;
	}



	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
