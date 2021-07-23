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

// Class MidairCE.ActivatableObject
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActivatableObject : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ActivatableObject");
		}
		return ptr;
	}



};

// Class MidairCE.AIPlayerController
// 0x0030 (FullSize[0x0378] - InheritedSize[0x0348])
class AAIPlayerController : public AAIController
{
public:
	unsigned char                                      UnknownData_QXRA[0x8];                                     // 0x0348(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AISightRadius;                                             // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AISightAge;                                                // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AILoseSightRadius;                                         // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AIFieldOfView;                                             // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAISenseConfig_Sight*                        SightConfig;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMAPracticeComponent*                        PracticeComponent;                                         // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMACharacter*                                ControlledCharacter;                                       // 0x0370(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.AIPlayerController");
		}
		return ptr;
	}



	void ServerSuicide();
	void PlayRecordedInput(MidairCE_EPlayerRecordableInputTypes InputType);
	void PlayRecordedCameraInput(float Pitch, float Yaw);
	void OnPawnDetected(TArray<class AActor*> DetectedPawns);
	class AMACharacter* GetControlledCharacter();
};

// Class MidairCE.MAPickup
// 0x0158 (FullSize[0x0398] - InheritedSize[0x0240])
class AMAPickup : public AActor
{
public:
	class UProjectileMovementComponent*                ProjectileMovement;                                        // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USphereComponent*                            Collision;                                                 // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                            ActionableCollision;                                       // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bTimeout;                                                  // 0x0260(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bResetMeshRotationOnSpawn;                                 // 0x0261(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T7HY[0x6];                                     // 0x0262(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InteractionCooldownTime;                                   // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3JL8[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FImpactEffect                               TimeoutEffects;                                            // 0x0270(0x0108) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class USoundBase*                                  DropSound;                                                 // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  ImpactSound;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  PickupSound;                                               // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ImpulseInheritence;                                        // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WWP7[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPickup");
		}
		return ptr;
	}



	void PlayPickupEffects(class AMAPlayerController* Controller);
	void PlayLandingEffects();
	void OnStop(const struct FHitResult& ImpactResult);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ApplyImpulse_NM(const struct FVector& Impulse);
};

// Class MidairCE.AmmoPickup
// 0x0068 (FullSize[0x0400] - InheritedSize[0x0398])
class AAmmoPickup : public AMAPickup
{
public:
	unsigned char                                      UnknownData_HPQH[0x50];                                    // 0x0398(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTargetComponent*                            TargetComponent;                                           // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AMAPlayerState*                              RelatedPlayerState;                                        // 0x03F0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRegenProperties                            RegenProperties;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.AmmoPickup");
		}
		return ptr;
	}



	void SetupFromCharacter(class AMACharacter* Character);
	class AMAPlayerState* GetRelatedPlayer();
};

// Class MidairCE.MAGameMode
// 0x0670 (FullSize[0x09A0] - InheritedSize[0x0330])
class AMAGameMode : public AGameMode
{
public:
	class UClass*                                      TeamStateClass;                                            // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInWarmup;                                                 // 0x0338(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0WWN[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMAGameState*                                MAGameState;                                               // 0x0340(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                EndMatchVoteLength;                                        // 0x0348(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatchLength;                                               // 0x034C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PostMatchLength;                                           // 0x0350(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapVoteLength;                                             // 0x0354(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndMatchMinParticipationPct;                               // 0x0358(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndMatchYesVotePctToPass;                                  // 0x035C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MakeAdminMinParticipationPct;                              // 0x0360(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MakeAdminYesVotePctToPass;                                 // 0x0364(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WarmupLength;                                              // 0x0368(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreRoundLength;                                            // 0x036C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PostRoundLength;                                           // 0x0370(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WinningScore;                                              // 0x0374(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPlayersToStart;                                         // 0x0378(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeTeams;                                           // 0x037C(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BNQF[0x3];                                     // 0x037D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LivesPerTeam;                                              // 0x0380(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxRounds;                                                 // 0x0384(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3DD1[0x3];                                     // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bLimitPlayerLives : 1;                                     // 0x0388(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowLastManStanding : 1;                                  // 0x0388(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_72US[0x3];                                     // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnProtectionTime;                                       // 0x038C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BanTimeMinutes;                                            // 0x0390(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdminKickAsBanMinutes;                                     // 0x0394(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayersDropAmmoOnDeath;                                   // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayersDropHealthOnDeath;                                 // 0x0399(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequireLoadoutForSpawn;                                   // 0x039A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamGame;                                                 // 0x039B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTeamRabbit;                                             // 0x039C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBroadcastTeamChangeMessages;                              // 0x039D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      NumTeams;                                                  // 0x039E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V2J6[0x1];                                     // 0x039F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinSuicideDelay;                                           // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockTeamSpectators;                                       // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTeamStarts;                                            // 0x03A5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBalanceTeams;                                             // 0x03A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NF6Y[0x1];                                     // 0x03A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinPlayersForRebalance;                                    // 0x03A8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartRebalanceWarningTime;                                 // 0x03AC(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartRebalanceTime;                                        // 0x03B0(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bParentTargetsInheritAlwaysSensed;                         // 0x03B4(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowOvertime;                                            // 0x03B5(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamDamageAllowed;                                        // 0x03B6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseDistanceSpawnWeighting;                                // 0x03B7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseTeammateDistanceSpawnWeighting;                        // 0x03B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ZHQ[0x3];                                     // 0x03B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SelfDamagePct;                                             // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KillAssistThreshold;                                       // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HUQK[0x4];                                     // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, struct FText>                            ScoreDisplayText;                                          // 0x03C8(0x0050) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Weapon_KillBlaster;                                 // 0x0418(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Weapon_KillChaingun;                                // 0x0424(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Weapon_KillGrenadeLauncher;                         // 0x0430(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Weapon_KillPlasmaGun;                               // 0x043C(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Weapon_KillRailGun;                                 // 0x0448(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Weapon_KillTempest;                                 // 0x0454(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        ThrowableKillPoints_ConcussionGrenade;                     // 0x0460(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        ThrowableKillPoints_EMPGrenade;                            // 0x046C(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        ThrowableKillPoints_FragGrenade;                           // 0x0478(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeComplexScore                       MaxPoints_DamageContributionToKill;                        // 0x0484(0x0018) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeComplexScore                       Points_LastHitTowardsKill;                                 // 0x049C(0x0018) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeComplexScore                       Points_KillAssist;                                         // 0x04B4(0x0018) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_SensedEnemyLeadToKill;                              // 0x04CC(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Threshold_DamagingTeammates;                               // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_DamagingTeammates;                                  // 0x04DC(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Teamkill;                                           // 0x04E8(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0QS1[0x4];                                     // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ScoreboardWidgetClass;                                     // 0x04F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PracticeMenuWidgetClass;                                   // 0x0500(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MatchStatusWidgetClass;                                    // 0x0508(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UClass*, MidairCE_ESensorTrackingType>  SensorTrackingTypeOverrides;                               // 0x0510(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class UClass*, MidairCE_ESensorResolutionStrength> SensorResolutionStrengthOverrides;                         // 0x0560(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class UClass*, float>                         SensorRangeMultipliers;                                    // 0x05B0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FMALoadout>                          DefaultLoadouts;                                           // 0x0600(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              TournamentWeapons;                                         // 0x0610(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              AvailableWeapons;                                          // 0x0620(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              UnavailableWeapons;                                        // 0x0630(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class UClass*, uint32_t>                      LimitedWeapons;                                            // 0x0640(0x0050) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              AvailableThrowables;                                       // 0x0690(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              UnavailableThrowables;                                     // 0x06A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              AvailableDeployables;                                      // 0x06B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              UnavailableDeployables;                                    // 0x06C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              AvailablePacks;                                            // 0x06D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              UnavailablePacks;                                          // 0x06E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FObjectCount>                        GameMaxObjectsPerTeam;                                     // 0x06F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bSupportsLoadouts;                                         // 0x0700(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0TTA[0x7];                                     // 0x0701(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ShortDisplayName;                                          // 0x0708(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class AMATeamState*>                        TeamArray;                                                 // 0x0720(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTeamConfigEntry>                    TeamConfig;                                                // 0x0730(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMALoadout                                  DefaultLoadout;                                            // 0x0740(0x00A0) (Config, NativeAccessSpecifierPublic)
	struct FMALoadout                                  TournamentLoadout;                                         // 0x07E0(0x00A0) (Config, NativeAccessSpecifierPublic)
	class UClass*                                      DefaultPawn;                                               // 0x0880(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LightClass;                                                // 0x0888(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LightClassBot;                                             // 0x0890(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YMK6[0x24];                                    // 0x0898(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MidmatchResetTime;                                         // 0x08BC(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R8CB[0x50];                                    // 0x08C0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      WinningActor;                                              // 0x0910(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDeferredRebalanceTeams;                                   // 0x0918(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUpdateMatchBalance;                                       // 0x0919(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WQZX[0x2];                                     // 0x091A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UnbalancedMatchTime;                                       // 0x091C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AMAPlayerState*>                      PlayersAutoChangeTeamDeferred;                             // 0x0920(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                               bMatchSkipped;                                             // 0x0930(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XCMB[0x7];                                     // 0x0931(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, int>                          MapVotes;                                                  // 0x0938(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FString                                     MapOverride;                                               // 0x0988(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NEMR[0x8];                                     // 0x0998(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAGameMode");
		}
		return ptr;
	}



	struct FString ReturnPrefix();
	bool IsWeaponAllowed(class UClass* WeaponClass);
	bool IsTournamentWeaponAllowed(class UClass* WeaponClass);
	bool IsTournamentModeEnabled();
	bool IsThrowableAllowed(class UClass* ThrowableClass);
	bool IsPracticeModeEnabled();
	bool IsDeployableAllowed(class UClass* DeployableClass);
	void FilterDisallowedItems(TArray<class UClass*>* ItemsIn, TArray<class UClass*>* ItemsOut);
};

// Class MidairCE.ARGameMode
// 0x0008 (FullSize[0x09A8] - InheritedSize[0x09A0])
class AARGameMode : public AMAGameMode
{
public:
	int                                                RoundSpawnGracePeriodLength;                               // 0x09A0(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WHGG[0x4];                                     // 0x09A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ARGameMode");
		}
		return ptr;
	}



};

// Class MidairCE.MAPlayerState
// 0x0210 (FullSize[0x0578] - InheritedSize[0x0368])
class AMAPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData_I3RZ[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMATeamState*                                TeamState;                                                 // 0x0370(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMATeamState*                                LastTeamState;                                             // 0x0378(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_ESimpleVote                               PlayerVote;                                                // 0x0380(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInitializing;                                           // 0x0381(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MW35[0x2];                                     // 0x0382(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastAutoAnnouncerTime;                                     // 0x0384(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AutoAnnouncerTimeLimit;                                    // 0x0388(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HGZT[0x8];                                     // 0x038C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsAlive;                                                  // 0x0394(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NCWK[0x3];                                     // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, float>                                   LastTimeApplyScoreMap;                                     // 0x0398(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsInEnergyConduit;                                        // 0x03E8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0FP8[0x7];                                     // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ActivePowerupName;                                         // 0x03F0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPowerup*                                  ActivePowerup;                                             // 0x0400(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ActivePowerupType;                                         // 0x0408(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Lives;                                                     // 0x040C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalLives;                                                // 0x0410(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAdmin;                                                  // 0x0414(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZR5W[0x3];                                     // 0x0415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkillRating;                                               // 0x0418(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Kills;                                                     // 0x041C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Deaths;                                                    // 0x0420(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Assists;                                                   // 0x0424(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Suicides;                                                  // 0x0428(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Evacuations;                                               // 0x042C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MidairHits;                                                // 0x0430(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MidairsHitBy;                                              // 0x0434(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MidairKills;                                               // 0x0438(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamKills;                                                 // 0x043C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageTaken;                                               // 0x0440(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDealt;                                               // 0x0444(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponKillBlaster;                                         // 0x0448(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponKillChaingun;                                        // 0x044C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponKillGrenadeLauncher;                                 // 0x0450(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponKillPlasmaGun;                                       // 0x0454(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponKillRailGun;                                         // 0x0458(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponKillTempest;                                         // 0x045C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponKillConcussionGrenade;                               // 0x0460(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponKillEMPGrenade;                                      // 0x0464(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponKillFragGrenade;                                     // 0x0468(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponDeathBlaster;                                        // 0x046C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponDeathChaingun;                                       // 0x0470(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponDeathGrenadeLauncher;                                // 0x0474(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponDeathPlasmaGun;                                      // 0x0478(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponDeathRailGun;                                        // 0x047C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponDeathTempest;                                        // 0x0480(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponDeathConcussionGrenade;                              // 0x0484(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponDeathEMPGrenade;                                     // 0x0488(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponDeathFragGrenade;                                    // 0x048C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FiredBlaster;                                              // 0x0490(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitBlaster;                                                // 0x0494(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccuracyBlaster;                                           // 0x0498(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FiredChaingun;                                             // 0x049C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitChaingun;                                               // 0x04A0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccuracyChaingun;                                          // 0x04A4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FiredGrenadeLauncher;                                      // 0x04A8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitGrenadeLauncher;                                        // 0x04AC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccuracyGrenadeLauncher;                                   // 0x04B0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FiredPlasmaGun;                                            // 0x04B4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitPlasmaGun;                                              // 0x04B8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccuracyPlasmaGun;                                         // 0x04BC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FiredRailGun;                                              // 0x04C0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitRailGun;                                                // 0x04C4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccuracyRailGun;                                           // 0x04C8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FiredTempest;                                              // 0x04CC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitTempest;                                                // 0x04D0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AccuracyTempest;                                           // 0x04D4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        MidairDistanceList;                                        // 0x04D8(0x0010) (BlueprintVisible, Net, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        MidairHitsByDistanceList;                                  // 0x04E8(0x0010) (BlueprintVisible, Net, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      NewTeamId;                                                 // 0x04F8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HYKW[0x3];                                     // 0x04F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ElapsedTime;                                               // 0x04FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_04RU[0x10];                                    // 0x0500(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsDev;                                                    // 0x0510(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7PJS[0x7];                                     // 0x0511(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TeamTags;                                                  // 0x0518(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequestChangeTeamCount;                                    // 0x0528(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoChangedTeam;                                          // 0x052C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1Z8U[0x3];                                     // 0x052D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             LastPlayerExpressionAudio;                                 // 0x0530(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ADecalActor*                                 LastSpawnedSpray;                                          // 0x0538(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedSpawnedSpray                     LastSpawnedSprayInfo;                                      // 0x0540(0x0020) (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      VoiceSet;                                                  // 0x0560(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCauseHitInfo                               LastCauseHitInfo;                                          // 0x0568(0x0008) (Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RQ7O[0x8];                                     // 0x0570(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlayerState");
		}
		return ptr;
	}



	void UpdateMatchResult(const struct FMatchHistory& MatchHistory);
	void ServerRequestChangeTeam(unsigned char DesiredTeamId);
	void OnRep_NewSpray();
	void OnRep_LastCauseHitInfo();
	void NotifyTeamChanged();
	bool IsAlive();
	void IncrementTeamkills();
	void IncrementSuicide(class UClass* DamageType, class AMAPlayerState* Victim);
	void IncrementLives();
	void IncrementKills(class UClass* DamageType, class AMAPlayerState* Victim);
	void IncrementEvacuations();
	void IncrementDeaths(class UClass* DamageType, class AMAPlayerState* Victim);
	void IncrementAssists(class UClass* DamageType, class AMAPlayerState* Victim);
	class AMAPowerup* GetPowerUp();
	MidairCE_EPlayerVoiceState GetPlayerTalkingState();
	void Client_NotifyScoreApplied(int ScoreID, float Value);
	void AdjustScore(int ScoreAdjustment);
};

// Class MidairCE.ARPlayerState
// 0x0010 (FullSize[0x0588] - InheritedSize[0x0578])
class AARPlayerState : public AMAPlayerState
{
public:
	int                                                FirstBloodKills;                                           // 0x0578(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FirstBloodDeaths;                                          // 0x057C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LivesLeft;                                                 // 0x0580(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9KSI[0x4];                                     // 0x0584(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ARPlayerState");
		}
		return ptr;
	}



};

// Class MidairCE.Augment_Art
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UAugment_Art : public UObject
{
public:
	struct FName                                       ActivateSoundSocketName;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  Activate1P;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  Activate3P;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  ActiveLoop;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  Deactivate1P;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  Deactivate3P;                                              // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseActiveMaterials;                                       // 0x0058(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OKME[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          ActiveMaterial1P;                                          // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          ActiveMaterial3P;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ActivateMaterialLerpTime;                                  // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ActiveMaterialTickRate;                                    // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       ActiveMaterialParameterName;                               // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   ActiveMaterialRange;                                       // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bStartActiveMaterialAtMin;                                 // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsBuddy;                                                  // 0x0089(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WEAJ[0x6];                                     // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAugment*                                    OwningAugment;                                             // 0x0090(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMACharacter*                                OwningCharacter;                                           // 0x0098(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsActive;                                                 // 0x00A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CON7[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             AudioLoopComponent;                                        // 0x00A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OtherActiveMaterial1P;                                     // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OtherActiveMaterial3P;                                     // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                                ActiveMaterialUpdateTimer;                                 // 0x00C0(0x0008) (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4HF3[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_Art");
		}
		return ptr;
	}



	void Tick(float DeltaTime);
	void SetActive_Visuals(bool bActive);
	void SetActive_Audio(bool bActive);
	void SetActive(bool bActive);
};

// Class MidairCE.Augment_Artillery_Art
// 0x0028 (FullSize[0x00F8] - InheritedSize[0x00D0])
class UAugment_Artillery_Art : public UAugment_Art
{
public:
	struct FColor                                      WillHitAssetColor;                                         // 0x00D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                      WontHitAssetColor;                                         // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture*                                    PredictionCrosshairTexture;                                // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ETQC[0x18];                                    // 0x00E0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_Artillery_Art");
		}
		return ptr;
	}



};

// Class MidairCE.Augment
// 0x00E0 (FullSize[0x01B8] - InheritedSize[0x00D8])
class UAugment : public UActorComponent
{
public:
	unsigned char                                      UnknownData_EVG3[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ArtClass;                                                  // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	MidairCE_EAugmentType                              Type;                                                      // 0x00E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_INDB[0x3];                                     // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CoolDownTime;                                              // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bNeverRepActive;                                           // 0x00F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bClientPredict;                                            // 0x00F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_49TI[0x6];                                     // 0x00F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              RequiredAugments;                                          // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                              EnergyActiveDrainRate;                                     // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EnergyActivateCost;                                        // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BuddyRange;                                                // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWantsHudDraw;                                             // 0x0114(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDeactivateWhenOwnerFiresWeapon;                           // 0x0115(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CGOX[0xA];                                     // 0x0116(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastActivateTime;                                          // 0x0120(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2TIR[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMABackpack*                                 OwningPack;                                                // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMACharacter*                                OwningCharacter;                                           // 0x0130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      RepTrigger;                                                // 0x0138(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3UYT[0x3];                                     // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CoolDownTimeSince;                                         // 0x013C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsBuddying;                                               // 0x0140(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QZVB[0x7];                                     // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AMACharacter*>                        RepBuddies;                                                // 0x0148(0x0010) (Net, ZeroConstructor, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class AMACharacter*>                        CachedBuddies;                                             // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<class AMACharacter*, class UAugment_Art*>     AugmentArtMap;                                             // 0x0168(0x0050) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment");
		}
		return ptr;
	}



	void ServerUse();
	void ResetType();
	void OnRep_Trigger();
	void OnRep_Buddies();
	void OnRemoved();
	void OnRemoveBuddy(class AMACharacter* Buddy);
	void OnGivenTo();
	void OnEnergyDepleted();
	void OnAddBuddy(class AMACharacter* Buddy);
	void OnActiveChanged(class AMACharacter* ReceivingCharacter);
	void MakePassive();
	void K2_Draw(class UCanvas* Canvas, float RenderDelta);
	bool IsReady();
	float GetCurrentEnergyChangeRate();
	class UAugment_Art* GetArtObjectFor(class AMACharacter* Character);
	bool CanBeUsedWith(class UClass* OtherAugmentClass);
};

// Class MidairCE.Augment_Artillery
// 0x0040 (FullSize[0x01F8] - InheritedSize[0x01B8])
class UAugment_Artillery : public UAugment
{
public:
	unsigned char                                      UnknownData_8OVQ[0x20];                                    // 0x01B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimePerStep;                                               // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxPredictionTime;                                         // 0x01DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ActiveTime;                                                // 0x01E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPredictionMarkerInfo                       PreviousPrediction;                                        // 0x01E4(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EG3H[0x4];                                     // 0x01F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_Artillery");
		}
		return ptr;
	}



};

// Class MidairCE.Augment_Blink
// 0x0108 (FullSize[0x02C0] - InheritedSize[0x01B8])
class UAugment_Blink : public UAugment
{
public:
	TMap<class UClass*, float>                         BlinkDistances;                                            // 0x01B8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<class UClass*, float>                         MaxConserveSpeeds;                                         // 0x0208(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<class UClass*, float>                         SpeedOverageReductionPcts;                                 // 0x0258(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FVector_NetQuantize10                       StartLocation;                                             // 0x02A8(0x000C) (Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6JRD[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAugment_Blink_Art*                          BlinkArt;                                                  // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_Blink");
		}
		return ptr;
	}



	void ReceiveBlinkLocation();
	void OnBlinkOccured();
};

// Class MidairCE.Augment_Blink_Art
// 0x0020 (FullSize[0x00F0] - InheritedSize[0x00D0])
class UAugment_Blink_Art : public UAugment_Art
{
public:
	class UParticleSystem*                             StartEffect;                                               // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                             EndEffect;                                                 // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                             StartDirectionalEffect;                                    // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                             EndDirectionalEffect;                                      // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_Blink_Art");
		}
		return ptr;
	}



	void StopBlink(const struct FVector& Location);
	void StartBlink(const struct FVector& Location);
};

