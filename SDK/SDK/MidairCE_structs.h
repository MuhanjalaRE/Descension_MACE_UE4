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

// Enum MidairCE.EMAMatchResultType
enum class MidairCE_EMAMatchResultType : uint8_t
{
	EMAMatchResultType__Lose       = 0,
	EMAMatchResultType__Win        = 1,
	EMAMatchResultType__Draw       = 2,
	EMAMatchResultType__EMAMatchResultType_MAX = 3,

};

// Enum MidairCE.EDrillBotSpawnType
enum class MidairCE_EDrillBotSpawnType : uint8_t
{
	EDrillBotSpawnType__Immediate  = 0,
	EDrillBotSpawnType__SecondsBeforeGrab = 1,
	EDrillBotSpawnType__SecondsIntoRoute = 2,
	EDrillBotSpawnType__EDrillBotSpawnType_MAX = 3,

};

// Enum MidairCE.EDrillVictoryType
enum class MidairCE_EDrillVictoryType : uint8_t
{
	EDrillVictoryType__NoFlagCarrier = 0,
	EDrillVictoryType__FlagCaught  = 1,
	EDrillVictoryType__HitShot     = 2,
	EDrillVictoryType__TotalKills  = 3,
	EDrillVictoryType__TotalMidairs = 4,
	EDrillVictoryType__EDrillVictoryType_MAX = 5,

};

// Enum MidairCE.EPlayerRecordableInputTypes
enum class MidairCE_EPlayerRecordableInputTypes : uint8_t
{
	EPlayerRecordableInputTypes__Jet = 0,
	EPlayerRecordableInputTypes__Skii = 1,
	EPlayerRecordableInputTypes__Forward = 2,
	EPlayerRecordableInputTypes__Backwards = 3,
	EPlayerRecordableInputTypes__Left = 4,
	EPlayerRecordableInputTypes__Right = 5,
	EPlayerRecordableInputTypes__Fire = 6,
	EPlayerRecordableInputTypes__Yaw = 7,
	EPlayerRecordableInputTypes__FlagToss = 8,
	EPlayerRecordableInputTypes__WeaponSlot1 = 9,
	EPlayerRecordableInputTypes__WeaponSlot2 = 10,
	EPlayerRecordableInputTypes__WeaponSlot3 = 11,
	EPlayerRecordableInputTypes__NextWeapon = 12,
	EPlayerRecordableInputTypes__PreviousWeapon = 13,
	EPlayerRecordableInputTypes__ThrowGrenade = 14,
	EPlayerRecordableInputTypes__StopJet = 15,
	EPlayerRecordableInputTypes__StopSkii = 16,
	EPlayerRecordableInputTypes__StopFire = 17,
	EPlayerRecordableInputTypes__SetPitch = 18,
	EPlayerRecordableInputTypes__SetYaw = 19,
	EPlayerRecordableInputTypes__EPlayerRecordableInputTypes_MAX = 20,

};

// Enum MidairCE.EAugmentType
enum class MidairCE_EAugmentType : uint8_t
{
	EAugmentType__Passive          = 0,
	EAugmentType__Toggleable       = 1,
	EAugmentType__Triggerable      = 2,
	EAugmentType__EAugmentType_MAX = 3,

};

// Enum MidairCE.EFindSessionsSortMethod
enum class MidairCE_EFindSessionsSortMethod : uint8_t
{
	EFindSessionsSortMethod__None  = 0,
	EFindSessionsSortMethod__Default = 1,
	EFindSessionsSortMethod__PingAscending = 2,
	EFindSessionsSortMethod__PlayerCountDescending = 3,
	EFindSessionsSortMethod__NameAscending = 4,
	EFindSessionsSortMethod__NameDescending = 5,
	EFindSessionsSortMethod__SmartPingAndPlayers = 6,
	EFindSessionsSortMethod__EFindSessionsSortMethod_MAX = 7,

};

// Enum MidairCE.EPRMessage
enum class MidairCE_EPRMessage : uint8_t
{
	EPRMessage__Respawning         = 0,
	EPRMessage__Evacuating         = 1,
	EPRMessage__KilledSomething    = 2,
	EPRMessage__Progressed         = 3,
	EPRMessage__ProgressedWithTP   = 4,
	EPRMessage__SkippedToLesson    = 5,
	EPRMessage__Finished           = 6,
	EPRMessage__EPRMessage_MAX     = 7,

};

// Enum MidairCE.ERBMessage
enum class MidairCE_ERBMessage : uint8_t
{
	ERBMessage__CarrotDropped      = 0,
	ERBMessage__CarrotReset        = 1,
	ERBMessage__CarrotTaken        = 2,
	ERBMessage__RabbitKilled       = 3,
	ERBMessage__SelfPassTimeout    = 4,
	ERBMessage__ERBMessage_MAX     = 5,

};

// Enum MidairCE.EPowerupMessage
enum class MidairCE_EPowerupMessage : uint8_t
{
	EPowerupMessage__PickedUp      = 0,
	EPowerupMessage__Expired       = 1,
	EPowerupMessage__EPowerupMessage_MAX = 2,

};

// Enum MidairCE.ETDMMessage
enum class MidairCE_ETDMMessage : uint8_t
{
	ETDMMessage__FlagDropped       = 0,
	ETDMMessage__FlagPickedup      = 1,
	ETDMMessage__RabbitKilled      = 2,
	ETDMMessage__ETDMMessage_MAX   = 3,

};

// Enum MidairCE.EGameMessage
enum class MidairCE_EGameMessage : uint8_t
{
	EGameMessage__YouJoinedBlue    = 0,
	EGameMessage__YouJoinedRed     = 1,
	EGameMessage__GameStart        = 2,
	EGameMessage__GameOver         = 3,
	EGameMessage__GameOverSingle   = 4,
	EGameMessage__RoundOver        = 5,
	EGameMessage__NoTeamLivesLeft  = 6,
	EGameMessage__LastLiveLeft     = 7,
	EGameMessage__LastManStanding  = 8,
	EGameMessage__MaxDeployables   = 9,
	EGameMessage__VoteStarted      = 10,
	EGameMessage__RebalanceSoon    = 11,
	EGameMessage__RebalanceStarted = 12,
	EGameMessage__RebalanceEnded   = 13,
	EGameMessage__FlagHeldTooLong  = 14,
	EGameMessage__HasRabbitFlag    = 15,
	EGameMessage__PositionSaved    = 16,
	EGameMessage__PositionLoaded   = 17,
	EGameMessage__FlagReset        = 18,
	EGameMessage__FlagReturned     = 19,
	EGameMessage__FlagDropped      = 20,
	EGameMessage__FlagTaken        = 21,
	EGameMessage__TeamRabbitFlagTaken = 22,
	EGameMessage__FlagCarrierKilled = 23,
	EGameMessage__FlagCaptured     = 24,
	EGameMessage__StartOvertime    = 25,
	EGameMessage__GoalScored       = 26,
	EGameMessage__EGameMessage_MAX = 27,

};

