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

// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0030 (FullSize[0x0270] - InheritedSize[0x0240])
class AOnlineBeacon : public AActor
{
public:
	unsigned char                                      UnknownData_JYT4[0x8];                                     // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BeaconConnectionInitialTimeout;                            // 0x0248(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BeaconConnectionTimeout;                                   // 0x024C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetDriver*                                  NetDriver;                                                 // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R8KL[0x18];                                    // 0x0258(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		}
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0050 (FullSize[0x02C0] - InheritedSize[0x0270])
class AOnlineBeaconClient : public AOnlineBeacon
{
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                               // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetConnection*                              BeaconConnection;                                          // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	OnlineSubsystemUtils_EBeaconConnectionState        ConnectionState;                                           // 0x0280(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6UTT[0x3F];                                    // 0x0281(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		}
		return ptr;
	}



	void ClientOnConnected();
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x00C0 (FullSize[0x0380] - InheritedSize[0x02C0])
class APartyBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData_IH26[0x30];                                    // 0x02C0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DestSessionId;                                             // 0x02F0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPartyReservation                           PendingReservation;                                        // 0x0300(0x0050) (Protected, NativeAccessSpecifierProtected)
	OnlineSubsystemUtils_EClientRequestType            RequestType;                                               // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPendingReservationSent;                                   // 0x0351(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCancelReservation;                                        // 0x0352(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5VSU[0x2D];                                    // 0x0353(0x002D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		}
		return ptr;
	}



	void ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	void ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse);
	void ClientCancelReservationResponse(TEnumAsByte<OnlineSubsystemUtils_EPartyReservationResult> ReservationResponse);
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0028 (FullSize[0x0268] - InheritedSize[0x0240])
class AOnlineBeaconHostObject : public AActor
{
public:
	struct FString                                     BeaconTypeName;                                            // 0x0240(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ClientBeaconActorClass;                                    // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                              // 0x0258(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		}
		return ptr;
	}



};

// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0078 (FullSize[0x02E0] - InheritedSize[0x0268])
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
	class UPartyBeaconState*                           State;                                                     // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2UQQ[0x60];                                    // 0x0270(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLogoutOnSessionTimeout;                                   // 0x02D0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_X632[0x3];                                     // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SessionTimeoutSecs;                                        // 0x02D4(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TravelSessionTimeoutSecs;                                  // 0x02D8(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D3EY[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		}
		return ptr;
	}



};

// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UPartyBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumConsumedReservations;                                   // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxReservations;                                           // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumTeams;                                                  // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumPlayersPerTeam;                                         // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       TeamAssignmentMethod;                                      // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ReservedHostTeamNum;                                       // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ForceTeamNum;                                              // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRestrictCrossConsole;                                     // 0x0050(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0ZZQ[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPartyReservation>                   Reservations;                                              // 0x0058(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MHCM[0x10];                                    // 0x0068(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		}
		return ptr;
	}



};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WSD[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.QuitMatchCallbackProxy");
		}
		return ptr;
	}



	class UQuitMatchCallbackProxy* STATIC_QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds);
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ED5T[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy");
		}
		return ptr;
	}



	class UShowLoginUICallbackProxy* STATIC_ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// 0x00E8 (FullSize[0x03A8] - InheritedSize[0x02C0])
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData_OGDO[0x30];                                    // 0x02C0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DestSessionId;                                             // 0x02F0(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSpectatorReservation                       PendingReservation;                                        // 0x0300(0x0078) (Protected, NativeAccessSpecifierProtected)
	OnlineSubsystemUtils_ESpectatorClientRequestType   RequestType;                                               // 0x0378(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPendingReservationSent;                                   // 0x0379(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCancelReservation;                                        // 0x037A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DDGF[0x2D];                                    // 0x037B(0x002D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconClient");
		}
		return ptr;
	}



	void ServerReservationRequest(const struct FString& SessionId, const struct FSpectatorReservation& Reservation);
	void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& Spectator);
	void ClientSendReservationUpdates(int NumRemainingReservations);
	void ClientSendReservationFull();
	void ClientReservationResponse(TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse);
	void ClientCancelReservationResponse(TEnumAsByte<OnlineSubsystemUtils_ESpectatorReservationResult> ReservationResponse);
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// 0x0078 (FullSize[0x02E0] - InheritedSize[0x0268])
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
	class USpectatorBeaconState*                       State;                                                     // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SD7T[0x60];                                    // 0x0270(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLogoutOnSessionTimeout;                                   // 0x02D0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZS95[0x3];                                     // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SessionTimeoutSecs;                                        // 0x02D4(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TravelSessionTimeoutSecs;                                  // 0x02D8(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YTNI[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconHost");
		}
		return ptr;
	}



};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class USpectatorBeaconState : public UObject
{
public:
	struct FName                                       SessionName;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumConsumedReservations;                                   // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxReservations;                                           // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRestrictCrossConsole;                                     // 0x0038(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3GW2[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpectatorReservation>               Reservations;                                              // 0x0040(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AN8M[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.SpectatorBeaconState");
		}
		return ptr;
	}



};

// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
class ATestBeaconClient : public AOnlineBeaconClient
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		}
		return ptr;
	}



	void ServerPong();
	void ClientPing();
};

// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000 (FullSize[0x0268] - InheritedSize[0x0268])
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		}
		return ptr;
	}



};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
		}
		return ptr;
	}



	void STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
	void STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int PlayerIndex, struct FString* PlayerDisplayName);
	void STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, int* PlayerIndex);
	void STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, bool* bIsMyTurn);
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	unsigned char                                      UnknownData_XF3A[0x10];                                    // 0x0640(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.VoipListenerSynthComponent");
		}
		return ptr;
	}



	bool IsIdling();
};