// Class MidairCE.Augment_ChargePickup
// 0x0060 (FullSize[0x0218] - InheritedSize[0x01B8])
class UAugment_ChargePickup : public UAugment
{
public:
	float                                              DefaultPickupCharges;                                      // 0x01B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VBW4[0x4];                                     // 0x01BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, float>                         PickupCharges;                                             // 0x01C0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                              CurrentPickupCharges;                                      // 0x0210(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VMBP[0x4];                                     // 0x0214(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_ChargePickup");
		}
		return ptr;
	}



};

// Class MidairCE.Augment_ChargePlus
// 0x0060 (FullSize[0x0218] - InheritedSize[0x01B8])
class UAugment_ChargePlus : public UAugment
{
public:
	float                                              DefaultGrantedCharges;                                     // 0x01B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0OS6[0x4];                                     // 0x01BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, float>                         GrantedCharges;                                            // 0x01C0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                              CurrentlyGrantedCharges;                                   // 0x0210(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BFPW[0x4];                                     // 0x0214(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_ChargePlus");
		}
		return ptr;
	}



};

// Class MidairCE.Augment_FlatShield
// 0x0068 (FullSize[0x0220] - InheritedSize[0x01B8])
class UAugment_FlatShield : public UAugment
{
public:
	struct FFlatShieldVars                             DefaultShieldVars;                                         // 0x01B8(0x0014) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WYZD[0x4];                                     // 0x01CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, struct FFlatShieldVars>        ShieldVarsMap;                                             // 0x01D0(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_FlatShield");
		}
		return ptr;
	}



	void OwnerTookDamage(const struct FTakeHitInfo& TakeHitInfo);
};

// Class MidairCE.Augment_PersonalShield_Art
// 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
class UAugment_PersonalShield_Art : public UAugment_Art
{
public:
	class USkeletalMeshComponent*                      ShieldMesh3P;                                              // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                      ShieldMesh1P;                                              // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_PersonalShield_Art");
		}
		return ptr;
	}



};

// Class MidairCE.Augment_FlatShield_Art
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UAugment_FlatShield_Art : public UAugment_PersonalShield_Art
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_FlatShield_Art");
		}
		return ptr;
	}



};

// Class MidairCE.Augment_PersonalShield
// 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
class UAugment_PersonalShield : public UAugment
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_PersonalShield");
		}
		return ptr;
	}



};

// Class MidairCE.Augment_ShieldIntensityModifier
// 0x0008 (FullSize[0x01C0] - InheritedSize[0x01B8])
class UAugment_ShieldIntensityModifier : public UAugment
{
public:
	float                                              ShieldStrength;                                            // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShieldEfficiency;                                          // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_ShieldIntensityModifier");
		}
		return ptr;
	}



};

// Class MidairCE.MAItem
// 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
class AMAItem : public AActor
{
public:
	bool                                               bGivenToReplicated;                                        // 0x0240(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KJI4[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMACharacter*                                MAOwner;                                                   // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bPendingAutoActivate : 1;                                  // 0x0250(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_51HN[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAItem");
		}
		return ptr;
	}



	void K2_Removed();
	void K2_GivenTo(class APawn* NewOwner, bool bAutoActivate);
	void ClientGivenTo(class APawn* NewInstigator, bool bAutoActivate);
};

// Class MidairCE.MAWeapon
// 0x0120 (FullSize[0x0378] - InheritedSize[0x0258])
class AMAWeapon : public AMAItem
{
public:
	class UClass*                                      AttachmentClass;                                           // 0x0258(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SkinClass;                                                 // 0x0260(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanAddToLoadout;                                          // 0x0268(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EMAWeaponActivity                         CurrentState;                                              // 0x0269(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EHPS[0x2];                                     // 0x026A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StateDuration;                                             // 0x026C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StateTimeElapsed;                                          // 0x0270(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastPutAwayTime;                                           // 0x0274(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CancelledStateTimeElapsed;                                 // 0x0278(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CancelledStateDuration;                                    // 0x027C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EMAWeaponActivity                         CancelledState;                                            // 0x0280(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XVI1[0x3];                                     // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RecoveryTimeElapsed;                                       // 0x0284(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPendingRecovery;                                          // 0x0288(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0HGT[0x3];                                     // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ShotsLeftUntilIdle;                                        // 0x028C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasPoweredUp;                                             // 0x0290(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ATHI[0x3];                                     // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StoredAmmo;                                                // 0x0294(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LoadedAmmo;                                                // 0x0298(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Heat;                                                      // 0x029C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Charge;                                                    // 0x02A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FireSpeed;                                                 // 0x02A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultBloomAngle;                                         // 0x02A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloomPattern;                                              // 0x02AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloomIndex;                                                // 0x02B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPendingReload;                                            // 0x02B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U43O[0x3];                                     // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                InitialAmmo;                                               // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAmmo;                                                   // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLoadedAmmo;                                             // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TakeOutTime;                                               // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PowerUpTime;                                               // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FireOffset;                                                // 0x02CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConvergenceDistance;                                       // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAdjustConvergence : 1;                                    // 0x02DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAdjustFireOffset : 1;                                     // 0x02DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableAutoSwitchTo : 1;                                  // 0x02DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableAutoSwitchFrom : 1;                                // 0x02DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDisableSwitchToWhenEmpty : 1;                             // 0x02DC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DXRN[0x3];                                     // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxSimulationIterations;                                   // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PFD1[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProjectileClass;                                           // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProjectilesPerShot;                                        // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FireIntervalFrom;                                          // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              FireIntervalTo;                                            // 0x02F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bLockFireInterval;                                         // 0x02FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bOwnerIsFiring;                                            // 0x02FD(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KWNA[0x2];                                     // 0x02FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FireAccelerationTime;                                      // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FireDecelerationTime;                                      // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BurstSize;                                                 // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PendingBurstSize;                                          // 0x030C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoCost;                                                  // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyCost;                                                // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggerRecoveryTime;                                       // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SoftRecoveryWindow;                                        // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryFireTime;                                               // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClearTriggerAfterRecovery;                                // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClearTriggerWhenAbsolutelyEmpty;                          // 0x0325(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LFKC[0x2];                                     // 0x0326(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FizzleTime;                                                // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanNotFireUnderwater;                                     // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysDryFireOnEmpty;                                     // 0x032D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3B73[0x2];                                     // 0x032E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BloomAngle;                                                // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloomPatternRegions;                                       // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseQuasiRandomBloom;                                      // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChargeBeforeFiring;                                       // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EMQM[0x2];                                     // 0x033A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChargeTime;                                                // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChargeDissipationTime;                                     // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverloadTime;                                              // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDischargeWhenOverloaded;                                  // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4G6S[0x3];                                     // 0x0349(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReloadTime;                                                // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReloadEveryRound;                                         // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasteAmmoWhenReloaded;                                    // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoReloadOnEmpty;                                        // 0x0352(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFireCanInterruptReload;                                   // 0x0353(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeatPerShot;                                               // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverheatThreshold;                                         // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverheatRecoveryThreshold;                                 // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeatLossPerSecond;                                         // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverheatedHeatLossPerSecond;                               // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  DryFireSound;                                              // 0x0368(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageModifier;                                            // 0x0370(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q2X5[0x4];                                     // 0x0374(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAWeapon");
		}
		return ptr;
	}



	void ResetAmmo(int NewTotal);
	void K2_SetFireInterval(float From, float To);
	void K2_GetFireInterval(float* From, float* To);
	void GetAdjustedFireLocationAndRotation(struct FVector* FireLocation, struct FRotator* FireRotation);
	void ClientAddAmmo(int Amount);
	float BP_GetReloadCompletion();
	int AddAmmo(int Amount);
};

// Class MidairCE.Blaster
// 0x0038 (FullSize[0x03B0] - InheritedSize[0x0378])
class ABlaster : public AMAWeapon
{
public:
	bool                                               bShouldChargedShotsCountFullyForAmmo;                      // 0x0378(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RGD8[0x3];                                     // 0x0379(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaximumChargedShots;                                       // 0x037C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ChargeTimePerChargedShots;                                 // 0x0380(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ChargedShotsDamageMultiplier;                              // 0x0384(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ChargedBloomAngle;                                         // 0x0388(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GA87[0x4];                                     // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ChargedProjectileClass;                                    // 0x0390(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UWXF[0x8];                                     // 0x0398(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DefaultProjectileClass;                                    // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J1PW[0x8];                                     // 0x03A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Blaster");
		}
		return ptr;
	}



};

// Class MidairCE.ChatWidget
// 0x00E0 (FullSize[0x0318] - InheritedSize[0x0238])
class UChatWidget : public UUserWidget
{
public:
	struct FName                                       SlotName;                                                  // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNativeWidgetHost*                           Host;                                                      // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamOnly;                                                 // 0x0248(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DE1Q[0x3];                                     // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastMessageTime;                                           // 0x024C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseInputCache;                                            // 0x0250(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_30K2[0x3F];                                    // 0x0251(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Team0Color;                                                // 0x0290(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                Team1Color;                                                // 0x02A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                EnemyColor;                                                // 0x02B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                FriendlyColor;                                             // 0x02C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                NeutralColor;                                              // 0x02D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                SystemColor;                                               // 0x02E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxBlocksInChat;                                           // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxEntriesPerChatBlock;                                    // 0x02F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxCharactersPerMessage;                                   // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_A8PI[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMidiarStyleData*                            StyleData;                                                 // 0x0300(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_78V4[0x10];                                    // 0x0308(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ChatWidget");
		}
		return ptr;
	}



	void ReleaseOwnership(class UWidget* CurrentOwner);
	void ReleaseFocus();
	void ReceiveMessage(const struct FString& PlayerName, const struct FLinearColor& NameColor, const struct FString& Message, const struct FLinearColor& MessageColor);
	void OnFocusPrompt();
	void FocusPrompt(bool bTeamOnly);
	void CommitMessage(const struct FString& Message);
	void ClaimOwnership(class UWidget* NewOwner);
	void AddMessage(class APlayerState* Speaker, const struct FString& Message, bool bTeamOnly);
};

// Class MidairCE.ComplexStatusBar
// 0x0278 (FullSize[0x0388] - InheritedSize[0x0110])
class UComplexStatusBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                               // 0x0110(0x01A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              SizePerValue;                                              // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value1;                                                    // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value2;                                                    // 0x02B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue1;                                                 // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue2;                                                 // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value2Separation;                                          // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   FillMarkerSize;                                            // 0x02C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EComplexStatusBarFillType                 Value2FillType;                                            // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_EProgressBarFillType>            BarFillType;                                               // 0x02D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMarquee;                                                // 0x02D2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreMaxes;                                              // 0x02D3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Value1Delegate;                                            // 0x02D4(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Value2Delegate;                                            // 0x02E4(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             MaxValue1Delegate;                                         // 0x02F4(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             MaxValue2Delegate;                                         // 0x0304(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                FillColorAndOpacity;                                       // 0x0314(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FillColorAndOpacity2;                                      // 0x0324(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                FillMarkerColorAndOpacity;                                 // 0x0334(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                               // 0x0344(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FillColorAndOpacity2Delegate;                              // 0x0354(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FillMarkerColorAndOpacityDelegate;                         // 0x0364(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1HRK[0x14];                                    // 0x0374(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ComplexStatusBar");
		}
		return ptr;
	}



	void SetValue2(float InPercent);
	void SetValue1(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillMarkerColorAndOpacity(const struct FLinearColor& InColor);
	void SetFillColorAndOpacity2(const struct FLinearColor& InColor);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
};

// Class MidairCE.OOBVolume
// 0x0078 (FullSize[0x02B8] - InheritedSize[0x0240])
class AOOBVolume : public AActor
{
public:
	class USceneComponent*                             VolumeRoot;                                                // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bShouldEjectPlayers;                                       // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseFlagTimer;                                             // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9WQL[0x2];                                     // 0x024A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FlagReturnTime;                                            // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  ObjectBouncedSound;                                        // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WrangleForce;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6AN0[0x5C];                                    // 0x025C(0x005C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.OOBVolume");
		}
		return ptr;
	}



	void PlayOOBEffects(class AActor* ActorExiting, const struct FVector& Location, const struct FVector& Direction);
	void CheckForCarriedObjectLeaving(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void CheckForCarriedObject(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndexbool, bool bFromSweep, const struct FHitResult& SweepResult);
	void BP_PlayOOBEffects(class AActor* ActorExiting, const struct FVector& Location, const struct FVector& WallNormal);
};

// Class MidairCE.ConfigurableOOBVolume
// 0x0090 (FullSize[0x0348] - InheritedSize[0x02B8])
class AConfigurableOOBVolume : public AOOBVolume
{
public:
	class UStaticMeshComponent*                        InnerBoundsMesh;                                           // 0x02B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                        OuterBoundsMesh;                                           // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                               CeilingVolume;                                             // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                               CenterVolume;                                              // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBoxComponent*>                       OuterWallVolumes;                                          // 0x02D8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UBoxComponent*>                       InnerWallVolumes;                                          // 0x02E8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class USceneComponent*                             OuterRoot;                                                 // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             InnerRoot;                                                 // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SSFF[0x18];                                    // 0x0308(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               HasInnerVolume;                                            // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R4O4[0x3];                                     // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CeilingHeight;                                             // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WallsHeight;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HalfWallThickness;                                         // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InnerBoundsDimensions;                                     // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   OuterBoundsMargin;                                         // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InnerRotationYaw;                                          // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterRotationYaw;                                          // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ConfigurableOOBVolume");
		}
		return ptr;
	}



};

// Class MidairCE.CosmeticConfiguration
// 0x0040 (FullSize[0x0280] - InheritedSize[0x0240])
class ACosmeticConfiguration : public AActor
{
public:
	struct FText                                       DisplayText;                                               // 0x0240(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ShortDisplayText;                                          // 0x0258(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FColor                                      DisplayTextColor;                                          // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IJ59[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AssociatedClass;                                           // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.CosmeticConfiguration");
		}
		return ptr;
	}



};

// Class MidairCE.CrateConfiguration
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class ACrateConfiguration : public ACosmeticConfiguration
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.CrateConfiguration");
		}
		return ptr;
	}



};

// Class MidairCE.CustomDrawable
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomDrawable : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.CustomDrawable");
		}
		return ptr;
	}



};

// Class MidairCE.DirectHotkey
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDirectHotkey : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.DirectHotkey");
		}
		return ptr;
	}



	bool HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int);
	bool HandleDirectNamedHotkey(const struct FString& Hotkey);
};

// Class MidairCE.EnergyConduit
// 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
class AEnergyConduit : public AActor
{
public:
	class UStaticMeshComponent*                        ConduitMesh;                                               // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.EnergyConduit");
		}
		return ptr;
	}



	void OnComponentOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndexbool, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class MidairCE.GetCurrentUserStatsAsyncTask
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGetCurrentUserStatsAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.GetCurrentUserStatsAsyncTask");
		}
		return ptr;
	}



	class UGetCurrentUserStatsAsyncTask* STATIC_GetCurrentUserStats();
};

// Class MidairCE.GetDemoAsyncTask
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGetDemoAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.GetDemoAsyncTask");
		}
		return ptr;
	}



	class UGetDemoAsyncTask* STATIC_PlayDemo(const struct FString& DemoId, bool PlayDemo);
};

// Class MidairCE.GetLeaderBoardEntriesAsyncTask
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGetLeaderBoardEntriesAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.GetLeaderBoardEntriesAsyncTask");
		}
		return ptr;
	}



	class UGetLeaderBoardEntriesAsyncTask* STATIC_GetLeaderBoardEntries(const struct FName& LeaboardName, const struct FName& GameMode, TEnumAsByte<MidairCE_EMALeaderboardRequest> LeaderboardRequest, int RangeStart, int RangeEnd, int DetailCount);
};

// Class MidairCE.GetMatchHistoryAsyncTask
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UGetMatchHistoryAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_68VF[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.GetMatchHistoryAsyncTask");
		}
		return ptr;
	}



	class UGetMatchHistoryAsyncTask* STATIC_GetMatchHistory(class APlayerController* PlayerController, const struct FName& GameMode, int Count);
};

// Class MidairCE.GetPlayerPracticeDataAsyncTask
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGetPlayerPracticeDataAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.GetPlayerPracticeDataAsyncTask");
		}
		return ptr;
	}



	class UGetPlayerPracticeDataAsyncTask* STATIC_GetPlayerPracticeData();
};

// Class MidairCE.GetUserStatsAsyncTask
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGetUserStatsAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.GetUserStatsAsyncTask");
		}
		return ptr;
	}



	class UGetUserStatsAsyncTask* STATIC_GetUserStats(const struct FMASteamId& SteamId, const struct FString& GameMode);
};

// Class MidairCE.HeatComponent
// 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
class UHeatComponent : public UActorComponent
{
public:
	float                                              HeatVisibleThreshold;                                      // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeatMax;                                                   // 0x00DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyHeatConversion;                                      // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeatDissapationRate;                                       // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentHeat;                                               // 0x00E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3G1L[0x14];                                    // 0x00EC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.HeatComponent");
		}
		return ptr;
	}



};

// Class MidairCE.InnerOOBWall
// 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
class AInnerOOBWall : public AOOBVolume
{
public:
	class UStaticMeshComponent*                        WallMesh;                                                  // 0x02B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UArrowComponent*                             InboundsArrow;                                             // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              WallHeight;                                                // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WallLength;                                                // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.InnerOOBWall");
		}
		return ptr;
	}



};

// Class MidairCE.InvertedVerticalBox
// 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
class UInvertedVerticalBox : public UVerticalBox
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.InvertedVerticalBox");
		}
		return ptr;
	}



};

// Class MidairCE.LaunchableObject
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULaunchableObject : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.LaunchableObject");
		}
		return ptr;
	}



};

// Class MidairCE.LoadingScreenWidget
// 0x00A0 (FullSize[0x02D8] - InheritedSize[0x0238])
class ULoadingScreenWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_SZGF[0x8];                                     // 0x0238(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  DefaultBackground;                                         // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            LoadingScreenAnimation;                                    // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_54X3[0x68];                                    // 0x0250(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bFinishedLoading;                                          // 0x02B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFY1[0x1F];                                    // 0x02B9(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.LoadingScreenWidget");
		}
		return ptr;
	}



	struct FText GetTip();
	struct FText GetObjectives();
	struct FString GetMapName();
	struct FText GetMapLore();
	class UTexture2D* GetBackground();
	struct FText GetAuthors();
};

// Class MidairCE.LoadoutPreview
// 0x0080 (FullSize[0x02C0] - InheritedSize[0x0240])
class ALoadoutPreview : public AActor
{
public:
	class USceneComponent*                             PreviewMeshPivotPoint;                                     // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      CharacterMeshPreview;                                      // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAnimationAsset*                             CharacterPreviewAnim;                                      // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      ItemMeshPreview;                                           // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             LootboxPivotPoint;                                         // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraComponent*                            MainCamera;                                                // 0x0268(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      LastObjectInfoClass;                                       // 0x0270(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASkinConfiguration*                          CurrentCharacterSkinPreview;                               // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ASkinConfiguration*                          CurrentWeaponSkinPreview;                                  // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AParticleConfiguration*                      CurrentJetsPreview;                                        // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ACosmeticConfiguration*                      CurrentCosmeticPreview;                                    // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextureRenderTarget2D*                      LowQuality;                                                // 0x0298(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      HighQuality;                                               // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      CachedTextureTarget;                                       // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W5T2[0x10];                                    // 0x02B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.LoadoutPreview");
		}
		return ptr;
	}



	class ACosmeticConfiguration* STATIC_UpdateSelectionPreview(class UClass* ObjectInfoClass, class UClass* CosmeticCustomization);
	class ALoadoutPreview* STATIC_GetWorldLoadoutPreview();
	struct FVector GetCharacterLookAtLocation();
};

// Class MidairCE.Augment_BuddySystem
// 0x0010 (FullSize[0x01C8] - InheritedSize[0x01B8])
class UAugment_BuddySystem : public UAugment
{
public:
	class UAugment*                                    BuddyingAugment;                                           // 0x01B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_13FM[0x8];                                     // 0x01C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.Augment_BuddySystem");
		}
		return ptr;
	}



};

// Class MidairCE.MABackpack
// 0x0048 (FullSize[0x02A0] - InheritedSize[0x0258])
class AMABackpack : public AMAItem
{
public:
	class UClass*                                      PrimaryAugmentClass;                                       // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      SecondaryAugmentClass;                                     // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBackpackArt                                PickupArt;                                                 // 0x0268(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UAugment*                                    PrimaryAugment;                                            // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAugment*                                    SecondaryAugment;                                          // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPendingUse;                                               // 0x0298(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MBDO[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MABackpack");
		}
		return ptr;
	}



	void Use();
	void OnRep_Augments();
};

