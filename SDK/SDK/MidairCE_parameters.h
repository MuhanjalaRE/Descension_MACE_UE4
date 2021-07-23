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

// Function MidairCE.AIPlayerController.ServerSuicide
struct AAIPlayerController_ServerSuicide_Params
{
};

// Function MidairCE.AIPlayerController.PlayRecordedInput
struct AAIPlayerController_PlayRecordedInput_Params
{
	MidairCE_EPlayerRecordableInputTypes               InputType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.AIPlayerController.PlayRecordedCameraInput
struct AAIPlayerController_PlayRecordedCameraInput_Params
{
	float                                              Pitch;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.AIPlayerController.OnPawnDetected
struct AAIPlayerController_OnPawnDetected_Params
{
	TArray<class AActor*>                              DetectedPawns;                                             // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.AIPlayerController.GetControlledCharacter
struct AAIPlayerController_GetControlledCharacter_Params
{
	class AMACharacter*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPickup.PlayPickupEffects
struct AMAPickup_PlayPickupEffects_Params
{
	class AMAPlayerController*                         Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPickup.PlayLandingEffects
struct AMAPickup_PlayLandingEffects_Params
{
};

// Function MidairCE.MAPickup.OnStop
struct AMAPickup_OnStop_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPickup.OnBeginOverlap
struct AMAPickup_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPickup.ApplyImpulse_NM
struct AMAPickup_ApplyImpulse_NM_Params
{
	struct FVector                                     Impulse;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.AmmoPickup.SetupFromCharacter
struct AAmmoPickup_SetupFromCharacter_Params
{
	class AMACharacter*                                Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.AmmoPickup.GetRelatedPlayer
struct AAmmoPickup_GetRelatedPlayer_Params
{
	class AMAPlayerState*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameMode.ReturnPrefix
struct AMAGameMode_ReturnPrefix_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameMode.IsWeaponAllowed
struct AMAGameMode_IsWeaponAllowed_Params
{
	class UClass*                                      WeaponClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameMode.IsTournamentWeaponAllowed
struct AMAGameMode_IsTournamentWeaponAllowed_Params
{
	class UClass*                                      WeaponClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameMode.IsTournamentModeEnabled
struct AMAGameMode_IsTournamentModeEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameMode.IsThrowableAllowed
struct AMAGameMode_IsThrowableAllowed_Params
{
	class UClass*                                      ThrowableClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameMode.IsPracticeModeEnabled
struct AMAGameMode_IsPracticeModeEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameMode.IsDeployableAllowed
struct AMAGameMode_IsDeployableAllowed_Params
{
	class UClass*                                      DeployableClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameMode.FilterDisallowedItems
struct AMAGameMode_FilterDisallowedItems_Params
{
	TArray<class UClass*>                              ItemsIn;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ItemsOut;                                                  // (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerState.UpdateMatchResult
struct AMAPlayerState_UpdateMatchResult_Params
{
	struct FMatchHistory                               MatchHistory;                                              // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerState.ServerRequestChangeTeam
struct AMAPlayerState_ServerRequestChangeTeam_Params
{
	unsigned char                                      DesiredTeamId;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerState.OnRep_NewSpray
struct AMAPlayerState_OnRep_NewSpray_Params
{
};

// Function MidairCE.MAPlayerState.OnRep_LastCauseHitInfo
struct AMAPlayerState_OnRep_LastCauseHitInfo_Params
{
};

// Function MidairCE.MAPlayerState.NotifyTeamChanged
struct AMAPlayerState_NotifyTeamChanged_Params
{
};

// Function MidairCE.MAPlayerState.IsAlive
struct AMAPlayerState_IsAlive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerState.IncrementTeamkills
struct AMAPlayerState_IncrementTeamkills_Params
{
};

// Function MidairCE.MAPlayerState.IncrementSuicide
struct AMAPlayerState_IncrementSuicide_Params
{
	class UClass*                                      DamageType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerState*                              Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerState.IncrementLives
struct AMAPlayerState_IncrementLives_Params
{
};

// Function MidairCE.MAPlayerState.IncrementKills
struct AMAPlayerState_IncrementKills_Params
{
	class UClass*                                      DamageType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerState*                              Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerState.IncrementEvacuations
struct AMAPlayerState_IncrementEvacuations_Params
{
};

// Function MidairCE.MAPlayerState.IncrementDeaths
struct AMAPlayerState_IncrementDeaths_Params
{
	class UClass*                                      DamageType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerState*                              Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerState.IncrementAssists
struct AMAPlayerState_IncrementAssists_Params
{
	class UClass*                                      DamageType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerState*                              Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerState.GetPowerUp
struct AMAPlayerState_GetPowerUp_Params
{
	class AMAPowerup*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerState.GetPlayerTalkingState
struct AMAPlayerState_GetPlayerTalkingState_Params
{
	MidairCE_EPlayerVoiceState                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerState.Client_NotifyScoreApplied
struct AMAPlayerState_Client_NotifyScoreApplied_Params
{
	int                                                ScoreID;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerState.AdjustScore
struct AMAPlayerState_AdjustScore_Params
{
	int                                                ScoreAdjustment;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment_Art.Tick
struct UAugment_Art_Tick_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment_Art.SetActive_Visuals
struct UAugment_Art_SetActive_Visuals_Params
{
	bool                                               bActive;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment_Art.SetActive_Audio
struct UAugment_Art_SetActive_Audio_Params
{
	bool                                               bActive;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment_Art.SetActive
struct UAugment_Art_SetActive_Params
{
	bool                                               bActive;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment.ServerUse
struct UAugment_ServerUse_Params
{
};

// Function MidairCE.Augment.ResetType
struct UAugment_ResetType_Params
{
};

// Function MidairCE.Augment.OnRep_Trigger
struct UAugment_OnRep_Trigger_Params
{
};

// Function MidairCE.Augment.OnRep_Buddies
struct UAugment_OnRep_Buddies_Params
{
};

// Function MidairCE.Augment.OnRemoved
struct UAugment_OnRemoved_Params
{
};

// Function MidairCE.Augment.OnRemoveBuddy
struct UAugment_OnRemoveBuddy_Params
{
	class AMACharacter*                                Buddy;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment.OnGivenTo
struct UAugment_OnGivenTo_Params
{
};

// Function MidairCE.Augment.OnEnergyDepleted
struct UAugment_OnEnergyDepleted_Params
{
};

// Function MidairCE.Augment.OnAddBuddy
struct UAugment_OnAddBuddy_Params
{
	class AMACharacter*                                Buddy;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment.OnActiveChanged
struct UAugment_OnActiveChanged_Params
{
	class AMACharacter*                                ReceivingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment.MakePassive
struct UAugment_MakePassive_Params
{
};

// Function MidairCE.Augment.K2_Draw
struct UAugment_K2_Draw_Params
{
	class UCanvas*                                     Canvas;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RenderDelta;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment.IsReady
struct UAugment_IsReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment.GetCurrentEnergyChangeRate
struct UAugment_GetCurrentEnergyChangeRate_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment.GetArtObjectFor
struct UAugment_GetArtObjectFor_Params
{
	class AMACharacter*                                Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAugment_Art*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment.CanBeUsedWith
struct UAugment_CanBeUsedWith_Params
{
	class UClass*                                      OtherAugmentClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment_Blink.ReceiveBlinkLocation
struct UAugment_Blink_ReceiveBlinkLocation_Params
{
};

// Function MidairCE.Augment_Blink.OnBlinkOccured
struct UAugment_Blink_OnBlinkOccured_Params
{
};

// Function MidairCE.Augment_Blink_Art.StopBlink
struct UAugment_Blink_Art_StopBlink_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment_Blink_Art.StartBlink
struct UAugment_Blink_Art_StartBlink_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.Augment_FlatShield.OwnerTookDamage
struct UAugment_FlatShield_OwnerTookDamage_Params
{
	struct FTakeHitInfo                                TakeHitInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAItem.K2_Removed
struct AMAItem_K2_Removed_Params
{
};

// Function MidairCE.MAItem.K2_GivenTo
struct AMAItem_K2_GivenTo_Params
{
	class APawn*                                       NewOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoActivate;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAItem.ClientGivenTo
struct AMAItem_ClientGivenTo_Params
{
	class APawn*                                       NewInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoActivate;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeapon.ResetAmmo
struct AMAWeapon_ResetAmmo_Params
{
	int                                                NewTotal;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeapon.K2_SetFireInterval
struct AMAWeapon_K2_SetFireInterval_Params
{
	float                                              From;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              To;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeapon.K2_GetFireInterval
struct AMAWeapon_K2_GetFireInterval_Params
{
	float                                              From;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              To;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeapon.GetAdjustedFireLocationAndRotation
struct AMAWeapon_GetAdjustedFireLocationAndRotation_Params
{
	struct FVector                                     FireLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    FireRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeapon.ClientAddAmmo
struct AMAWeapon_ClientAddAmmo_Params
{
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeapon.BP_GetReloadCompletion
struct AMAWeapon_BP_GetReloadCompletion_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeapon.AddAmmo
struct AMAWeapon_AddAmmo_Params
{
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ChatWidget.ReleaseOwnership
struct UChatWidget_ReleaseOwnership_Params
{
	class UWidget*                                     CurrentOwner;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ChatWidget.ReleaseFocus
struct UChatWidget_ReleaseFocus_Params
{
};

// Function MidairCE.ChatWidget.ReceiveMessage
struct UChatWidget_ReceiveMessage_Params
{
	struct FString                                     PlayerName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                NameColor;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                MessageColor;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ChatWidget.OnFocusPrompt
struct UChatWidget_OnFocusPrompt_Params
{
};

// Function MidairCE.ChatWidget.FocusPrompt
struct UChatWidget_FocusPrompt_Params
{
	bool                                               bTeamOnly;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ChatWidget.CommitMessage
struct UChatWidget_CommitMessage_Params
{
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ChatWidget.ClaimOwnership
struct UChatWidget_ClaimOwnership_Params
{
	class UWidget*                                     NewOwner;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ChatWidget.AddMessage
struct UChatWidget_AddMessage_Params
{
	class APlayerState*                                Speaker;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamOnly;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ComplexStatusBar.SetValue2
struct UComplexStatusBar_SetValue2_Params
{
	float                                              InPercent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ComplexStatusBar.SetValue1
struct UComplexStatusBar_SetValue1_Params
{
	float                                              InPercent;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ComplexStatusBar.SetIsMarquee
struct UComplexStatusBar_SetIsMarquee_Params
{
	bool                                               InbIsMarquee;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ComplexStatusBar.SetFillMarkerColorAndOpacity
struct UComplexStatusBar_SetFillMarkerColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ComplexStatusBar.SetFillColorAndOpacity2
struct UComplexStatusBar_SetFillColorAndOpacity2_Params
{
	struct FLinearColor                                InColor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ComplexStatusBar.SetFillColorAndOpacity
struct UComplexStatusBar_SetFillColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.OOBVolume.PlayOOBEffects
struct AOOBVolume_PlayOOBEffects_Params
{
	class AActor*                                      ActorExiting;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.OOBVolume.CheckForCarriedObjectLeaving
struct AOOBVolume_CheckForCarriedObjectLeaving_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.OOBVolume.CheckForCarriedObject
struct AOOBVolume_CheckForCarriedObject_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BodyIndexbool;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.OOBVolume.BP_PlayOOBEffects
struct AOOBVolume_BP_PlayOOBEffects_Params
{
	class AActor*                                      ActorExiting;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WallNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.DirectHotkey.HandleNamedHotkeyWithInt
struct UDirectHotkey_HandleNamedHotkeyWithInt_Params
{
	struct FString                                     Hotkey;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Int;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.DirectHotkey.HandleDirectNamedHotkey
struct UDirectHotkey_HandleDirectNamedHotkey_Params
{
	struct FString                                     Hotkey;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.EnergyConduit.OnComponentOverlapEnd
struct AEnergyConduit_OnComponentOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.EnergyConduit.OnComponentOverlap
struct AEnergyConduit_OnComponentOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BodyIndexbool;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.GetCurrentUserStatsAsyncTask.GetCurrentUserStats
struct UGetCurrentUserStatsAsyncTask_GetCurrentUserStats_Params
{
	class UGetCurrentUserStatsAsyncTask*               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.GetDemoAsyncTask.PlayDemo
struct UGetDemoAsyncTask_PlayDemo_Params
{
	struct FString                                     DemoId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PlayDemo;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetDemoAsyncTask*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.GetLeaderBoardEntriesAsyncTask.GetLeaderBoardEntries
struct UGetLeaderBoardEntriesAsyncTask_GetLeaderBoardEntries_Params
{
	struct FName                                       LeaboardName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       GameMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<MidairCE_EMALeaderboardRequest>        LeaderboardRequest;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeStart;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RangeEnd;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DetailCount;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetLeaderBoardEntriesAsyncTask*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.GetMatchHistoryAsyncTask.GetMatchHistory
struct UGetMatchHistoryAsyncTask_GetMatchHistory_Params
{
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       GameMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetMatchHistoryAsyncTask*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.GetPlayerPracticeDataAsyncTask.GetPlayerPracticeData
struct UGetPlayerPracticeDataAsyncTask_GetPlayerPracticeData_Params
{
	class UGetPlayerPracticeDataAsyncTask*             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.GetUserStatsAsyncTask.GetUserStats
struct UGetUserStatsAsyncTask_GetUserStats_Params
{
	struct FMASteamId                                  SteamId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGetUserStatsAsyncTask*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.LoadingScreenWidget.GetTip
struct ULoadingScreenWidget_GetTip_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.LoadingScreenWidget.GetObjectives
struct ULoadingScreenWidget_GetObjectives_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.LoadingScreenWidget.GetMapName
struct ULoadingScreenWidget_GetMapName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.LoadingScreenWidget.GetMapLore
struct ULoadingScreenWidget_GetMapLore_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.LoadingScreenWidget.GetBackground
struct ULoadingScreenWidget_GetBackground_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.LoadingScreenWidget.GetAuthors
struct ULoadingScreenWidget_GetAuthors_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.LoadoutPreview.UpdateSelectionPreview
struct ALoadoutPreview_UpdateSelectionPreview_Params
{
	class UClass*                                      ObjectInfoClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CosmeticCustomization;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACosmeticConfiguration*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.LoadoutPreview.GetWorldLoadoutPreview
struct ALoadoutPreview_GetWorldLoadoutPreview_Params
{
	class ALoadoutPreview*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.LoadoutPreview.GetCharacterLookAtLocation
struct ALoadoutPreview_GetCharacterLookAtLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MABackpack.Use
struct AMABackpack_Use_Params
{
};

// Function MidairCE.MABackpack.OnRep_Augments
struct AMABackpack_OnRep_Augments_Params
{
};

// Function MidairCE.MAProjectile.Timeout
struct AMAProjectile_Timeout_Params
{
};

// Function MidairCE.MAProjectile.Stopped
struct AMAProjectile_Stopped_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAProjectile.SphereTouched
struct AMAProjectile_SphereTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAProjectile.ShutDown
struct AMAProjectile_ShutDown_Params
{
};

// Function MidairCE.MAProjectile.ProcessHit
struct AMAProjectile_ProcessHit_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitNormal;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAProjectile.OnRep_TeamID
struct AMAProjectile_OnRep_TeamID_Params
{
};

// Function MidairCE.MAProjectile.OnRep_LastSurfaceImpact
struct AMAProjectile_OnRep_LastSurfaceImpact_Params
{
};

// Function MidairCE.MAProjectile.OnRep_CurrentStage
struct AMAProjectile_OnRep_CurrentStage_Params
{
};

// Function MidairCE.MAProjectile.LockInPlace
struct AMAProjectile_LockInPlace_Params
{
};

// Function MidairCE.MAProjectile.GetHomingTargetLocation
struct AMAProjectile_GetHomingTargetLocation_Params
{
	struct FVector                                     TargetLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAProjectile.Explode
struct AMAProjectile_Explode_Params
{
	struct FVector                                     HitLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitNormal;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         HitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAProjectile.DamageImpactedActor
struct AMAProjectile_DamageImpactedActor_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitNormal;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAProjectile.CatchUp
struct AMAProjectile_CatchUp_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAProjectile.BP_StartArm
struct AMAProjectile_BP_StartArm_Params
{
};

// Function MidairCE.MAProjectile.BP_FinishedArm
struct AMAProjectile_BP_FinishedArm_Params
{
};

// Function MidairCE.MAProjectile.BP_Activate
struct AMAProjectile_BP_Activate_Params
{
};

// Function MidairCE.MAProjectile.Bounced
struct AMAProjectile_Bounced_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactVelocity;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MABeamProjectile.UpdateSpawnLocation
struct AMABeamProjectile_UpdateSpawnLocation_Params
{
};

// Function MidairCE.MACarriedObject.UpdateCameraDist
struct AMACarriedObject_UpdateCameraDist_Params
{
	float                                              CameraDistPct;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACarriedObject.TeamChanged
struct AMACarriedObject_TeamChanged_Params
{
};

// Function MidairCE.MACarriedObject.StateChanged
struct AMACarriedObject_StateChanged_Params
{
};

// Function MidairCE.MACarriedObject.OnRep_RemainingAutoReturnTime
struct AMACarriedObject_OnRep_RemainingAutoReturnTime_Params
{
};

// Function MidairCE.MACarriedObject.OnRep_RemainingAutoReturnSyncTime
struct AMACarriedObject_OnRep_RemainingAutoReturnSyncTime_Params
{
};

// Function MidairCE.MACarriedObject.OnRep_MAReplicatedMovement
struct AMACarriedObject_OnRep_MAReplicatedMovement_Params
{
};

// Function MidairCE.MACarriedObject.IsInState
struct AMACarriedObject_IsInState_Params
{
	struct FName                                       InStateName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACarriedObject.IsHome
struct AMACarriedObject_IsHome_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACarriedObject.IsFlagOutOfBounds
struct AMACarriedObject_IsFlagOutOfBounds_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACarriedObject.HolderChanged
struct AMACarriedObject_HolderChanged_Params
{
};

// Function MidairCE.MACarriedObject.GetRemainingOOBReturnTime
struct AMACarriedObject_GetRemainingOOBReturnTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACarriedObject.ChangeState
struct AMACarriedObject_ChangeState_Params
{
	struct FName                                       NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACarriedObject.CatchUp
struct AMACarriedObject_CatchUp_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACarriedObject.CapsuleTouched
struct AMACarriedObject_CapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACarriedObject.AutoReturnTimer
struct AMACarriedObject_AutoReturnTimer_Params
{
};

// Function MidairCE.MACarriedObject.AssistCapsuleTouched
struct AMACarriedObject_AssistCapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACarriedObjectBase.ObjectStateChanged
struct AMACarriedObjectBase_ObjectStateChanged_Params
{
};

// Function MidairCE.MACarriedObjectBase.ObjectChanged
struct AMACarriedObjectBase_ObjectChanged_Params
{
};

// Function MidairCE.MACarriedObjectOOBVolume.OnCarriedObjectOOB
struct AMACarriedObjectOOBVolume_OnCarriedObjectOOB_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BodyIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.ZoomUpdated
struct AMACharacter_ZoomUpdated_Params
{
};

// Function MidairCE.MACharacter.WeaponActivityUpdated
struct AMACharacter_WeaponActivityUpdated_Params
{
};

// Function MidairCE.MACharacter.Vocalize
struct AMACharacter_Vocalize_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.UsePack
struct AMACharacter_UsePack_Params
{
};

// Function MidairCE.MACharacter.UpdateWeaponAttachment
struct AMACharacter_UpdateWeaponAttachment_Params
{
};

// Function MidairCE.MACharacter.UpdateVisualsToMatchCosmeticCustomizations
struct AMACharacter_UpdateVisualsToMatchCosmeticCustomizations_Params
{
};

// Function MidairCE.MACharacter.UpdateForClientPerspective
struct AMACharacter_UpdateForClientPerspective_Params
{
};

// Function MidairCE.MACharacter.UpdateCameraDist
struct AMACharacter_UpdateCameraDist_Params
{
	float                                              CameraDistPct;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.TossFlag
struct AMACharacter_TossFlag_Params
{
};

// Function MidairCE.MACharacter.TossCarriedObject
struct AMACharacter_TossCarriedObject_Params
{
};

// Function MidairCE.MACharacter.ToggleZoom
struct AMACharacter_ToggleZoom_Params
{
};

// Function MidairCE.MACharacter.ToggleTrigger
struct AMACharacter_ToggleTrigger_Params
{
	unsigned char                                      FireMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.SwitchToWeaponAtIndex
struct AMACharacter_SwitchToWeaponAtIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.SwitchToWeapon
struct AMACharacter_SwitchToWeapon_Params
{
	class AMAWeapon*                                   NewWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.SwitchToNextWeapon
struct AMACharacter_SwitchToNextWeapon_Params
{
	int                                                Direction;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.SwapTriggerBuffers
struct AMACharacter_SwapTriggerBuffers_Params
{
};

// Function MidairCE.MACharacter.Suicide
struct AMACharacter_Suicide_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.StopSkating
struct AMACharacter_StopSkating_Params
{
};

// Function MidairCE.MACharacter.StopPickup
struct AMACharacter_StopPickup_Params
{
};

// Function MidairCE.MACharacter.StopJetting
struct AMACharacter_StopJetting_Params
{
};

// Function MidairCE.MACharacter.StartPickup
struct AMACharacter_StartPickup_Params
{
};

// Function MidairCE.MACharacter.StartInvulnerability
struct AMACharacter_StartInvulnerability_Params
{
	float                                              Length;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.Skate
struct AMACharacter_Skate_Params
{
};

// Function MidairCE.MACharacter.SetTrigger
struct AMACharacter_SetTrigger_Params
{
	unsigned char                                      FireMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSet;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.SetOverrideMaterials
struct AMACharacter_SetOverrideMaterials_Params
{
	class UMaterialInterface*                          NewMaterial3P;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          NewMaterial1P;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.SetLoadout
struct AMACharacter_SetLoadout_Params
{
	struct FMALoadout                                  Loadout;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bSetMaxes;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBaseInventory;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.SetCameraMode
struct AMACharacter_SetCameraMode_Params
{
	MidairCE_ECameraMode                               InCameraMode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.ServerTrySpecificPickup
struct AMACharacter_ServerTrySpecificPickup_Params
{
	class AMAPickup*                                   Pickup;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.ServerTossCarriedObject
struct AMACharacter_ServerTossCarriedObject_Params
{
};

// Function MidairCE.MACharacter.ServerSetCameraMode
struct AMACharacter_ServerSetCameraMode_Params
{
	MidairCE_ECameraMode                               InCameraMode;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.Server_UseSpray
struct AMACharacter_Server_UseSpray_Params
{
};

// Function MidairCE.MACharacter.RemoveItem
struct AMACharacter_RemoveItem_Params
{
	class AMAItem*                                     ItemToRemove;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.PlayCameraShake
struct AMACharacter_PlayCameraShake_Params
{
	class UClass*                                      Shake;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayInUserSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    UserSpaceRot;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.OnTookDamage
struct AMACharacter_OnTookDamage_Params
{
	struct FTakeHitInfo                                TakeHitInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.OnRep_ReplicatedAccelInfo
struct AMACharacter_OnRep_ReplicatedAccelInfo_Params
{
};

// Function MidairCE.MACharacter.OnRep_PressedJet
struct AMACharacter_OnRep_PressedJet_Params
{
};

// Function MidairCE.MACharacter.OnRep_MAReplicatedMovement
struct AMACharacter_OnRep_MAReplicatedMovement_Params
{
};

// Function MidairCE.MACharacter.OnRep_LMS
struct AMACharacter_OnRep_LMS_Params
{
};

// Function MidairCE.MACharacter.OnRep_LastAttachedSurfaceImpact
struct AMACharacter_OnRep_LastAttachedSurfaceImpact_Params
{
};

// Function MidairCE.MACharacter.OnRep_IsSkating
struct AMACharacter_OnRep_IsSkating_Params
{
};

// Function MidairCE.MACharacter.OnHealthChanged
struct AMACharacter_OnHealthChanged_Params
{
	bool                                               bFromDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.OnFootStep
struct AMACharacter_OnFootStep_Params
{
};

// Function MidairCE.MACharacter.OnEnergyDamage
struct AMACharacter_OnEnergyDamage_Params
{
};

// Function MidairCE.MACharacter.OnDied
struct AMACharacter_OnDied_Params
{
};

// Function MidairCE.MACharacter.K2_FindPack
struct AMACharacter_K2_FindPack_Params
{
	class UClass*                                      Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExactClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAItem*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.K2_FindItem
struct AMACharacter_K2_FindItem_Params
{
	class UClass*                                      Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExactClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAItem*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.K2_CreateItem
struct AMACharacter_K2_CreateItem_Params
{
	class UClass*                                      NewItemClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoActivate;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAItem*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.Jet
struct AMACharacter_Jet_Params
{
};

// Function MidairCE.MACharacter.IsTriggerSet
struct AMACharacter_IsTriggerSet_Params
{
	unsigned char                                      FireMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.IsInInventory
struct AMACharacter_IsInInventory_Params
{
	class AMAItem*                                     ItemToFind;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.IsDead
struct AMACharacter_IsDead_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.IsAccelerating
struct AMACharacter_IsAccelerating_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.GetRemoteViewPitch
struct AMACharacter_GetRemoteViewPitch_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.GetIsWarpingOut
struct AMACharacter_GetIsWarpingOut_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.GetHealthPct
struct AMACharacter_GetHealthPct_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.GetHealth
struct AMACharacter_GetHealth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.GetEnergyPct
struct AMACharacter_GetEnergyPct_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.GetEnergy
struct AMACharacter_GetEnergy_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.GetAccelerationYaw
struct AMACharacter_GetAccelerationYaw_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.EndInvulnerability
struct AMACharacter_EndInvulnerability_Params
{
};

// Function MidairCE.MACharacter.DiscardInventory
struct AMACharacter_DiscardInventory_Params
{
};

// Function MidairCE.MACharacter.CycleZoom
struct AMACharacter_CycleZoom_Params
{
};

// Function MidairCE.MACharacter.ClientLoadoutRefreshed
struct AMACharacter_ClientLoadoutRefreshed_Params
{
};

// Function MidairCE.MACharacter.ClearTriggers
struct AMACharacter_ClearTriggers_Params
{
};

// Function MidairCE.MACharacter.CleanupDeadBody
struct AMACharacter_CleanupDeadBody_Params
{
};

// Function MidairCE.MACharacter.CameraShakeUpdated
struct AMACharacter_CameraShakeUpdated_Params
{
};

// Function MidairCE.MACharacter.BP_UpdateForClientPerspective
struct AMACharacter_BP_UpdateForClientPerspective_Params
{
	bool                                               bFirstPerson;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.BP_OnRep_PlayerState
struct AMACharacter_BP_OnRep_PlayerState_Params
{
};

// Function MidairCE.MACharacter.BP_GetViewRotation
struct AMACharacter_BP_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacter.AddItem
struct AMACharacter_AddItem_Params
{
	class AMAItem*                                     ItemToAdd;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoActivate;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacterMovement.MAServerMove
struct UMACharacterMovement_MAServerMove_Params
{
	struct FMAPackedMoveBundle                         Bundle;                                                    // (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacterMovement.MAClientAdjustEnergy
struct UMACharacterMovement_MAClientAdjustEnergy_Params
{
	float                                              Energy;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACharacterMovement.IsSkatingOnGround
struct UMACharacterMovement_IsSkatingOnGround_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACoreControllerInterface.PlayRecordedInput
struct UMACoreControllerInterface_PlayRecordedInput_Params
{
	MidairCE_EPlayerRecordableInputTypes               InputType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACoreControllerInterface.PlayRecordedCameraInput
struct UMACoreControllerInterface_PlayRecordedCameraInput_Params
{
	float                                              Pitch;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACTFFlag.OnStop
struct AMACTFFlag_OnStop_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACTFFlag.OnBounce
struct AMACTFFlag_OnBounce_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactVelocity;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.SortPlayersByScore
struct AMAGameState_SortPlayersByScore_Params
{
	TArray<class APlayerState*>                        Players;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.ServerRequestEnableTournamentMode
struct AMAGameState_ServerRequestEnableTournamentMode_Params
{
	bool                                               bIsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.ServerRequestEnablePracticeMode
struct AMAGameState_ServerRequestEnablePracticeMode_Params
{
	bool                                               bIsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.PredictWinner
struct AMAGameState_PredictWinner_Params
{
	MidairCE_EMapVoteOption                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.OnSameTeam
struct AMAGameState_OnSameTeam_Params
{
	class AActor*                                      Actor1;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor2;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.OnRep_WinningOption
struct AMAGameState_OnRep_WinningOption_Params
{
};

// Function MidairCE.MAGameState.OnRep_VotingStage
struct AMAGameState_OnRep_VotingStage_Params
{
};

// Function MidairCE.MAGameState.OnRep_TeamArray
struct AMAGameState_OnRep_TeamArray_Params
{
};

// Function MidairCE.MAGameState.OnRep_PunishVote
struct AMAGameState_OnRep_PunishVote_Params
{
};

// Function MidairCE.MAGameState.OnRep_MapVoteOptions
struct AMAGameState_OnRep_MapVoteOptions_Params
{
};

// Function MidairCE.MAGameState.IsAnySimpleVoteInProgress
struct AMAGameState_IsAnySimpleVoteInProgress_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetVotesForOption
struct AMAGameState_GetVotesForOption_Params
{
	MidairCE_EMapVoteOption                            Option;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetTotalPlayersOnTeam
struct AMAGameState_GetTotalPlayersOnTeam_Params
{
	unsigned char                                      TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetTeamStateById
struct AMAGameState_GetTeamStateById_Params
{
	unsigned char                                      TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMATeamState*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetTeamMaxObjectCount
struct AMAGameState_GetTeamMaxObjectCount_Params
{
	class UClass*                                      ObjectType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetRankedPlayerArrays
struct AMAGameState_GetRankedPlayerArrays_Params
{
	TArray<class AMAPlayerState*>                      Team1RankedArray;                                          // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AMAPlayerState*>                      Team2RankedArray;                                          // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetRankedPlayerArray
struct AMAGameState_GetRankedPlayerArray_Params
{
	TArray<class AMAPlayerState*>                      RankedArray;                                               // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetMatchStatus
struct AMAGameState_GetMatchStatus_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetMAGameModeClass
struct AMAGameState_GetMAGameModeClass_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetLivesLeftOnTeam
struct AMAGameState_GetLivesLeftOnTeam_Params
{
	unsigned char                                      TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetLivePlayersOnTeam
struct AMAGameState_GetLivePlayersOnTeam_Params
{
	unsigned char                                      TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetGameTime
struct AMAGameState_GetGameTime_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetFlagHolderTimer
struct AMAGameState_GetFlagHolderTimer_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetCurrentJackpot
struct AMAGameState_GetCurrentJackpot_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameState.GetCurrentHolder
struct AMAGameState_GetCurrentHolder_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACTFGameState.GetTeamFlag
struct AMACTFGameState_GetTeamFlag_Params
{
	unsigned char                                      TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMACarriedObject*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACTFGameState.GetIsFlagHolder
struct AMACTFGameState_GetIsFlagHolder_Params
{
	class AMAPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACTFGameState.GetFlagStateName
struct AMACTFGameState_GetFlagStateName_Params
{
	unsigned char                                      TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACTFGameState.GetFlagBase
struct AMACTFGameState_GetFlagBase_Params
{
	unsigned char                                      TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMACTFFlagBase*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACTFPlayerState.IncrementMidairCarrierKills
struct AMACTFPlayerState_IncrementMidairCarrierKills_Params
{
	class UClass*                                      DamageType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerState*                              Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MACTFPlayerState.IncrementMidairCarrierDeaths
struct AMACTFPlayerState_IncrementMidairCarrierDeaths_Params
{
	class UClass*                                      DamageType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerState*                              Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MADamageType.ComputeDamageSkillRating
struct UMADamageType_ComputeDamageSkillRating_Params
{
	float                                              PreviousSkillRating;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMidairHit;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RadialDamageScale;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MALocalMessage.GetTextColor
struct UMALocalMessage_GetTextColor_Params
{
	int                                                MessageIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MALocalMessage.GetText
struct UMALocalMessage_GetText_Params
{
	struct FLocalMessageData                           MessageData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.ShowMatchMakingWidget
struct UMAGameInstance_ShowMatchMakingWidget_Params
{
	bool                                               Show;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.ShowBanWidget
struct UMAGameInstance_ShowBanWidget_Params
{
};

// Function MidairCE.MAGameInstance.SaveMouseSettings
struct UMAGameInstance_SaveMouseSettings_Params
{
	float                                              DPI;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Sensitivity;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvertY;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.SaveInputSettings
struct UMAGameInstance_SaveInputSettings_Params
{
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.ResetInputSettings
struct UMAGameInstance_ResetInputSettings_Params
{
};

// Function MidairCE.MAGameInstance.OpenFriendOverlayForInvite
struct UMAGameInstance_OpenFriendOverlayForInvite_Params
{
};

// Function MidairCE.MAGameInstance.OnNetworkFailure
struct UMAGameInstance_OnNetworkFailure_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetDriver*                                  NetDriver;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ENetworkFailure>                FailureType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.InputPasswordForSteamPresence
struct UMAGameInstance_InputPasswordForSteamPresence_Params
{
	struct FString                                     RichPresence;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     JoinPassword;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.HideLoadingScreen
struct UMAGameInstance_HideLoadingScreen_Params
{
};

// Function MidairCE.MAGameInstance.HandlePlayerComplete
struct UMAGameInstance_HandlePlayerComplete_Params
{
};

// Function MidairCE.MAGameInstance.GetSoundCueForVoiceSet
struct UMAGameInstance_GetSoundCueForVoiceSet_Params
{
	class UClass*                                      VoiceSet;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SoundCueId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.GetSoundCueForAnnouncer
struct UMAGameInstance_GetSoundCueForAnnouncer_Params
{
	int                                                SoundCueId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.GetServiceState
struct UMAGameInstance_GetServiceState_Params
{
	MidairCE_EMAServiceState                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.GetServerAddress
struct UMAGameInstance_GetServerAddress_Params
{
	struct FBlueprintSessionResult                     SearchResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.GetRootProgressionObject
struct UMAGameInstance_GetRootProgressionObject_Params
{
	class UObjectInfo*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.GetPlayerExpressionIndex
struct UMAGameInstance_GetPlayerExpressionIndex_Params
{
	struct FPlayerExpressionData                       Expression;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.GetPlayerDetails
struct UMAGameInstance_GetPlayerDetails_Params
{
	struct FBlueprintSessionResult                     SearchResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.GetMouseSettings
struct UMAGameInstance_GetMouseSettings_Params
{
	float                                              DPI;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Sensitivty;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvertY;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.GetInputAxisMappings
struct UMAGameInstance_GetInputAxisMappings_Params
{
	TArray<struct FInputAxisKeyMapping>                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.GetInputActionMappings
struct UMAGameInstance_GetInputActionMappings_Params
{
	TArray<struct FInputActionKeyMapping>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.GetCurrenSeason
struct UMAGameInstance_GetCurrenSeason_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.FindSessions
struct UMAGameInstance_FindSessions_Params
{
	struct FScriptDelegate                             InFindSessionsResultsDelegate;                             // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	MidairCE_EFindSessionsSortMethod                   SortMethod;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideFull;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.ClientJoinSession
struct UMAGameInstance_ClientJoinSession_Params
{
	class ULocalPlayer*                                Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult                     SearchResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.ClearLastNetworkError
struct UMAGameInstance_ClearLastNetworkError_Params
{
};

// Function MidairCE.MAGameInstance.CheckAndHandleNamedEvent
struct UMAGameInstance_CheckAndHandleNamedEvent_Params
{
	struct FName                                       Name;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameInstance.AuthenticateWithService
struct UMAGameInstance_AuthenticateWithService_Params
{
};

// Function MidairCE.MAGameplayStatics.TryUpdateAudioComponentPerspective
struct UMAGameplayStatics_TryUpdateAudioComponentPerspective_Params
{
	class UAudioComponent*                             AudioComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.StashPresentationItems
struct UMAGameplayStatics_StashPresentationItems_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              Items;                                                     // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.SpawnPerspectiveSoundAttached
struct UMAGameplayStatics_SpawnPerspectiveSoundAttached_Params
{
	class USoundBase*                                  Sound;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachToComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                LocationType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                           AttenuationSettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                           ConcurrencySettings;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.SpawnClientServerProjectile
struct UMAGameplayStatics_SpawnClientServerProjectile_Params
{
	class APawn*                                       Instigator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAPlayerController*                         InstigatorController;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ProjectileClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    SpawnRotation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              DamageModifier;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAProjectile*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.ShowStorePageForItem
struct UMAGameplayStatics_ShowStorePageForItem_Params
{
	class UClass*                                      ItemClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.ShowStorePage
struct UMAGameplayStatics_ShowStorePage_Params
{
};

// Function MidairCE.MAGameplayStatics.ShowDLCStorePage
struct UMAGameplayStatics_ShowDLCStorePage_Params
{
	int                                                Appid;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.ShouldShowPerformanceStats
struct UMAGameplayStatics_ShouldShowPerformanceStats_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.SetTeamColorOnMesh
struct UMAGameplayStatics_SetTeamColorOnMesh_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.SetSoundClassVolume
struct UMAGameplayStatics_SetSoundClassVolume_Params
{
	class USoundClass*                                 SoundClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.SetSoundClassRadioFilterVolume
struct UMAGameplayStatics_SetSoundClassRadioFilterVolume_Params
{
	class USoundClass*                                 SoundClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.SetLowPassFilterOnAllSounds
struct UMAGameplayStatics_SetLowPassFilterOnAllSounds_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Frequency;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.SetDefaultNamedCosmeticForLoadout
struct UMAGameplayStatics_SetDefaultNamedCosmeticForLoadout_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.SetAudioComponentPerspective
struct UMAGameplayStatics_SetAudioComponentPerspective_Params
{
	class UAudioComponent*                             AudioComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.RefreshInventory
struct UMAGameplayStatics_RefreshInventory_Params
{
};

// Function MidairCE.MAGameplayStatics.PurchaseCreditBundle
struct UMAGameplayStatics_PurchaseCreditBundle_Params
{
};

// Function MidairCE.MAGameplayStatics.PredictProjectileCollisionPoint
struct UMAGameplayStatics_PredictProjectileCollisionPoint_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ProjectileClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InitialLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    FireRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TimePerStep;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPredictionTime;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.MAPlayWorldCameraShake
struct UMAGameplayStatics_MAPlayWorldCameraShake_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldCameraShakeParams                     ShakeParams;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Epicenter;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ShakeClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              IgnoreActors;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.MakeSpline
struct UMAGameplayStatics_MakeSpline_Params
{
	struct FPaintContext                               Context;                                                   // (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   InStart;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InStartDir;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InEnd;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InEndDir;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InThickness;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InTint;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.MAGetDamageImpulse
struct UMAGameplayStatics_MAGetDamageImpulse_Params
{
	struct FDamageEvent                                DamageEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                      HitActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.MAApplyRadialDamage
struct UMAGameplayStatics_MAApplyRadialDamage_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRadialDamageParams                         DamageParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DamageTypeClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              IgnoreActors;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedByController;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.IsSteamConnected
struct UMAGameplayStatics_IsSteamConnected_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.IsItemUnlockedForUser
struct UMAGameplayStatics_IsItemUnlockedForUser_Params
{
	class UClass*                                      ItemClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.IsDLCOwned
struct UMAGameplayStatics_IsDLCOwned_Params
{
	int                                                Appid;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetStashedPresentationItems
struct UMAGameplayStatics_GetStashedPresentationItems_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetRecentlyRendered
struct UMAGameplayStatics_GetRecentlyRendered_Params
{
	class USkinnedMeshComponent*                       MeshComponent;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetProjectVersionString
struct UMAGameplayStatics_GetProjectVersionString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetPredictedLOD
struct UMAGameplayStatics_GetPredictedLOD_Params
{
	class USkinnedMeshComponent*                       MeshComponent;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetObjectInfoClass
struct UMAGameplayStatics_GetObjectInfoClass_Params
{
	class UClass*                                      ObjectClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetObjectInfo
struct UMAGameplayStatics_GetObjectInfo_Params
{
	class UClass*                                      ObjectClass;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectInfo*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetMutableDefaultObject
struct UMAGameplayStatics_GetMutableDefaultObject_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetMAGameState
struct UMAGameplayStatics_GetMAGameState_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMAGameState*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetItemsBySteamDefinedType
struct UMAGameplayStatics_GetItemsBySteamDefinedType_Params
{
	MidairCE_EDefinedItemType                          Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AssociativeFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetIsEditor
struct UMAGameplayStatics_GetIsEditor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetDistanceFromPointToCollision
struct UMAGameplayStatics_GetDistanceFromPointToCollision_Params
{
	struct FVector                                     Point;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetDefaultNamedCosmeticForLoadout
struct UMAGameplayStatics_GetDefaultNamedCosmeticForLoadout_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetCurrentLoadoutName
struct UMAGameplayStatics_GetCurrentLoadoutName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetCredits
struct UMAGameplayStatics_GetCredits_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetCatchUpTime
struct UMAGameplayStatics_GetCatchUpTime_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetCarriedObjectsFromOverlap
struct UMAGameplayStatics_GetCarriedObjectsFromOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetActorInfoObjectFromActorClass
struct UMAGameplayStatics_GetActorInfoObjectFromActorClass_Params
{
	class UClass*                                      ActorClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectInfo*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.GetActorInfoObject
struct UMAGameplayStatics_GetActorInfoObject_Params
{
	class UClass*                                      ActorInfoClass;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectInfo*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.FindComponentPerClass
struct UMAGameplayStatics_FindComponentPerClass_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              Classes;                                                   // (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class UClass*, class UActorComponent*>        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.EjectCarriedObjectsFromOverlap
struct UMAGameplayStatics_EjectCarriedObjectsFromOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EjectVelocity;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.ConvertUUVelocityToKPH
struct UMAGameplayStatics_ConvertUUVelocityToKPH_Params
{
	struct FVector                                     UUVelocity;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.ConvertUUSpeedToKPH
struct UMAGameplayStatics_ConvertUUSpeedToKPH_Params
{
	float                                              UUSpeed;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.CheckBeginOverlapForEjection
struct UMAGameplayStatics_CheckBeginOverlapForEjection_Params
{
	class AActor*                                      SelfActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvertNormal;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BodyIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameplayStatics.CheckAreaForSpecificActorClass
struct UMAGameplayStatics_CheckAreaForSpecificActorClass_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ActorClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              TraceChannel;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BaseLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.SetUserFOV
struct UMAGameUserSettings_SetUserFOV_Params
{
	float                                              NewFOV;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.SetTeamColor
struct UMAGameUserSettings_SetTeamColor_Params
{
	int                                                TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.SetSoundClassVolume
struct UMAGameUserSettings_SetSoundClassVolume_Params
{
	class USoundClass*                                 Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.SetRelativeTeamColors
struct UMAGameUserSettings_SetRelativeTeamColors_Params
{
	bool                                               State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.SetIFFDistance
struct UMAGameUserSettings_SetIFFDistance_Params
{
	bool                                               ShouldShow;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.SetFullscreenModeFromString
struct UMAGameUserSettings_SetFullscreenModeFromString_Params
{
	struct FString                                     AsString;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.SetFrameRateCap
struct UMAGameUserSettings_SetFrameRateCap_Params
{
	float                                              NewFPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.SetCrosshairIndex
struct UMAGameUserSettings_SetCrosshairIndex_Params
{
	struct FString                                     CrosshairType;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.SetCrosshairColor
struct UMAGameUserSettings_SetCrosshairColor_Params
{
	struct FString                                     Color;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.SetAllSettingsGroups
struct UMAGameUserSettings_SetAllSettingsGroups_Params
{
	int                                                AAQuality;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VFXQuality;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FoliageQuality;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PPQuality;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShadowQuality;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureQuality;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ViewDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.SetAdvancedSettings
struct UMAGameUserSettings_SetAdvancedSettings_Params
{
	int                                                InAnisotropy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InTextureStreamingPoolSize;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InMotionBlur;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.HideWelcomeMessage
struct UMAGameUserSettings_HideWelcomeMessage_Params
{
};

// Function MidairCE.MAGameUserSettings.GetUserFOV
struct UMAGameUserSettings_GetUserFOV_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetTeamColorWithId
struct UMAGameUserSettings_GetTeamColorWithId_Params
{
	int                                                TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetTeamColor
struct UMAGameUserSettings_GetTeamColor_Params
{
	class AMAPlayerController*                         PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetSoundClassVolume
struct UMAGameUserSettings_GetSoundClassVolume_Params
{
	class USoundClass*                                 Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetMAGameUserSettings
struct UMAGameUserSettings_GetMAGameUserSettings_Params
{
	class UMAGameUserSettings*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetFrameRateCap
struct UMAGameUserSettings_GetFrameRateCap_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetFPCMin
struct UMAGameUserSettings_GetFPCMin_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetFPCMax
struct UMAGameUserSettings_GetFPCMax_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetFOVMin
struct UMAGameUserSettings_GetFOVMin_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetFOVMax
struct UMAGameUserSettings_GetFOVMax_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetCrosshairType
struct UMAGameUserSettings_GetCrosshairType_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetCrosshairIndex
struct UMAGameUserSettings_GetCrosshairIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetCrosshairColor
struct UMAGameUserSettings_GetCrosshairColor_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetCarriedObjectTeamColor
struct UMAGameUserSettings_GetCarriedObjectTeamColor_Params
{
	int                                                TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetAllSettingsGroups
struct UMAGameUserSettings_GetAllSettingsGroups_Params
{
	int                                                AAQuality;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VFXQuality;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FoliageQuality;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PPQuality;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShadowQuality;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureQuality;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ViewDistance;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.GetAdvancedSettings
struct UMAGameUserSettings_GetAdvancedSettings_Params
{
	int                                                OutAnisotropy;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutTextureStreamingPoolSize;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutMotionBlur;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAGameUserSettings.ApplyFPCSetting
struct UMAGameUserSettings_ApplyFPCSetting_Params
{
};

// Function MidairCE.MAHandGrenade.GetMaxAmmoCountFor
struct AMAHandGrenade_GetMaxAmmoCountFor_Params
{
	class AMACharacter*                                Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.UpdateReplayTime
struct AMAHUD_UpdateReplayTime_Params
{
	float                                              PctOfReplay;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.ToggleReplayHud
struct AMAHUD_ToggleReplayHud_Params
{
	class APlayerController*                           Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.TogglePauseReplay
struct AMAHUD_TogglePauseReplay_Params
{
	class APlayerController*                           Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.ToggleInGameMenu
struct AMAHUD_ToggleInGameMenu_Params
{
	class AMAPlayerController*                         Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.StartQuickVoice
struct AMAHUD_StartQuickVoice_Params
{
};

// Function MidairCE.MAHUD.StartChat
struct AMAHUD_StartChat_Params
{
	bool                                               bTeamOnly;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.ShowMapVote
struct AMAHUD_ShowMapVote_Params
{
};

// Function MidairCE.MAHUD.ShowIffOnly
struct AMAHUD_ShowIffOnly_Params
{
};

// Function MidairCE.MAHUD.SetReplaySpeed
struct AMAHUD_SetReplaySpeed_Params
{
	float                                              Speed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.ProcessPlayerExpressionInput
struct AMAHUD_ProcessPlayerExpressionInput_Params
{
	struct FKey                                        Key;                                                       // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsAbortKey;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.IsScoreboardVisible
struct AMAHUD_IsScoreboardVisible_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.IsReplayPaused
struct AMAHUD_IsReplayPaused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.IsInGameMenuVisible
struct AMAHUD_IsInGameMenuVisible_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.GetTotalReplayTime
struct AMAHUD_GetTotalReplayTime_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.GetReplaySpeed
struct AMAHUD_GetReplaySpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.GetReplayPercent
struct AMAHUD_GetReplayPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.GetCurrentReplayTime
struct AMAHUD_GetCurrentReplayTime_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.GetCurrentCrosshairTexture
struct AMAHUD_GetCurrentCrosshairTexture_Params
{
	class UTexture*                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAHUD.BP_OnScoreApplied
struct AMAHUD_BP_OnScoreApplied_Params
{
	struct FText                                       ScoreText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.UpdateMousePropertiesForPawn
struct UMAInputSettings_UpdateMousePropertiesForPawn_Params
{
	class APawn*                                       Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.TryResolveLastConflict
struct UMAInputSettings_TryResolveLastConflict_Params
{
	MidairCE_EMappingConflictResolution                Resolution;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.TryResetKey
struct UMAInputSettings_TryResetKey_Params
{
	struct FName                                       MappingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EMappingPriority                          KeyPriority;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.TryBindKey
struct UMAInputSettings_TryBindKey_Params
{
	struct FName                                       MappingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                      NewKey;                                                    // (Parm, NativeAccessSpecifierPublic)
	MidairCE_EMappingPriority                          KeyPriority;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.SetMouseSensitivityForName
struct UMAInputSettings_SetMouseSensitivityForName_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.SetMouseInvertForName
struct UMAInputSettings_SetMouseInvertForName_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvert;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.ResetAll
struct UMAInputSettings_ResetAll_Params
{
};

// Function MidairCE.MAInputSettings.IsMappingDefault
struct UMAInputSettings_IsMappingDefault_Params
{
	struct FName                                       MappingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EMappingPriority                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.HasAnyPendingConflict
struct UMAInputSettings_HasAnyPendingConflict_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetUISensitivityScale
struct UMAInputSettings_GetUISensitivityScale_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetSpecificInputMapping
struct UMAInputSettings_GetSpecificInputMapping_Params
{
	struct FName                                       MappingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMidairInputMapping                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetSettingsNameForPawn
struct UMAInputSettings_GetSettingsNameForPawn_Params
{
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetMouseSensitivityForPawn
struct UMAInputSettings_GetMouseSensitivityForPawn_Params
{
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetMouseSensitivityForName
struct UMAInputSettings_GetMouseSensitivityForName_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetMouseInvertForPawn
struct UMAInputSettings_GetMouseInvertForPawn_Params
{
	class APawn*                                       Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetMouseInvertForName
struct UMAInputSettings_GetMouseInvertForName_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetMappingDisplayName
struct UMAInputSettings_GetMappingDisplayName_Params
{
	struct FMidairInputMapping                         Mapping;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	MidairCE_EMappingPriority                          Priority;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetMAInputSettings
struct UMAInputSettings_GetMAInputSettings_Params
{
	class UMAInputSettings*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetInputMappingNamesOrdered
struct UMAInputSettings_GetInputMappingNamesOrdered_Params
{
	TArray<struct FName>                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetInputMappingByName
struct UMAInputSettings_GetInputMappingByName_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMidairInputMapping                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetInputCategoryNamesOrdered
struct UMAInputSettings_GetInputCategoryNamesOrdered_Params
{
	TArray<struct FName>                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetInputCategoryByName
struct UMAInputSettings_GetInputCategoryByName_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMidairInputCategory                        ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetDefaultInputMappingByName
struct UMAInputSettings_GetDefaultInputMappingByName_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMidairInputMapping                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.GetActionKeyMappingDisplayName
struct UMAInputSettings_GetActionKeyMappingDisplayName_Params
{
	struct FInputActionKeyMapping                      KeyMapping;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.ClearKey
struct UMAInputSettings_ClearKey_Params
{
	struct FName                                       MappingName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EMappingPriority                          KeyPriority;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.ClearAll
struct UMAInputSettings_ClearAll_Params
{
};

// Function MidairCE.MAInputSettings.AreMappingsEqual
struct UMAInputSettings_AreMappingsEqual_Params
{
	struct FInputActionKeyMapping                      First;                                                     // (Parm, NativeAccessSpecifierPublic)
	struct FInputActionKeyMapping                      Second;                                                    // (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAInputSettings.ApplyAndSaveAll
struct UMAInputSettings_ApplyAndSaveAll_Params
{
};

// Function MidairCE.MALocalMessagesWidget.Clear
struct UMALocalMessagesWidget_Clear_Params
{
};

// Function MidairCE.MALocalMessagesWidget.BP_Clear
struct UMALocalMessagesWidget_BP_Clear_Params
{
};

// Function MidairCE.MALocalMessagesWidget.AddMessage
struct UMALocalMessagesWidget_AddMessage_Params
{
	class UClass*                                      MessageClass;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLocalMessageData                           MessageData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MALocalPlayer.AddXP
struct UMALocalPlayer_AddXP_Params
{
	int                                                XP;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.FlagReturnPainVolume.OnCarriedIntoVolume
struct AFlagReturnPainVolume_OnCarriedIntoVolume_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BodyIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPickupBackpack.UpdateVisuals
struct AMAPickupBackpack_UpdateVisuals_Params
{
};

// Function MidairCE.MAPlaybackComponent.K2_CreateAndAddEvent
struct UMAPlaybackComponent_K2_CreateAndAddEvent_Params
{
	class UClass*                                      EventClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMAPlaybackEvent*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.ToggleMenu
struct AMAPlayerControllerBase_ToggleMenu_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.SetMouseSensitivityToDefault
struct AMAPlayerControllerBase_SetMouseSensitivityToDefault_Params
{
};

// Function MidairCE.MAPlayerControllerBase.SetMouseSensitivity
struct AMAPlayerControllerBase_SetMouseSensitivity_Params
{
	float                                              Sensitivity;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.ServerUpdateUserUnlocks
struct AMAPlayerControllerBase_ServerUpdateUserUnlocks_Params
{
};

// Function MidairCE.MAPlayerControllerBase.ServerSay
struct AMAPlayerControllerBase_ServerSay_Params
{
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamOnly;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.ServerDoExpression
struct AMAPlayerControllerBase_ServerDoExpression_Params
{
	int                                                MessageType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.Say
struct AMAPlayerControllerBase_Say_Params
{
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamOnly;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.SaveGeneralSettings
struct AMAPlayerControllerBase_SaveGeneralSettings_Params
{
};

// Function MidairCE.MAPlayerControllerBase.ResetAllSteamData
struct AMAPlayerControllerBase_ResetAllSteamData_Params
{
};

// Function MidairCE.MAPlayerControllerBase.RefreshSteamInventory
struct AMAPlayerControllerBase_RefreshSteamInventory_Params
{
};

// Function MidairCE.MAPlayerControllerBase.InvertMouse
struct AMAPlayerControllerBase_InvertMouse_Params
{
	bool                                               bInvert;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.GiveXP
struct AMAPlayerControllerBase_GiveXP_Params
{
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.GetMALocalPlayer
struct AMAPlayerControllerBase_GetMALocalPlayer_Params
{
	class UMALocalPlayer*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.GetIsFinalizedPlayerInventory
struct AMAPlayerControllerBase_GetIsFinalizedPlayerInventory_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.EndQuickVoice
struct AMAPlayerControllerBase_EndQuickVoice_Params
{
};

// Function MidairCE.MAPlayerControllerBase.DoExpression
struct AMAPlayerControllerBase_DoExpression_Params
{
	int                                                MessageType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.DebugCrashGame
struct AMAPlayerControllerBase_DebugCrashGame_Params
{
};

// Function MidairCE.MAPlayerControllerBase.ClientSay
struct AMAPlayerControllerBase_ClientSay_Params
{
	class APlayerState*                                Speaker;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamOnly;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.ClientRefreshProgression
struct AMAPlayerControllerBase_ClientRefreshProgression_Params
{
};

// Function MidairCE.MAPlayerControllerBase.ClientInventoryFinalized
struct AMAPlayerControllerBase_ClientInventoryFinalized_Params
{
};

// Function MidairCE.MAPlayerControllerBase.ClientGivenXP
struct AMAPlayerControllerBase_ClientGivenXP_Params
{
	int                                                XP;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasLevelupReward;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerControllerBase.ClientDoExpression
struct AMAPlayerControllerBase_ClientDoExpression_Params
{
	class APlayerState*                                Speaker;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MessageType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.VotePunishPlayer
struct AMAPlayerController_VotePunishPlayer_Params
{
	class AMAPlayerState*                              TargetPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EPunishType                               Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.UpdateServerName
struct AMAPlayerController_UpdateServerName_Params
{
};

// Function MidairCE.MAPlayerController.UnsetPassword
struct AMAPlayerController_UnsetPassword_Params
{
};

// Function MidairCE.MAPlayerController.UnPause
struct AMAPlayerController_UnPause_Params
{
};

// Function MidairCE.MAPlayerController.ToggleScoreboard
struct AMAPlayerController_ToggleScoreboard_Params
{
};

// Function MidairCE.MAPlayerController.TogglePracticeMenu
struct AMAPlayerController_TogglePracticeMenu_Params
{
};

// Function MidairCE.MAPlayerController.SpectateJumpToLocation
struct AMAPlayerController_SpectateJumpToLocation_Params
{
	struct FString                                     LocationString;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.Spectate
struct AMAPlayerController_Spectate_Params
{
};

// Function MidairCE.MAPlayerController.ShowScoreboard
struct AMAPlayerController_ShowScoreboard_Params
{
};

// Function MidairCE.MAPlayerController.SetupDeathEffects
struct AMAPlayerController_SetupDeathEffects_Params
{
};

// Function MidairCE.MAPlayerController.SetServerName
struct AMAPlayerController_SetServerName_Params
{
	struct FString                                     ServerName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.SetPassword
struct AMAPlayerController_SetPassword_Params
{
	struct FString                                     NewPassword;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.SetEnabledPawnRelatedInput
struct AMAPlayerController_SetEnabledPawnRelatedInput_Params
{
	class AActor*                                      RequestingActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.SetAutoBalanceEnabled
struct AMAPlayerController_SetAutoBalanceEnabled_Params
{
	bool                                               bAutoBalanceEnabled;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerVotePunishPlayer
struct AMAPlayerController_ServerVotePunishPlayer_Params
{
	class AMAPlayerState*                              TargetPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MidairCE_EPunishType                               Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerVoteMakePlayerAdmin
struct AMAPlayerController_ServerVoteMakePlayerAdmin_Params
{
	unsigned char                                      PlayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerVoteEndWithNextMap
struct AMAPlayerController_ServerVoteEndWithNextMap_Params
{
	unsigned char                                      MapIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerViewRedFlag
struct AMAPlayerController_ServerViewRedFlag_Params
{
};

// Function MidairCE.MAPlayerController.ServerViewBlueFlag
struct AMAPlayerController_ServerViewBlueFlag_Params
{
};

// Function MidairCE.MAPlayerController.ServerViewAPlayerState
struct AMAPlayerController_ServerViewAPlayerState_Params
{
	class APlayerState*                                PlayerStateToView;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerUpdateRTT
struct AMAPlayerController_ServerUpdateRTT_Params
{
	float                                              RTT;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerUpdateReplicatedInputSettings
struct AMAPlayerController_ServerUpdateReplicatedInputSettings_Params
{
	struct FRepInputSettings                           RepInputSettings;                                          // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerUpdateReplicatedGeneralSettings
struct AMAPlayerController_ServerUpdateReplicatedGeneralSettings_Params
{
	struct FRepGenSettings                             RepGenSettings;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerUnsetPassword
struct AMAPlayerController_ServerUnsetPassword_Params
{
};

// Function MidairCE.MAPlayerController.ServerUnPause
struct AMAPlayerController_ServerUnPause_Params
{
};

// Function MidairCE.MAPlayerController.ServerToggleSpectateMode
struct AMAPlayerController_ServerToggleSpectateMode_Params
{
};

// Function MidairCE.MAPlayerController.ServerSuicide
struct AMAPlayerController_ServerSuicide_Params
{
};

// Function MidairCE.MAPlayerController.ServerSubmitSimpleVote
struct AMAPlayerController_ServerSubmitSimpleVote_Params
{
	MidairCE_ESimpleVote                               Vote;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerSpectate
struct AMAPlayerController_ServerSpectate_Params
{
};

// Function MidairCE.MAPlayerController.ServerSetViewTarget
struct AMAPlayerController_ServerSetViewTarget_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerSetSpectateMode
struct AMAPlayerController_ServerSetSpectateMode_Params
{
	MidairCE_ESpectateMode                             Mode;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerSetPassword
struct AMAPlayerController_ServerSetPassword_Params
{
	struct FString                                     NewPassword;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerSetLoadout
struct AMAPlayerController_ServerSetLoadout_Params
{
	struct FMALoadout                                  Loadout;                                                   // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerSetAutoBalanceEnabled
struct AMAPlayerController_ServerSetAutoBalanceEnabled_Params
{
	bool                                               bAutoBalanceEnabled;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerSelectLoadoutByClass
struct AMAPlayerController_ServerSelectLoadoutByClass_Params
{
	class UClass*                                      CharacterInfo;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerRespawnWithBasicLoadout
struct AMAPlayerController_ServerRespawnWithBasicLoadout_Params
{
};

// Function MidairCE.MAPlayerController.ServerRconOverrideNextMap
struct AMAPlayerController_ServerRconOverrideNextMap_Params
{
	struct FString                                     MapName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerRconEndMatch
struct AMAPlayerController_ServerRconEndMatch_Params
{
};

// Function MidairCE.MAPlayerController.ServerNegotiatePredictionPing
struct AMAPlayerController_ServerNegotiatePredictionPing_Params
{
	float                                              NewPredictionPing;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerMoveToSpectate
struct AMAPlayerController_ServerMoveToSpectate_Params
{
	class APlayerState*                                PlayerToMove;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerKickSelfForAfk
struct AMAPlayerController_ServerKickSelfForAfk_Params
{
};

// Function MidairCE.MAPlayerController.ServerKickPlayer
struct AMAPlayerController_ServerKickPlayer_Params
{
	class APlayerState*                                KickedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerEnableTournamentMode
struct AMAPlayerController_ServerEnableTournamentMode_Params
{
	bool                                               bIsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerEnablePracticeMode
struct AMAPlayerController_ServerEnablePracticeMode_Params
{
	bool                                               bIsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerChangePlayerTeam
struct AMAPlayerController_ServerChangePlayerTeam_Params
{
	class APlayerState*                                PlayerToMove;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerCastOptionVote
struct AMAPlayerController_ServerCastOptionVote_Params
{
	MidairCE_EMapVoteOption                            Option;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerBanPlayer
struct AMAPlayerController_ServerBanPlayer_Params
{
	class APlayerState*                                BannedPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reason;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ServerAdminLogin
struct AMAPlayerController_ServerAdminLogin_Params
{
	struct FString                                     Password;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.SendLoadoutToServer
struct AMAPlayerController_SendLoadoutToServer_Params
{
};

// Function MidairCE.MAPlayerController.SelectCurrentLoadout
struct AMAPlayerController_SelectCurrentLoadout_Params
{
	struct FMALoadout                                  Loadout;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.RecievedClearActiveRespawnDelay
struct AMAPlayerController_RecievedClearActiveRespawnDelay_Params
{
};

// Function MidairCE.MAPlayerController.RecievedActiveRespawnDelay
struct AMAPlayerController_RecievedActiveRespawnDelay_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.RconOverrideNextMap
struct AMAPlayerController_RconOverrideNextMap_Params
{
	struct FString                                     MapName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.RconEndMatch
struct AMAPlayerController_RconEndMatch_Params
{
};

// Function MidairCE.MAPlayerController.Predict
struct AMAPlayerController_Predict_Params
{
	float                                              NewPredictionPing;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.PlayRecordedInput
struct AMAPlayerController_PlayRecordedInput_Params
{
	MidairCE_EPlayerRecordableInputTypes               InputType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.PlayRecordedCameraInput
struct AMAPlayerController_PlayRecordedCameraInput_Params
{
	float                                              Pitch;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.PickedupPowerup
struct AMAPlayerController_PickedupPowerup_Params
{
	float                                              PowerupLength;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PowerupName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.OnRep_ServerDisablePawnRelatedInputRequests
struct AMAPlayerController_OnRep_ServerDisablePawnRelatedInputRequests_Params
{
};

// Function MidairCE.MAPlayerController.OnRep_PlayerLoadout
struct AMAPlayerController_OnRep_PlayerLoadout_Params
{
};

// Function MidairCE.MAPlayerController.OnRep_DemoMessage
struct AMAPlayerController_OnRep_DemoMessage_Params
{
};

// Function MidairCE.MAPlayerController.LoadTeamAvatars
struct AMAPlayerController_LoadTeamAvatars_Params
{
	struct FString                                     PathFromContentFolder;                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AssetClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LoadFromSubfolders;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.IsPawnRelatedInputEnabled
struct AMAPlayerController_IsPawnRelatedInputEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.HideScoreboard
struct AMAPlayerController_HideScoreboard_Params
{
};

// Function MidairCE.MAPlayerController.HandleMenu
struct AMAPlayerController_HandleMenu_Params
{
};

// Function MidairCE.MAPlayerController.GetTimeDead
struct AMAPlayerController_GetTimeDead_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.GetLastControlledCharacter
struct AMAPlayerController_GetLastControlledCharacter_Params
{
	class AMACharacter*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.GetEffectiveControlRotation
struct AMAPlayerController_GetEffectiveControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.GetCurrentXPPool
struct AMAPlayerController_GetCurrentXPPool_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.GetControlledCharacter
struct AMAPlayerController_GetControlledCharacter_Params
{
	class AMACharacter*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.GetCharacterVitals
struct AMAPlayerController_GetCharacterVitals_Params
{
	class UMAVitalsComponent*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.GetActiveRespawnDelay
struct AMAPlayerController_GetActiveRespawnDelay_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.FinishPlayerAdminVote
struct AMAPlayerController_FinishPlayerAdminVote_Params
{
};

// Function MidairCE.MAPlayerController.FinishEndMatchVote
struct AMAPlayerController_FinishEndMatchVote_Params
{
};

// Function MidairCE.MAPlayerController.FindRelevantCharacter
struct AMAPlayerController_FindRelevantCharacter_Params
{
	class AMACharacter*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.FindMostRelevantPawn
struct AMAPlayerController_FindMostRelevantPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.EnterTemporarySpectate
struct AMAPlayerController_EnterTemporarySpectate_Params
{
};

// Function MidairCE.MAPlayerController.EnableTournamentMode
struct AMAPlayerController_EnableTournamentMode_Params
{
	bool                                               bIsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.EnablePracticeMode
struct AMAPlayerController_EnablePracticeMode_Params
{
	bool                                               bIsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ClientUnPause
struct AMAPlayerController_ClientUnPause_Params
{
};

// Function MidairCE.MAPlayerController.ClientSetDeathTime
struct AMAPlayerController_ClientSetDeathTime_Params
{
};

// Function MidairCE.MAPlayerController.ClientReceiveDeathMessage
struct AMAPlayerController_ClientReceiveDeathMessage_Params
{
	struct FDeathMessageData                           DeathMessageData;                                          // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ClientPlayerKicked
struct AMAPlayerController_ClientPlayerKicked_Params
{
	struct FString                                     KickReason;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeRemaining;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ClientNotifyMapChange
struct AMAPlayerController_ClientNotifyMapChange_Params
{
	struct FString                                     MapName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ClearDeathEffects
struct AMAPlayerController_ClearDeathEffects_Params
{
};

// Function MidairCE.MAPlayerController.ChangeTeam
struct AMAPlayerController_ChangeTeam_Params
{
	unsigned char                                      DesiredTeamId;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ChangeScoreboard
struct AMAPlayerController_ChangeScoreboard_Params
{
	bool                                               bShow;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.ChangeMap
struct AMAPlayerController_ChangeMap_Params
{
	struct FString                                     MapName;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.BeginPlayerAdminVote
struct AMAPlayerController_BeginPlayerAdminVote_Params
{
	unsigned char                                      PlayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.BeginEndMatchVote
struct AMAPlayerController_BeginEndMatchVote_Params
{
	unsigned char                                      MapIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPlayerController.AdminLogin
struct AMAPlayerController_AdminLogin_Params
{
	struct FString                                     Password;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPowerup.Tick
struct AMAPowerup_Tick_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPowerup.CapsuleTouched
struct AMAPowerup_CapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPowerup.AssistCapsuleTouched
struct AMAPowerup_AssistCapsuleTouched_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPowerupBase.ObjectChanged
struct AMAPowerupBase_ObjectChanged_Params
{
};

// Function MidairCE.MAPracticeComponent.StartSelectedDrill
struct UMAPracticeComponent_StartSelectedDrill_Params
{
};

// Function MidairCE.MAPracticeComponent.SpawnPlayerTrail
struct UMAPracticeComponent_SpawnPlayerTrail_Params
{
	struct FMARouteTrail                               RouteTrail;                                                // (Parm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.SpawnBotToRunSelectedRoute
struct UMAPracticeComponent_SpawnBotToRunSelectedRoute_Params
{
	bool                                               bBotCanBeDamaged;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBotAlwaysFollowPath;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.SpawnBotToRunRoute
struct UMAPracticeComponent_SpawnBotToRunRoute_Params
{
	struct FMARouteTrail                               RouteTrail;                                                // (Parm, NativeAccessSpecifierPublic)
	int                                                RouteMarkerIndexToStartAt;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBotCanBeDamaged;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBotAlwaysFollowPath;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.SetSelectedRouteTrailName
struct UMAPracticeComponent_SetSelectedRouteTrailName_Params
{
	struct FString                                     RouteTrailName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.SetSelectedRouteTrailDescription
struct UMAPracticeComponent_SetSelectedRouteTrailDescription_Params
{
	struct FString                                     RouteTrailDescription;                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.SetSelectedDrillName
struct UMAPracticeComponent_SetSelectedDrillName_Params
{
	struct FString                                     DrillName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.SetSelectedDrillDescription
struct UMAPracticeComponent_SetSelectedDrillDescription_Params
{
	struct FString                                     DrillDescription;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.SetSavedPositionAsDrillStart
struct UMAPracticeComponent_SetSavedPositionAsDrillStart_Params
{
};

// Function MidairCE.MAPracticeComponent.SetRouteTrailBPClass
struct UMAPracticeComponent_SetRouteTrailBPClass_Params
{
	class UClass*                                      PlayerTrailMarkerClass;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.ServerStoreRouteData
struct UMAPracticeComponent_ServerStoreRouteData_Params
{
	struct FMARouteTrail                               RouteTrail;                                                // (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                PlayerId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.ServerSpawnBotToRunSelectedRoute
struct UMAPracticeComponent_ServerSpawnBotToRunSelectedRoute_Params
{
	int                                                RequestingPlayerId;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RouteTrailName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartMarkerIndex;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBotCanBeDamaged;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBotAlwaysFollowPath;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.ServerResetFlags
struct UMAPracticeComponent_ServerResetFlags_Params
{
};

// Function MidairCE.MAPracticeComponent.ServerLoadPosition
struct UMAPracticeComponent_ServerLoadPosition_Params
{
	struct FPlayerLocationAndState                     pls;                                                       // (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               SilentLoad;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.SaveSelectedDrill
struct UMAPracticeComponent_SaveSelectedDrill_Params
{
};

// Function MidairCE.MAPracticeComponent.SavePosition
struct UMAPracticeComponent_SavePosition_Params
{
};

// Function MidairCE.MAPracticeComponent.SaveLatestRouteTrail
struct UMAPracticeComponent_SaveLatestRouteTrail_Params
{
	struct FString                                     RouteTrailName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RouteDescription;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.SaveAllRouteTrailsToFile
struct UMAPracticeComponent_SaveAllRouteTrailsToFile_Params
{
};

// Function MidairCE.MAPracticeComponent.RouteTrailMarkerTouched
struct UMAPracticeComponent_RouteTrailMarkerTouched_Params
{
	class AMAPlayerTrailMarker*                        Trail;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.ResetFlags
struct UMAPracticeComponent_ResetFlags_Params
{
};

// Function MidairCE.MAPracticeComponent.ResetCurrentSelectedRouteTrail
struct UMAPracticeComponent_ResetCurrentSelectedRouteTrail_Params
{
};

// Function MidairCE.MAPracticeComponent.RemoveRouteFromDrill
struct UMAPracticeComponent_RemoveRouteFromDrill_Params
{
	struct FString                                     RouteName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.OnFlagReturned
struct UMAPracticeComponent_OnFlagReturned_Params
{
	bool                                               bIsFlagInAir;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.MovePawnOnRoutePath
struct UMAPracticeComponent_MovePawnOnRoutePath_Params
{
};

// Function MidairCE.MAPracticeComponent.LoadRouteTrailsFromFile
struct UMAPracticeComponent_LoadRouteTrailsFromFile_Params
{
};

// Function MidairCE.MAPracticeComponent.LoadRouteTrailPosition
struct UMAPracticeComponent_LoadRouteTrailPosition_Params
{
	int                                                MarkerNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.LoadRouteTrailByName
struct UMAPracticeComponent_LoadRouteTrailByName_Params
{
	struct FString                                     RouteTrailName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.LoadPosition
struct UMAPracticeComponent_LoadPosition_Params
{
};

// Function MidairCE.MAPracticeComponent.LoadMarkerPosition
struct UMAPracticeComponent_LoadMarkerPosition_Params
{
};

// Function MidairCE.MAPracticeComponent.LoadDrillByName
struct UMAPracticeComponent_LoadDrillByName_Params
{
	struct FString                                     DrillName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.IsPracticeModeCommandEnabled
struct UMAPracticeComponent_IsPracticeModeCommandEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.IsKeyReplayActive
struct UMAPracticeComponent_IsKeyReplayActive_Params
{
	MidairCE_EPlayerRecordableInputTypes               InputType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.IncreaseMarkerPosition
struct UMAPracticeComponent_IncreaseMarkerPosition_Params
{
};

// Function MidairCE.MAPracticeComponent.GoToRouteTrailStart
struct UMAPracticeComponent_GoToRouteTrailStart_Params
{
};

// Function MidairCE.MAPracticeComponent.GoToRouteTrailGrab
struct UMAPracticeComponent_GoToRouteTrailGrab_Params
{
};

// Function MidairCE.MAPracticeComponent.GetTeamID
struct UMAPracticeComponent_GetTeamID_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.GetRouteTrailNames
struct UMAPracticeComponent_GetRouteTrailNames_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.GetRoutesInDrill
struct UMAPracticeComponent_GetRoutesInDrill_Params
{
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.GetPracticeMenuText
struct UMAPracticeComponent_GetPracticeMenuText_Params
{
	MidairCE_EPracticeMenuDataTypes                    DataType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.GetLowPrecisionRouteTrail
struct UMAPracticeComponent_GetLowPrecisionRouteTrail_Params
{
	struct FMARouteTrail                               RouteTrail;                                                // (Parm, NativeAccessSpecifierPublic)
	struct FMARouteTrail                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.GetLoadedRouteTrails
struct UMAPracticeComponent_GetLoadedRouteTrails_Params
{
	TArray<struct FMARouteTrail>                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.GetLoadedDrills
struct UMAPracticeComponent_GetLoadedDrills_Params
{
	TArray<struct FMADrill>                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.GetControlledCharacter
struct UMAPracticeComponent_GetControlledCharacter_Params
{
	class AMACharacter*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.GetAvailableRoutesForDrill
struct UMAPracticeComponent_GetAvailableRoutesForDrill_Params
{
	TArray<struct FString>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.EndCurrentDrillByTimeout
struct UMAPracticeComponent_EndCurrentDrillByTimeout_Params
{
};

// Function MidairCE.MAPracticeComponent.DeletePlayerTrail
struct UMAPracticeComponent_DeletePlayerTrail_Params
{
	struct FString                                     RouteTrailName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.DeleteDrillByName
struct UMAPracticeComponent_DeleteDrillByName_Params
{
	struct FString                                     DrillName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.DecreaseMarkerPosition
struct UMAPracticeComponent_DecreaseMarkerPosition_Params
{
};

// Function MidairCE.MAPracticeComponent.ClearDrillResultMessage
struct UMAPracticeComponent_ClearDrillResultMessage_Params
{
};

// Function MidairCE.MAPracticeComponent.ClearDisplayedRouteTrail
struct UMAPracticeComponent_ClearDisplayedRouteTrail_Params
{
};

// Function MidairCE.MAPracticeComponent.ChangeRouteTrailCollisionDifficulty
struct UMAPracticeComponent_ChangeRouteTrailCollisionDifficulty_Params
{
	MidairCE_EPracticeRouteTrailHitDifficulty          HitDifficulty;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAPracticeComponent.AddRouteToDrill
struct UMAPracticeComponent_AddRouteToDrill_Params
{
	struct FString                                     RouteName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.StagedMissileMovement.StartNewStage
struct UStagedMissileMovement_StartNewStage_Params
{
	float                                              InStageLength;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MatchMakingStatusWidget.ReleaseOwnership
struct UMatchMakingStatusWidget_ReleaseOwnership_Params
{
	class UWidget*                                     CurrentOwner;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MatchMakingStatusWidget.ClaimOwnership
struct UMatchMakingStatusWidget_ClaimOwnership_Params
{
	class UWidget*                                     NewOwner;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamInterface.GetTeamID
struct UMATeamInterface_GetTeamID_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamState.RemoveFromTeam
struct AMATeamState_RemoveFromTeam_Params
{
	class AMAPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamState.NetMulticast_SetWeaponLimited
struct AMATeamState_NetMulticast_SetWeaponLimited_Params
{
	class UClass*                                      Weapon;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLimited;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamState.IsWeaponRestricted
struct AMATeamState_IsWeaponRestricted_Params
{
	class UClass*                                      Weapon;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamState.GetObjectCount
struct AMATeamState_GetObjectCount_Params
{
	class UClass*                                      ObjectType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamState.GetNumPlayers
struct AMATeamState_GetNumPlayers_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamState.FilterRestrictedItems
struct AMATeamState_FilterRestrictedItems_Params
{
	TArray<class UClass*>                              InItems;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              OutItems;                                                  // (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamState.CheckAndHandleSpawnWeapon
struct AMATeamState_CheckAndHandleSpawnWeapon_Params
{
	class UClass*                                      Weapon;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamState.CanSpawnWeapon
struct AMATeamState_CanSpawnWeapon_Params
{
	class UClass*                                      Weapon;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamState.AdjustScore
struct AMATeamState_AdjustScore_Params
{
	int                                                ScoreAdjustment;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamState.AdjustLives
struct AMATeamState_AdjustLives_Params
{
	int                                                ScoreAdjustment;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamState.AdjustJackpot
struct AMATeamState_AdjustJackpot_Params
{
	int                                                ScoreAdjustment;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATeamState.AddToTeam
struct AMATeamState_AddToTeam_Params
{
	class AMAPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATRFlag.OnStop
struct AMATRFlag_OnStop_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATRFlag.OnBounce
struct AMATRFlag_OnBounce_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactVelocity;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATRGameState.GetIsFlagHolder
struct AMATRGameState_GetIsFlagHolder_Params
{
	class AMAPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATRGameState.GetFlagStateName
struct AMATRGameState_GetFlagStateName_Params
{
	unsigned char                                      TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MATRGameState.GetFlagBase
struct AMATRGameState_GetFlagBase_Params
{
	unsigned char                                      TeamId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMATRFlagBase*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAVitalsComponent.TookDamage
struct UMAVitalsComponent_TookDamage_Params
{
};

// Function MidairCE.MAVitalsComponent.TakeDamage
struct UMAVitalsComponent_TakeDamage_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageEvent                                DamageEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AController*                                 EventInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAVitalsComponent.ShieldStatusChanged
struct UMAVitalsComponent_ShieldStatusChanged_Params
{
};

// Function MidairCE.MAVitalsComponent.SetHitFlashMeshes
struct UMAVitalsComponent_SetHitFlashMeshes_Params
{
	TArray<class UMeshComponent*>                      Meshes;                                                    // (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAVitalsComponent.RepairHealth
struct UMAVitalsComponent_RepairHealth_Params
{
	float                                              RequestedAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAVitalsComponent.Repair
struct UMAVitalsComponent_Repair_Params
{
	float                                              EnergyUsed;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAVitalsComponent.OnRep_IsDead
struct UMAVitalsComponent_OnRep_IsDead_Params
{
};

// Function MidairCE.MAVitalsComponent.OnRep_Health
struct UMAVitalsComponent_OnRep_Health_Params
{
};

// Function MidairCE.MAVitalsComponent.IsDead
struct UMAVitalsComponent_IsDead_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAVitalsComponent.HasLowHealth
struct UMAVitalsComponent_HasLowHealth_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAVitalsComponent.HasFullHealth
struct UMAVitalsComponent_HasFullHealth_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAVitalsComponent.GetHealthPct
struct UMAVitalsComponent_GetHealthPct_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAVitalsComponent.GetEnergyPct
struct UMAVitalsComponent_GetEnergyPct_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAVitalsComponent.ConsumeEnergy
struct UMAVitalsComponent_ConsumeEnergy_Params
{
	float                                              RequestedAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnPct;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAVitalsComponent.ClientDisableEnergyRegen
struct UMAVitalsComponent_ClientDisableEnergyRegen_Params
{
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAVitalsComponent.CanBeRepaired
struct UMAVitalsComponent_CanBeRepaired_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeaponAttachment.SetOverrideMaterials
struct AMAWeaponAttachment_SetOverrideMaterials_Params
{
	class UMaterialInterface*                          NewMaterial3P;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          NewMaterial1P;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeaponAttachment.SetChargeIndicator
struct AMAWeaponAttachment_SetChargeIndicator_Params
{
	float                                              Intensity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeaponAttachment.OnCharacterGrabAmmo
struct AMAWeaponAttachment_OnCharacterGrabAmmo_Params
{
	bool                                               bInFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeaponAttachment.OnCharacterAttachAmmo
struct AMAWeaponAttachment_OnCharacterAttachAmmo_Params
{
	bool                                               bInFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeaponAttachment.K2_UpdateForClientPerspective
struct AMAWeaponAttachment_K2_UpdateForClientPerspective_Params
{
	bool                                               bInFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeaponAttachment.GetHeat
struct AMAWeaponAttachment_GetHeat_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.MAWeaponAttachment.DetachFirstAmmoActor
struct AMAWeaponAttachment_DetachFirstAmmoActor_Params
{
	bool                                               bInFirstPerson;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ObjectInfo.GetObjectInfoFromClass
struct UObjectInfo_GetObjectInfoFromClass_Params
{
	class UClass*                                      InObjectClass;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectInfo*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ObjectInfo.GetObjectInfo
struct UObjectInfo_GetObjectInfo_Params
{
	class UObject*                                     InObject;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectInfo*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ObjectInfo.GetActionText
struct UObjectInfo_GetActionText_Params
{
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.ObjectInfo.FilterObjectInfoArray
struct UObjectInfo_FilterObjectInfoArray_Params
{
	TArray<class UClass*>                              Base;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              AppliedFilter;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              outResult;                                                 // (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bReturnInBoth;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ObjectInfo.ConvertObjectArrayToItemArray
struct UObjectInfo_ConvertObjectArrayToItemArray_Params
{
	TArray<class UClass*>                              Objects;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              OutItems;                                                  // (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.WeaponInfo.GetStats
struct UWeaponInfo_GetStats_Params
{
	struct FWeaponStatDetails                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.AugmentInfo.CanBeUsedWith
struct UAugmentInfo_CanBeUsedWith_Params
{
	class UAugmentInfo*                                AugmentInfo;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.BackpackInfo.GetAvailableSecondaryAugments
struct UBackpackInfo_GetAvailableSecondaryAugments_Params
{
	TArray<class UClass*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.BackpackInfo.GetAvailablePrimaryAugments
struct UBackpackInfo_GetAvailablePrimaryAugments_Params
{
	TArray<class UClass*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.CharacterInfo.IsWeaponAvailable
struct UCharacterInfo_IsWeaponAvailable_Params
{
	class UClass*                                      Weapon;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.CharacterInfo.IsVoiceSetAvailable
struct UCharacterInfo_IsVoiceSetAvailable_Params
{
	class UClass*                                      VoiceSet;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.CharacterInfo.IsThrowableAvailable
struct UCharacterInfo_IsThrowableAvailable_Params
{
	class UClass*                                      Throwable;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.CharacterInfo.IsAugmentAvailable
struct UCharacterInfo_IsAugmentAvailable_Params
{
	class UClass*                                      Augment;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.CharacterInfo.GetUnavailableAugments
struct UCharacterInfo_GetUnavailableAugments_Params
{
	TArray<class UClass*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.CharacterInfo.GetStats
struct UCharacterInfo_GetStats_Params
{
	struct FCharacterStatDetails                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.CharacterInfo.GetAvailableWeapons
struct UCharacterInfo_GetAvailableWeapons_Params
{
	TArray<class UClass*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.CharacterInfo.GetAvailableVoiceSets
struct UCharacterInfo_GetAvailableVoiceSets_Params
{
	TArray<class UClass*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.CharacterInfo.GetAvailableThrowables
struct UCharacterInfo_GetAvailableThrowables_Params
{
	TArray<class UClass*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.CharacterInfo.GetAvailableDeployables
struct UCharacterInfo_GetAvailableDeployables_Params
{
	TArray<class UClass*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.CharacterInfo.GetAvailableBackpacks
struct UCharacterInfo_GetAvailableBackpacks_Params
{
	TArray<class UClass*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.ObjectivePrompt.UpdateExistingPrompt
struct UObjectivePrompt_UpdateExistingPrompt_Params
{
	struct FMidairObjectiveInfo                        DeltaObjectiveInfo;                                        // (Parm, OutParm, NativeAccessSpecifierPublic)
	MidairCE_EObjectiveUpdateType                      UpdateType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWantsUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ObjectivePrompt.SetPrompt
struct UObjectivePrompt_SetPrompt_Params
{
	struct FMidairObjectiveInfo                        NewObjectiveInfo;                                          // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.ObjectivePrompt.OnPromptChanged
struct UObjectivePrompt_OnPromptChanged_Params
{
};

// Function MidairCE.ObjectivePrompt.OnObjectiveCompleted
struct UObjectivePrompt_OnObjectiveCompleted_Params
{
};

// Function MidairCE.ObjectivePrompt.ClearPrompt
struct UObjectivePrompt_ClearPrompt_Params
{
	bool                                               bCompleted;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ObjectiveVolume.OnOverlap
struct AObjectiveVolume_OnOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BodyIndexbool;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.ObjectiveVolume.EndOverlap
struct AObjectiveVolume_EndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ObjectLauncher.OnSpawnedActorDeath
struct AObjectLauncher_OnSpawnedActorDeath_Params
{
};

// Function MidairCE.ObjectLauncher.LaunchActor
struct AObjectLauncher_LaunchActor_Params
{
};

// Function MidairCE.ObjectLauncher_Spline.SpawnActorToLaunch
struct AObjectLauncher_Spline_SpawnActorToLaunch_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ParticleConfiguration.SetParticlesOnComponent
struct AParticleConfiguration_SetParticlesOnComponent_Params
{
	class UParticleSystemComponent*                    Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ParticleConfiguration.SetParticlesOnActor
struct AParticleConfiguration_SetParticlesOnActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.SetLastSelectedIndex
struct UPlayerLoadoutsSave_SetLastSelectedIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.SaveChanges
struct UPlayerLoadoutsSave_SaveChanges_Params
{
};

// Function MidairCE.PlayerLoadoutsSave.RestoreDefaultLoadoutsForGame
struct UPlayerLoadoutsSave_RestoreDefaultLoadoutsForGame_Params
{
};

// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Weapon
struct UPlayerLoadoutsSave_ModifySelectedLoadout_Weapon_Params
{
	int                                                IndexAt;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DesiredWeapon;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DesiredSkin;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoCheck;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_VoiceSet
struct UPlayerLoadoutsSave_ModifySelectedLoadout_VoiceSet_Params
{
	class UClass*                                      DesiredVoiceSet;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Throwable
struct UPlayerLoadoutsSave_ModifySelectedLoadout_Throwable_Params
{
	int                                                IndexAt;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DesiredThrowable;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoCheck;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Pack
struct UPlayerLoadoutsSave_ModifySelectedLoadout_Pack_Params
{
	class UClass*                                      DesiredBackpack;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoCheck;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_ObjectSkin
struct UPlayerLoadoutsSave_ModifySelectedLoadout_ObjectSkin_Params
{
	class UClass*                                      ObjectInfoClass;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DesiredSkin;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Name
struct UPlayerLoadoutsSave_ModifySelectedLoadout_Name_Params
{
	struct FString                                     DesiredName;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Character
struct UPlayerLoadoutsSave_ModifySelectedLoadout_Character_Params
{
	class UClass*                                      DesiredCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoCheck;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.ModifyNamedCosmeticSelection
struct UPlayerLoadoutsSave_ModifyNamedCosmeticSelection_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Cosmetic;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetVoiceIdent
struct UPlayerLoadoutsSave_GetVoiceIdent_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetSprayIdent
struct UPlayerLoadoutsSave_GetSprayIdent_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetNamedCosmeticSelection
struct UPlayerLoadoutsSave_GetNamedCosmeticSelection_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetLoadoutWeapons
struct UPlayerLoadoutsSave_GetLoadoutWeapons_Params
{
	TArray<class UClass*>                              OutWeapons;                                                // (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetLoadoutThrowables
struct UPlayerLoadoutsSave_GetLoadoutThrowables_Params
{
	TArray<class UClass*>                              OutThrowables;                                             // (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetLoadoutsForGamemode
struct UPlayerLoadoutsSave_GetLoadoutsForGamemode_Params
{
	TArray<struct FMALoadout>                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetLoadoutIndex
struct UPlayerLoadoutsSave_GetLoadoutIndex_Params
{
	struct FMALoadout                                  Loadout;                                                   // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetLoadoutCharacterInfo
struct UPlayerLoadoutsSave_GetLoadoutCharacterInfo_Params
{
	class UCharacterInfo*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetLoadoutCharacter
struct UPlayerLoadoutsSave_GetLoadoutCharacter_Params
{
	class UClass*                                      OutCharacter;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetLoadoutBackpackInfo
struct UPlayerLoadoutsSave_GetLoadoutBackpackInfo_Params
{
	class UBackpackInfo*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetLoadoutBackpack
struct UPlayerLoadoutsSave_GetLoadoutBackpack_Params
{
	class UClass*                                      OutBackpack;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetLastSelectedLoadout
struct UPlayerLoadoutsSave_GetLastSelectedLoadout_Params
{
	struct FMALoadout                                  outLoadout;                                                // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetLastSelectedIndex
struct UPlayerLoadoutsSave_GetLastSelectedIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetGlobalLoadoutsSave
struct UPlayerLoadoutsSave_GetGlobalLoadoutsSave_Params
{
	bool                                               bForceNew;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerLoadoutsSave*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.GetCustomLoadoutsSave
struct UPlayerLoadoutsSave_GetCustomLoadoutsSave_Params
{
	bool                                               bForceNew;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerLoadoutsSave*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.CheckWeaponForLoadout
struct UPlayerLoadoutsSave_CheckWeaponForLoadout_Params
{
	int                                                IndexAt;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DesiredWeapon;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMALoadout                                  UseLoadout;                                                // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.CheckWeaponForCurrentLoadout
struct UPlayerLoadoutsSave_CheckWeaponForCurrentLoadout_Params
{
	int                                                IndexAt;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DesiredWeapon;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.CheckThrowableForLoadout
struct UPlayerLoadoutsSave_CheckThrowableForLoadout_Params
{
	int                                                IndexAt;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DesiredThrowable;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMALoadout                                  UseLoadout;                                                // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.CheckThrowableForCurrentLoadout
struct UPlayerLoadoutsSave_CheckThrowableForCurrentLoadout_Params
{
	int                                                IndexAt;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DesiredThrowable;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.CheckPackForLoadout
struct UPlayerLoadoutsSave_CheckPackForLoadout_Params
{
	class UClass*                                      DesiredBackpack;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMALoadout                                  UseLoadout;                                                // (Parm, NativeAccessSpecifierPublic)
	class UClass*                                      OverrideComparisonCharacter;                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.CheckPackForCurrentLoadout
struct UPlayerLoadoutsSave_CheckPackForCurrentLoadout_Params
{
	class UClass*                                      DesiredBackpack;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      OverrideComparisonCharacter;                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.CheckLoadoutNameUnique
struct UPlayerLoadoutsSave_CheckLoadoutNameUnique_Params
{
	struct FString                                     DesiredName;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.CheckCharacterForLoadout
struct UPlayerLoadoutsSave_CheckCharacterForLoadout_Params
{
	class UClass*                                      DesiredCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMALoadout                                  UseLoadout;                                                // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.CheckCharacterForCurrentLoadout
struct UPlayerLoadoutsSave_CheckCharacterForCurrentLoadout_Params
{
	class UClass*                                      DesiredCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.PlayerLoadoutsSave.ChangeSelectedLoadout
struct UPlayerLoadoutsSave_ChangeSelectedLoadout_Params
{
	struct FMALoadout                                  Loadout;                                                   // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.TutorialDialougeManager.TryAddSound
struct UTutorialDialougeManager_TryAddSound_Params
{
	struct FTutorialDialougeDetails                    NewSound;                                                  // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.TutorialDialougeManager.StartNewDialouge
struct UTutorialDialougeManager_StartNewDialouge_Params
{
};

// Function MidairCE.TutorialDialougeManager.NewDialougeManager
struct UTutorialDialougeManager_NewDialougeManager_Params
{
	class UObject*                                     Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTutorialDialougeManager*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.TutorialDialougeManager.DialougeFinished
struct UTutorialDialougeManager_DialougeFinished_Params
{
};

// Function MidairCE.TutorialDialougeManager.ClearAndStopAllSounds
struct UTutorialDialougeManager_ClearAndStopAllSounds_Params
{
};

// Function MidairCE.PRGameMode.OnTriggerEndLesson
struct APRGameMode_OnTriggerEndLesson_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PRGameMode.OnTriggerBeginLesson
struct APRGameMode_OnTriggerBeginLesson_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PRGameMode.GetCurrentLessonTag
struct APRGameMode_GetCurrentLessonTag_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PRGameMode.GetCurrentLesson
struct APRGameMode_GetCurrentLesson_Params
{
	struct FPracticeLessonDetails                      ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.PRGameMode.AdvanceTrackingToLesson
struct APRGameMode_AdvanceTrackingToLesson_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.PRGameMode.AdvanceToNextLesson
struct APRGameMode_AdvanceToNextLesson_Params
{
};

// Function MidairCE.SensorNetworkComponent.SetSensorChannel
struct USensorNetworkComponent_SetSensorChannel_Params
{
	unsigned char                                      NewChannel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SensorNetworkComponent.Reactivate
struct USensorNetworkComponent_Reactivate_Params
{
};

// Function MidairCE.SensorNetworkComponent.HasDetectedTarget
struct USensorNetworkComponent_HasDetectedTarget_Params
{
	class UTargetComponent*                            TargetComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SensorNetworkComponent.GetSensorChannel
struct USensorNetworkComponent_GetSensorChannel_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ServiceBlueprintLibrary.TeamUpdate
struct UServiceBlueprintLibrary_TeamUpdate_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TeamId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TeamName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TeamTags;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Avatar;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ServiceBlueprintLibrary.TeamRespondToInvite
struct UServiceBlueprintLibrary_TeamRespondToInvite_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InviteId;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Response;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InviteIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ServiceBlueprintLibrary.TeamRemoveOrLeave
struct UServiceBlueprintLibrary_TeamRemoveOrLeave_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMATeam                                     Team;                                                      // (Parm, NativeAccessSpecifierPublic)
	struct FString                                     SteamId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ServiceBlueprintLibrary.TeamInvitePlayer
struct UServiceBlueprintLibrary_TeamInvitePlayer_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SteamId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ServiceBlueprintLibrary.TeamDisband
struct UServiceBlueprintLibrary_TeamDisband_Params
{
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMATeam                                     Team;                                                      // (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ServiceBlueprintLibrary.TeamCreate
struct UServiceBlueprintLibrary_TeamCreate_Params
{
	class APlayerController*                           NewPlayer;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TeamName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TeamTags;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ServiceBlueprintLibrary.IsSameDemoVersion
struct UServiceBlueprintLibrary_IsSameDemoVersion_Params
{
	struct FString                                     DemoVersion;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ServiceBlueprintLibrary.IsDownloadedDemo
struct UServiceBlueprintLibrary_IsDownloadedDemo_Params
{
	struct FString                                     DemoId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ServiceBlueprintLibrary.GetDemoProgress
struct UServiceBlueprintLibrary_GetDemoProgress_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.ServiceBlueprintLibrary.CancelGetDemo
struct UServiceBlueprintLibrary_CancelGetDemo_Params
{
};

// Function MidairCE.SetUserBanStatusAsyncTask.BanUser
struct USetUserBanStatusAsyncTask_BanUser_Params
{
	class APlayerState*                                PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBanned;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USetUserBanStatusAsyncTask*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SteamMatchMakingBlueprintLibrary.StopMatchMaking
struct USteamMatchMakingBlueprintLibrary_StopMatchMaking_Params
{
};

// Function MidairCE.SteamMatchMakingBlueprintLibrary.StartMatchMaking
struct USteamMatchMakingBlueprintLibrary_StartMatchMaking_Params
{
	TArray<TEnumAsByte<MidairCE_EMAMatchType>>         MatchType;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               WaitingWarmupServer;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IncludeNonOfficialServer;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SteamMatchMakingBlueprintLibrary.IsValidLobby
struct USteamMatchMakingBlueprintLibrary_IsValidLobby_Params
{
	TEnumAsByte<MidairCE_EMAMatchType>                 MatchType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SteamMatchMakingBlueprintLibrary.IsLobbyOwner
struct USteamMatchMakingBlueprintLibrary_IsLobbyOwner_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SteamMatchMakingBlueprintLibrary.GetNumLobbyMembers
struct USteamMatchMakingBlueprintLibrary_GetNumLobbyMembers_Params
{
	TEnumAsByte<MidairCE_EMAMatchType>                 MatchType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SteamMatchMakingBlueprintLibrary.GetMyPlayerInfo
struct USteamMatchMakingBlueprintLibrary_GetMyPlayerInfo_Params
{
	struct FPlayerInfo                                 PlayerInfo;                                                // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SteamMatchMakingBlueprintLibrary.GetMatchMakingTime
struct USteamMatchMakingBlueprintLibrary_GetMatchMakingTime_Params
{
	struct FTimespan                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SteamMatchMakingBlueprintLibrary.GetLobbyStatus
struct USteamMatchMakingBlueprintLibrary_GetLobbyStatus_Params
{
	TEnumAsByte<MidairCE_EMAMatchLobbyStatus>          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SteamMatchMakingBlueprintLibrary.GetLobbyPlayers
struct USteamMatchMakingBlueprintLibrary_GetLobbyPlayers_Params
{
	TEnumAsByte<MidairCE_EMAMatchType>                 MatchType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerInfo>                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function MidairCE.SteamMatchMakingBlueprintLibrary.GetLobbyGameCreated
struct USteamMatchMakingBlueprintLibrary_GetLobbyGameCreated_Params
{
	struct FLobbyGameCreated                           LobbyGameCreated;                                          // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SteamMatchMakingBlueprintLibrary.EventTick
struct USteamMatchMakingBlueprintLibrary_EventTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SteamMatchMakingBlueprintLibrary.Equal
struct USteamMatchMakingBlueprintLibrary_Equal_Params
{
	struct FUniqueNetIdRepl                            UniqueId1;                                                 // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                            UniqueId2;                                                 // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.SubmitUserReportAsyncTask.SubmitUserReport
struct USubmitUserReportAsyncTask_SubmitUserReport_Params
{
	struct FString                                     SteamId;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Summary;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reproduce;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Severity;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USubmitUserReportAsyncTask*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.TargetComponent.StopAllTargetting
struct UTargetComponent_StopAllTargetting_Params
{
};

// Function MidairCE.TargetComponent.SetSensorResolutionStrengthTime
struct UTargetComponent_SetSensorResolutionStrengthTime_Params
{
	MidairCE_ESensorResolutionStrength                 Strength;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.TargetComponent.PushSensorModifiers
struct UTargetComponent_PushSensorModifiers_Params
{
	struct FSensorTargetModifiers                      Modifiers;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.TargetComponent.PopSensorModifiers
struct UTargetComponent_PopSensorModifiers_Params
{
	struct FSensorTargetModifiers                      Modifiers;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MidairCE.TargetComponent.IsDetectedByChannel
struct UTargetComponent_IsDetectedByChannel_Params
{
	unsigned char                                      InChannel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.TargetComponent.GetHighestDetectedState
struct UTargetComponent_GetHighestDetectedState_Params
{
	MidairCE_EDetectedState                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.TargetDummy.OnDied
struct ATargetDummy_OnDied_Params
{
};

// Function MidairCE.TargetDummy.GetTeamID
struct ATargetDummy_GetTeamID_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.TargetDummy.ForceKill
struct ATargetDummy_ForceKill_Params
{
};

// Function MidairCE.TDMFlag.OnStop
struct ATDMFlag_OnStop_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function MidairCE.TDMFlag.OnBounce
struct ATDMFlag_OnBounce_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     ImpactVelocity;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.TDMGameState.GetIsFlagHolder
struct ATDMGameState_GetIsFlagHolder_Params
{
	class AMAPlayerState*                              PlayerState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.TDMGameState.GetHoldingTeam
struct ATDMGameState_GetHoldingTeam_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.TDMGameState.GetFlagStateName
struct ATDMGameState_GetFlagStateName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.TDMGameState.GetFlagBase
struct ATDMGameState_GetFlagBase_Params
{
	class ATDMFlagBase*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.WeaponAmmoArt.SetOverrideMaterials
struct AWeaponAmmoArt_SetOverrideMaterials_Params
{
	class UMaterialInterface*                          NewMaterial3P;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          NewMaterial1P;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.WeaponAmmoArt.SetChargeIndicator
struct AWeaponAmmoArt_SetChargeIndicator_Params
{
	float                                              Intensity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MidairCE.WeaponAmmoArt.OnComponentHit
struct AWeaponAmmoArt_OnComponentHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