// Enum MidairCE.EMAAudioClasses
enum class MidairCE_EMAAudioClasses : uint8_t
{
	EMAAudioClasses__Master        = 0,
	EMAAudioClasses__Effects       = 1,
	EMAAudioClasses__Music         = 2,
	EMAAudioClasses__GameEvents    = 3,
	EMAAudioClasses__Voice         = 4,
	EMAAudioClasses__EMAAudioClasses_MAX = 5,

};

// Enum MidairCE.EMappingPriority
enum class MidairCE_EMappingPriority : uint8_t
{
	EMappingPriority__None         = 0,
	EMappingPriority__Primary      = 1,
	EMappingPriority__Secondary    = 2,
	EMappingPriority__All          = 3,
	EMappingPriority__EMappingPriority_MAX = 4,

};

// Enum MidairCE.EMappingConflictResolution
enum class MidairCE_EMappingConflictResolution : uint8_t
{
	EMappingConflictResolution__KeepOriginal = 0,
	EMappingConflictResolution__KeepNew = 1,
	EMappingConflictResolution__DiscardBoth = 2,
	EMappingConflictResolution__KeepBoth = 3,
	EMappingConflictResolution__EMappingConflictResolution_MAX = 4,

};

// Enum MidairCE.ESpectateMode
enum class MidairCE_ESpectateMode : uint8_t
{
	ESpectateMode__FreeCam         = 0,
	ESpectateMode__FollowPlayer    = 1,
	ESpectateMode__ESpectateMode_MAX = 2,

};

// Enum MidairCE.EFuzeMode
enum class MidairCE_EFuzeMode : uint8_t
{
	EFuzeMode__Timed               = 0,
	EFuzeMode__Impact              = 1,
	EFuzeMode__Proximity           = 2,
	EFuzeMode__EFuzeMode_MAX       = 3,

};

// Enum MidairCE.EMAServiceState
enum class MidairCE_EMAServiceState : uint8_t
{
	EMAServiceState__None          = 0,
	EMAServiceState__Authenticating = 1,
	EMAServiceState__Authenticated = 2,
	EMAServiceState__Retrying      = 3,
	EMAServiceState__FailedOSS     = 4,
	EMAServiceState__FailedService = 5,
	EMAServiceState__EMAServiceState_MAX = 6,

};

// Enum MidairCE.EPracticeRouteTrailHitDifficulty
enum class MidairCE_EPracticeRouteTrailHitDifficulty : uint8_t
{
	EPracticeRouteTrailHitDifficulty__Easy = 0,
	EPracticeRouteTrailHitDifficulty__Medium = 1,
	EPracticeRouteTrailHitDifficulty__Expert = 2,
	EPracticeRouteTrailHitDifficulty__EPracticeRouteTrailHitDifficulty_MAX = 3,

};

// Enum MidairCE.EPracticeMenuDataTypes
enum class MidairCE_EPracticeMenuDataTypes : uint8_t
{
	EPracticeMenuDataTypes__RouteNames = 0,
	EPracticeMenuDataTypes__RouteName = 1,
	EPracticeMenuDataTypes__RouteDescription = 2,
	EPracticeMenuDataTypes__GrabTime = 3,
	EPracticeMenuDataTypes__CaptureTime = 4,
	EPracticeMenuDataTypes__TotalTime = 5,
	EPracticeMenuDataTypes__GrabSpeed = 6,
	EPracticeMenuDataTypes__CaptureSpeed = 7,
	EPracticeMenuDataTypes__MaxSpeed = 8,
	EPracticeMenuDataTypes__AverageSpeed = 9,
	EPracticeMenuDataTypes__TotalMarkers = 10,
	EPracticeMenuDataTypes__HitMarkers = 11,
	EPracticeMenuDataTypes__TimeToGrab = 12,
	EPracticeMenuDataTypes__DrillName = 13,
	EPracticeMenuDataTypes__DrillDescription = 14,
	EPracticeMenuDataTypes__DrillNumberBots = 15,
	EPracticeMenuDataTypes__DrillLength = 16,
	EPracticeMenuDataTypes__DrillSpawnDelay = 17,
	EPracticeMenuDataTypes__EPracticeMenuDataTypes_MAX = 18,

};

// Enum MidairCE.EMAWeaponActivity
enum class MidairCE_EMAWeaponActivity : uint8_t
{
	EMAWeaponActivity__WEAP_None   = 0,
	EMAWeaponActivity__WEAP_TakeOut = 1,
	EMAWeaponActivity__WEAP_PowerUp = 2,
	EMAWeaponActivity__WEAP_Idle   = 3,
	EMAWeaponActivity__WEAP_DryFire = 4,
	EMAWeaponActivity__WEAP_Firing = 5,
	EMAWeaponActivity__WEAP_Overheated = 6,
	EMAWeaponActivity__WEAP_Reloading = 7,
	EMAWeaponActivity__WEAP_Charging = 8,
	EMAWeaponActivity__WEAP_Overcharged = 9,
	EMAWeaponActivity__WEAP_Overloaded = 10,
	EMAWeaponActivity__WEAP_Fizzle = 11,
	EMAWeaponActivity__WEAP_Custom1 = 12,
	EMAWeaponActivity__WEAP_Custom2 = 13,
	EMAWeaponActivity__WEAP_Custom3 = 14,
	EMAWeaponActivity__WEAP_Custom4 = 15,
	EMAWeaponActivity__WEAP_MAX    = 16,

};

// Enum MidairCE.ESliderPresentationStyle
enum class MidairCE_ESliderPresentationStyle : uint8_t
{
	ESliderPresentationStyle__DoNotDisplay = 0,
	ESliderPresentationStyle__DisplayAsInt = 1,
	ESliderPresentationStyle__DisplayAsFloat = 2,
	ESliderPresentationStyle__ESliderPresentationStyle_MAX = 3,

};