// Class MidairCE.MAProjectile
// 0x05C8 (FullSize[0x0808] - InheritedSize[0x0240])
class AMAProjectile : public AActor
{
public:
	class UMAPlaybackComponent*                        PlaybackComponent;                                         // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    Trail;                                                     // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    Trail1P;                                                   // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USphereComponent*                            SphereComponent;                                           // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USphereComponent*                            AssistSphereComponent;                                     // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMAProjectileMovement*                       ProjectileMovement;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             ProjectileAudioLoop;                                       // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7KT8[0xB0];                                    // 0x0280(0x00B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHitResult                                  PendingImpactHit;                                          // 0x0330(0x0088) (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KF5Q[0x8];                                     // 0x03B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionSmoothing                        PredictionSmoothing;                                       // 0x03C0(0x0070) (Edit, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bIsFakeProjectile;                                         // 0x0430(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7PYY[0x7];                                     // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMAProjectile*                               LinkedProjectile;                                          // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 SavedInstigatorController;                                 // 0x0440(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRadialDamageParams                         DamageParams;                                              // 0x0448(0x001C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LQF2[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageTypeClass;                                           // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldCameraShakeParams                     CameraShakeParams;                                         // 0x0470(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GSE3[0x4];                                     // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CameraShakeClass;                                          // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<MidairCE_EFuzeMode>                    FuzeMode;                                                  // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNetTemporary_BP;                                          // 0x0491(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableClientCollision;                                   // 0x0492(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PTTN[0x1];                                     // 0x0493(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ArmingTime;                                                // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DirectArmingTime;                                          // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseDirectArmingTime;                                      // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3Y2D[0x3];                                     // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ActivationTime;                                            // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VVFM[0x4];                                     // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ExplosionEffectClass;                                      // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactEffect                               ExplodeEffects;                                            // 0x04B0(0x0108) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bExplodedReplay;                                           // 0x05B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExploded;                                                 // 0x05B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F7F6[0x6];                                     // 0x05BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FImpactEffect                               TimeoutEffects;                                            // 0x05C0(0x0108) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      RejectOnStopClass;                                         // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              RejectTraceChannel;                                        // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YXBS[0x3];                                     // 0x06D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RejectionAreaRadius;                                       // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowTeamTrigger;                                         // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TeamId;                                                    // 0x06D9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WK57[0x2];                                     // 0x06DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     InheritVelocityScale;                                      // 0x06DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPreventInheritanceSlowdown;                               // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N7C2[0x7];                                     // 0x06E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSurfaceImpactInfo                          LastSurfaceImpact;                                         // 0x06F0(0x0030) (Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LastSurfaceImpactTime;                                     // 0x0720(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageModifier;                                            // 0x0724(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRepStage;                                                 // 0x0728(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GCYH[0x3];                                     // 0x0729(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRepStage                                   RepCurrentStage;                                           // 0x072C(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     InstigatorVelocity;                                        // 0x0734(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InstigatorLocation;                                        // 0x0740(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N0HO[0x4];                                     // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              DamageIgnoreActors;                                        // 0x0750(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FHitResult                                  SavedLastHit;                                              // 0x0760(0x0088) (IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PIQ1[0x18];                                    // 0x07E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bHasShutDown;                                              // 0x0800(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IECK[0x7];                                     // 0x0801(0x0007) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAProjectile");
		}
		return ptr;
	}



	void Timeout();
	void Stopped(const struct FHitResult& Hit);
	void SphereTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ShutDown();
	void ProcessHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void OnRep_TeamID();
	void OnRep_LastSurfaceImpact();
	void OnRep_CurrentStage();
	void LockInPlace();
	bool GetHomingTargetLocation(struct FVector* TargetLocation);
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent);
	void DamageImpactedActor(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void CatchUp(float DeltaTime);
	void BP_StartArm();
	void BP_FinishedArm();
	void BP_Activate();
	void Bounced(const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
};

// Class MidairCE.MABeamProjectile
// 0x0018 (FullSize[0x0820] - InheritedSize[0x0808])
class AMABeamProjectile : public AMAProjectile
{
public:
	struct FVector_NetQuantize10                       SourceLocation;                                            // 0x0808(0x000C) (Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L56F[0xC];                                     // 0x0814(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MABeamProjectile");
		}
		return ptr;
	}



	void UpdateSpawnLocation();
};

// Class MidairCE.MAPlaybackEvent
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMAPlaybackEvent : public UObject
{
public:
	float                                              Time;                                                      // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeTime;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplied;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0L0B[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlaybackEvent");
		}
		return ptr;
	}



};

// Class MidairCE.MAPlaybackEvent_CarriedObject_HolderChanged
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UMAPlaybackEvent_CarriedObject_HolderChanged : public UMAPlaybackEvent
{
public:
	unsigned char                                      UnknownData_3APJ[0x40];                                    // 0x0038(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlaybackEvent_CarriedObject_HolderChanged");
		}
		return ptr;
	}



};

// Class MidairCE.MAPlaybackEvent_CarriedObject_MAReplicatedMovement
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UMAPlaybackEvent_CarriedObject_MAReplicatedMovement : public UMAPlaybackEvent
{
public:
	unsigned char                                      UnknownData_F6XL[0x28];                                    // 0x0038(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlaybackEvent_CarriedObject_MAReplicatedMovement");
		}
		return ptr;
	}



};

// Class MidairCE.MACarriedObject
// 0x0288 (FullSize[0x04C8] - InheritedSize[0x0240])
class AMACarriedObject : public AActor
{
public:
	unsigned char                                      UnknownData_RF62[0x8];                                     // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FriendlyFlagTakenAnnouncement;                             // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EnemyFlagTakenAnnouncement;                                // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FlagSecureAnnouncement;                                    // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                           AssistCapsuleComponent;                                    // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMACarriedObjectMovement*                    CarriedObjectMovement;                                     // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTargetComponent*                            TargetComponent;                                           // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMAPlaybackComponent*                        PlaybackComponent;                                         // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraComponent*                            Camera3P;                                                  // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpringArmComponent*                         CameraSpringArm;                                           // 0x0298(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TargetCamera3PDist;                                        // 0x02A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QD74[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMAPlayerController*                         SpectatorController;                                       // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FYHT[0x10];                                    // 0x02B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             OOBSoundAudio;                                             // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRepMAMovement                              MAReplicatedMovement;                                      // 0x02C8(0x0028) (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHasStoppedSimulating;                                     // 0x02F0(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X9BQ[0xF];                                     // 0x02F1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionSmoothing                        PredictionSmoothing;                                       // 0x0300(0x0070) (Edit, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bIsOOB;                                                    // 0x0370(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H9Q0[0x3];                                     // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Holder3PSocketName;                                        // 0x0374(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Holder3PLocation;                                          // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Holder3PRotation;                                          // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       StateName;                                                 // 0x0394(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LastStateName;                                             // 0x039C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCarriedObjectProperties                    DefaultProperties;                                         // 0x03A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SQQV[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, struct FCarriedObjectProperties> PropertiesOverrideMap;                                     // 0x03B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                RemainingAutoReturnTime;                                   // 0x0408(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RemainingAutoReturnSyncTime;                               // 0x040C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ETLT[0x8];                                     // 0x0410(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastDroppedTime;                                           // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QYWK[0x4];                                     // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMACarriedObjectBase*                        HomeBase;                                                  // 0x0420(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMATeamState*                                TeamState;                                                 // 0x0428(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMACharacter*                                Holder;                                                    // 0x0430(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMACharacter*                                LastHolder;                                                // 0x0438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMACharacter*                                LocalHolder;                                               // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRepAttachment                              LastAttachmentRep;                                         // 0x0448(0x0040) (NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_26SK[0x8];                                     // 0x0488(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  AttachedToBase;                                            // 0x0490(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  DetachedFromBase;                                          // 0x0498(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  ObjectOutOfBoundsSound;                                    // 0x04A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q9TI[0x18];                                    // 0x04A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           SensorBitmask;                                             // 0x04C0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7HAI[0x4];                                     // 0x04C4(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACarriedObject");
		}
		return ptr;
	}



	void UpdateCameraDist(float CameraDistPct);
	void TeamChanged();
	void StateChanged();
	void OnRep_RemainingAutoReturnTime();
	void OnRep_RemainingAutoReturnSyncTime();
	void OnRep_MAReplicatedMovement();
	bool IsInState(const struct FName& InStateName);
	bool IsHome();
	bool IsFlagOutOfBounds();
	void HolderChanged();
	float GetRemainingOOBReturnTime();
	void ChangeState(const struct FName& NewState);
	void CatchUp(float DeltaTime);
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AutoReturnTimer();
	void AssistCapsuleTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class MidairCE.MACarriedObjectBase
// 0x0048 (FullSize[0x0288] - InheritedSize[0x0240])
class AMACarriedObjectBase : public AActor
{
public:
	unsigned char                                      UnknownData_54SN[0x8];                                     // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTargetComponent*                            TargetComponent;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      TeamId;                                                    // 0x0250(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SRFB[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CarriedObjectClass;                                        // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InitialSpawnDelay;                                         // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YKX6[0xC];                                     // 0x0264(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CarriedObjectStateName;                                    // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMACarriedObject*                            CarriedObject;                                             // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32_t                                           SensorBitmask;                                             // 0x0280(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1NOQ[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACarriedObjectBase");
		}
		return ptr;
	}



	void ObjectStateChanged();
	void ObjectChanged();
};

// Class MidairCE.MACarriedObjectMovement
// 0x0010 (FullSize[0x0200] - InheritedSize[0x01F0])
class UMACarriedObjectMovement : public UProjectileMovementComponent
{
public:
	class AMACarriedObject*                            CarriedObjectOwner;                                        // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B611[0x8];                                     // 0x01F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACarriedObjectMovement");
		}
		return ptr;
	}



};

// Class MidairCE.MACarriedObjectOOBVolume
// 0x0000 (FullSize[0x0278] - InheritedSize[0x0278])
class AMACarriedObjectOOBVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACarriedObjectOOBVolume");
		}
		return ptr;
	}



	void OnCarriedObjectOOB(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class MidairCE.MACapsuleComponent
// 0x0010 (FullSize[0x0440] - InheritedSize[0x0430])
class UMACapsuleComponent : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData_J1QP[0x10];                                    // 0x0430(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACapsuleComponent");
		}
		return ptr;
	}



};

// Class MidairCE.MACharacter
// 0x0490 (FullSize[0x0AF0] - InheritedSize[0x0660])
class AMACharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_NX6D[0x18];                                    // 0x0660(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlayerZoomed;                                            // 0x0678(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bJumpThenSkate;                                            // 0x0688(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsViewTarget;                                             // 0x0689(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsDotTicking;                                             // 0x068A(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OGVR[0x1];                                     // 0x068B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetCamera3PDist;                                        // 0x068C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AMAPlayerController*                         ViewerController;                                          // 0x0690(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMAVitalsComponent*                          Vitals;                                                    // 0x0698(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                           ContactCapsuleComponent;                                   // 0x06A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      Mesh1P;                                                    // 0x06A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USphereComponent*                            MeshBounds1P;                                              // 0x06B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraComponent*                            Camera1P;                                                  // 0x06B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraComponent*                            Camera3P;                                                  // 0x06C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpringArmComponent*                         CameraSpringArm;                                           // 0x06C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraComponent*                            ShoulderCamera;                                            // 0x06D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpringArmComponent*                         ShoulderCameraArm;                                         // 0x06D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USphereComponent*                            RagdollCameraCushion;                                      // 0x06E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPhysicsConstraintComponent*                 RagdollCushionConstraint;                                  // 0x06E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTargetComponent*                            TargetComponent;                                           // 0x06F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTargetIcon*                                 TargetIcon;                                                // 0x06F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMACharacterMovement*                        MACharacterMovement;                                       // 0x0700(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMAPlaybackComponent*                        PlaybackComponent;                                         // 0x0708(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             SkateAudioLoop;                                            // 0x0710(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             JetAudioLoop;                                              // 0x0718(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             WindAudioLoop;                                             // 0x0720(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             LowHealthAlarm;                                            // 0x0728(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USensorNetworkComponent*                     VisualSensor;                                              // 0x0730(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USensorNetworkComponent*                     OmniSensor;                                                // 0x0738(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             PreviousVocalization;                                      // 0x0740(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bLastManStanding;                                          // 0x0748(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T2AT[0x3];                                     // 0x0749(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRepMACharMovement                          MAReplicatedMovement;                                      // 0x074C(0x0024) (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ContactCapsuleSkin;                                        // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E4VN[0x4];                                     // 0x0774(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Killer;                                                    // 0x0778(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WalkingEnergyRechargeBoost;                                // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JetEnergyDrainRate;                                        // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsWarpingOut;                                             // 0x0788(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DF9H[0x3];                                     // 0x0789(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeOfDeath;                                               // 0x078C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YG14[0x18];                                    // 0x0790(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SkinConfiguration;                                         // 0x07A8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      JetConfiguration;                                          // 0x07B0(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMaterialInstanceDynamic*>            BodyMIDs;                                                  // 0x07B8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UMaterialInstanceDynamic*>            HandMIDs;                                                  // 0x07C8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OverrideMaterial3P;                                        // 0x07D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OverrideMaterial1P;                                        // 0x07E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DefaultVoiceSet;                                           // 0x07E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          NoDrawMaterial;                                            // 0x07F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        RagdollHiddenMaterials;                                    // 0x07F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2SZM[0x8];                                     // 0x0808(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSurfaceImpactInfo                          LastAttachedSurfaceImpact;                                 // 0x0810(0x0030) (BlueprintVisible, BlueprintReadOnly, Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraShakeInfo                            LastCameraShakeInfo;                                       // 0x0840(0x0010) (Net, Transient, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	float                                              LastCameraShakeTime;                                       // 0x0850(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FZoomInfo                                   ZoomInfo;                                                  // 0x0854(0x0002) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BGPE[0x2];                                     // 0x0856(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMACarriedObject*                            CarriedObject;                                             // 0x0858(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThrowAnim1P;                                               // 0x0860(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ThrowAnim3P;                                               // 0x0868(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                GrabAnim1P;                                                // 0x0870(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                GrabAnim3P;                                                // 0x0878(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  SonicBoomSound;                                            // 0x0880(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FMCZ[0x4];                                     // 0x0888(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SonicBoomPropogationSpeedKPH;                              // 0x088C(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SonicBoomTriggerSpeedKPH;                                  // 0x0890(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SonicBoomResetThresholdKPH;                                // 0x0894(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  EvacuationSound;                                           // 0x0898(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  CollisionFatalSound;                                       // 0x08A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  CollisionPainfulSound;                                     // 0x08A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  CollisionMinimalSound;                                     // 0x08B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimalCollisionSoundThreshold;                            // 0x08B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W9KC[0x4];                                     // 0x08BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  JetStartSound;                                             // 0x08C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  JetStopSound;                                              // 0x08C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  JetHitLowEnergySound;                                      // 0x08D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  PositionSavedSound;                                        // 0x08D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                                  PositionLoadedSound;                                       // 0x08E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JetAudioWeightEaseInRate;                                  // 0x08E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JetAudioWeightEaseOutRate;                                 // 0x08EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JetAudioEnergyEaseInRate;                                  // 0x08F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JetAudioEnergyEaseOutRate;                                 // 0x08F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SkateAudioEaseInRate;                                      // 0x08F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SkateAudioEaseOutRate;                                     // 0x08FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JetAudioWeight;                                            // 0x0900(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JetAudioEnergyOutput;                                      // 0x0904(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasOnLowEnergy;                                           // 0x0908(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KH7T[0x3];                                     // 0x0909(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkateAudioWeight;                                          // 0x090C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LowHealthAlarmThreshold;                                   // 0x0910(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C5CC[0x4];                                     // 0x0914(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSurfaceTypeSounds                          FootStepSounds;                                            // 0x0918(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8P29[0x8];                                     // 0x0990(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinTimeBetweenPickupGrabs;                                 // 0x0998(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInFirstPerson;                                            // 0x099C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UQX3[0x3];                                     // 0x099D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LandingCameraShake;                                        // 0x09A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LandingShakeMaxSpeed;                                      // 0x09A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LandingShakeMinSpeed;                                      // 0x09AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionDamagePowerExp;                                   // 0x09B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReplicatedAccelInfo;                                       // 0x09B4(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AccelInfo;                                                 // 0x09B5(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RWSP[0x2];                                     // 0x09B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AMAItem*>                             Inventory;                                                 // 0x09B8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class UClass*                                      PickupBackpackClass;                                       // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PickupAmmoClass;                                           // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PlayerTrailClass;                                          // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumHandGrenades;                                           // 0x09E0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HandGrenadeCooldown;                                       // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HandGrenadeCooldownRemaining;                              // 0x09E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GroundEnergyRegenAmount;                                   // 0x09EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPickupDistance;                                         // 0x09F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWantsPickup;                                              // 0x09F4(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PickupCount;                                               // 0x09F5(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q9ZH[0x2];                                     // 0x09F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumTimeBetweenSprays;                                  // 0x09F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SprayMaximumDistance;                                      // 0x09FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LastTimeUsedSpray;                                         // 0x0A00(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      TriggerCount[0x2];                                         // 0x0A04(0x0002) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      PrevTriggerCount[0x2];                                     // 0x0A06(0x0002) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bPressedReload;                                            // 0x0A08(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPressedThrowGrenade;                                      // 0x0A09(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CZ0I[0x6];                                     // 0x0A0A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMAWeapon*                                   Weapon;                                                    // 0x0A10(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      PreviousWeaponClass;                                       // 0x0A18(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      WeaponClass;                                               // 0x0A20(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMABackpack*                                 Backpack;                                                  // 0x0A28(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMAWeaponAttachment*                         WeaponAttachment;                                          // 0x0A30(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUnlimitedAmmo;                                            // 0x0A38(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8M8K[0x3];                                     // 0x0A39(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeaponReloadModifier;                                      // 0x0A3C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WeaponEnergyModifier;                                      // 0x0A40(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_K91G[0x4];                                     // 0x0A44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAugment_Art*>                        AugmentArtQueue;                                           // 0x0A48(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UAugment*>                            BuddyAugments;                                             // 0x0A58(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FTimerHandle                                TimerHandle_Invulnerability;                               // 0x0A68(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEndInvulnerabilityOnFire;                                 // 0x0A70(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GLST[0x7];                                     // 0x0A71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ReplicatedWeaponSkinClass;                                 // 0x0A78(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      HandGrenadeClass;                                          // 0x0A80(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      WeaponAttachmentClass;                                     // 0x0A88(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMAWeapon*                                   PendingWeapon;                                             // 0x0A90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCanUseForegrip;                                           // 0x0A98(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QQMK[0x3];                                     // 0x0A99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRepWeaponActivity                          ReplicatedWeaponActivity;                                  // 0x0A9C(0x000C) (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	struct FRepWeaponActivity                          WeaponActivity;                                            // 0x0AA8(0x000C) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FRepWeaponSpecial                           WeaponSpecial;                                             // 0x0AB4(0x0003) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWeaponActivityChanged;                                    // 0x0AB7(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SEAI[0xC];                                     // 0x0AB8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bSingleJump;                                               // 0x0AC4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPressedJet;                                               // 0x0AC5(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YT7K[0x2];                                     // 0x0AC6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bIsSkating : 1;                                            // 0x0AC8(0x0001) BIT_FIELD (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B54F[0x7];                                     // 0x0AC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      CurrentBestTarget;                                         // 0x0AD0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasValidLock;                                             // 0x0AD8(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XIEQ[0x1];                                     // 0x0AD9(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MidairCE_ECameraMode                               CameraMode;                                                // 0x0ADA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ISAE[0x15];                                    // 0x0ADB(0x0015) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACharacter");
		}
		return ptr;
	}



	void ZoomUpdated();
	void WeaponActivityUpdated();
	void Vocalize(class USoundBase* Sound);
	void UsePack();
	void UpdateWeaponAttachment();
	void UpdateVisualsToMatchCosmeticCustomizations();
	void UpdateForClientPerspective();
	void UpdateCameraDist(float CameraDistPct);
	void TossFlag();
	void TossCarriedObject();
	void ToggleZoom();
	void ToggleTrigger(unsigned char FireMode);
	bool SwitchToWeaponAtIndex(int Index);
	bool SwitchToWeapon(class AMAWeapon* NewWeapon);
	bool SwitchToNextWeapon(int Direction);
	void SwapTriggerBuffers();
	bool Suicide();
	void StopSkating();
	void StopPickup();
	void StopJetting();
	void StartPickup();
	void StartInvulnerability(float Length);
	void Skate();
	void SetTrigger(unsigned char FireMode, bool bSet);
	void SetOverrideMaterials(class UMaterialInterface* NewMaterial3P, class UMaterialInterface* NewMaterial1P);
	void SetLoadout(const struct FMALoadout& Loadout, bool bSetMaxes, bool bIsBaseInventory);
	void SetCameraMode(MidairCE_ECameraMode InCameraMode);
	void ServerTrySpecificPickup(class AMAPickup* Pickup);
	void ServerTossCarriedObject();
	void ServerSetCameraMode(MidairCE_ECameraMode InCameraMode);
	void Server_UseSpray();
	void RemoveItem(class AMAItem* ItemToRemove);
	void PlayCameraShake(class UClass* Shake, float Scale, bool bPlayInUserSpace, const struct FRotator& UserSpaceRot);
	void OnTookDamage(const struct FTakeHitInfo& TakeHitInfo);
	void OnRep_ReplicatedAccelInfo();
	void OnRep_PressedJet();
	void OnRep_MAReplicatedMovement();
	void OnRep_LMS();
	void OnRep_LastAttachedSurfaceImpact();
	void OnRep_IsSkating();
	void OnHealthChanged(bool bFromDamage);
	void OnFootStep();
	void OnEnergyDamage();
	void OnDied();
	class AMAItem* K2_FindPack(class UClass* Type, bool bExactClass);
	class AMAItem* K2_FindItem(class UClass* Type, bool bExactClass);
	class AMAItem* K2_CreateItem(class UClass* NewItemClass, bool bAutoActivate);
	void Jet();
	bool IsTriggerSet(unsigned char FireMode);
	bool IsInInventory(class AMAItem* ItemToFind);
	bool IsDead();
	bool IsAccelerating();
	float GetRemoteViewPitch();
	bool GetIsWarpingOut();
	float GetHealthPct();
	float GetHealth();
	float GetEnergyPct();
	float GetEnergy();
	float GetAccelerationYaw();
	void EndInvulnerability();
	void DiscardInventory();
	void CycleZoom();
	void ClientLoadoutRefreshed();
	void ClearTriggers();
	void CleanupDeadBody();
	void CameraShakeUpdated();
	void BP_UpdateForClientPerspective(bool bFirstPerson);
	void BP_OnRep_PlayerState();
	struct FRotator BP_GetViewRotation();
	bool AddItem(class AMAItem* ItemToAdd, bool bAutoActivate);
};

