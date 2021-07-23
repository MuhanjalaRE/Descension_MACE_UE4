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
// Enums
//---------------------------------------------------------------------------

// Enum SteamParty.EPartyStatus
enum class SteamParty_EPartyStatus : uint8_t
{
	EPartyStatus__PartyNone        = 0,
	EPartyStatus__PartyLeader      = 1,
	EPartyStatus__PartyMember      = 2,
	EPartyStatus__EPartyStatus_MAX = 3,

};

// Enum SteamParty.ESteamAvatarSize
enum class SteamParty_ESteamAvatarSize : uint8_t
{
	ESteamAvatarSize__AvatarSmall  = 0,
	ESteamAvatarSize__AvatarMedium = 1,
	ESteamAvatarSize__AvatarLarge  = 2,
	ESteamAvatarSize__ESteamAvatarSize_MAX = 3,

};

// Enum SteamParty.ESteamPresenceState
enum class SteamParty_ESteamPresenceState : uint8_t
{
	ESteamPresenceState__Online    = 0,
	ESteamPresenceState__Offline   = 1,
	ESteamPresenceState__Away      = 2,
	ESteamPresenceState__ExtendedAway = 3,
	ESteamPresenceState__DoNotDisturb = 4,
	ESteamPresenceState__Chat      = 5,
	ESteamPresenceState__ESteamPresenceState_MAX = 6,

};

// Enum SteamParty.EPartyChatType
enum class SteamParty_EPartyChatType : uint8_t
{
	EPartyChatType__Global         = 0,
	EPartyChatType__Whisper        = 1,
	EPartyChatType__EPartyChatType_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SteamParty.SteamBeaconSessionResult
// 0x0118
struct FSteamBeaconSessionResult
{
	unsigned char                                      UnknownData_51H3[0xD0];                                    // 0x0000(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SessionType;                                               // 0x00D0(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HostAddr;                                                  // 0x00E0(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SteamP2PAddr;                                              // 0x00F0(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // 0x0100(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPresence;                                               // 0x0110(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLan;                                                    // 0x0111(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4BEA[0x6];                                     // 0x0112(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct SteamParty.SteamFriendInfo
// 0x0050
struct FSteamFriendInfo
{
	struct FUniqueNetIdRepl                            UniqueNetId;                                               // 0x0000(0x0028) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RealName;                                                  // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamParty_ESteamPresenceState                     OnlineState;                                               // 0x0048(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOnline;                                                 // 0x0049(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPlaying;                                                // 0x004A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPlayingThisGame;                                        // 0x004B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsJoinable;                                               // 0x004C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasVoiceSupport;                                          // 0x004D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CU0Q[0x2];                                     // 0x004E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct SteamParty.PartyMessage
// 0x0080
struct FPartyMessage
{
	float                                              TimeSent;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OF6I[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SenderName;                                                // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            SenderId;                                                  // 0x0018(0x0028) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SteamParty_EPartyChatType                          ChatType;                                                  // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LVXT[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUniqueNetIdRepl                            ReceiverId;                                                // 0x0058(0x0028) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SteamParty.PartySaveInfo
// 0x00D8
struct FPartySaveInfo
{
	bool                                               IsInParty;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPartyLeader;                                             // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0M1M[0xD6];                                    // 0x0002(0x00D6) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