// Enum MidairCE.EObjectiveUpdateType
enum class MidairCE_EObjectiveUpdateType : uint8_t
{
	EObjectiveUpdateType__Nothing  = 0,
	EObjectiveUpdateType__ClearAll = 1,
	EObjectiveUpdateType__ReplaceAll = 2,
	EObjectiveUpdateType__CompleteObjective = 3,
	EObjectiveUpdateType__CompleteObjectiveWithText = 4,
	EObjectiveUpdateType__Append   = 5,
	EObjectiveUpdateType__RemoveLine = 6,
	EObjectiveUpdateType__Replace  = 7,
	EObjectiveUpdateType__EObjectiveUpdateType_MAX = 8,

};

// Enum MidairCE.EArmorSize
enum class MidairCE_EArmorSize : uint8_t
{
	EArmorSize__Light              = 0,
	EArmorSize__Medium             = 1,
	EArmorSize__Heavy              = 2,
	EArmorSize__Max                = 3,

};

// Enum MidairCE.ESensorResolutionStrength
enum class MidairCE_ESensorResolutionStrength : uint8_t
{
	ESensorResolutionStrength__None = 0,
	ESensorResolutionStrength__Low = 1,
	ESensorResolutionStrength__Medium = 2,
	ESensorResolutionStrength__High = 3,
	ESensorResolutionStrength__ESensorResolutionStrength_MAX = 4,

};

// Enum MidairCE.ESensorTrackingType
enum class MidairCE_ESensorTrackingType : uint8_t
{
	ESensorTrackingType__None      = 0,
	ESensorTrackingType__Radar     = 1,
	ESensorTrackingType__Motion    = 2,
	ESensorTrackingType__ESensorTrackingType_MAX = 3,

};

// Enum MidairCE.EMapVoteOption
enum class MidairCE_EMapVoteOption : uint8_t
{
	EMapVoteOption__Map1           = 0,
	EMapVoteOption__Map2           = 1,
	EMapVoteOption__Map3           = 2,
	EMapVoteOption__Map4           = 3,
	EMapVoteOption__Map5           = 4,
	EMapVoteOption__Random         = 5,
	EMapVoteOption__Mode1          = 6,
	EMapVoteOption__Mode2          = 7,
	EMapVoteOption__Mode3          = 8,
	EMapVoteOption__Refresh        = 9,
	EMapVoteOption__Discard        = 10,
	EMapVoteOption__EMapVoteOption_MAX = 11,

};

// Enum MidairCE.EMapVoteStage
enum class MidairCE_EMapVoteStage : uint8_t
{
	EMapVoteStage__NotVoting       = 0,
	EMapVoteStage__FirstRound      = 1,
	EMapVoteStage__SecondRound     = 2,
	EMapVoteStage__Taken           = 3,
	EMapVoteStage__EMapVoteStage_MAX = 4,

};

// Enum MidairCE.ESimpleVote
enum class MidairCE_ESimpleVote : uint8_t
{
	ESimpleVote__Abstain           = 0,
	ESimpleVote__Yes               = 1,
	ESimpleVote__No                = 2,
	ESimpleVote__ESimpleVote_MAX   = 3,

};

// Enum MidairCE.EPlayerVoiceState
enum class MidairCE_EPlayerVoiceState : uint8_t
{
	EPlayerVoiceState__Silent      = 0,
	EPlayerVoiceState__Talking     = 1,
	EPlayerVoiceState__Muted       = 2,
	EPlayerVoiceState__EPlayerVoiceState_MAX = 3,

};

// Enum MidairCE.EPowerupSize
enum class MidairCE_EPowerupSize : uint8_t
{
	PWSIZE_SMALL                   = 0,
	PWSIZE_MEDIUM                  = 1,
	PWSIZE_LARGE                   = 2,
	PWSIZE_MAX                     = 3,

};

// Enum MidairCE.EPowerupTypes
enum class MidairCE_EPowerupTypes : uint8_t
{
	PWER_NONE                      = 0,
	PWER_HEALTHSMALL               = 1,
	PWER_HEALTH                    = 2,
	PWER_HEALTHLARGE               = 3,
	PWER_AMMO                      = 4,
	PWER_IMPULSE                   = 5,
	PWER_ENERGY                    = 6,
	PWER_HOT                       = 7,
	PWER_DAMAGE                    = 8,
	PWER_SHOTGUN                   = 9,
	PWER_RANDOM                    = 10,
	PWER_MAX                       = 11,

};

// Enum MidairCE.ECameraMode
enum class MidairCE_ECameraMode : uint8_t
{
	ECameraMode__None              = 0,
	ECameraMode__FirstPerson       = 1,
	ECameraMode__ShoulderCamera    = 2,
	ECameraMode__OrbitCamera       = 3,
	ECameraMode__Freelook          = 4,
	ECameraMode__ECameraMode_MAX   = 5,

};

// Enum MidairCE.ELockState
enum class MidairCE_ELockState : uint8_t
{
	ELockState__Unlocked           = 0,
	ELockState__Locking            = 1,
	ELockState__Locked             = 2,
	ELockState__Tracking           = 3,
	ELockState__ELockState_MAX     = 4,

};

// Enum MidairCE.EDetectedState
enum class MidairCE_EDetectedState : uint8_t
{
	EDetectedState__Undetected     = 0,
	EDetectedState__Jamming        = 1,
	EDetectedState__Sensed         = 2,
	EDetectedState__Detected       = 3,
	EDetectedState__EDetectedState_MAX = 4,

};

// Enum MidairCE.ETeamAllegiance
enum class MidairCE_ETeamAllegiance : uint8_t
{
	ETeamAllegiance__Neutral       = 0,
	ETeamAllegiance__Friendly      = 1,
	ETeamAllegiance__Enemy         = 2,
	ETeamAllegiance__ETeamAllegiance_MAX = 3,

};

// Enum MidairCE.EDefinedItemType
enum class MidairCE_EDefinedItemType : uint8_t
{
	EDefinedItemType__Invalid      = 0,
	EDefinedItemType__Gameplay     = 1,
	EDefinedItemType__ArmorSkins   = 2,
	EDefinedItemType__WeaponSkins  = 3,
	EDefinedItemType__VoicePacks   = 4,
	EDefinedItemType__JetTrails    = 5,
	EDefinedItemType__Sprays       = 6,
	EDefinedItemType__EDefinedItemType_MAX = 7,

};

// Enum MidairCE.EPunishType
enum class MidairCE_EPunishType : uint8_t
{
	EPunishType__Kick              = 0,
	EPunishType__Ban               = 1,
	EPunishType__EPunishType_MAX   = 2,

};