// Class MidairCE.MACharacterMovement
// 0x0120 (FullSize[0x0850] - InheritedSize[0x0730])
class UMACharacterMovement : public UCharacterMovementComponent
{
public:
	float                                              JetAcceleration;                                           // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxJetLateralSpeed;                                        // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxJetLateralPercent;                                      // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R9R0[0x4];                                     // 0x073C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 LateralJetCurve;                                           // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxJetVerticalSpeedStart;                                  // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxJetVerticalSpeedEnd;                                    // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardJetBonusMaxSpeed;                                    // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxUpwardJetBonus;                                         // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardJetBonusRegenRate;                                   // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardJetBonusWalkingBonusRegenRate;                       // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardJetBonusRegenWaitTime;                               // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardJetBonusBurnRate;                                    // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardJetBurnPower;                                        // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L7KN[0x4];                                     // 0x076C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 UpwardJetBonusModifierCurve;                               // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSeparateSkateJumpVelocity;                                // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DKSK[0x3];                                     // 0x0779(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkateJumpZVelocity;                                        // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              JetModifier;                                               // 0x0780(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     JetBonus;                                                  // 0x0784(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFallingLateralSpeed;                                    // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardsDamping;                                            // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpwardsDampingSpeed;                                       // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxUpwardsSpeed;                                           // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_025C[0x10];                                    // 0x07A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMACharacter*                                MACharacterOwner;                                          // 0x07B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5W94[0x4];                                     // 0x07B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UpwardJetBonusEnergy;                                      // 0x07BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TimeSinceLastUpwardJetBonus;                               // 0x07C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H1ZM[0x8C];                                    // 0x07C4(0x008C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACharacterMovement");
		}
		return ptr;
	}



	void MAServerMove(const struct FMAPackedMoveBundle& Bundle);
	void MAClientAdjustEnergy(float Energy);
	bool IsSkatingOnGround();
};

// Class MidairCE.MACoreControllerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMACoreControllerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACoreControllerInterface");
		}
		return ptr;
	}



	void PlayRecordedInput(MidairCE_EPlayerRecordableInputTypes InputType);
	void PlayRecordedCameraInput(float Pitch, float Yaw);
};

// Class MidairCE.MACTFFlag
// 0x0038 (FullSize[0x0500] - InheritedSize[0x04C8])
class AMACTFFlag : public AMACarriedObject
{
public:
	class UAudioComponent*                             FlagSlideLoop;                                             // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OK8L[0x8];                                     // 0x04D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  FlagBounce;                                                // 0x04D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BounceSoundVelocityThreshold;                              // 0x04E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinTimeBetweenBounces;                                     // 0x04E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HGOZ[0x8];                                     // 0x04E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SlideAudioEaseInRate;                                      // 0x04F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlideAudioEaseOutRate;                                     // 0x04F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9O3F[0x8];                                     // 0x04F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACTFFlag");
		}
		return ptr;
	}



	void OnStop(const struct FHitResult& ImpactResult);
	void OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
};

// Class MidairCE.MACTFFlagBase
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class AMACTFFlagBase : public AMACarriedObjectBase
{
public:
	unsigned char                                      UnknownData_BK2K[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACTFFlagBase");
		}
		return ptr;
	}



};

// Class MidairCE.MACTFGameMode
// 0x0108 (FullSize[0x0AA8] - InheritedSize[0x09A0])
class AMACTFGameMode : public AMAGameMode
{
public:
	struct FGameModeSimpleScore                        Points_CaptureAssist;                                      // 0x09A0(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_CaptureNoAssist;                                    // 0x09AC(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_CaptureAssistFirstToGrab;                           // 0x09B8(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_CaptureAssistNotFirstToGrab;                        // 0x09C4(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_CaptureFirstToGrabNoCapture;                        // 0x09D0(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Return;                                             // 0x09DC(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_SlidingReturn;                                      // 0x09E8(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_InterceptionReturn;                                 // 0x09F4(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_InterceptionThrow;                                  // 0x0A00(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Grab;                                               // 0x0A0C(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Pass;                                               // 0x0A18(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_PassCaught;                                         // 0x0A24(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Pickup;                                             // 0x0A30(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_CarrierMidairKill;                                  // 0x0A3C(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_CarrierKill;                                        // 0x0A48(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q1AH[0x54];                                    // 0x0A54(0x0054) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACTFGameMode");
		}
		return ptr;
	}



};

// Class MidairCE.MAGameState
// 0x01B0 (FullSize[0x0450] - InheritedSize[0x02A0])
class AMAGameState : public AGameState
{
public:
	struct FScriptMulticastDelegate                    OnMapVoteOptionsChanged;                                   // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMapVoteStageChanged;                                     // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMapVoteWinningOptionChanged;                             // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPunishVoteStarted;                                       // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPunishVoteEnded;                                         // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FString>                             MapRotation;                                               // 0x02F0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FString>                             VoteOptionNames;                                           // 0x0300(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ST2W[0x28];                                    // 0x0310(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PunishVoteDuration;                                        // 0x0338(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PunishVoteMinParticipationPct;                             // 0x033C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PunishVoteWinPct;                                          // 0x0340(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PunishVoteKickAsBanTimeMinutes;                            // 0x0344(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumPlayersForPunishVote;                               // 0x0348(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BYJ1[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPunishVote                                 ActivePunishVote;                                          // 0x0350(0x0018) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XH4J[0x8];                                     // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              MapVoteCounts;                                             // 0x0370(0x0010) (Net, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZTIW[0x60];                                    // 0x0380(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MidairCE_EMapVoteOption                            WinningOption;                                             // 0x03E0(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EMapVoteStage                             VotingStage;                                               // 0x03E1(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTournamentMode;                                         // 0x03E2(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPracticeMode;                                           // 0x03E3(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWeaponHeatEnabled;                                        // 0x03E4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamGame;                                                 // 0x03E5(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTeamRabbit;                                             // 0x03E6(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDuelMode;                                               // 0x03E7(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInOvertime;                                             // 0x03E8(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowTeamChangeRequests;                                  // 0x03E9(0x0001) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBalanceTeams;                                             // 0x03EA(0x0001) (BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CBSU[0x5];                                     // 0x03EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AMATeamState*>                        TeamArray;                                                 // 0x03F0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPublic)
	int                                                MatchTime;                                                 // 0x0400(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanInitiateEndMatchVote;                                  // 0x0404(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanInitiateMakeAdminVote;                                 // 0x0405(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEndMatchVoteInProgress;                                   // 0x0406(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMakeAdminVoteInProgress;                                  // 0x0407(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WinningScore;                                              // 0x0408(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LivesPerTeam;                                              // 0x040C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CurrentRound;                                              // 0x0410(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxRounds;                                                 // 0x0411(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MT68[0x2];                                     // 0x0412(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PctFrameOnTime;                                            // 0x0414(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FObjectCount>                        MaxSpawnablePerObject;                                     // 0x0418(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BHCJ[0x28];                                    // 0x0428(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAGameState");
		}
		return ptr;
	}



	void SortPlayersByScore(TArray<class APlayerState*>* Players);
	void ServerRequestEnableTournamentMode(bool bIsEnabled);
	void ServerRequestEnablePracticeMode(bool bIsEnabled);
	MidairCE_EMapVoteOption PredictWinner();
	bool OnSameTeam(class AActor* Actor1, class AActor* Actor2);
	void OnRep_WinningOption();
	void OnRep_VotingStage();
	void OnRep_TeamArray();
	void OnRep_PunishVote();
	void OnRep_MapVoteOptions();
	bool IsAnySimpleVoteInProgress();
	unsigned char GetVotesForOption(MidairCE_EMapVoteOption Option);
	unsigned char GetTotalPlayersOnTeam(unsigned char TeamId);
	class AMATeamState* GetTeamStateById(unsigned char TeamId);
	unsigned char GetTeamMaxObjectCount(class UClass* ObjectType);
	void GetRankedPlayerArrays(TArray<class AMAPlayerState*>* Team1RankedArray, TArray<class AMAPlayerState*>* Team2RankedArray);
	void GetRankedPlayerArray(TArray<class AMAPlayerState*>* RankedArray);
	struct FText GetMatchStatus();
	class UClass* GetMAGameModeClass();
	float GetLivesLeftOnTeam(unsigned char TeamId);
	unsigned char GetLivePlayersOnTeam(unsigned char TeamId);
	struct FString GetGameTime();
	struct FText GetFlagHolderTimer();
	struct FText GetCurrentJackpot();
	struct FText GetCurrentHolder();
};

// Class MidairCE.MACTFGameState
// 0x0010 (FullSize[0x0460] - InheritedSize[0x0450])
class AMACTFGameState : public AMAGameState
{
public:
	TArray<class AMACTFFlagBase*>                      FlagBases;                                                 // 0x0450(0x0010) (Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACTFGameState");
		}
		return ptr;
	}



	class AMACarriedObject* GetTeamFlag(unsigned char TeamId);
	bool GetIsFlagHolder(class AMAPlayerState* PlayerState);
	struct FName GetFlagStateName(unsigned char TeamId);
	class AMACTFFlagBase* GetFlagBase(unsigned char TeamId);
};

// Class MidairCE.MACTFPlayerState
// 0x0048 (FullSize[0x05C0] - InheritedSize[0x0578])
class AMACTFPlayerState : public AMAPlayerState
{
public:
	int                                                FlagCaptures;                                              // 0x0578(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagCaptureAssists;                                        // 0x057C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagReturns;                                               // 0x0580(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagGrabs;                                                 // 0x0584(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagPasses;                                                // 0x0588(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagsCaught;                                               // 0x058C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagInterceptionReturns;                                   // 0x0590(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagInterceptionThrows;                                    // 0x0594(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagSlidingReturns;                                        // 0x0598(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagPickups;                                               // 0x059C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlagHeldTime;                                              // 0x05A0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CarrierKills;                                              // 0x05A4(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MidairCarrierKills;                                        // 0x05A8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MidairCarrierDeaths;                                       // 0x05AC(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QOU8[0x10];                                    // 0x05B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MACTFPlayerState");
		}
		return ptr;
	}



	void IncrementMidairCarrierKills(class UClass* DamageType, class AMAPlayerState* Victim);
	void IncrementMidairCarrierDeaths(class UClass* DamageType, class AMAPlayerState* Killer);
};

// Class MidairCE.MADamageProfile
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMADamageProfile : public UObject
{
public:
	TArray<struct FMADamageProfileEntry>               DamageProfiles;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              ShieldConversionFactor;                                    // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J9U5[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MADamageProfile");
		}
		return ptr;
	}



};

// Class MidairCE.MADamageType
// 0x0060 (FullSize[0x00A0] - InheritedSize[0x0040])
class UMADamageType : public UDamageType
{
public:
	float                                              SelfImpulsePct;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShieldAbsorptionPct;                                       // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColor*                           HitFlashColor;                                             // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ShieldFlashCurve;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHitFlashColorRimOnly : 1;                                 // 0x0058(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCriticalOnDirectHit : 1;                                  // 0x0058(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDropFlagOnHit : 1;                                        // 0x0058(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFromDeployable : 1;                                       // 0x0058(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q6F3[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemDamageType;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  SmallIcon;                                                 // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  LargeIcon;                                                 // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OneStarDist;                                               // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NumDistStars;                                              // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OneStarSpeed;                                              // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NumSpeedStars;                                             // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OneStarSpeedDiff;                                          // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NumSpeedDiffStars;                                         // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NumMidairHitStars;                                         // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ComputedMaxStars;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MADamageType");
		}
		return ptr;
	}



	float ComputeDamageSkillRating(float PreviousSkillRating, class AActor* Instigator, class AActor* Victim, bool bMidairHit, float RadialDamageScale);
};

// Class MidairCE.MADmgType_Spook
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UMADmgType_Spook : public UMADamageType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MADmgType_Spook");
		}
		return ptr;
	}



};

// Class MidairCE.MADmgType_WorldCollision
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UMADmgType_WorldCollision : public UMADamageType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MADmgType_WorldCollision");
		}
		return ptr;
	}



};

// Class MidairCE.MALocalMessage
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMALocalMessage : public ULocalMessage
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MALocalMessage");
		}
		return ptr;
	}



	struct FLinearColor GetTextColor(int MessageIndex);
	struct FText GetText(const struct FLocalMessageData& MessageData);
};

// Class MidairCE.MADeathMessage
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMADeathMessage : public UMALocalMessage
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MADeathMessage");
		}
		return ptr;
	}



};

// Class MidairCE.MAFlagGoal
// 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
class AMAFlagGoal : public AActor
{
public:
	unsigned char                                      UnknownData_1JWR[0x8];                                     // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TeamId;                                                    // 0x0248(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EJL2[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAFlagGoal");
		}
		return ptr;
	}



};

// Class MidairCE.MAGameEngine
// 0x0028 (FullSize[0x0E40] - InheritedSize[0x0E18])
class UMAGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData_H5A9[0x4];                                     // 0x0E18(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HitchTimeThreshold;                                        // 0x0E1C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitchScaleThreshold;                                       // 0x0E20(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitchSmoothingRate;                                        // 0x0E24(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalSmoothingRate;                                       // 0x0E28(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumSmoothedTime;                                       // 0x0E2C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrameRateCap;                                              // 0x0E30(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PingSmoothingRate;                                         // 0x0E34(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPredictionPing;                                         // 0x0E38(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_316V[0x4];                                     // 0x0E3C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAGameEngine");
		}
		return ptr;
	}



};

// Class MidairCE.MAGameGlobals
// 0x0AD8 (FullSize[0x0B00] - InheritedSize[0x0028])
class UMAGameGlobals : public UObject
{
public:
	unsigned char                                      UnknownData_RAJX[0xAD8];                                   // 0x0028(0x0AD8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAGameGlobals");
		}
		return ptr;
	}



};

// Class MidairCE.MAGameInstance
// 0x03A8 (FullSize[0x0930] - InheritedSize[0x0588])
class UMAGameInstance : public USteamBeaconGameInstance
{
public:
	unsigned char                                      UnknownData_P8E7[0x8];                                     // 0x0588(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  ProgressionLevelsTable;                                    // 0x0590(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E7ZZ[0x20];                                    // 0x0598(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlayerDetailsCompleted;                                  // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IWSP[0x50];                                    // 0x05C8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MidairCE_EFindSessionsSortMethod                   FindSessionsSortMethod;                                    // 0x0618(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFindSessionsHideFull;                                     // 0x0619(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VUOH[0x6];                                     // 0x061A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnInputJoinPassword;                                       // 0x0620(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyChatUpdate;                                         // 0x0630(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLobbyGameCreatedDelegate;                                // 0x0640(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FString>                             MapRotation;                                               // 0x0650(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FString>                             BanIdList;                                                 // 0x0660(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FString>                             AdminIdList;                                               // 0x0670(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FSimplePlayerStats>    PlayerSkillRatings;                                        // 0x0680(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Team1Players;                                              // 0x06D0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Team2Players;                                              // 0x06E0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	int                                                MapRotationIndex;                                          // 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A8FG[0x6C];                                    // 0x06F4(0x006C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULoadingScreenWidget*                        LoadingScreenWidget;                                       // 0x0760(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LoadingScreenWidgetClass;                                  // 0x0768(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MatchMakingStatusWidgetClass;                              // 0x0770(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBanned;                                                 // 0x0778(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHadNetworkError;                                          // 0x0779(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VQGN[0x6];                                     // 0x077A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LastNetworkErrorMessage;                                   // 0x0780(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastServerName;                                            // 0x0790(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastMapName;                                               // 0x07A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnServerNameReceived;                                      // 0x07B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bGameUpdateAvailable;                                      // 0x07C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KTOZ[0x7];                                     // 0x07C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerExpressionData>               PlayerExpressionCategories;                                // 0x07C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPlayerExpressionData>               PlayerExpressions;                                         // 0x07D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FPlayerExpressionData>   PlayerExpressionsMap;                                      // 0x07E8(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P6PP[0x78];                                    // 0x0838(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObjectInfo*                                 RootProgressionObjectInfo;                                 // 0x08B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6PQQ[0x18];                                    // 0x08B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FLoadingScreenMapData> LoadingScreenMapData;                                      // 0x08D0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class USoundCue*>                           VoiceSets;                                                 // 0x0920(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAGameInstance");
		}
		return ptr;
	}



	void ShowMatchMakingWidget(bool Show);
	void ShowBanWidget();
	void SaveMouseSettings(float DPI, float Sensitivity, bool bInvertY);
	void SaveInputSettings(TArray<struct FInputActionKeyMapping> ActionMappings, TArray<struct FInputAxisKeyMapping> AxisMappings);
	void ResetInputSettings();
	void OpenFriendOverlayForInvite();
	void OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<Engine_ENetworkFailure> FailureType, const struct FString& ErrorString);
	void InputPasswordForSteamPresence(const struct FString& RichPresence, const struct FString& JoinPassword);
	void HideLoadingScreen();
	void HandlePlayerComplete();
	class USoundCue* GetSoundCueForVoiceSet(class UClass* VoiceSet, int SoundCueId);
	class USoundCue* GetSoundCueForAnnouncer(int SoundCueId);
	MidairCE_EMAServiceState GetServiceState();
	struct FString GetServerAddress(const struct FBlueprintSessionResult& SearchResult);
	class UObjectInfo* GetRootProgressionObject();
	int GetPlayerExpressionIndex(const struct FPlayerExpressionData& Expression);
	void GetPlayerDetails(const struct FBlueprintSessionResult& SearchResult);
	void GetMouseSettings(float* DPI, float* Sensitivty, bool* bInvertY);
	TArray<struct FInputAxisKeyMapping> GetInputAxisMappings();
	TArray<struct FInputActionKeyMapping> GetInputActionMappings();
	struct FString GetCurrenSeason();
	void FindSessions(const struct FScriptDelegate& InFindSessionsResultsDelegate, MidairCE_EFindSessionsSortMethod SortMethod, bool bHideFull);
	bool ClientJoinSession(class ULocalPlayer* Player, const struct FBlueprintSessionResult& SearchResult, const struct FString& Password);
	void ClearLastNetworkError();
	bool CheckAndHandleNamedEvent(const struct FName& Name);
	void AuthenticateWithService();
};

// Class MidairCE.MAGameMessage
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMAGameMessage : public UMALocalMessage
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAGameMessage");
		}
		return ptr;
	}



};

// Class MidairCE.TDMMessage
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTDMMessage : public UMALocalMessage
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TDMMessage");
		}
		return ptr;
	}



};

// Class MidairCE.PowerupMessage
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPowerupMessage : public UMALocalMessage
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.PowerupMessage");
		}
		return ptr;
	}



};

// Class MidairCE.RBMessage
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URBMessage : public UMALocalMessage
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.RBMessage");
		}
		return ptr;
	}



};

// Class MidairCE.PRMessage
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPRMessage : public UMALocalMessage
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.PRMessage");
		}
		return ptr;
	}



};

// Class MidairCE.MAGameplayStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMAGameplayStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAGameplayStatics");
		}
		return ptr;
	}



	bool STATIC_TryUpdateAudioComponentPerspective(class UAudioComponent* AudioComponent, bool bInFirstPerson);
	void STATIC_StashPresentationItems(class UObject* WorldContextObject, TArray<class UClass*> Items);
	class UAudioComponent* STATIC_SpawnPerspectiveSoundAttached(class USoundBase* Sound, bool bInFirstPerson, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
	class AMAProjectile* STATIC_SpawnClientServerProjectile(class APawn* Instigator, class AMAPlayerController* InstigatorController, class UClass* ProjectileClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, float DamageModifier);
	void STATIC_ShowStorePageForItem(class UClass* ItemClass);
	void STATIC_ShowStorePage();
	void STATIC_ShowDLCStorePage(int Appid);
	bool STATIC_ShouldShowPerformanceStats();
	void STATIC_SetTeamColorOnMesh(class UMeshComponent* Mesh, unsigned char TeamId);
	void STATIC_SetSoundClassVolume(class USoundClass* SoundClass, float NewVolume);
	void STATIC_SetSoundClassRadioFilterVolume(class USoundClass* SoundClass, float NewVolume);
	void STATIC_SetLowPassFilterOnAllSounds(class UObject* WorldContextObject, bool bEnable, float Frequency);
	void STATIC_SetDefaultNamedCosmeticForLoadout(const struct FName& Name, class UClass* Class);
	void STATIC_SetAudioComponentPerspective(class UAudioComponent* AudioComponent, bool bInFirstPerson);
	void STATIC_RefreshInventory();
	void STATIC_PurchaseCreditBundle();
	struct FHitResult STATIC_PredictProjectileCollisionPoint(class UWorld* World, class UClass* ProjectileClass, const struct FVector& InitialLocation, const struct FRotator& FireRotation, float TimePerStep, float MaxPredictionTime);
	bool STATIC_MAPlayWorldCameraShake(class UObject* WorldContextObject, const struct FWorldCameraShakeParams& ShakeParams, const struct FVector& Epicenter, class UClass* ShakeClass, TArray<class AActor*> IgnoreActors);
	void STATIC_MakeSpline(struct FPaintContext* Context, const struct FVector2D& InStart, const struct FVector2D& InStartDir, const struct FVector2D& InEnd, const struct FVector2D& InEndDir, float InThickness, const struct FLinearColor& InTint, int LayerOffset);
	struct FVector STATIC_MAGetDamageImpulse(const struct FDamageEvent& DamageEvent, class AActor* HitActor, class AController* EventInstigator);
	bool STATIC_MAApplyRadialDamage(class UObject* WorldContextObject, const struct FRadialDamageParams& DamageParams, const struct FVector& Origin, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController);
	bool STATIC_IsSteamConnected();
	bool STATIC_IsItemUnlockedForUser(class UClass* ItemClass);
	bool STATIC_IsDLCOwned(int Appid);
	TArray<class UClass*> STATIC_GetStashedPresentationItems(class UObject* WorldContextObject);
	bool STATIC_GetRecentlyRendered(class USkinnedMeshComponent* MeshComponent);
	struct FString STATIC_GetProjectVersionString();
	int STATIC_GetPredictedLOD(class USkinnedMeshComponent* MeshComponent);
	class UClass* STATIC_GetObjectInfoClass(class UClass* ObjectClass);
	class UObjectInfo* STATIC_GetObjectInfo(class UClass* ObjectClass);
	class UObject* STATIC_GetMutableDefaultObject(class UClass* Class);
	class AMAGameState* STATIC_GetMAGameState(class UObject* WorldContextObject);
	TArray<class UClass*> STATIC_GetItemsBySteamDefinedType(MidairCE_EDefinedItemType Type, class UClass* AssociativeFilter);
	bool STATIC_GetIsEditor();
	float STATIC_GetDistanceFromPointToCollision(const struct FVector& Point, class UPrimitiveComponent* Component);
	class UClass* STATIC_GetDefaultNamedCosmeticForLoadout(const struct FName& Name);
	struct FString STATIC_GetCurrentLoadoutName();
	int STATIC_GetCredits();
	float STATIC_GetCatchUpTime(class AActor* Actor);
	bool STATIC_GetCarriedObjectsFromOverlap(class UPrimitiveComponent* OverlappedComponent, unsigned char TeamId);
	class UObjectInfo* STATIC_GetActorInfoObjectFromActorClass(class UClass* ActorClass);
	class UObjectInfo* STATIC_GetActorInfoObject(class UClass* ActorInfoClass);
	TMap<class UClass*, class UActorComponent*> STATIC_FindComponentPerClass(class AActor* Actor, TArray<class UClass*> Classes);
	bool STATIC_EjectCarriedObjectsFromOverlap(class UPrimitiveComponent* OverlappedComponent, const struct FVector& EjectVelocity);
	float STATIC_ConvertUUVelocityToKPH(const struct FVector& UUVelocity);
	float STATIC_ConvertUUSpeedToKPH(float UUSpeed);
	void STATIC_CheckBeginOverlapForEjection(class AActor* SelfActor, bool bInvertNormal, class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	TArray<class AActor*> STATIC_CheckAreaForSpecificActorClass(class UObject* WorldContextObject, class UClass* ActorClass, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, const struct FVector& BaseLocation, float Radius);
};

// Class MidairCE.MAGameSession
// 0x0000 (FullSize[0x0378] - InheritedSize[0x0378])
class AMAGameSession : public ASteamBeaconGameSession
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAGameSession");
		}
		return ptr;
	}



};