// Class OnlineSubsystemUtils.IpConnection
// 0x0060 (FullSize[0x1A20] - InheritedSize[0x19C0])
class UIpConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData_MATK[0x50];                                    // 0x19C0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SocketErrorDisconnectDelay;                                // 0x1A10(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZUNA[0xC];                                     // 0x1A14(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		}
		return ptr;
	}



};

// Class OnlineSubsystemUtils.IpNetDriver
// 0x0048 (FullSize[0x07A0] - InheritedSize[0x0758])
class UIpNetDriver : public UNetDriver
{
public:
	unsigned char                                      LogPortUnreach : 1;                                        // 0x0758(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AllowPlayerPortUnreach : 1;                                // 0x0758(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JKIF[0x3];                                     // 0x0759(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           MaxPortCountToTry;                                         // 0x075C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZ68[0xC];                                     // 0x0760(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                     // 0x076C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                        // 0x0770(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                     // 0x0774(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                        // 0x0778(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OAKO[0x4];                                     // 0x077C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             MaxSecondsInReceive;                                       // 0x0780(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NbPacketsBetweenReceiveTimeTest;                           // 0x0788(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SUSN[0x14];                                    // 0x078C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		}
		return ptr;
	}



};

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		}
		return ptr;
	}



	void STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, float* Progress);
	void STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementID, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden);
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6BRG[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		}
		return ptr;
	}



	class UAchievementQueryCallbackProxy* STATIC_CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	class UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SGWK[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		}
		return ptr;
	}



	class UAchievementWriteCallbackProxy* STATIC_WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag);
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TDGK[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		}
		return ptr;
	}



	class UConnectionCallbackProxy* STATIC_ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_651L[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.CreateSessionCallbackProxy");
		}
		return ptr;
	}



	class UCreateSessionCallbackProxy* STATIC_CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN);
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3UGZ[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.DestroySessionCallbackProxy");
		}
		return ptr;
	}



	class UDestroySessionCallbackProxy* STATIC_DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5CIV[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndMatchCallbackProxy");
		}
		return ptr;
	}



	class UEndMatchCallbackProxy* STATIC_EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const struct FString& MatchID, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<OnlineSubsystem_EMPMatchOutcome> OtherPlayersOutcome);
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C2UX[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndTurnCallbackProxy");
		}
		return ptr;
	}



	class UEndTurnCallbackProxy* STATIC_EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& MatchID, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface);
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QMH4[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindSessionsCallbackProxy");
		}
		return ptr;
	}



	bool STATIC_IsTournamentModeEnabled(const struct FBlueprintSessionResult& Result);
	bool STATIC_IsPasswordProtected(const struct FBlueprintSessionResult& Result);
	struct FString STATIC_GetServerName(const struct FBlueprintSessionResult& Result);
	int STATIC_GetPingInMs(const struct FBlueprintSessionResult& Result);
	bool STATIC_GetOfficialServer(const struct FBlueprintSessionResult& Result);
	int STATIC_GetMaxPlayers(const struct FBlueprintSessionResult& Result);
	struct FString STATIC_GetMapName(const struct FBlueprintSessionResult& Result);
	int STATIC_GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
	class UFindSessionsCallbackProxy* STATIC_FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN);
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GL3K[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
		}
		return ptr;
	}



	class UFindTurnBasedMatchCallbackProxy* STATIC_FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches);
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UInAppPurchaseCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UKA5[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		}
		return ptr;
	}



	class UInAppPurchaseCallbackProxy* STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_34MK[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		}
		return ptr;
	}



	class UInAppPurchaseQueryCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<struct FString> ProductIdentifiers);
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSMY[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
		}
		return ptr;
	}



	class UInAppPurchaseRestoreCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PQUF[0xF8];                                    // 0x0048(0x00F8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.JoinSessionCallbackProxy");
		}
		return ptr;
	}



	class UJoinSessionCallbackProxy* STATIC_JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		}
		return ptr;
	}



	bool STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue);
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class ULeaderboardFlushCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FUT7[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		}
		return ptr;
	}



	class ULeaderboardFlushCallbackProxy* STATIC_CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName);
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class ULeaderboardQueryCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LKPM[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		}
		return ptr;
	}



	class ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName);
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LSU6[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.LogoutCallbackProxy");
		}
		return ptr;
	}



	class ULogoutCallbackProxy* STATIC_Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x00B8 (FullSize[0x0328] - InheritedSize[0x0270])
class AOnlineBeaconHost : public AOnlineBeacon
{
public:
	int                                                ListenPort;                                                // 0x0270(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9URR[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                              // 0x0278(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NMH0[0xA0];                                    // 0x0288(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		}
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	struct FName                                       VoiceSubsystemNameOverride;                                // 0x0028(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MCTF[0x100];                                   // 0x0030(0x0100) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
		}
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                               bOnlinePIEEnabled;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P6G7[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPIELoginSettingsInternal>           Logins;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		}
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x0180 (FullSize[0x01A8] - InheritedSize[0x0028])
class UOnlineSessionClient : public UOnlineSession
{
public:
	unsigned char                                      UnknownData_ATOH[0x178];                                   // 0x0028(0x0178) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsFromInvite;                                             // 0x01A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHandlingDisconnect;                                       // 0x01A1(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VY4V[0x6];                                     // 0x01A2(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