// Enum MidairCE.EShieldType
enum class MidairCE_EShieldType : uint8_t
{
	EShieldType__Subtractive       = 0,
	EShieldType__Overshield        = 1,
	EShieldType__EShieldType_MAX   = 2,

};

// Enum MidairCE.ENetDeathType
enum class MidairCE_ENetDeathType : uint8_t
{
	ENetDeathType__TearOff         = 0,
	ENetDeathType__Revivable       = 1,
	ENetDeathType__None            = 2,
	ENetDeathType__ENetDeathType_MAX = 3,

};

// Enum MidairCE.ELevelSymmetryMode
enum class MidairCE_ELevelSymmetryMode : uint8_t
{
	ELevelSymmetryMode__None       = 0,
	ELevelSymmetryMode__MirrorX    = 1,
	ELevelSymmetryMode__MirrorY    = 2,
	ELevelSymmetryMode__Rotate     = 3,
	ELevelSymmetryMode__ELevelSymmetryMode_MAX = 4,

};

// Enum MidairCE.ESplineFinishAction
enum class MidairCE_ESplineFinishAction : uint8_t
{
	ESplineFinishAction__DestroyActor = 0,
	ESplineFinishAction__SwitchDirection = 1,
	ESplineFinishAction__ESplineFinishAction_MAX = 2,

};

// Enum MidairCE.EFunctionSuccess
enum class MidairCE_EFunctionSuccess : uint8_t
{
	EFunctionSuccess__Success      = 0,
	EFunctionSuccess__Fail         = 1,
	EFunctionSuccess__EFunctionSuccess_MAX = 2,

};

// Enum MidairCE.ELessonWinCondition
enum class MidairCE_ELessonWinCondition : uint8_t
{
	ELessonWinCondition__Kills     = 0,
	ELessonWinCondition__Score     = 1,
	ELessonWinCondition__MidairHits = 2,
	ELessonWinCondition__ReachedActor = 3,
	ELessonWinCondition__ELessonWinCondition_MAX = 4,

};

// Enum MidairCE.ELessonEndAction
enum class MidairCE_ELessonEndAction : uint8_t
{
	ELessonEndAction__None         = 0,
	ELessonEndAction__MovePlayerToLessonStart = 1,
	ELessonEndAction__MovePlayerToNextLesson = 2,
	ELessonEndAction__MovePlayerToCustomLesson = 3,
	ELessonEndAction__EndSection   = 4,
	ELessonEndAction__ELessonEndAction_MAX = 5,

};

// Enum MidairCE.EDialougeStackingRules
enum class MidairCE_EDialougeStackingRules : uint8_t
{
	EDialougeStackingRules__DontStack = 0,
	EDialougeStackingRules__Replace_leq_Priority = 1,
	EDialougeStackingRules__ReplaceAll = 2,
	EDialougeStackingRules__Enqueue = 3,
	EDialougeStackingRules__EDialougeStackingRules_MAX = 4,

};

// Enum MidairCE.EComplexStatusBarFillType
enum class MidairCE_EComplexStatusBarFillType : uint8_t
{
	EComplexStatusBarFillType__AdditionalValue = 0,
	EComplexStatusBarFillType__SubValue = 1,
	EComplexStatusBarFillType__EComplexStatusBarFillType_MAX = 2,

};

// Enum MidairCE.EMALeaderboardFormat
enum class MidairCE_EMALeaderboardFormat : uint8_t
{
	Number                         = 0,
	Seconds                        = 1,
	Milliseconds                   = 2,
	EMALeaderboardFormat_MAX       = 3,

};

// Enum MidairCE.EMALeaderboardSort
enum class MidairCE_EMALeaderboardSort : uint8_t
{
	None                           = 0,
	Ascending                      = 1,
	Descending                     = 2,
	EMALeaderboardSort_MAX         = 3,

};

// Enum MidairCE.EMALeaderboardUploadMethod
enum class MidairCE_EMALeaderboardUploadMethod : uint8_t
{
	KeepBest                       = 0,
	ForceUpdate                    = 1,
	EMALeaderboardUploadMethod_MAX = 2,

};

// Enum MidairCE.EMALeaderboardRequest
enum class MidairCE_EMALeaderboardRequest : uint8_t
{
	Global                         = 0,
	GlobalAroundUser               = 1,
	Friends                        = 2,
	Users                          = 3,
	EMALeaderboardRequest_MAX      = 4,

};

// Enum MidairCE.EMAMatchLobbyStatus
enum class MidairCE_EMAMatchLobbyStatus : uint8_t
{
	Stop                           = 0,
	Waiting                        = 1,
	Joining                        = 2,
	Started                        = 3,
	EMAMatchLobbyStatus_MAX        = 4,

};

// Enum MidairCE.EMAMatchServerStatus
enum class MidairCE_EMAMatchServerStatus : uint8_t
{
	Queuing                        = 0,
	Reserved                       = 1,
	Playing                        = 2,
	EMAMatchServerStatus_MAX       = 3,

};

// Enum MidairCE.EStatsType
enum class MidairCE_EStatsType : uint8_t
{
	EStatsType__Int32              = 0,
	EStatsType__Float              = 1,
	EStatsType__EStatsType_MAX     = 2,

};

// Enum MidairCE.EEdgeLockBehavior
enum class MidairCE_EEdgeLockBehavior : uint8_t
{
	Never                          = 0,
	Always                         = 1,
	Timed                          = 2,
	EEdgeLockBehavior_MAX          = 3,

};

// Enum MidairCE.ETargetPlacement
enum class MidairCE_ETargetPlacement : uint8_t
{
	ETargetPlacement__Above        = 0,
	ETargetPlacement__Centered     = 1,
	ETargetPlacement__Below        = 2,
	ETargetPlacement__ETargetPlacement_MAX = 3,

};

// Enum MidairCE.EAttachPerspective
enum class MidairCE_EAttachPerspective : uint8_t
{
	EAttachPerspective__Both       = 0,
	EAttachPerspective__FirstPerson = 1,
	EAttachPerspective__ThirdPerson = 2,
	EAttachPerspective__EAttachPerspective_MAX = 3,

};

// Enum MidairCE.EMAChatMemberStateChange
enum class MidairCE_EMAChatMemberStateChange : uint8_t
{
	ChatMemberStateChangeEntered   = 0,
	ChatMemberStateChangeLeft      = 1,
	ChatMemberStateChangeDisconnected = 2,
	ChatMemberStateChangeKicked    = 3,
	ChatMemberStateChangeBanned    = 4,
	EMAChatMemberStateChange_MAX   = 5,

};