// Class MidairCE.MAGameUserSettings
// 0x00F8 (FullSize[0x0210] - InheritedSize[0x0118])
class UMAGameUserSettings : public UGameUserSettings
{
public:
	unsigned char                                      UnknownData_DWDF[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UserFOV;                                                   // 0x0120(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FrameRateCap;                                              // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Anisotropy;                                                // 0x0128(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                TextureStreamingPoolSize;                                  // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MotionBlur;                                                // 0x0130(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RBM5[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CrosshairColor;                                            // 0x0138(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CrosshairIndex;                                            // 0x0148(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                      Team0Color;                                                // 0x014C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                      Team1Color;                                                // 0x0150(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UADZ[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class USoundClass*, float>                    VolumeMap;                                                 // 0x0158(0x0050) (ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                               bHideWelcomeMessage;                                       // 0x01A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowIFFDistance;                                          // 0x01A9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRelativeTeamColors;                                       // 0x01AA(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I999[0x5];                                     // 0x01AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCanvasIcon>                         WhiteCrosshairs;                                           // 0x01B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCanvasIcon>                         GreenCrosshairs;                                           // 0x01C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCanvasIcon>                         BlueCrosshairs;                                            // 0x01D0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCanvasIcon>                         RedCrosshairs;                                             // 0x01E0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCanvasIcon>                         YellowCrosshairs;                                          // 0x01F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCanvasIcon>                         MagentaCrosshairs;                                         // 0x0200(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAGameUserSettings");
		}
		return ptr;
	}



	void SetUserFOV(float NewFOV);
	void SetTeamColor(int TeamId, const struct FColor& Color);
	void SetSoundClassVolume(class USoundClass* Class, float Volume);
	void SetRelativeTeamColors(bool State);
	void SetIFFDistance(bool ShouldShow);
	void SetFullscreenModeFromString(struct FString* AsString);
	void SetFrameRateCap(float NewFPC);
	void SetCrosshairIndex(const struct FString& CrosshairType);
	void SetCrosshairColor(const struct FString& Color);
	void SetAllSettingsGroups(int AAQuality, int VFXQuality, int FoliageQuality, int PPQuality, int ShadowQuality, int TextureQuality, int ViewDistance);
	void SetAdvancedSettings(int InAnisotropy, int InTextureStreamingPoolSize, int InMotionBlur);
	void HideWelcomeMessage();
	float GetUserFOV();
	struct FColor GetTeamColorWithId(int TeamId);
	struct FColor GetTeamColor(class AMAPlayerController* PlayerController, int TeamId);
	float GetSoundClassVolume(class USoundClass* Class);
	class UMAGameUserSettings* STATIC_GetMAGameUserSettings();
	float GetFrameRateCap();
	float STATIC_GetFPCMin();
	float STATIC_GetFPCMax();
	float STATIC_GetFOVMin();
	float STATIC_GetFOVMax();
	struct FString GetCrosshairType();
	int GetCrosshairIndex();
	struct FString GetCrosshairColor();
	struct FColor GetCarriedObjectTeamColor(int TeamId);
	void GetAllSettingsGroups(int* AAQuality, int* VFXQuality, int* FoliageQuality, int* PPQuality, int* ShadowQuality, int* TextureQuality, int* ViewDistance);
	void GetAdvancedSettings(int* OutAnisotropy, int* OutTextureStreamingPoolSize, int* OutMotionBlur);
	void ApplyFPCSetting();
};

// Class MidairCE.MAHandGrenade
// 0x00C0 (FullSize[0x0318] - InheritedSize[0x0258])
class AMAHandGrenade : public AMAItem
{
public:
	class UClass*                                      ProjectileClass;                                           // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAmmoCountDefault;                                       // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2MVN[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, int>                           MaxAmmoCountMap;                                           // 0x0268(0x0050) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                                     ThrowOffset;                                               // 0x02B8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AZJX[0x4];                                     // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, struct FCharacterItemAnims>    CharacterAnims_Throw;                                      // 0x02C8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAHandGrenade");
		}
		return ptr;
	}



	int GetMaxAmmoCountFor(class AMACharacter* Character);
};

// Class MidairCE.MAHUD
// 0x0260 (FullSize[0x0590] - InheritedSize[0x0330])
class AMAHUD : public AHUD
{
public:
	struct FTargetRenderModifiers                      TargetRenderModifiers;                                     // 0x0330(0x0078) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      InGameMenuClass;                                           // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                                 InGameMenu;                                                // 0x03B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      HUDWidgetClass;                                            // 0x03B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                                 HUDWidget;                                                 // 0x03C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      NetPerfWidgetClass;                                        // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                                 ScoreboardWidget;                                          // 0x03D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                                 MatchStatusWidget;                                         // 0x03D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     DemoSlotWidget;                                            // 0x03E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                                 PracticeMenuWidget;                                        // 0x03E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KIOP[0x50];                                    // 0x03F0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bShowIffOnly;                                              // 0x0440(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GMKW[0x7];                                     // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDamageMarkerInfo>                   DamageMarkers;                                             // 0x0448(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UMaterial*                                   DamageMarkerMaterial;                                      // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHitMarkerInfo                              LastHitMarkerInfo;                                         // 0x0460(0x0018) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UMaterial*                                   HitMarkerMaterial;                                         // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YLGY[0x18];                                    // 0x0480(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCanvasIcon>                         WhiteCrosshairs;                                           // 0x0498(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCanvasIcon>                         GreenCrosshairs;                                           // 0x04A8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCanvasIcon>                         BlueCrosshairs;                                            // 0x04B8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCanvasIcon>                         RedCrosshairs;                                             // 0x04C8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCanvasIcon>                         YellowCrosshairs;                                          // 0x04D8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCanvasIcon>                         MagentaCrosshairs;                                         // 0x04E8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UObject*>                             Drawables;                                                 // 0x04F8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class USoundBase*                                  CauseHitSound;                                             // 0x0508(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  CauseCriticalHitSound;                                     // 0x0510(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  CauseMidairHitSound;                                       // 0x0518(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  CauseKillSound;                                            // 0x0520(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  CauseTeamHitSound;                                         // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  TakeHitSound;                                              // 0x0530(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  TakeShieldedHitSound;                                      // 0x0538(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  OneStarAmbience;                                           // 0x0540(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  TwoStarAmbience;                                           // 0x0548(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  ThreeStarAmbience;                                         // 0x0550(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  FourStarAmbience;                                          // 0x0558(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  FiveStarAmbience;                                          // 0x0560(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0GJ8[0x28];                                    // 0x0568(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAHUD");
		}
		return ptr;
	}



	void UpdateReplayTime(float PctOfReplay);
	void ToggleReplayHud(class APlayerController* Controller);
	void TogglePauseReplay(class APlayerController* Controller);
	void ToggleInGameMenu(class AMAPlayerController* Controller);
	void StartQuickVoice();
	void StartChat(bool bTeamOnly);
	void ShowMapVote();
	void ShowIffOnly();
	void SetReplaySpeed(float Speed);
	bool ProcessPlayerExpressionInput(const struct FKey& Key, bool IsAbortKey);
	bool IsScoreboardVisible();
	bool IsReplayPaused();
	bool IsInGameMenuVisible();
	int GetTotalReplayTime();
	float GetReplaySpeed();
	float GetReplayPercent();
	int GetCurrentReplayTime();
	class UTexture* GetCurrentCrosshairTexture();
	void BP_OnScoreApplied(const struct FText& ScoreText, float Value);
};

// Class MidairCE.MAImpactEffect
// 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
class AMAImpactEffect : public AActor
{
public:
	float                                              MaxVisibleLifeSpan;                                        // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxInvisibleLifeSpan;                                      // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeDecalRoll;                                       // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FGVW[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAImpactEffect");
		}
		return ptr;
	}



};

// Class MidairCE.MAInputSettings
// 0x0160 (FullSize[0x0250] - InheritedSize[0x00F0])
class UMAInputSettings : public UInputSettings
{
public:
	struct FScriptMulticastDelegate                    OnBindsConflict;                                           // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBindingChanged;                                          // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FMidairInputMapping>     TrackedMappings;                                           // 0x0110(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1U5T[0x48];                                    // 0x0160(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, float>                          NamedMouseSensitivies;                                     // 0x01A8(0x0050) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TMap<struct FName, bool>                           NamedMouseInverts;                                         // 0x01F8(0x0050) (ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                               bToggleSkate;                                              // 0x0248(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bJumpThenSkate;                                            // 0x0249(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAutoAnnouncer;                                            // 0x024A(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y001[0x5];                                     // 0x024B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAInputSettings");
		}
		return ptr;
	}



	void UpdateMousePropertiesForPawn(class APawn* Class);
	void TryResolveLastConflict(MidairCE_EMappingConflictResolution Resolution);
	void TryResetKey(const struct FName& MappingName, MidairCE_EMappingPriority KeyPriority);
	void TryBindKey(const struct FName& MappingName, const struct FInputActionKeyMapping& NewKey, MidairCE_EMappingPriority KeyPriority);
	void SetMouseSensitivityForName(const struct FName& Name, float Value);
	void SetMouseInvertForName(const struct FName& Name, bool bInvert);
	void ResetAll();
	MidairCE_EMappingPriority IsMappingDefault(const struct FName& MappingName);
	bool HasAnyPendingConflict();
	float GetUISensitivityScale();
	struct FMidairInputMapping GetSpecificInputMapping(const struct FName& MappingName);
	struct FName STATIC_GetSettingsNameForPawn(class APawn* Pawn);
	float GetMouseSensitivityForPawn(class APawn* Pawn);
	float GetMouseSensitivityForName(const struct FName& Name);
	bool GetMouseInvertForPawn(class APawn* Pawn);
	bool GetMouseInvertForName(const struct FName& Name);
	struct FText STATIC_GetMappingDisplayName(const struct FMidairInputMapping& Mapping, MidairCE_EMappingPriority Priority);
	class UMAInputSettings* STATIC_GetMAInputSettings();
	TArray<struct FName> STATIC_GetInputMappingNamesOrdered();
	struct FMidairInputMapping GetInputMappingByName(const struct FName& Name);
	TArray<struct FName> STATIC_GetInputCategoryNamesOrdered();
	struct FMidairInputCategory STATIC_GetInputCategoryByName(const struct FName& Name);
	struct FMidairInputMapping STATIC_GetDefaultInputMappingByName(const struct FName& Name);
	struct FText STATIC_GetActionKeyMappingDisplayName(const struct FInputActionKeyMapping& KeyMapping);
	void ClearKey(const struct FName& MappingName, MidairCE_EMappingPriority KeyPriority);
	void ClearAll();
	bool AreMappingsEqual(const struct FInputActionKeyMapping& First, const struct FInputActionKeyMapping& Second);
	void ApplyAndSaveAll();
};

// Class MidairCE.MALocalMessagesWidget
// 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
class UMALocalMessagesWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MALocalMessagesWidget");
		}
		return ptr;
	}



	void Clear();
	void BP_Clear();
	void AddMessage(class UClass* MessageClass, const struct FLocalMessageData& MessageData);
};

// Class MidairCE.MALocalPlayer
// 0x0070 (FullSize[0x02F0] - InheritedSize[0x0280])
class UMALocalPlayer : public ULocalPlayer
{
public:
	bool                                               bProgressionWasLoaded;                                     // 0x0280(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRefreshClearCache;                                        // 0x0281(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K8NW[0x6];                                     // 0x0282(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProgressionSaveCache*                       ProgressionSaveCache;                                      // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBaseProgressionData                        ProgressionData;                                           // 0x0290(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	int                                                TotalXPForNextLevel;                                       // 0x02A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NextLevel;                                                 // 0x02AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChatWidget*                                 ChatWidget;                                                // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMatchMakingStatusWidget*                    MatchMakingStatusWidget;                                   // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnProgressionDataUpdated;                                  // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnXPGiven;                                                 // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGivenNewLoot;                                            // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MALocalPlayer");
		}
		return ptr;
	}



	void AddXP(int XP);
};

// Class MidairCE.ProgressionSaveCache
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UProgressionSaveCache : public USaveGame
{
public:
	struct FBaseProgressionData                        Data;                                                      // 0x0028(0x0018) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ProgressionSaveCache");
		}
		return ptr;
	}



};

// Class MidairCE.MANetConnection
// 0x0070 (FullSize[0x1A90] - InheritedSize[0x1A20])
class UMANetConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData_2BKJ[0x38];                                    // 0x1A20(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              SteamItems;                                                // 0x1A58(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FBaseProgressionData                        ProgressionCache;                                          // 0x1A68(0x0018) (Transient, Protected, NativeAccessSpecifierProtected)
	bool                                               bBaseProgressionLoaded;                                    // 0x1A80(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DSX0[0xF];                                     // 0x1A81(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MANetConnection");
		}
		return ptr;
	}



};

// Class MidairCE.MAPendingNetGame
// 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
class UMAPendingNetGame : public UPendingNetGame
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPendingNetGame");
		}
		return ptr;
	}



};

// Class MidairCE.FlagReturnPainVolume
// 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
class AFlagReturnPainVolume : public APainCausingVolume
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.FlagReturnPainVolume");
		}
		return ptr;
	}



	void OnCarriedIntoVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class MidairCE.MAPickupBackpack
// 0x0030 (FullSize[0x03C8] - InheritedSize[0x0398])
class AMAPickupBackpack : public AMAPickup
{
public:
	class UTargetComponent*                            TargetComponent;                                           // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bAutoActivateOnPickup;                                     // 0x03A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bExpireOnPickup;                                           // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_256M[0x6];                                     // 0x03AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BackpackType;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              AugmentClasses;                                            // 0x03B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPickupBackpack");
		}
		return ptr;
	}



	void UpdateVisuals();
};

// Class MidairCE.MAPlaybackComponent
// 0x0018 (FullSize[0x00F0] - InheritedSize[0x00D8])
class UMAPlaybackComponent : public UActorComponent
{
public:
	float                                              TimeOffset;                                                // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N64Q[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMAPlaybackEvent*>                    Events;                                                    // 0x00E0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlaybackComponent");
		}
		return ptr;
	}



	class UMAPlaybackEvent* K2_CreateAndAddEvent(class UClass* EventClass);
};

// Class MidairCE.MAPlaybackEvent_TornOff
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UMAPlaybackEvent_TornOff : public UMAPlaybackEvent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlaybackEvent_TornOff");
		}
		return ptr;
	}



};

// Class MidairCE.MAPlaybackEvent_ReplicatedMovement
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UMAPlaybackEvent_ReplicatedMovement : public UMAPlaybackEvent
{
public:
	struct FRotator                                    Rotation;                                                  // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0044(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x0050(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PEXW[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlaybackEvent_ReplicatedMovement");
		}
		return ptr;
	}



};

// Class MidairCE.MAPlayerControllerBase
// 0x0108 (FullSize[0x06C8] - InheritedSize[0x05C0])
class AMAPlayerControllerBase : public ASteamBeaconPlayerController
{
public:
	unsigned char                                      UnknownData_EVCG[0x8];                                     // 0x05C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DesiredFOV;                                                // 0x05C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FrameRateCap;                                              // 0x05CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bScorePointsShownToPlayer;                                 // 0x05D0(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSpectateStayWithOnePlayer;                                // 0x05D1(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZJTP[0x6];                                     // 0x05D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ChatWidgetClass;                                           // 0x05D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      XPLevelingWidgetClass;                                     // 0x05E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxMessageRate;                                            // 0x05E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SpamCooloffTime;                                           // 0x05EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ExpressionRateCost;                                        // 0x05F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ChatRateCost;                                              // 0x05F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RemainingSpamCooloff;                                      // 0x05F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               PlayerExpressionInput;                                     // 0x05FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bFinalizedPlayerInventory;                                 // 0x05FD(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M5UB[0xA];                                     // 0x05FE(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMALoadout                                  SteamSerializedLoadout;                                    // 0x0608(0x00A0) (Transient, Protected, NativeAccessSpecifierProtected)
	class UAudioComponent*                             LastAnnouncerExpressionAudio;                              // 0x06A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UChatWidget*                                 ChatWidget;                                                // 0x06B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                                 XPLevelingWidget;                                          // 0x06B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4FMV[0x8];                                     // 0x06C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlayerControllerBase");
		}
		return ptr;
	}



	bool ToggleMenu();
	void SetMouseSensitivityToDefault();
	void SetMouseSensitivity(float Sensitivity);
	void ServerUpdateUserUnlocks();
	void ServerSay(const struct FString& Message, bool bTeamOnly);
	void ServerDoExpression(int MessageType);
	void Say(const struct FString& Message, bool bTeamOnly);
	void SaveGeneralSettings();
	void ResetAllSteamData();
	void RefreshSteamInventory();
	void InvertMouse(bool bInvert);
	void GiveXP(int Amount);
	class UMALocalPlayer* GetMALocalPlayer();
	bool GetIsFinalizedPlayerInventory();
	void EndQuickVoice();
	void DoExpression(int MessageType);
	void DebugCrashGame();
	void ClientSay(class APlayerState* Speaker, const struct FString& Message, bool bTeamOnly);
	void ClientRefreshProgression();
	void ClientInventoryFinalized();
	void ClientGivenXP(int XP, bool bHasLevelupReward);
	void ClientDoExpression(class APlayerState* Speaker, int MessageType);
};

// Class MidairCE.MAPlayerController
// 0x03E0 (FullSize[0x0AA8] - InheritedSize[0x06C8])
class AMAPlayerController : public AMAPlayerControllerBase
{
public:
	unsigned char                                      UnknownData_TA9S[0x8];                                     // 0x06C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMatchXPConversion                          MatchXPConversion_TEMP;                                    // 0x06D0(0x0028) (Edit, Config, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                              ActionDistance;                                            // 0x06F8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_77KT[0xC];                                     // 0x06FC(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMAPlayerState*                              LastSpectatedPlayerState;                                  // 0x0708(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedDemoMessage                      DemoMessageRep;                                            // 0x0710(0x0048) (Net, RepNotify, NativeAccessSpecifierPublic)
	struct FMATeam                                     Team;                                                      // 0x0758(0x0088) (BlueprintVisible, BlueprintReadOnly, Net, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_13KW[0x8];                                     // 0x07E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              ServerDisablePawnRelatedInputRequests;                     // 0x07E8(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              DisablePawnRelatedInputRequests;                           // 0x07F8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UInputComponent*                             CharacterInput;                                            // 0x0808(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputComponent*                             VehicleInput;                                              // 0x0810(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputComponent*                             SpectatorInput;                                            // 0x0818(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<MidairCE_ELockState, class USoundBase*>       LockStateLoops;                                            // 0x0820(0x0050) (Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GTKT[0x8];                                     // 0x0870(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             LockStateLoopComponent;                                    // 0x0878(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMACharacter*                                SpectateCharacter;                                         // 0x0880(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerState*                                LastPlayerState;                                           // 0x0888(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	MidairCE_ESpectateMode                             CurrentSpectateMode;                                       // 0x0890(0x0001) ELEMENT_SIZE_MISMATCH (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JYNQ[0x3];                                     // 0x0890(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	MidairCE_ECameraMode                               CameraMode;                                                // 0x0894(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	MidairCE_ECameraMode                               PreviousCameraMode;                                        // 0x0895(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UER9[0x2];                                     // 0x0896(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OrbitCameraPressTime;                                      // 0x0898(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7BGP[0x18];                                    // 0x089C(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CameraDistPct;                                             // 0x08B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DTE6[0x20];                                    // 0x08B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      ActionActor;                                               // 0x08D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WindMaxSpeed;                                              // 0x08E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLoadoutSet;                                               // 0x08E4(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X0DA[0x3];                                     // 0x08E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMACharacter*                                ControlledCharacter;                                       // 0x08E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             WindAudioLoop;                                             // 0x08F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AMACharacter*                                LastControlledCharacter;                                   // 0x08F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      PreviousKiller;                                            // 0x0900(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      MatchEndClass;                                             // 0x0908(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CachedCameraTotalTrackTime;                                // 0x0910(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TimeSinceGotoTime;                                         // 0x0914(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnAdminPlayerVote;                                         // 0x0918(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerAdminVoteOver;                                     // 0x0928(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEndMatchWithMapVote;                                     // 0x0938(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerGotPowerup;                                        // 0x0948(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEndMatchVoteOver;                                        // 0x0958(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKicked;                                                  // 0x0968(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C19W[0x8];                                     // 0x0978(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrentVote;                                               // 0x0980(0x0010) (BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DesiredPredictionPing;                                     // 0x0990(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPredictionPing;                                         // 0x0994(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SmoothedRTT;                                               // 0x0998(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastPingTime;                                              // 0x099C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastDeathTime;                                             // 0x09A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraTrackRate;                                           // 0x09A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraTrackBodyAndKillerTime;                              // 0x09A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraTrackKillerTime;                                     // 0x09AC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraTotalTrackTime;                                      // 0x09B0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraTrackBodyBias;                                       // 0x09B4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceBodyTooCloseToCamera;                              // 0x09B8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraAngleIgnoreBodyAbove;                                // 0x09BC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraIdealDistanceFromBlockers;                           // 0x09C0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CameraNumberOfAxesChecks;                                  // 0x09C4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AMAProjectile*>                       FakeProjectiles;                                           // 0x09C8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              DemoHZ;                                                    // 0x09D8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ServerHZ;                                                  // 0x09DC(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CurrentCharacterClass;                                     // 0x09E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMALoadout                                  PlayerLoadout;                                             // 0x09E8(0x00A0) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	bool                                               bToggleSkate;                                              // 0x0A88(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMenuWantsEquipKeys;                                       // 0x0A89(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JL2V[0x2];                                     // 0x0A8A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UnPauseTimeLeft;                                           // 0x0A8C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SO45[0x4];                                     // 0x0A90(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsDemoController;                                         // 0x0A94(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0RYE[0x3];                                     // 0x0A95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMAPracticeComponent*                        PracticeComponent;                                         // 0x0A98(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y1I7[0x8];                                     // 0x0AA0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlayerController");
		}
		return ptr;
	}



	void VotePunishPlayer(class AMAPlayerState* TargetPlayer, MidairCE_EPunishType Type);
	void UpdateServerName();
	void UnsetPassword();
	void UnPause();
	void ToggleScoreboard();
	void TogglePracticeMenu();
	void SpectateJumpToLocation(const struct FString& LocationString);
	void Spectate();
	void ShowScoreboard();
	void SetupDeathEffects();
	void SetServerName(const struct FString& ServerName);
	void SetPassword(const struct FString& NewPassword);
	void SetEnabledPawnRelatedInput(class AActor* RequestingActor, bool bEnabled);
	void SetAutoBalanceEnabled(bool bAutoBalanceEnabled);
	void ServerVotePunishPlayer(class AMAPlayerState* TargetPlayer, MidairCE_EPunishType Type);
	void ServerVoteMakePlayerAdmin(unsigned char PlayerIndex);
	void ServerVoteEndWithNextMap(unsigned char MapIndex);
	void ServerViewRedFlag();
	void ServerViewBlueFlag();
	void ServerViewAPlayerState(class APlayerState* PlayerStateToView);
	void ServerUpdateRTT(float RTT);
	void ServerUpdateReplicatedInputSettings(const struct FRepInputSettings& RepInputSettings);
	void ServerUpdateReplicatedGeneralSettings(const struct FRepGenSettings& RepGenSettings);
	void ServerUnsetPassword();
	void ServerUnPause();
	void ServerToggleSpectateMode();
	void ServerSuicide();
	void ServerSubmitSimpleVote(MidairCE_ESimpleVote Vote);
	void ServerSpectate();
	void ServerSetViewTarget(class AActor* Target);
	void ServerSetSpectateMode(MidairCE_ESpectateMode Mode);
	void ServerSetPassword(const struct FString& NewPassword);
	void ServerSetLoadout(const struct FMALoadout& Loadout);
	void ServerSetAutoBalanceEnabled(bool bAutoBalanceEnabled);
	void ServerSelectLoadoutByClass(class UClass* CharacterInfo);
	void ServerRespawnWithBasicLoadout();
	void ServerRconOverrideNextMap(const struct FString& MapName);
	void ServerRconEndMatch();
	void ServerNegotiatePredictionPing(float NewPredictionPing);
	void ServerMoveToSpectate(class APlayerState* PlayerToMove);
	void ServerKickSelfForAfk();
	void ServerKickPlayer(class APlayerState* KickedPlayer, const struct FString& Reason);
	void ServerEnableTournamentMode(bool bIsEnabled);
	void ServerEnablePracticeMode(bool bIsEnabled);
	void ServerChangePlayerTeam(class APlayerState* PlayerToMove);
	void ServerCastOptionVote(MidairCE_EMapVoteOption Option);
	void ServerBanPlayer(class APlayerState* BannedPlayer, const struct FString& Reason);
	void ServerAdminLogin(const struct FString& Password);
	void SendLoadoutToServer();
	void SelectCurrentLoadout(const struct FMALoadout& Loadout);
	void RecievedClearActiveRespawnDelay();
	void RecievedActiveRespawnDelay(float Time);
	void RconOverrideNextMap(const struct FString& MapName);
	void RconEndMatch();
	void Predict(float NewPredictionPing);
	void PlayRecordedInput(MidairCE_EPlayerRecordableInputTypes InputType);
	void PlayRecordedCameraInput(float Pitch, float Yaw);
	void PickedupPowerup(float PowerupLength, const struct FString& PowerupName);
	void OnRep_ServerDisablePawnRelatedInputRequests();
	void OnRep_PlayerLoadout();
	void OnRep_DemoMessage();
	TArray<class UObject*> STATIC_LoadTeamAvatars(const struct FString& PathFromContentFolder, class UClass* AssetClass, bool LoadFromSubfolders);
	bool IsPawnRelatedInputEnabled();
	void HideScoreboard();
	void HandleMenu();
	float GetTimeDead();
	class AMACharacter* GetLastControlledCharacter();
	struct FRotator GetEffectiveControlRotation();
	int GetCurrentXPPool();
	class AMACharacter* GetControlledCharacter();
	class UMAVitalsComponent* GetCharacterVitals();
	float GetActiveRespawnDelay();
	void FinishPlayerAdminVote();
	void FinishEndMatchVote();
	class AMACharacter* FindRelevantCharacter();
	class APawn* FindMostRelevantPawn();
	void EnterTemporarySpectate();
	void EnableTournamentMode(bool bIsEnabled);
	void EnablePracticeMode(bool bIsEnabled);
	void ClientUnPause();
	void ClientSetDeathTime();
	void ClientReceiveDeathMessage(const struct FDeathMessageData& DeathMessageData);
	void ClientPlayerKicked(const struct FString& KickReason, float TimeRemaining);
	void ClientNotifyMapChange(const struct FString& MapName);
	void ClearDeathEffects();
	void ChangeTeam(unsigned char DesiredTeamId);
	void ChangeScoreboard(bool bShow);
	void ChangeMap(const struct FString& MapName);
	void BeginPlayerAdminVote(unsigned char PlayerIndex);
	void BeginEndMatchVote(unsigned char MapIndex);
	void AdminLogin(const struct FString& Password);
};

// Class MidairCE.MAPlayerMovementComponent
// 0x0018 (FullSize[0x0178] - InheritedSize[0x0160])
class UMAPlayerMovementComponent : public UPawnMovementComponent
{
public:
	class AMAPlayerPawn*                               PlayerOwner;                                               // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Elasticity;                                                // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxCollisionIterations;                                    // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPenetrationIterations;                                  // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSolverIterations;                                       // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlayerMovementComponent");
		}
		return ptr;
	}



};

// Class MidairCE.MAPlayerPawn
// 0x0028 (FullSize[0x02C8] - InheritedSize[0x02A0])
class AMAPlayerPawn : public APawn
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraComponent*                            Camera;                                                    // 0x02A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x02B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                           CachedOverlapComponent;                                    // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMAPlayerMovementComponent*                  PlayerMovement;                                            // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlayerPawn");
		}
		return ptr;
	}



};

// Class MidairCE.MAPlayerStart
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class AMAPlayerStart : public APlayerStart
{
public:
	unsigned char                                      UnknownData_9OV3[0x8];                                     // 0x0270(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TeamId;                                                    // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUserPlaced;                                               // 0x0279(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ERA[0x6];                                     // 0x027A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlayerStart");
		}
		return ptr;
	}



};

// Class MidairCE.MAPlayerTrailMarker
// 0x0040 (FullSize[0x0280] - InheritedSize[0x0240])
class AMAPlayerTrailMarker : public AActor
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1DV4[0x30];                                    // 0x0248(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            Collision;                                                 // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlayerTrailMarker");
		}
		return ptr;
	}



};

// Class MidairCE.MAPowerup
// 0x0088 (FullSize[0x02C8] - InheritedSize[0x0240])
class AMAPowerup : public AActor
{
public:
	unsigned char                                      UnknownData_5RHH[0x38];                                    // 0x0240(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCapsuleComponent*                           AssistCapsuleComponent;                                    // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTargetComponent*                            TargetComponent;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AMAPowerupBase*                              PowerupBase;                                               // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PowerupType;                                               // 0x02A0(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PowerupSize;                                               // 0x02A4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PowerupLength;                                             // 0x02A8(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FPT5[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PowerupName;                                               // 0x02B0(0x0010) (Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           SensorBitmask;                                             // 0x02C0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NB8D[0x4];                                     // 0x02C4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPowerup");
		}
		return ptr;
	}



	void Tick(float DeltaTime);
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AssistCapsuleTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class MidairCE.MAPowerupBase
// 0x0040 (FullSize[0x0280] - InheritedSize[0x0240])
class AMAPowerupBase : public AActor
{
public:
	class UTargetComponent*                            TargetComponent;                                           // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                                  PickedUp;                                                  // 0x0248(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<MidairCE_EPowerupTypes>                PowerupType;                                               // 0x0250(0x0001) (Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<MidairCE_EPowerupSize>                 PowerupSize;                                               // 0x0251(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5ZP7[0x2];                                     // 0x0252(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnFrequency;                                            // 0x0254(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PowerupLength;                                             // 0x0258(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MZER[0xC];                                     // 0x025C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PowerupClass;                                              // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPowerup*                                  Powerup;                                                   // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32_t                                           SensorBitmask;                                             // 0x0278(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AOT6[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPowerupBase");
		}
		return ptr;
	}



	void ObjectChanged();
};

// Class MidairCE.MAPracticeComponent
// 0x03C0 (FullSize[0x0498] - InheritedSize[0x00D8])
class UMAPracticeComponent : public UActorComponent
{
public:
	class AMACharacter*                                ControlledCharacter;                                       // 0x00D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WM0O[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               RouteTrailReplayActive;                                    // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BQKY[0x1B7];                                   // 0x00E9(0x01B7) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerLocationAndState                     QuickSavedPosition;                                        // 0x02A0(0x002C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DOCL[0x14];                                    // 0x02CC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMARouteTrail>                       RouteTrails;                                               // 0x02E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMADrill>                            Drills;                                                    // 0x02F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMARouteTrail                               SelectedRouteTrail;                                        // 0x0300(0x00B0) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMADrill                                    SelectedDrill;                                             // 0x03B0(0x0080) (BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              PathRecordStartTime;                                       // 0x0430(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RouteTrailMarkerIndex;                                     // 0x0434(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PathRecordActive;                                          // 0x0438(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RouteTrailLoaded;                                          // 0x0439(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AJAH[0x2];                                     // 0x043A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WorldTimeAtRouteTrailReset;                                // 0x043C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WorldTimeAtRouteTrailGrab;                                 // 0x0440(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WorldTimeAtRouteTrailCapture;                              // 0x0444(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WorldTimeAtLastRouteMarkerTouch;                           // 0x0448(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RouteTrailMarkersTouched;                                  // 0x044C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerTrailMarker*                        LastTouchedTrailMarker;                                    // 0x0450(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N2GD[0x8];                                     // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PlayerTrailMarkerBPClass;                                  // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PlayerMarkerBluePrintClass;                                // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LightCharacterBluePrintClass;                              // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DrillVictories;                                            // 0x0478(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DrillLosses;                                               // 0x047C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DrillKillCounter;                                          // 0x0480(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DrillMidairCounter;                                        // 0x0484(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DrillResultMessage;                                        // 0x0488(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPracticeComponent");
		}
		return ptr;
	}



	void StartSelectedDrill();
	void SpawnPlayerTrail(const struct FMARouteTrail& RouteTrail);
	void SpawnBotToRunSelectedRoute(bool bBotCanBeDamaged, bool bBotAlwaysFollowPath);
	void SpawnBotToRunRoute(const struct FMARouteTrail& RouteTrail, int RouteMarkerIndexToStartAt, bool bBotCanBeDamaged, bool bBotAlwaysFollowPath);
	void SetSelectedRouteTrailName(const struct FString& RouteTrailName);
	void SetSelectedRouteTrailDescription(const struct FString& RouteTrailDescription);
	void SetSelectedDrillName(const struct FString& DrillName);
	void SetSelectedDrillDescription(const struct FString& DrillDescription);
	void SetSavedPositionAsDrillStart();
	void SetRouteTrailBPClass(class UClass* PlayerTrailMarkerClass);
	void ServerStoreRouteData(const struct FMARouteTrail& RouteTrail, int PlayerId);
	void ServerSpawnBotToRunSelectedRoute(int RequestingPlayerId, const struct FString& RouteTrailName, int StartMarkerIndex, bool bBotCanBeDamaged, bool bBotAlwaysFollowPath);
	void ServerResetFlags();
	void ServerLoadPosition(const struct FPlayerLocationAndState& pls, bool SilentLoad);
	void SaveSelectedDrill();
	void SavePosition();
	void SaveLatestRouteTrail(const struct FString& RouteTrailName, const struct FString& RouteDescription);
	void SaveAllRouteTrailsToFile();
	void RouteTrailMarkerTouched(class AMAPlayerTrailMarker* Trail);
	void ResetFlags();
	void ResetCurrentSelectedRouteTrail();
	void RemoveRouteFromDrill(const struct FString& RouteName);
	void OnFlagReturned(bool bIsFlagInAir);
	void MovePawnOnRoutePath();
	void LoadRouteTrailsFromFile();
	void LoadRouteTrailPosition(int MarkerNumber);
	void LoadRouteTrailByName(const struct FString& RouteTrailName);
	void LoadPosition();
	void LoadMarkerPosition();
	void LoadDrillByName(const struct FString& DrillName);
	bool IsPracticeModeCommandEnabled();
	bool IsKeyReplayActive(MidairCE_EPlayerRecordableInputTypes InputType);
	void IncreaseMarkerPosition();
	void GoToRouteTrailStart();
	void GoToRouteTrailGrab();
	unsigned char GetTeamID();
	struct FString GetRouteTrailNames();
	TArray<struct FString> GetRoutesInDrill();
	struct FString GetPracticeMenuText(MidairCE_EPracticeMenuDataTypes DataType);
	struct FMARouteTrail GetLowPrecisionRouteTrail(const struct FMARouteTrail& RouteTrail);
	TArray<struct FMARouteTrail> GetLoadedRouteTrails();
	TArray<struct FMADrill> GetLoadedDrills();
	class AMACharacter* GetControlledCharacter();
	TArray<struct FString> GetAvailableRoutesForDrill();
	void EndCurrentDrillByTimeout();
	void DeletePlayerTrail(const struct FString& RouteTrailName);
	void DeleteDrillByName(const struct FString& DrillName);
	void DecreaseMarkerPosition();
	void ClearDrillResultMessage();
	void ClearDisplayedRouteTrail();
	void ChangeRouteTrailCollisionDifficulty(MidairCE_EPracticeRouteTrailHitDifficulty HitDifficulty);
	void AddRouteToDrill(const struct FString& RouteName);
};

// Class MidairCE.MAPlaybackEvent_Projectile_Spawn
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UMAPlaybackEvent_Projectile_Spawn : public UMAPlaybackEvent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlaybackEvent_Projectile_Spawn");
		}
		return ptr;
	}



};

// Class MidairCE.MAPlaybackEvent_Projectile_SurfaceImpact
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UMAPlaybackEvent_Projectile_SurfaceImpact : public UMAPlaybackEvent
{
public:
	struct FSurfaceImpactInfo                          SurfaceImpact;                                             // 0x0038(0x0030) (NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAPlaybackEvent_Projectile_SurfaceImpact");
		}
		return ptr;
	}



};

// Class MidairCE.MAProjectileMovement
// 0x0058 (FullSize[0x0248] - InheritedSize[0x01F0])
class UMAProjectileMovement : public UProjectileMovementComponent
{
public:
	float                                              MaxThrust;                                                 // 0x01F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxThrustAngle;                                            // 0x01F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DragCoefficient;                                           // 0x01F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetThrustAlignmentScalar;                               // 0x01FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ANPN[0x10];                                    // 0x0200(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     TargetDirection;                                           // 0x0210(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TPRZ[0x4];                                     // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMAProjectile*                               ProjectileOwner;                                           // 0x0220(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     TargetLocation;                                            // 0x0228(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHasCurrentTargetLocation;                                 // 0x0234(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y6UI[0x3];                                     // 0x0235(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ThrustDir;                                                 // 0x0238(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SDH0[0x4];                                     // 0x0244(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAProjectileMovement");
		}
		return ptr;
	}



};

// Class MidairCE.StagedMissileMovement
// 0x0038 (FullSize[0x0280] - InheritedSize[0x0248])
class UStagedMissileMovement : public UMAProjectileMovement
{
public:
	TArray<float>                                      AutomaticStages;                                           // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D66E[0x10];                                    // 0x0258(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentStage;                                              // 0x0268(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StageTime;                                                 // 0x026C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StageLength;                                               // 0x0270(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0RE2[0xC];                                     // 0x0274(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.StagedMissileMovement");
		}
		return ptr;
	}



	void StartNewStage(float InStageLength);
};

// Class MidairCE.MASmoothCameraMoveComponent
// 0x0010 (FullSize[0x0190] - InheritedSize[0x0180])
class UMASmoothCameraMoveComponent : public USpectatorPawnMovement
{
public:
	struct FVector                                     CurrentControlInput;                                       // 0x0180(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_11RW[0x4];                                     // 0x018C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MASmoothCameraMoveComponent");
		}
		return ptr;
	}



};

// Class MidairCE.MASpectatorPawn
// 0x0020 (FullSize[0x02E8] - InheritedSize[0x02C8])
class AMASpectatorPawn : public ASpectatorPawn
{
public:
	struct FRotator                                    CurrentLookInput;                                          // 0x02C8(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XO86[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMASmoothCameraMoveComponent*                MASmoothMove;                                              // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              SpeedOffset;                                               // 0x02E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TAOK[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MASpectatorPawn");
		}
		return ptr;
	}



};

// Class MidairCE.MatchMakingStatusWidget
// 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
class UMatchMakingStatusWidget : public UUserWidget
{
public:
	struct FName                                       SlotName;                                                  // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LTIR[0x20];                                    // 0x0240(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MatchMakingStatusWidget");
		}
		return ptr;
	}



	void ReleaseOwnership(class UWidget* CurrentOwner);
	void ClaimOwnership(class UWidget* NewOwner);
};

// Class MidairCE.MATeamInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMATeamInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MATeamInterface");
		}
		return ptr;
	}



	unsigned char GetTeamID();
};

// Class MidairCE.MATeamState
// 0x0128 (FullSize[0x0368] - InheritedSize[0x0240])
class AMATeamState : public AInfo
{
public:
	unsigned char                                      UnknownData_C3RH[0x8];                                     // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TeamId;                                                    // 0x0248(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S9E6[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TeamName;                                                  // 0x0250(0x0018) (BlueprintVisible, BlueprintReadOnly, Net, NativeAccessSpecifierPublic)
	struct FLinearColor                                TeamColor;                                                 // 0x0268(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsFlagHome;                                               // 0x0278(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_93RK[0xAF];                                    // 0x0279(0x00AF) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FObjectCount>                        SpawnedItems;                                              // 0x0328(0x0010) (Net, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0338(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                jackpot;                                                   // 0x033C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LivesLeft;                                                 // 0x0340(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P0EN[0x4];                                     // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AMAPlayerState*>                      PlayerArray;                                               // 0x0348(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FObjectCount>                        CurrentSpawnedObjectCounts;                                // 0x0358(0x0010) (Net, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MATeamState");
		}
		return ptr;
	}



	void RemoveFromTeam(class AMAPlayerState* PlayerState);
	void NetMulticast_SetWeaponLimited(class UClass* Weapon, bool bLimited);
	bool IsWeaponRestricted(class UClass* Weapon);
	unsigned char GetObjectCount(class UClass* ObjectType);
	int GetNumPlayers();
	void FilterRestrictedItems(TArray<class UClass*>* InItems, TArray<class UClass*>* OutItems);
	bool CheckAndHandleSpawnWeapon(class UClass* Weapon);
	bool CanSpawnWeapon(class UClass* Weapon);
	void AdjustScore(int ScoreAdjustment);
	void AdjustLives(int ScoreAdjustment);
	void AdjustJackpot(int ScoreAdjustment);
	void AddToTeam(class AMAPlayerState* PlayerState);
};

// Class MidairCE.MATRFlag
// 0x0048 (FullSize[0x0510] - InheritedSize[0x04C8])
class AMATRFlag : public AMACarriedObject
{
public:
	class UAudioComponent*                             FlagSlideLoop;                                             // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7I6K[0x18];                                    // 0x04D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  FlagBounce;                                                // 0x04E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BounceSoundVelocityThreshold;                              // 0x04F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinTimeBetweenBounces;                                     // 0x04F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GAE4[0x8];                                     // 0x04F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SlideAudioEaseInRate;                                      // 0x0500(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlideAudioEaseOutRate;                                     // 0x0504(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3VO7[0x8];                                     // 0x0508(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MATRFlag");
		}
		return ptr;
	}



	void OnStop(const struct FHitResult& ImpactResult);
	void OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
};

// Class MidairCE.MATRFlagBase
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class AMATRFlagBase : public AMACarriedObjectBase
{
public:
	unsigned char                                      UnknownData_W375[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MATRFlagBase");
		}
		return ptr;
	}



};

// Class MidairCE.MATRGameMode
// 0x00A8 (FullSize[0x0A48] - InheritedSize[0x09A0])
class AMATRGameMode : public AMAGameMode
{
public:
	unsigned char                                      UnknownData_SD00[0x10];                                    // 0x09A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RabbitScoreRate;                                           // 0x09B0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RabbitSelfDamagePct;                                       // 0x09B4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RabbitInvulnerabilityLength;                               // 0x09B8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HotPotatoLength;                                           // 0x09BC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameModeComplexScore                       Points_Grab;                                               // 0x09C0(0x0018) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Capture;                                            // 0x09D8(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameModeSimpleScore                        Points_Holding;                                            // 0x09E4(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N1BZ[0x58];                                    // 0x09F0(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MATRGameMode");
		}
		return ptr;
	}



};