// Enum MidairCE.EMAMatchType
enum class MidairCE_EMAMatchType : uint8_t
{
	Normal                         = 0,
	Warmup                         = 1,
	AR                             = 2,
	CTF                            = 3,
	InvalidMatchType               = 4,
	EMAMatchType_MAX               = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MidairCE.MASteamId
// 0x0008
struct FMASteamId
{
	unsigned char                                      UnknownData_CKD5[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.SteamUGCHandle
// 0x0008
struct FSteamUGCHandle
{
	unsigned char                                      UnknownData_UZLF[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.SteamLeaderBoard
// 0x0040
struct FSteamLeaderBoard
{
	struct FName                                       PlayerName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMASteamId                                  SteamId;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rank;                                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        Details;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                IconImage;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P2SE[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSteamUGCHandle                             HandleUGC;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               LocalPlayer;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XADS[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.StatValue
// 0x0008
struct FStatValue
{
	int                                                Total;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Best;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MatchHistory
// 0x00A0
struct FMatchHistory
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DemoId;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameVersion;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EMAMatchResultType                        ResultType;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TA91[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Time;                                                      // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rank;                                                      // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score1;                                                    // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score2;                                                    // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatValue                                  Score;                                                     // 0x0054(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatValue                                  Kills;                                                     // 0x005C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatValue                                  Deaths;                                                    // 0x0064(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatValue                                  Assists;                                                   // 0x006C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatValue                                  Suicides;                                                  // 0x0074(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatValue                                  Evacuations;                                               // 0x007C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_22UV[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Timestamp;                                                 // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   DateTime;                                                  // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.PlayerLocationAndState
// 0x002C
struct FPlayerLocationAndState
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Energy;                                                    // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Health;                                                    // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.PlayerRecordableInput
// 0x0014
struct FPlayerRecordableInput
{
	MidairCE_EPlayerRecordableInputTypes               InputType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DY70[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Pitch;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InputStartTime;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InputDuration;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MARouteTrail
// 0x00B0
struct FMARouteTrail
{
	struct FString                                     RouteName;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RouteDescription;                                          // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TeamId;                                                    // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6TUQ[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GrabTime;                                                  // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CaptureTime;                                               // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalTime;                                                 // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GrabSpeed;                                                 // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CaptureSpeed;                                              // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSpeed;                                                  // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AverageSpeed;                                              // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerLocationAndState                     FlagGrabMarker;                                            // 0x0040(0x002C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BB46[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerLocationAndState>             MarkerLocations;                                           // 0x0070(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPlayerRecordableInput>              PlayerInputs;                                              // 0x0080(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      YawInputs;                                                 // 0x0090(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      PitchInputs;                                               // 0x00A0(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MADrill
// 0x0080
struct FMADrill
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RouteTrailNames;                                           // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                NumberOfBots;                                              // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DrillLength;                                               // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DrillSpawnDelay;                                           // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ResetFlagsOnStart;                                         // 0x003C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BotsTakeDamage;                                            // 0x003D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BotsAlwaysFollowPath;                                      // 0x003E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BotsLoopIfAlive;                                           // 0x003F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BotsSpawnOnDifferentRoutes;                                // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EDrillVictoryType                         VictoryType;                                               // 0x0041(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EJBF[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DrillVictoryAmount;                                        // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EDrillBotSpawnType                        BotSpawnType;                                              // 0x0048(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WA3T[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerLocationAndState                     InitialPlayerLocation;                                     // 0x004C(0x002C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      InitialPlayerLocationTeam;                                 // 0x0078(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VH3M[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.MAMapPracticeData
// 0x0040
struct FMAMapPracticeData
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Author;                                                    // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMARouteTrail>                       RouteTrails;                                               // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMADrill>                            Drills;                                                    // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.GameViewportInputState
// 0x0018
struct FGameViewportInputState
{
	unsigned char                                      UnknownData_BXEH[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.LoadingScreenTipData
// 0x0018 (0x0020 - 0x0008)
struct FLoadingScreenTipData : public FTableRowBase
{
	struct FText                                       Tip;                                                       // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.LoadingScreenMapData
// 0x0068
struct FLoadingScreenMapData
{
	class UTexture2D*                                  Background;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  LoadingMusic;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapName;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Lore;                                                      // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       Authors;                                                   // 0x0038(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       Objectives;                                                // 0x0050(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.BackpackArt
// 0x0020
struct FBackpackArt
{
	class UParticleSystem*                             Particle;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GlowMaterialIndex;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KDKS[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          GlowMaterialOverride;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  PickupSound;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.CarriedObjectProperties
// 0x0010
struct FCarriedObjectProperties
{
	float                                              PickUpIgnoreTime;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSendHomeOnTeamTouch;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LDUK[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TossSpeed;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AutoReturnTime;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.RepMACharMovement
// 0x0024
struct FRepMACharMovement
{
	struct FVector_NetQuantize                         LinearVelocity;                                            // 0x0000(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Location;                                                  // 0x000C(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MAPackedMove
// 0x0030
struct FMAPackedMove
{
	float                                              Timestamp;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           CompressedFlags;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    ViewRotator;                                               // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LocalAccel;                                                // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BZQP[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMAWeapon*                                   PendingWeapon;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MAPackedMoveBundle
// 0x0038
struct FMAPackedMoveBundle
{
	TArray<struct FMAPackedMove>                       Moves;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         ClientLoc;                                                 // 0x0010(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TJ1N[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         ClientMovementBase;                                        // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ClientBaseBoneName;                                        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ClientMovementMode;                                        // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7UWG[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.MADamageProfileEntry
// 0x0018
struct FMADamageProfileEntry
{
	class UClass*                                      DamageTypeClass;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageModifier;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShieldDamageModifier;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyDamageModifier;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FAKR[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.DeathMessageData
// 0x0028
struct FDeathMessageData
{
	class AMAPlayerState*                              Killer;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerState*                              Victim;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerState*                              Assist;                                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageTypeClass;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SkillRating;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QM2A[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.SimplePlayerStats
// 0x0008
struct FSimplePlayerStats
{
	int                                                TotalScore;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimePlayedSec;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.ProgressionLevelData
// 0x0018 (0x0020 - 0x0008)
struct FProgressionLevelData : public FTableRowBase
{
	int                                                NewXPRequired;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BJCV[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        SteamItemDefsGranted;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.TargetRenderModifiers
// 0x0078
struct FTargetRenderModifiers
{
	float                                              NearDistance;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FarDistance;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NearScale;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FarScale;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ViewCone;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeRate;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   GenericIconSize;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          HealthbarMaterial;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   HealthbarSize;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                       Font;                                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Team0Color;                                                // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Team1Color;                                                // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FriendlyColor;                                             // 0x0058(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                EnemyColor;                                                // 0x0068(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.DamageMarkerInfo
// 0x0028
struct FDamageMarkerInfo
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Highlight;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlive : 1;                                                // 0x0018(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F0LP[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.HitMarkerInfo
// 0x0018
struct FHitMarkerInfo
{
	float                                              Time;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCriticalHit : 1;                                          // 0x0008(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTeamHit : 1;                                              // 0x0008(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlive : 1;                                                // 0x0008(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WQYK[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MidairInputConflict
// 0x0048
struct FMidairInputConflict
{
	unsigned char                                      UnknownData_9UR1[0x48];                                    // 0x0000(0x0048) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.MidairInputCategory
// 0x0040
struct FMidairInputCategory
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       CategoryName;                                              // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       CategoryTooltip;                                           // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint32_t                                           ConflictMask;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZUFY[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.RepInputSettings
// 0x0002
struct FRepInputSettings
{
	bool                                               bJumpThenSkate;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoAnnouncer;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.LocalMessageData
// 0x0040
struct FLocalMessageData
{
	class UMALocalMessage*                             MessageObject;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerState*                              PlayerState1;                                              // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerState*                              PlayerState2;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerState*                              PlayerState3;                                              // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scalar;                                                    // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     OptionalObject;                                            // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MatchXPConversion
// 0x0028
struct FMatchXPConversion
{
	int                                                MinMinutesMatchPlayed;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatchPlayedXP;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WinXP;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinutePlayedXP;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScoreXP;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPlayersForTop2Team;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Top2TeamXP;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPlayersForTop3;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Top3MatchXP;                                               // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StarsEarnedXP;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.BaseProgressionData
// 0x0018
struct FBaseProgressionData
{
	int                                                XP;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ItemPresentationCache;                                     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.IntRange
// 0x0008
struct FIntRange
{
	int                                                Min;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Max;                                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.PunishVote
// 0x0018
struct FPunishVote
{
	class AMAPlayerState*                              Instigator;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerState*                              Target;                                                    // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EPunishType                               Type;                                                      // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4V73[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.PracticeCourseInfo
// 0x0030
struct FPracticeCourseInfo
{
	struct FName                                       CourseTag;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0008(0x0018) (Edit, NativeAccessSpecifierPublic)
	TArray<struct FName>                               Lessons;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.CharacterStatDetails
// 0x0008
struct FCharacterStatDetails
{
	float                                              Health;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Energy;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.WeaponStatDetails
// 0x0010
struct FWeaponStatDetails
{
	float                                              RelativeDamagePct;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RelativeRadiusPct;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RelativeFireRatePct;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RelativeClipSizePct;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.AnnouncerSetData
// 0x0008 (0x0010 - 0x0008)
struct FAnnouncerSetData : public FTableRowBase
{
	class USoundCue*                                   SoundCue;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.VoiceSetData
// 0x0008 (0x0010 - 0x0008)
struct FVoiceSetData : public FTableRowBase
{
	class USoundCue*                                   SoundCue;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.PlayerExpressionData
// 0x0090 (0x0098 - 0x0008)
struct FPlayerExpressionData : public FTableRowBase
{
	struct FText                                       Category;                                                  // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       LeaderKey;                                                 // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       MenuText;                                                  // 0x0038(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       ChatText;                                                  // 0x0050(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       CueName;                                                   // 0x0068(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               TeamOnly;                                                  // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SS53[0x17];                                    // 0x0081(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.MidairObjectiveInfo
// 0x0078
struct FMidairObjectiveInfo
{
	struct FText                                       Title;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       Body;                                                      // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       ShortMessage;                                              // 0x0030(0x0018) (NativeAccessSpecifierPublic)
	struct FText                                       FullMessage;                                               // 0x0048(0x0018) (NativeAccessSpecifierPublic)
	struct FText                                       HighlightInfo;                                             // 0x0060(0x0018) (NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.PracticeLessonDetails
// 0x00D0
struct FPracticeLessonDetails
{
	struct FName                                       LessonTag;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerTeleportOnStartTrigger;                            // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N5ZF[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      StartTrigger;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerStart*                              AssociatedPlayerStart;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWipeStatsOnComplete;                                      // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R64T[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMidairObjectiveInfo                        LessonInitialInfo;                                         // 0x0028(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              LessonActivatableActors;                                   // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	MidairCE_ELessonWinCondition                       WinCondition;                                              // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_ELessonEndAction                          EndAction;                                                 // 0x00B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QV4J[0x2];                                     // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Goal;                                                      // 0x00B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              TargetActors;                                              // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FName                                       NextLessonTag;                                             // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.PracticeLessonContainer
// 0x0018
struct FPracticeLessonContainer
{
	struct FName                                       CourseName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPracticeLessonDetails>              Lessons;                                                   // 0x0008(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.TutorialDialougeDetails
// 0x0018
struct FTutorialDialougeDetails
{
	MidairCE_EDialougeStackingRules                    StackRules;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H1SN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Priority;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnterQueueIfCannotReplace;                                // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q860[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  DialougeCue;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.SensorTargetModifiers
// 0x0008
struct FSensorTargetModifiers
{
	float                                              MotionSensorRangeModifier;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadarSensorRangeModifier;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.ReplicatedSpawnedSpray
// 0x0020
struct FReplicatedSpawnedSpray
{
	class UClass*                                      SprayUsed;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Location;                                                  // 0x0008(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.LobbyUpdateQueue
// 0x0058
struct FLobbyUpdateQueue
{
	unsigned char                                      UnknownData_QG0H[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.LobbyInfo
// 0x0020
struct FLobbyInfo
{
	unsigned char                                      UnknownData_N1RX[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.SteamStats
// 0x0014
struct FSteamStats
{
	struct FName                                       KeyName;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Int32Value;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatValue;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EStatsType                                StatsType;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SA2F[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.DetectionCache
// 0x0010
struct FDetectionCache
{
	class APlayerState*                                ResponsiblePlayer;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6RYS[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.RepGenSettings
// 0x0002
struct FRepGenSettings
{
	bool                                               bSpectateStayWithOnePlayer;                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScorePointsShownToPlayer;                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.ReplicatedDemoMessage
// 0x0048
struct FReplicatedDemoMessage
{
	struct FClientReceiveData                          ClientData;                                                // 0x0000(0x0040) (NativeAccessSpecifierPublic)
	class UClass*                                      MessageClass;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.PredictionSmoothing
// 0x0070
struct FPredictionSmoothing
{
	class USceneComponent*                             TargetComponent;                                           // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BaseLocationOffset;                                        // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O296[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       BaseRotationOffset;                                        // 0x0020(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LocationOffset;                                            // 0x0030(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BTY4[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       RotationOffset;                                            // 0x0040(0x0010) (Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              SmoothLocationTime;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SmoothRotationTime;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSmoothUpdateDist;                                       // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NoSmoothUpdateDist;                                        // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableSmoothing;                                          // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_58QE[0xF];                                     // 0x0061(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.RepStage
// 0x0008
struct FRepStage
{
	unsigned char                                      Stage;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_45LV[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StageTime;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MatchAssignReq
// 0x0028
struct FMatchAssignReq
{
	int                                                MatchType;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IncludeNonOfficialServer;                                  // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AssignRunningServer;                                       // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BLB1[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Version;                                                   // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerIDs;                                                 // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MatchGameMode
// 0x0018
struct FMatchGameMode
{
	struct FString                                     GameMode;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPlayer;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayer;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MatchServer
// 0x00E0
struct FMatchServer
{
	int                                                MatchType;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H0TE[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Addr;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GmsIndex;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GamePort;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpecPort;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6FHO[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SteamId;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Appid;                                                     // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Gamedir;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Product;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Reject;                                                    // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X1QZ[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Max;                                                       // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Players;                                                   // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Bots;                                                      // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                       // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Secure;                                                    // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Dedicated;                                                 // 0x00A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RYID[0x6];                                     // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Gamedata;                                                  // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Gametype;                                                  // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Proxy;                                                     // 0x00D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Proxyonly;                                                 // 0x00D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2R8L[0x2];                                     // 0x00D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Latitude;                                                  // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Longitude;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S589[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.MatchResults_Team
// 0x0008
struct FMatchResults_Team
{
	int                                                Score;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MatchResults_Player
// 0x0110
struct FMatchResults_Player
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Time;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Kills;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Deaths;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Assists;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Suicides;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Evacuations;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamKills;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageTaken;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDealt;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MidairHits;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MidairsHitBy;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MidairKills;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GEIQ[0x80];                                    // 0x0048(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FlagCaptures;                                              // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagCaptureAssists;                                        // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagReturns;                                               // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagGrabs;                                                 // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagPasses;                                                // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagsCaught;                                               // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagInterceptionReturns;                                   // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagInterceptionThrows;                                    // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagSlidingReturns;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagPickups;                                               // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlagHeldTime;                                              // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CarrierKills;                                              // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MidairCarrierKills;                                        // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MidairCarrierDeaths;                                       // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeHeld;                                                  // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RabbitKills;                                               // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ResultType;                                                // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MatchResults
// 0x0068
struct FMatchResults
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DemoId;                                                    // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameVersion;                                               // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Time;                                                      // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U2ZY[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMatchResults_Team>                  Teams;                                                     // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMatchResults_Player>                Players;                                                   // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MatchWeaponStats
// 0x0014
struct FMatchWeaponStats
{
	int                                                Deaths;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Kills;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShotsFired;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShotsHit;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Accuracy;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.UserReport
// 0x0058
struct FUserReport
{
	int                                                Severity;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6PPK[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ClientId;                                                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Summary;                                                   // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reproduce;                                                 // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MAUser
// 0x0038
struct FMAUser
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            SteamId;                                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Credits;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XP;                                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsDev;                                                     // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsBanned;                                                  // 0x0035(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInClan;                                                  // 0x0036(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E5GX[0x1];                                     // 0x0037(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.PlayerItem
// 0x00A8
struct FPlayerItem
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemDefId;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_13AG[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Type;                                                      // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayType;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Price;                                                     // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZMHW[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Rarity;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AssetPath;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDefault;                                                // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8JX6[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IconUrl;                                                   // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IconUrlLarge;                                              // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.PlayerInventory
// 0x0010
struct FPlayerInventory
{
	TArray<struct FPlayerItem>                         Items;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MAServer
// 0x0050
struct FMAServer
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Players;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                max_players;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Secure;                                                    // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Dedicated;                                                 // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RFFI[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Addr;                                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MATeamUser
// 0x0028
struct FMATeamUser
{
	struct FString                                     RecordLocatorID;                                           // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            SteamId;                                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MATeam
// 0x0088
struct FMATeam
{
	struct FString                                     RecordLocatorID;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMATeamUser                                 Owner;                                                     // 0x0010(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FString                                     TeamName;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TeamTags;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Avatar;                                                    // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMATeamUser>                         Players;                                                   // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MASocketResponse
// 0x0010
struct FMASocketResponse
{
	struct FString                                     Message;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MASocketPlayer
// 0x0028
struct FMASocketPlayer
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Ping;                                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Kills;                                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Deaths;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Caps;                                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MASocketTeam
// 0x0008
struct FMASocketTeam
{
	int                                                TeamId;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MASocketGameState
// 0x0048
struct FMASocketGameState
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMASocketPlayer>                     Players;                                                   // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMASocketTeam>                       Teams;                                                     // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                TimeLeft;                                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_POV4[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.MASocketKill
// 0x0048
struct FMASocketKill
{
	struct FString                                     Killer;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Victim;                                                    // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Assist;                                                    // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DamageType;                                                // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillRating;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2RHL[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.MASocketMessage
// 0x00A0
struct FMASocketMessage
{
	struct FString                                     Message;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMASocketGameState                          GameState;                                                 // 0x0010(0x0048) (NativeAccessSpecifierPublic)
	struct FMASocketKill                               killEvent;                                                 // 0x0058(0x0048) (NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.LootboxInfo
// 0x0018
struct FLootboxInfo
{
	uint64_t                                           InstanceId;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExchangeId;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KK19[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CrateConfiguration;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.RepMAMovement
// 0x0028
struct FRepMAMovement
{
	struct FVector_NetQuantize                         LinearVelocity;                                            // 0x0000(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         Location;                                                  // 0x000C(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      EnsureReplicationByte;                                     // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MWKK[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.RepWeaponSpecial
// 0x0003
struct FRepWeaponSpecial
{
	unsigned char                                      Heat;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Charge;                                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRepHeat : 1;                                              // 0x0002(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRepCharge : 1;                                            // 0x0002(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.RepWeaponActivity
// 0x000C
struct FRepWeaponActivity
{
	unsigned char                                      Activity;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FireMode;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UEU3[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Duration;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EnsureReplicationByte;                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M17I[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.ZoomInfo
// 0x0002
struct FZoomInfo
{
	unsigned char                                      Level;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnabled : 1;                                              // 0x0001(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.CameraShakeInfo
// 0x0010
struct FCameraShakeInfo
{
	class UClass*                                      CameraShakeClass;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Scale;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UserSpacePitch;                                            // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UserSpaceYaw;                                              // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPlayInUserSpace : 1;                                      // 0x000B(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EnsureReplicationByte;                                     // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V5X1[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.SurfaceImpactInfo
// 0x0030
struct FSurfaceImpactInfo
{
	struct FVector_NetQuantize                         Location;                                                  // 0x0000(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bWorldGeometry : 1;                                        // 0x0018(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EPhysicalSurface>               SurfaceType;                                               // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XGD8[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      InstigatorClass;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EnsureReplicationByte;                                     // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OUR7[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.KillAssistInfo
// 0x0010
struct FKillAssistInfo
{
	class AMAPlayerState*                              PlayerState;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastDamageTime;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.WorldCameraShakeParams
// 0x0014
struct FWorldCameraShakeParams
{
	float                                              InnerRadius;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterRadius;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Occlusion;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOrientShakeTowardsEpicenter : 1;                          // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_382E[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.CharacterItemAnims
// 0x0018
struct FCharacterItemAnims
{
	class UClass*                                      CharacterClass;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Anim1P;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                Anim3P;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MidairRadioOption
// 0x0038
struct FMidairRadioOption
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       Tooltip;                                                   // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              TrueValue;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KM40[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.SurfaceTypeParticles
// 0x0078
struct FSurfaceTypeParticles
{
	class UParticleSystem*                             Default;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Flesh;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Shields;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Dirt;                                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Grass;                                                     // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Sand;                                                      // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Rock;                                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Snow;                                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Ice;                                                       // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Wood;                                                      // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Concrete;                                                  // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Metal;                                                     // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Glass;                                                     // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Water;                                                     // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Lava;                                                      // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.SurfaceTypeSounds
// 0x0078
struct FSurfaceTypeSounds
{
	class USoundBase*                                  Default;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Flesh;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Shields;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Dirt;                                                      // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Grass;                                                     // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Sand;                                                      // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Rock;                                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Snow;                                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Ice;                                                       // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Wood;                                                      // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Concrete;                                                  // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Metal;                                                     // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Glass;                                                     // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Water;                                                     // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  Lava;                                                      // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.ImpactEffect
// 0x0108
struct FImpactEffect
{
	struct FSurfaceTypeParticles                       Particles;                                                 // 0x0000(0x0078) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSurfaceTypeSounds                          Sounds;                                                    // 0x0078(0x0078) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DecalMaterial;                                             // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DecalSize;                                                 // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecalLifeSpan;                                             // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q3OQ[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.RegenProperties
// 0x0008
struct FRegenProperties
{
	float                                              Amount;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rate;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.GameModeSimpleScore
// 0x000C
struct FGameModeSimpleScore
{
	int                                                ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Value;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Cooldown;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct MidairCE.GameModeComplexScore
// 0x0018
struct FGameModeComplexScore
{
	struct FGameModeSimpleScore                        Regular;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Special_;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.MALoadout
// 0x0098 (0x00A0 - 0x0008)
struct FMALoadout : public FTableRowBase
{
	struct FString                                     LoadoutName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Character;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CharacterSkin;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      JetSkin;                                                   // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Spray;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              Weapons;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              WeaponSkins;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              HandGrenades;                                              // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                      Backpack;                                                  // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              Augments;                                                  // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                      VoiceSet;                                                  // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              SteamSerializedItems;                                      // 0x0088(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                               bSteamSerializesSkins;                                     // 0x0098(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OI6U[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.ObjectCount
// 0x0010
struct FObjectCount
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Count;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AXTD[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.TeamConfigEntry
// 0x0028
struct FTeamConfigEntry
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.CauseHitInfo
// 0x0008
struct FCauseHitInfo
{
	float                                              Damage;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCriticalHit : 1;                                          // 0x0004(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMidairHit : 1;                                            // 0x0004(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bKill : 1;                                                 // 0x0004(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTeamHit : 1;                                              // 0x0004(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Rating;                                                    // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EnsureReplicationByte;                                     // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3WNZ[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.PredictionMarkerInfo
// 0x0010
struct FPredictionMarkerInfo
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHitAsset;                                                 // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValid;                                                    // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8X8R[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.FlatShieldVars
// 0x0014
struct FFlatShieldVars
{
	float                                              ShieldHealthMaxPool;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShieldRechargeRate;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShieldRechargeDelay;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShieldRechargeConversionFactor;                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShieldFlashDuration;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.TakeHitInfo
// 0x0020
struct FTakeHitInfo
{
	float                                              Damage;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RelHitDirectionPitch;                                      // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RelHitDirectionYaw;                                        // 0x0005(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GZ1F[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RelHitLocationDist;                                        // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShielded : 1;                                             // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFatal : 1;                                                // 0x000C(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OTPE[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageTypeClass;                                           // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EnsureReplicationByte;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BERJ[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.MidairInputMapping
// 0x00A0
struct FMidairInputMapping
{
	struct FName                                       BindName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       TooltipText;                                               // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FName                                       Category;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                      PrimaryKey;                                                // 0x0040(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                      SecondaryKey;                                              // 0x0068(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              AxisValue;                                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ConflictChannels;                                          // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCannotClear;                                              // 0x0098(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5ZMU[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.PlayerInfo
// 0x0050
struct FPlayerInfo
{
	struct FUniqueNetIdRepl                            SteamId;                                                   // 0x0000(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LobbyOwner;                                                // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YFA9[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SteamIdString;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.LobbyGameCreated
// 0x0020
struct FLobbyGameCreated
{
	bool                                               LobbyCreated;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JHWS[0x1F];                                    // 0x0001(0x001F) MISSED OFFSET (PADDING)

};

// ScriptStruct MidairCE.ServerPlayer
// 0x0018
struct FServerPlayer
{
	int                                                Score;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6DNT[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MidairCE.PlayerStats
// 0x0040
struct FPlayerStats
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Matches;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatValue                                  Score;                                                     // 0x0014(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatValue                                  Kills;                                                     // 0x001C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatValue                                  Deaths;                                                    // 0x0024(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatValue                                  Assists;                                                   // 0x002C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatValue                                  Suicides;                                                  // 0x0034(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GD9Z[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