// Class MidairCE.MATRGameState
// 0x0050 (FullSize[0x04A0] - InheritedSize[0x0450])
class AMATRGameState : public AMAGameState
{
public:
	TArray<class AMATRFlagBase*>                       FlagBases;                                                 // 0x0450(0x0010) (Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LWMR[0x10];                                    // 0x0460(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentJackPot;                                            // 0x0470(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LVRO[0x4];                                     // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CurrentHolderName;                                         // 0x0478(0x0018) (BlueprintVisible, BlueprintReadOnly, Net, NativeAccessSpecifierPublic)
	struct FTimerHandle                                TimerHandle_HeldTimer;                                     // 0x0490(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              bTimerExpired;                                             // 0x0498(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YZG7[0x4];                                     // 0x049C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MATRGameState");
		}
		return ptr;
	}



	bool GetIsFlagHolder(class AMAPlayerState* PlayerState);
	struct FName GetFlagStateName(unsigned char TeamId);
	class AMATRFlagBase* GetFlagBase(unsigned char TeamId);
};

// Class MidairCE.MATRPlayerState
// 0x0018 (FullSize[0x0590] - InheritedSize[0x0578])
class AMATRPlayerState : public AMAPlayerState
{
public:
	int                                                FlagCaptures;                                              // 0x0578(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagReturns;                                               // 0x057C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagPickups;                                               // 0x0580(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlagGrabs;                                                 // 0x0584(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CarrierKills;                                              // 0x0588(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TVOX[0x4];                                     // 0x058C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MATRPlayerState");
		}
		return ptr;
	}



};

// Class MidairCE.MAVitalsComponent
// 0x01C8 (FullSize[0x02A0] - InheritedSize[0x00D8])
class UMAVitalsComponent : public UActorComponent
{
public:
	float                                              HealthMax;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRepairPct;                                              // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LowHealthPct;                                              // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRegenHealth;                                              // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_81F1[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HealthRegenRate;                                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyRepairConversion;                                    // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyBadRepairConversion;                                 // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VA83[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamageProfileClass;                                        // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyMax;                                                 // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyRechargeRate;                                        // 0x0104(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRepEnergyToOwner;                                         // 0x0108(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U4HG[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EnergyRegenDisableThreshold;                               // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnergyRegenDisableDuration;                                // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnergyDamageBypassShield;                                 // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableEnergyAndShield;                                   // 0x0115(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_ENetDeathType                             NetDeathType;                                              // 0x0116(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4ZT[0x11];                                    // 0x0117(0x0011) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTookDamage;                                              // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHealthChanged;                                           // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnShieldStatusChanged;                                     // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEnergyDepleted;                                          // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEnergyDisabled;                                          // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEnergyDamage;                                            // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDied;                                                    // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRevived;                                                 // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              Health;                                                    // 0x01A8(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LastHealth;                                                // 0x01AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Energy;                                                    // 0x01B0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsShielded;                                               // 0x01B4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VCB5[0xB];                                     // 0x01B5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MidairCE_EShieldType                               ShieldType;                                                // 0x01C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_49US[0x3];                                     // 0x01C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ShieldHealthPool;                                          // 0x01C4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ShieldHealthMaxPool;                                       // 0x01C8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FJZ7[0x8];                                     // 0x01CC(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ShieldRechargeConversionFactor;                            // 0x01D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRepIsDead;                                                // 0x01D8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UMYQ[0x7];                                     // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AController*                                 LastDamageInstigator;                                      // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTakeHitInfo                                LastTakeHitInfo;                                           // 0x01E8(0x0020) (Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_46GG[0x8];                                     // 0x0208(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKillAssistInfo>                     KillAssists;                                               // 0x0210(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FRegenProperties>                    RegenQueue;                                                // 0x0220(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint32_t                                           SensorBitmask;                                             // 0x0230(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      LockBitmask;                                               // 0x0234(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0C2K[0x3];                                     // 0x0235(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EnergyRegenDisableTimeRemaining;                           // 0x0238(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6F89[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ProjectileClass;                                           // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 ShieldFlashCurve;                                          // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GWWM[0x8];                                     // 0x0250(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    ShieldMID;                                                 // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class USkeletalMeshComponent*>              ShieldMeshes;                                              // 0x0260(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UMaterialInstanceDynamic*>            HitFlashMIDs;                                              // 0x0270(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UCurveLinearColor*                           HitFlashCurve;                                             // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FNVD[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          ShieldMaterial;                                            // 0x0290(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldHandleShieldFlashes;                                // 0x0298(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFakePlayerKillOnDeath;                                    // 0x0299(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FIF1[0x6];                                     // 0x029A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAVitalsComponent");
		}
		return ptr;
	}



	void TookDamage();
	float TakeDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
	void ShieldStatusChanged();
	void SetHitFlashMeshes(TArray<class UMeshComponent*> Meshes);
	float RepairHealth(float RequestedAmount);
	float Repair(float EnergyUsed);
	void OnRep_IsDead();
	void OnRep_Health();
	bool IsDead();
	bool HasLowHealth();
	bool HasFullHealth();
	float GetHealthPct();
	float GetEnergyPct();
	float ConsumeEnergy(float RequestedAmount, bool bReturnPct);
	void ClientDisableEnergyRegen(float Duration);
	bool CanBeRepaired();
};

// Class MidairCE.MAWeaponAttachment
// 0x0390 (FullSize[0x05D0] - InheritedSize[0x0240])
class AMAWeaponAttachment : public AActor
{
public:
	class UClass*                                      SkinClass;                                                 // 0x0240(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      Mesh1P;                                                    // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      Mesh3P;                                                    // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             WeaponHotLoop;                                             // 0x0258(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             WeaponFireSpeedLoop;                                       // 0x0260(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             WeaponChargeLoop;                                          // 0x0268(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                             WeaponFireLoop;                                            // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>                  Materials3P;                                               // 0x0278(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UMaterialInterface*>                  Materials1P;                                               // 0x0288(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OverrideMaterial3P;                                        // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OverrideMaterial1P;                                        // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class AWeaponAmmoArt*>                      AmmoActors;                                                // 0x02A8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	int                                                MeshMaterialElementIndexForChargeIndicator;                // 0x02B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6J7P[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    ChargeIndicatorMaterial1P;                                 // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    ChargeIndicatorMaterial3P;                                 // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HMTE[0x4];                                     // 0x02D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChargeIndicatorIntensityMultiplier;                        // 0x02D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ChargeIndicatorOverchargedIntensity;                       // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FireAccelerationTime;                                      // 0x02DC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              FireDecelerationTime;                                      // 0x02E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              FireSpeedEstimate;                                         // 0x02E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ChargeTime;                                                // 0x02E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ChargeEstimate;                                            // 0x02EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             DefaultMuzzleFlash1P;                                      // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                             DefaultMuzzleFlash3P;                                      // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                                  DefaultFireSound;                                          // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      WeaponClass;                                               // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMACharacter*                                MAOwner;                                                   // 0x0310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	MidairCE_EMAWeaponActivity                         CurrentActivity;                                           // 0x0318(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	MidairCE_EMAWeaponActivity                         LastActivity;                                              // 0x0319(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PNV1[0x2];                                     // 0x031A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentActivityDuration;                                   // 0x031C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentActivityTimeout;                                    // 0x0320(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FMVJ[0x4];                                     // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AmmoArtClass;                                              // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AmmoSocket;                                                // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoDetachAmmoOnReload;                                   // 0x0338(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DMOX[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, struct FCharacterItemAnims>    WeaponAnims_Fire;                                          // 0x0340(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCharacterItemAnims>                 CharacterAnims_Fire;                                       // 0x0390(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class UClass*, struct FCharacterItemAnims>    WeaponAnims_Reload;                                        // 0x03A0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCharacterItemAnims>                 CharacterAnims_Reload;                                     // 0x03F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class UClass*, struct FCharacterItemAnims>    WeaponAnims_TakeOut;                                       // 0x0400(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCharacterItemAnims>                 CharacterAnims_TakeOut;                                    // 0x0450(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class UClass*, struct FCharacterItemAnims>    CharacterAnims_FireMap;                                    // 0x0460(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TMap<class UClass*, struct FCharacterItemAnims>    CharacterAnims_ReloadMap;                                  // 0x04B0(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TMap<class UClass*, struct FCharacterItemAnims>    CharacterAnims_TakeOutMap;                                 // 0x0500(0x0050) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FName                                       AttachSocket;                                              // 0x0550(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Stance1P;                                                  // 0x0558(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Stance3P;                                                  // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LightScale;                                                // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MediumScale;                                               // 0x0564(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeavyScale;                                                // 0x0568(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H4KF[0x4];                                     // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                FireAnim;                                                  // 0x0570(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                ReloadAnim;                                                // 0x0578(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                                TakeOutAnim;                                               // 0x0580(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FCharacterItemAnims                         Character_Fire;                                            // 0x0588(0x0018) (Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FCharacterItemAnims                         Character_Reload;                                          // 0x05A0(0x0018) (Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FCharacterItemAnims                         Character_TakeOut;                                         // 0x05B8(0x0018) (Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAWeaponAttachment");
		}
		return ptr;
	}



	void SetOverrideMaterials(class UMaterialInterface* NewMaterial3P, class UMaterialInterface* NewMaterial1P);
	void SetChargeIndicator(float Intensity);
	void OnCharacterGrabAmmo(bool bInFirstPerson);
	void OnCharacterAttachAmmo(bool bInFirstPerson);
	void K2_UpdateForClientPerspective(bool bInFirstPerson);
	float GetHeat();
	void DetachFirstAmmoActor(bool bInFirstPerson);
};

// Class MidairCE.MAWorldSettings
// 0x00E8 (FullSize[0x04A8] - InheritedSize[0x03C0])
class AMAWorldSettings : public AWorldSettings
{
public:
	unsigned char                                      UnknownData_EFZW[0x10];                                    // 0x03C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Background[0x28];                                          // 0x03C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty MidairCE.MAWorldSettings.Background
	struct FString                                     MapName;                                                   // 0x03F8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Lore;                                                      // 0x0408(0x0018) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FText                                       Authors;                                                   // 0x0420(0x0018) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	struct FText                                       Objectives;                                                // 0x0438(0x0018) (Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	class USoundBase*                                  LoadingScreenMusic;                                        // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapLore;                                                   // 0x0458(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_ELevelSymmetryMode                        LevelSymmetryMode;                                         // 0x0468(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LJDR[0x3];                                     // 0x0469(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnGenerationTracingGridSize;                            // 0x046C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnGenerationCompareDistance;                            // 0x0470(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnGenerationCandidateDot;                               // 0x0474(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpawnGenerationMinimumClearSides;                          // 0x0478(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WY8A[0x4];                                     // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 SpawnWeightDistanceToEnemy;                                // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 SpawnWeightDistanceToTeammate;                             // 0x0488(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 SpawnWeightDistanceToFlag;                                 // 0x0490(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnWeightNewSpawn;                                       // 0x0498(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HazeDistance;                                              // 0x049C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VisibleDistance;                                           // 0x04A0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreMapGameModeErrors;                                  // 0x04A4(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BVGT[0x3];                                     // 0x04A5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MAWorldSettings");
		}
		return ptr;
	}



};

// Class MidairCE.MidiarStyleData
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UMidiarStyleData : public UDataAsset
{
public:
	TMap<struct FName, struct FSoftObjectPath>         SpecifiedWidgetStyles;                                     // 0x0030(0x0050) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4KK3[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MidiarStyleData");
		}
		return ptr;
	}



};

// Class MidairCE.ObjectInfo
// 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
class UObjectInfo : public UObject
{
public:
	class UTexture2D*                                  IconSmall;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  IconLarge;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       DisplayName;                                               // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ShortDisplayName;                                          // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FColor                                      DisplayNameColor;                                          // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LECB[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description;                                               // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SpecialDescription;                                        // 0x0088(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       Tooltip;                                                   // 0x00A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               bOnlyAvailableAtBase;                                      // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZZF7[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ObjectClass;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PreviewMeshScale;                                          // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8XRS[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimationAsset*                             PreviewMeshAnim;                                           // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       ItemName;                                                  // 0x00D8(0x0018) (Deprecated, NativeAccessSpecifierPrivate)
	class UClass*                                      ActorClass;                                                // 0x00F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ObjectInfo");
		}
		return ptr;
	}



	class UObjectInfo* STATIC_GetObjectInfoFromClass(class UClass* InObjectClass);
	class UObjectInfo* STATIC_GetObjectInfo(class UObject* InObject);
	struct FText GetActionText(class AActor* Actor);
	void STATIC_FilterObjectInfoArray(TArray<class UClass*>* Base, TArray<class UClass*>* AppliedFilter, TArray<class UClass*>* outResult, bool bReturnInBoth);
	void STATIC_ConvertObjectArrayToItemArray(TArray<class UClass*>* Objects, TArray<class UClass*>* OutItems);
};

// Class MidairCE.LoadoutUpgradeInfo
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class ULoadoutUpgradeInfo : public UObjectInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.LoadoutUpgradeInfo");
		}
		return ptr;
	}



};

// Class MidairCE.MenuUnlockable
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class UMenuUnlockable : public UObjectInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.MenuUnlockable");
		}
		return ptr;
	}



};

// Class MidairCE.ItemInfo
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class UItemInfo : public UObjectInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ItemInfo");
		}
		return ptr;
	}



};

// Class MidairCE.WeaponInfo
// 0x0020 (FullSize[0x0118] - InheritedSize[0x00F8])
class UWeaponInfo : public UItemInfo
{
public:
	TArray<class UClass*>                              Skins;                                                     // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FWeaponStatDetails                          Stats;                                                     // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.WeaponInfo");
		}
		return ptr;
	}



	struct FWeaponStatDetails GetStats();
};

// Class MidairCE.ThrowableInfo
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class UThrowableInfo : public UItemInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ThrowableInfo");
		}
		return ptr;
	}



};

// Class MidairCE.DeployableInfo
// 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
class UDeployableInfo : public UItemInfo
{
public:
	float                                              BaseChargeCost;                                            // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9O40[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.DeployableInfo");
		}
		return ptr;
	}



};

// Class MidairCE.AugmentInfo
// 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
class UAugmentInfo : public UItemInfo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.AugmentInfo");
		}
		return ptr;
	}



	bool CanBeUsedWith(class UAugmentInfo* AugmentInfo);
};

// Class MidairCE.BackpackInfo
// 0x0020 (FullSize[0x0118] - InheritedSize[0x00F8])
class UBackpackInfo : public UObjectInfo
{
public:
	TArray<class UClass*>                              AvailablePrimaryAugments;                                  // 0x00F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              AvailableSecondaryAugments;                                // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.BackpackInfo");
		}
		return ptr;
	}



	TArray<class UClass*> GetAvailableSecondaryAugments();
	TArray<class UClass*> GetAvailablePrimaryAugments();
};

// Class MidairCE.VoiceSetInfo
// 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
class UVoiceSetInfo : public UObjectInfo
{
public:
	class UDataTable*                                  VoiceSetDataTable;                                         // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.VoiceSetInfo");
		}
		return ptr;
	}



};

// Class MidairCE.CharacterInfo
// 0x00B0 (FullSize[0x01A8] - InheritedSize[0x00F8])
class UCharacterInfo : public UObjectInfo
{
public:
	int                                                CurrentWeaponCount;                                        // 0x00F8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_01HF[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              Skins;                                                     // 0x0100(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              JetSkins;                                                  // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              Sprays;                                                    // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              AvailableWeapons;                                          // 0x0130(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	int                                                MaxWeapons;                                                // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BaseWeaponCount;                                           // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              AvailableThrowables;                                       // 0x0148(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              AvailableDeployables;                                      // 0x0158(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              AvailableBackpacks;                                        // 0x0168(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              UnavailableAugments;                                       // 0x0178(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              AvailableVoiceSets;                                        // 0x0188(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FCharacterStatDetails                       Stats;                                                     // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	MidairCE_EArmorSize                                ArmorSize;                                                 // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WM36[0x7];                                     // 0x01A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.CharacterInfo");
		}
		return ptr;
	}



	bool IsWeaponAvailable(class UClass* Weapon);
	bool IsVoiceSetAvailable(class UClass* VoiceSet);
	bool IsThrowableAvailable(class UClass* Throwable);
	bool IsAugmentAvailable(class UClass* Augment);
	TArray<class UClass*> GetUnavailableAugments();
	struct FCharacterStatDetails GetStats();
	TArray<class UClass*> GetAvailableWeapons();
	TArray<class UClass*> GetAvailableVoiceSets();
	TArray<class UClass*> GetAvailableThrowables();
	TArray<class UClass*> GetAvailableDeployables();
	TArray<class UClass*> GetAvailableBackpacks();
};

// Class MidairCE.PracticeSectionInfo
// 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
class UPracticeSectionInfo : public UObjectInfo
{
public:
	TArray<struct FPracticeCourseInfo>                 Courses;                                                   // 0x00F8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.PracticeSectionInfo");
		}
		return ptr;
	}



};

// Class MidairCE.ObjectivePrompt
// 0x0078 (FullSize[0x02B0] - InheritedSize[0x0238])
class UObjectivePrompt : public UUserWidget
{
public:
	struct FMidairObjectiveInfo                        UpdatedInfo;                                               // 0x0238(0x0078) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ObjectivePrompt");
		}
		return ptr;
	}



	void UpdateExistingPrompt(struct FMidairObjectiveInfo* DeltaObjectiveInfo, MidairCE_EObjectiveUpdateType UpdateType, bool bWantsUpdate);
	void SetPrompt(struct FMidairObjectiveInfo* NewObjectiveInfo);
	void OnPromptChanged();
	void OnObjectiveCompleted();
	void ClearPrompt(bool bCompleted);
};

// Class MidairCE.ObjectiveVolume
// 0x0188 (FullSize[0x03C8] - InheritedSize[0x0240])
class AObjectiveVolume : public AActor
{
public:
	class UBoxComponent*                               OverlapVolume;                                             // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseSeparateObjectiveData;                                 // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MD8K[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMidairObjectiveInfo                        ObjectiveInfo;                                             // 0x0250(0x0078) (NativeAccessSpecifierPublic)
	struct FMidairObjectiveInfo                        ObjectiveInfoData;                                         // 0x02C8(0x0078) (Edit, NativeAccessSpecifierPublic)
	struct FMidairObjectiveInfo                        EndOverlapObjectiveInfoData;                               // 0x0340(0x0078) (Edit, NativeAccessSpecifierPublic)
	MidairCE_EObjectiveUpdateType                      StartOverlapUpdateOption;                                  // 0x03B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EObjectiveUpdateType                      EndOverlapUpdateOption;                                    // 0x03B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KN5I[0xE];                                     // 0x03BA(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ObjectiveVolume");
		}
		return ptr;
	}



	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndexbool, bool bFromSweep, const struct FHitResult& SweepResult);
	void EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
};

// Class MidairCE.ObjectLauncher
// 0x0038 (FullSize[0x0278] - InheritedSize[0x0240])
class AObjectLauncher : public AActor
{
public:
	unsigned char                                      UnknownData_GNLP[0x8];                                     // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UArrowComponent*                             ArrowComponent;                                            // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      ClassToLaunch;                                             // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeBetweenLaunches;                                       // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWaitUntilObjectDestroyed;                                 // 0x0264(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IFUW[0x3];                                     // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LaunchVelocity;                                            // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1GD8[0xC];                                     // 0x026C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ObjectLauncher");
		}
		return ptr;
	}



	void OnSpawnedActorDeath();
	void LaunchActor();
};

// Class MidairCE.ObjectLauncher_Spline
// 0x0040 (FullSize[0x02B8] - InheritedSize[0x0278])
class AObjectLauncher_Spline : public AObjectLauncher
{
public:
	class USplineComponent*                            PathComponent;                                             // 0x0278(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8ECQ[0xC];                                     // 0x0280(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConstantSpeed;                                             // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      SpeedAtPoint;                                              // 0x0290(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6Z9T[0x4];                                     // 0x02A0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	MidairCE_ESplineFinishAction                       FinishAction;                                              // 0x02A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I14Y[0xB];                                     // 0x02A5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TrackedActor;                                              // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ObjectLauncher_Spline");
		}
		return ptr;
	}



	class AActor* SpawnActorToLaunch();
};

// Class MidairCE.OuterOOBWall
// 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
class AOuterOOBWall : public AActor
{
public:
	class UStaticMeshComponent*                        WallMesh;                                                  // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              WallHeight;                                                // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WallLength;                                                // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.OuterOOBWall");
		}
		return ptr;
	}



};

// Class MidairCE.ParticleConfiguration
// 0x0058 (FullSize[0x02D8] - InheritedSize[0x0280])
class AParticleConfiguration : public ACosmeticConfiguration
{
public:
	class UParticleSystemComponent*                    DisplayPreview;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FName, class UParticleSystem*>         TaggedEmitters;                                            // 0x0288(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ParticleConfiguration");
		}
		return ptr;
	}



	void SetParticlesOnComponent(class UParticleSystemComponent* Component);
	void SetParticlesOnActor(class AActor* Actor);
};

// Class MidairCE.PlayerLoadoutsSave
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UPlayerLoadoutsSave : public USaveGame
{
public:
	class AMAGameMode*                                 CachedGamemodeClass;                                       // 0x0028(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCurrentLoadoutUpdated;                                   // 0x0030(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<struct FName, class UClass*>                  CosmeticReplacementMap;                                    // 0x0040(0x0050) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FMALoadout>                          Loadouts;                                                  // 0x0090(0x0010) (ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int                                                LastSelection;                                             // 0x00A0(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4XKB[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.PlayerLoadoutsSave");
		}
		return ptr;
	}



	void SetLastSelectedIndex(int Index);
	void SaveChanges();
	void RestoreDefaultLoadoutsForGame();
	bool ModifySelectedLoadout_Weapon(int IndexAt, class UClass* DesiredWeapon, class UClass* DesiredSkin, bool bDoCheck);
	bool ModifySelectedLoadout_VoiceSet(class UClass* DesiredVoiceSet);
	bool ModifySelectedLoadout_Throwable(int IndexAt, class UClass* DesiredThrowable, bool bDoCheck);
	bool ModifySelectedLoadout_Pack(class UClass* DesiredBackpack, bool bDoCheck);
	bool ModifySelectedLoadout_ObjectSkin(class UClass* ObjectInfoClass, class UClass* DesiredSkin);
	void ModifySelectedLoadout_Name(struct FString* DesiredName);
	bool ModifySelectedLoadout_Character(class UClass* DesiredCharacter, bool bDoCheck);
	void ModifyNamedCosmeticSelection(const struct FName& Name, class UClass* Cosmetic);
	struct FName STATIC_GetVoiceIdent();
	struct FName STATIC_GetSprayIdent();
	class UClass* GetNamedCosmeticSelection(const struct FName& Name);
	void STATIC_GetLoadoutWeapons(TArray<class UClass*>* OutWeapons);
	void STATIC_GetLoadoutThrowables(TArray<class UClass*>* OutThrowables);
	TArray<struct FMALoadout> GetLoadoutsForGamemode();
	int GetLoadoutIndex(struct FMALoadout* Loadout);
	class UCharacterInfo* STATIC_GetLoadoutCharacterInfo();
	void STATIC_GetLoadoutCharacter(class UClass** OutCharacter);
	class UBackpackInfo* STATIC_GetLoadoutBackpackInfo();
	void STATIC_GetLoadoutBackpack(class UClass** OutBackpack);
	void GetLastSelectedLoadout(struct FMALoadout* outLoadout);
	int GetLastSelectedIndex();
	class UPlayerLoadoutsSave* STATIC_GetGlobalLoadoutsSave(bool bForceNew);
	class UPlayerLoadoutsSave* STATIC_GetCustomLoadoutsSave(bool bForceNew);
	TArray<struct FText> CheckWeaponForLoadout(int IndexAt, class UClass* DesiredWeapon, const struct FMALoadout& UseLoadout);
	TArray<struct FText> CheckWeaponForCurrentLoadout(int IndexAt, class UClass* DesiredWeapon);
	TArray<struct FText> CheckThrowableForLoadout(int IndexAt, class UClass* DesiredThrowable, const struct FMALoadout& UseLoadout);
	TArray<struct FText> CheckThrowableForCurrentLoadout(int IndexAt, class UClass* DesiredThrowable);
	TArray<struct FText> CheckPackForLoadout(class UClass* DesiredBackpack, const struct FMALoadout& UseLoadout, class UClass* OverrideComparisonCharacter);
	TArray<struct FText> CheckPackForCurrentLoadout(class UClass* DesiredBackpack, class UClass* OverrideComparisonCharacter);
	bool CheckLoadoutNameUnique(struct FString* DesiredName);
	TArray<struct FText> CheckCharacterForLoadout(class UClass* DesiredCharacter, const struct FMALoadout& UseLoadout);
	TArray<struct FText> CheckCharacterForCurrentLoadout(class UClass* DesiredCharacter);
	void ChangeSelectedLoadout(struct FMALoadout* Loadout);
};

// Class MidairCE.PlayerStartSpawningVolume
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class APlayerStartSpawningVolume : public AVolume
{
public:
	bool                                               bDebug;                                                    // 0x0278(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OP3T[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.PlayerStartSpawningVolume");
		}
		return ptr;
	}



};

// Class MidairCE.TutorialDialougeManager
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UTutorialDialougeManager : public UObject
{
public:
	class UAudioComponent*                             CurrentlyPlayingSoundComponent;                            // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTutorialDialougeDetails>            DialougeStack;                                             // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              WaitBetweenSoundsInQueue;                                  // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LPJD[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDialougeFinished;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDialougeStarted;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStackEmpty;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TutorialDialougeManager");
		}
		return ptr;
	}



	void TryAddSound(const struct FTutorialDialougeDetails& NewSound);
	void StartNewDialouge();
	class UTutorialDialougeManager* STATIC_NewDialougeManager(class UObject* Owner);
	void DialougeFinished();
	void ClearAndStopAllSounds();
};

// Class MidairCE.PracticeSectionDetails
// 0x0028 (FullSize[0x0268] - InheritedSize[0x0240])
class APracticeSectionDetails : public AActor
{
public:
	class UBillboardComponent*                         MainBillboard;                                             // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bNeedsRefresh;                                             // 0x0248(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_36CK[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PracticeInfo;                                              // 0x0250(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPracticeLessonContainer>            Courses;                                                   // 0x0258(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.PracticeSectionDetails");
		}
		return ptr;
	}



};

// Class MidairCE.PRGameMode
// 0x0140 (FullSize[0x0AE0] - InheritedSize[0x09A0])
class APRGameMode : public AMAGameMode
{
public:
	struct FScriptMulticastDelegate                    OnPlayerDied;                                              // 0x09A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLessonStart;                                             // 0x09B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLessonEnd;                                               // 0x09C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AXN0[0x100];                                   // 0x09D0(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObjectivePrompt*                            ObjectivePrompt;                                           // 0x0AD0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PracticeModeTeleportDelay;                                 // 0x0AD8(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndSectionHangoutTime;                                     // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.PRGameMode");
		}
		return ptr;
	}



	void OnTriggerEndLesson(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnTriggerBeginLesson(class AActor* OverlappedActor, class AActor* OtherActor);
	struct FName GetCurrentLessonTag();
	struct FPracticeLessonDetails GetCurrentLesson();
	void AdvanceTrackingToLesson(int Index);
	void AdvanceToNextLesson();
};

// Class MidairCE.PRGameState
// 0x0000 (FullSize[0x0450] - InheritedSize[0x0450])
class APRGameState : public AMAGameState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.PRGameState");
		}
		return ptr;
	}



};

// Class MidairCE.RBGameMode
// 0x0020 (FullSize[0x09C0] - InheritedSize[0x09A0])
class ARBGameMode : public AMAGameMode
{
public:
	unsigned char                                      UnknownData_6A6B[0x10];                                    // 0x09A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RabbitScoreRate;                                           // 0x09B0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RabbitSelfDamagePct;                                       // 0x09B4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RabbitInvulnerabilityLength;                               // 0x09B8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_00WS[0x4];                                     // 0x09BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.RBGameMode");
		}
		return ptr;
	}



};

// Class MidairCE.RBPlayerState
// 0x0008 (FullSize[0x0580] - InheritedSize[0x0578])
class ARBPlayerState : public AMAPlayerState
{
public:
	float                                              TimeHeld;                                                  // 0x0578(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RabbitKills;                                               // 0x057C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.RBPlayerState");
		}
		return ptr;
	}



};

// Class MidairCE.SensorNetworkComponent
// 0x0070 (FullSize[0x04A0] - InheritedSize[0x0430])
class USensorNetworkComponent : public USphereComponent
{
public:
	MidairCE_ESensorTrackingType                       TrackingType;                                              // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPrivate;                                                  // 0x0431(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreLOS;                                                // 0x0432(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QYLT[0x1];                                     // 0x0433(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VisionAngleDegrees;                                        // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_ESensorResolutionStrength                 ResolutionStrength;                                        // 0x0438(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Channel;                                                   // 0x0439(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlertTargetWhenTracking;                                  // 0x043A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoActivateOnVitalsChange;                               // 0x043B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUserSetColor;                                             // 0x043C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IXQJ[0x3];                                     // 0x043D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GenDownResolveTimeScale;                                   // 0x0440(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResolveFactorsLocation;                                   // 0x0444(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B7G4[0x3];                                     // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ResolveBoostMultiplier;                                    // 0x0448(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5WNQ[0x4];                                     // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTargetAcquired;                                          // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C84B[0x40];                                    // 0x0460(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.SensorNetworkComponent");
		}
		return ptr;
	}



	void SetSensorChannel(unsigned char NewChannel);
	void Reactivate();
	bool HasDetectedTarget(class UTargetComponent* TargetComponent);
	unsigned char GetSensorChannel();
};

// Class MidairCE.ServiceBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UServiceBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.ServiceBlueprintLibrary");
		}
		return ptr;
	}



	bool STATIC_TeamUpdate(class APlayerController* Player, const struct FString& TeamId, const struct FString& Description, const struct FString& TeamName, const struct FString& TeamTags, const struct FString& Avatar);
	bool STATIC_TeamRespondToInvite(class APlayerController* Player, const struct FString& InviteId, const struct FString& Response, int InviteIndex);
	bool STATIC_TeamRemoveOrLeave(class APlayerController* Player, const struct FMATeam& Team, const struct FString& SteamId);
	bool STATIC_TeamInvitePlayer(class APlayerController* Player, const struct FString& SteamId);
	bool STATIC_TeamDisband(class APlayerController* Player, const struct FMATeam& Team);
	bool STATIC_TeamCreate(class APlayerController* NewPlayer, const struct FString& TeamName, const struct FString& TeamTags, const struct FString& Description);
	bool STATIC_IsSameDemoVersion(const struct FString& DemoVersion);
	bool STATIC_IsDownloadedDemo(const struct FString& DemoId);
	float STATIC_GetDemoProgress();
	void STATIC_CancelGetDemo();
};

// Class MidairCE.SetUserBanStatusAsyncTask
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class USetUserBanStatusAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.SetUserBanStatusAsyncTask");
		}
		return ptr;
	}



	class USetUserBanStatusAsyncTask* STATIC_BanUser(class APlayerState* PlayerState, bool bIsBanned);
};

// Class MidairCE.SkinConfiguration
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class ASkinConfiguration : public ACosmeticConfiguration
{
public:
	class USkeletalMeshComponent*                      SkinMesh1P;                                                // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      SkinMesh3P;                                                // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.SkinConfiguration");
		}
		return ptr;
	}



};

// Class MidairCE.WeaponSkinConfiguration
// 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
class AWeaponSkinConfiguration : public ASkinConfiguration
{
public:
	class USkeletalMeshComponent*                      AmmoMesh1P;                                                // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      AmmoMesh3P;                                                // 0x0298(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      WeaponAttachment;                                          // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseTeamColor;                                             // 0x02A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VJGS[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.WeaponSkinConfiguration");
		}
		return ptr;
	}



};

// Class MidairCE.SprayConfiguration
// 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
class ASprayConfiguration : public ACosmeticConfiguration
{
public:
	class UMaterialInterface*                          DecalMaterial;                                             // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   SprayDimensions;                                           // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SprayThickness;                                            // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SprayLifetime;                                             // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.SprayConfiguration");
		}
		return ptr;
	}



};

// Class MidairCE.SteamMatchMakingBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USteamMatchMakingBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.SteamMatchMakingBlueprintLibrary");
		}
		return ptr;
	}



	void STATIC_StopMatchMaking();
	void STATIC_StartMatchMaking(TArray<TEnumAsByte<MidairCE_EMAMatchType>> MatchType, bool WaitingWarmupServer, bool IncludeNonOfficialServer);
	bool STATIC_IsValidLobby(TEnumAsByte<MidairCE_EMAMatchType> MatchType);
	bool STATIC_IsLobbyOwner();
	int STATIC_GetNumLobbyMembers(TEnumAsByte<MidairCE_EMAMatchType> MatchType);
	bool STATIC_GetMyPlayerInfo(struct FPlayerInfo* PlayerInfo);
	struct FTimespan STATIC_GetMatchMakingTime();
	TEnumAsByte<MidairCE_EMAMatchLobbyStatus> STATIC_GetLobbyStatus();
	TArray<struct FPlayerInfo> STATIC_GetLobbyPlayers(TEnumAsByte<MidairCE_EMAMatchType> MatchType);
	bool STATIC_GetLobbyGameCreated(struct FLobbyGameCreated* LobbyGameCreated);
	void STATIC_EventTick(float DeltaSeconds);
	bool STATIC_Equal(const struct FUniqueNetIdRepl& UniqueId1, const struct FUniqueNetIdRepl& UniqueId2);
};

// Class MidairCE.SubmitUserReportAsyncTask
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class USubmitUserReportAsyncTask : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.SubmitUserReportAsyncTask");
		}
		return ptr;
	}



	class USubmitUserReportAsyncTask* STATIC_SubmitUserReport(const struct FString& SteamId, const struct FString& Summary, const struct FString& Description, const struct FString& Reproduce, int Severity);
};

// Class MidairCE.TargetComponent
// 0x02C8 (FullSize[0x04E0] - InheritedSize[0x0218])
class UTargetComponent : public USceneComponent
{
public:
	class USceneComponent*                             SceneComponent;                                            // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_ETargetPlacement                          DrawPlacement;                                             // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BZ5Y[0x3];                                     // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ScreenEdgeOffset;                                          // 0x0224(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequireLOS;                                               // 0x022C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamLOS;                                                  // 0x022D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IRIN[0x2];                                     // 0x022E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VisibleRange;                                              // 0x0230(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaticSensorRangeModifier;                                 // 0x0234(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StaticSensorRangeModifierPriority;                         // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PermaMinimumVisibleRange;                                  // 0x023C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeSensed;                                              // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTargetFlag;                                             // 0x0241(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysSensed;                                             // 0x0242(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0H0L[0x5];                                     // 0x0243(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTargetElement*>                      TargetElements;                                            // 0x0248(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<MidairCE_ESensorResolutionStrength, float>    ResolutionTimes;                                           // 0x0258(0x0050) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FDetectionCache                             LastDetectedBy;                                            // 0x02A8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AMAHUD*                                      HUD;                                                       // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1CH9[0x108];                                   // 0x02C0(0x0108) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DistToViewTarget;                                          // 0x03C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_ETeamAllegiance                           TeamAllegiance;                                            // 0x03CC(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YIU4[0x23];                                    // 0x03CD(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMAVitalsComponent*                          OwnerVitals;                                               // 0x03F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHeatComponent*                              OwnerHeat;                                                 // 0x03F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UYEA[0x10];                                    // 0x0400(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTargetComponent*>                    AttachedTargetComponents;                                  // 0x0410(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UTargetComponent*                            ParentTargetComponent;                                     // 0x0420(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       State;                                                     // 0x0428(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W82Y[0x28];                                    // 0x0430(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              GettingLockedBy;                                           // 0x0458(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              IsLockedBy;                                                // 0x0468(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              BeingTrackedBy;                                            // 0x0478(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PZTJ[0x58];                                    // 0x0488(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TargetComponent");
		}
		return ptr;
	}



	void StopAllTargetting();
	void SetSensorResolutionStrengthTime(MidairCE_ESensorResolutionStrength Strength, float Time);
	void PushSensorModifiers(const struct FSensorTargetModifiers& Modifiers);
	void PopSensorModifiers(const struct FSensorTargetModifiers& Modifiers);
	bool IsDetectedByChannel(unsigned char InChannel);
	MidairCE_EDetectedState GetHighestDetectedState();
};

// Class MidairCE.TargetDummy
// 0x0070 (FullSize[0x02B0] - InheritedSize[0x0240])
class ATargetDummy : public AActor
{
public:
	unsigned char                                      UnknownData_ZMEM[0x18];                                    // 0x0240(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCapsuleComponent*                           ColliderComponent;                                         // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTargetComponent*                            TargetComponent;                                           // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMAVitalsComponent*                          VitalsComponent;                                           // 0x0270(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_32T7[0x4];                                     // 0x0278(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReviveTime;                                                // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HJGG[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  DeathSound;                                                // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             DeathParticle;                                             // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeadLoiterTime;                                            // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFakeMidair;                                               // 0x029C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TeamId;                                                    // 0x029D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T9Q2[0x2];                                     // 0x029E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDeath;                                                   // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TargetDummy");
		}
		return ptr;
	}



	void OnDied();
	unsigned char GetTeamID();
	void ForceKill();
};

// Class MidairCE.TargetElement
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UTargetElement : public UObject
{
public:
	class AMAHUD*                                      DefaultHUDProperties;                                      // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowInViewConeOnly;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnForceOverrideViewConeOnly;                              // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHidden;                                                   // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawWhenAttached;                                         // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<MidairCE_EEdgeLockBehavior>            EdgeLockBehavior;                                          // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2VT5[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimedEdgeLockDuration;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAttachedColor;                                         // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ML6N[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                AttachedColor;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultOffsetY;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RequiredState;                                             // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V5BK[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTargetComponent*                            Owner;                                                     // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZT7B[0x30];                                    // 0x0068(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TargetElement");
		}
		return ptr;
	}



};

// Class MidairCE.TargetHealthbar
// 0x0048 (FullSize[0x00E0] - InheritedSize[0x0098])
class UTargetHealthbar : public UTargetElement
{
public:
	bool                                               bHideAtFull;                                               // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FX6O[0x37];                                    // 0x0099(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    Mid;                                                       // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0IHX[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TargetHealthbar");
		}
		return ptr;
	}



};

// Class MidairCE.TargetName
// 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
class UTargetName : public UTargetElement
{
public:
	unsigned char                                      UnknownData_LERC[0x30];                                    // 0x0098(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StackedNameVerticalOffset;                                 // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SecondaryNamesRelativeScale;                               // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NB37[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TargetName");
		}
		return ptr;
	}



};

// Class MidairCE.TargetIcon
// 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
class UTargetIcon : public UTargetElement
{
public:
	class UMaterialInterface*                          IconMaterial;                                              // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YW5Y[0x10];                                    // 0x00A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    Mid;                                                       // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TargetIcon");
		}
		return ptr;
	}



};

// Class MidairCE.TDMFlag
// 0x0028 (FullSize[0x04F0] - InheritedSize[0x04C8])
class ATDMFlag : public AMACarriedObject
{
public:
	class UAudioComponent*                             FlagSlideLoop;                                             // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                                  FlagBounce;                                                // 0x04D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BounceSoundVelocityThreshold;                              // 0x04D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinTimeBetweenBounces;                                     // 0x04DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FGFQ[0x8];                                     // 0x04E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SlideAudioEaseInRate;                                      // 0x04E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlideAudioEaseOutRate;                                     // 0x04EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TDMFlag");
		}
		return ptr;
	}



	void OnStop(const struct FHitResult& ImpactResult);
	void OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
};

// Class MidairCE.TDMFlagBase
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class ATDMFlagBase : public AMACarriedObjectBase
{
public:
	unsigned char                                      UnknownData_POJQ[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TDMFlagBase");
		}
		return ptr;
	}



};

// Class MidairCE.TDMGameMode
// 0x0058 (FullSize[0x09F8] - InheritedSize[0x09A0])
class ATDMGameMode : public AMAGameMode
{
public:
	float                                              RabbitInvulnerabilityLength;                               // 0x09A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G8NS[0x54];                                    // 0x09A4(0x0054) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TDMGameMode");
		}
		return ptr;
	}



};

// Class MidairCE.TDMGameState
// 0x0018 (FullSize[0x0468] - InheritedSize[0x0450])
class ATDMGameState : public AMAGameState
{
public:
	class ATDMFlagBase*                                FlagBase;                                                  // 0x0450(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CurrentHoldingTeam;                                        // 0x0458(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QHZ4[0x4];                                     // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMAPlayerState*                              CurrentHolder;                                             // 0x0460(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TDMGameState");
		}
		return ptr;
	}



	bool GetIsFlagHolder(class AMAPlayerState* PlayerState);
	int GetHoldingTeam();
	struct FName GetFlagStateName();
	class ATDMFlagBase* GetFlagBase();
};

// Class MidairCE.TDMHealthBase
// 0x0020 (FullSize[0x02A8] - InheritedSize[0x0288])
class ATDMHealthBase : public AMACarriedObjectBase
{
public:
	unsigned char                                      UnknownData_6CUM[0x10];                                    // 0x0288(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PickupObjectClass;                                         // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RespawnDelay;                                              // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QS9H[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TDMHealthBase");
		}
		return ptr;
	}



};

// Class MidairCE.TDMPickup
// 0x0060 (FullSize[0x0460] - InheritedSize[0x0400])
class ATDMPickup : public AAmmoPickup
{
public:
	unsigned char                                      UnknownData_IQSF[0x60];                                    // 0x0400(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TDMPickup");
		}
		return ptr;
	}



};

// Class MidairCE.TDMPlayerState
// 0x0000 (FullSize[0x0578] - InheritedSize[0x0578])
class ATDMPlayerState : public AMAPlayerState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TDMPlayerState");
		}
		return ptr;
	}



};

// Class MidairCE.TeamDeploymentRestrictionVolume
// 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
class ATeamDeploymentRestrictionVolume : public AVolume
{
public:
	unsigned char                                      UnknownData_S0JY[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TeamId;                                                    // 0x0280(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XSIA[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.TeamDeploymentRestrictionVolume");
		}
		return ptr;
	}



};

// Class MidairCE.WeaponAmmoArt
// 0x0090 (FullSize[0x02D0] - InheritedSize[0x0240])
class AWeaponAmmoArt : public AActor
{
public:
	class USkeletalMeshComponent*                      Mesh1P;                                                    // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                      Mesh3P;                                                    // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInterface*>                  Materials3P;                                               // 0x0250(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UMaterialInterface*>                  Materials1P;                                               // 0x0260(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FVector                                     EjectVelocity;                                             // 0x0270(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EjectLifeSpan;                                             // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MeshMaterialElementIndexForChargeIndicator;                // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SEKD[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    ChargeIndicatorMaterial1P;                                 // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    ChargeIndicatorMaterial3P;                                 // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W2A6[0x4];                                     // 0x0298(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LoadedAmmo;                                                // 0x029C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxAmmo;                                                   // 0x02A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A0E9[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SkinClass;                                                 // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          OverrideMaterial3P;                                        // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OverrideMaterial1P;                                        // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      AttachActor1P;                                             // 0x02C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      AttachActor3P;                                             // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MidairCE.WeaponAmmoArt");
		}
		return ptr;
	}



	void SetOverrideMaterials(class UMaterialInterface* NewMaterial3P, class UMaterialInterface* NewMaterial1P);
	void SetChargeIndicator(float Intensity);
	void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
