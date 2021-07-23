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

// Function MidairCE.AIPlayerController.ServerSuicide
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AAIPlayerController::ServerSuicide()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.AIPlayerController.ServerSuicide");
	}

	AAIPlayerController_ServerSuicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.AIPlayerController.PlayRecordedInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// MidairCE_EPlayerRecordableInputTypes InputType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIPlayerController::PlayRecordedInput(MidairCE_EPlayerRecordableInputTypes InputType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.AIPlayerController.PlayRecordedInput");
	}

	AAIPlayerController_PlayRecordedInput_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.AIPlayerController.PlayRecordedCameraInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAIPlayerController::PlayRecordedCameraInput(float Pitch, float Yaw)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.AIPlayerController.PlayRecordedCameraInput");
	}

	AAIPlayerController_PlayRecordedCameraInput_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.AIPlayerController.OnPawnDetected
// (Final, Native, Public)
// Parameters:
// TArray<class AActor*>          DetectedPawns                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void AAIPlayerController::OnPawnDetected(TArray<class AActor*> DetectedPawns)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.AIPlayerController.OnPawnDetected");
	}

	AAIPlayerController_OnPawnDetected_Params params;
	params.DetectedPawns = DetectedPawns;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.AIPlayerController.GetControlledCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMACharacter*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMACharacter* AAIPlayerController::GetControlledCharacter()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.AIPlayerController.GetControlledCharacter");
	}

	AAIPlayerController_GetControlledCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPickup.PlayPickupEffects
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class AMAPlayerController*     Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPickup::PlayPickupEffects(class AMAPlayerController* Controller)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPickup.PlayPickupEffects");
	}

	AMAPickup_PlayPickupEffects_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPickup.PlayLandingEffects
// (Net, Native, Event, NetMulticast, Public)
void AMAPickup::PlayLandingEffects()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPickup.PlayLandingEffects");
	}

	AMAPickup_PlayLandingEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPickup.OnStop
// (Native, Public, HasOutParms)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AMAPickup::OnStop(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPickup.OnStop");
	}

	AMAPickup_OnStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPickup.OnBeginOverlap
// (Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AMAPickup::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPickup.OnBeginOverlap");
	}

	AMAPickup_OnBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPickup.ApplyImpulse_NM
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 Impulse                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPickup::ApplyImpulse_NM(const struct FVector& Impulse)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPickup.ApplyImpulse_NM");
	}

	AMAPickup_ApplyImpulse_NM_Params params;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.AmmoPickup.SetupFromCharacter
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AAmmoPickup::SetupFromCharacter(class AMACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.AmmoPickup.SetupFromCharacter");
	}

	AAmmoPickup_SetupFromCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.AmmoPickup.GetRelatedPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMAPlayerState*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMAPlayerState* AAmmoPickup::GetRelatedPlayer()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.AmmoPickup.GetRelatedPlayer");
	}

	AAmmoPickup_GetRelatedPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameMode.ReturnPrefix
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString AMAGameMode::ReturnPrefix()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameMode.ReturnPrefix");
	}

	AMAGameMode_ReturnPrefix_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameMode.IsWeaponAllowed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  WeaponClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAGameMode::IsWeaponAllowed(class UClass* WeaponClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameMode.IsWeaponAllowed");
	}

	AMAGameMode_IsWeaponAllowed_Params params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameMode.IsTournamentWeaponAllowed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  WeaponClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAGameMode::IsTournamentWeaponAllowed(class UClass* WeaponClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameMode.IsTournamentWeaponAllowed");
	}

	AMAGameMode_IsTournamentWeaponAllowed_Params params;
	params.WeaponClass = WeaponClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameMode.IsTournamentModeEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAGameMode::IsTournamentModeEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameMode.IsTournamentModeEnabled");
	}

	AMAGameMode_IsTournamentModeEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameMode.IsThrowableAllowed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ThrowableClass                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAGameMode::IsThrowableAllowed(class UClass* ThrowableClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameMode.IsThrowableAllowed");
	}

	AMAGameMode_IsThrowableAllowed_Params params;
	params.ThrowableClass = ThrowableClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameMode.IsPracticeModeEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAGameMode::IsPracticeModeEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameMode.IsPracticeModeEnabled");
	}

	AMAGameMode_IsPracticeModeEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameMode.IsDeployableAllowed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  DeployableClass                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAGameMode::IsDeployableAllowed(class UClass* DeployableClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameMode.IsDeployableAllowed");
	}

	AMAGameMode_IsDeployableAllowed_Params params;
	params.DeployableClass = DeployableClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameMode.FilterDisallowedItems
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ItemsIn                        (Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<class UClass*>          ItemsOut                       (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
void AMAGameMode::FilterDisallowedItems(TArray<class UClass*>* ItemsIn, TArray<class UClass*>* ItemsOut)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameMode.FilterDisallowedItems");
	}

	AMAGameMode_FilterDisallowedItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemsIn != nullptr)
		*ItemsIn = params.ItemsIn;
	if (ItemsOut != nullptr)
		*ItemsOut = params.ItemsOut;

}


// Function MidairCE.MAPlayerState.UpdateMatchResult
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FMatchHistory           MatchHistory                   (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void AMAPlayerState::UpdateMatchResult(const struct FMatchHistory& MatchHistory)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.UpdateMatchResult");
	}

	AMAPlayerState_UpdateMatchResult_Params params;
	params.MatchHistory = MatchHistory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.ServerRequestChangeTeam
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  DesiredTeamId                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerState::ServerRequestChangeTeam(unsigned char DesiredTeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.ServerRequestChangeTeam");
	}

	AMAPlayerState_ServerRequestChangeTeam_Params params;
	params.DesiredTeamId = DesiredTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.OnRep_NewSpray
// (Native, Public)
void AMAPlayerState::OnRep_NewSpray()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.OnRep_NewSpray");
	}

	AMAPlayerState_OnRep_NewSpray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.OnRep_LastCauseHitInfo
// (Native, Protected)
void AMAPlayerState::OnRep_LastCauseHitInfo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.OnRep_LastCauseHitInfo");
	}

	AMAPlayerState_OnRep_LastCauseHitInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.NotifyTeamChanged
// (Final, Native, Public)
void AMAPlayerState::NotifyTeamChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.NotifyTeamChanged");
	}

	AMAPlayerState_NotifyTeamChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.IsAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAPlayerState::IsAlive()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.IsAlive");
	}

	AMAPlayerState_IsAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerState.IncrementTeamkills
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void AMAPlayerState::IncrementTeamkills()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.IncrementTeamkills");
	}

	AMAPlayerState_IncrementTeamkills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.IncrementSuicide
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMAPlayerState*          Victim                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerState::IncrementSuicide(class UClass* DamageType, class AMAPlayerState* Victim)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.IncrementSuicide");
	}

	AMAPlayerState_IncrementSuicide_Params params;
	params.DamageType = DamageType;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.IncrementLives
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void AMAPlayerState::IncrementLives()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.IncrementLives");
	}

	AMAPlayerState_IncrementLives_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.IncrementKills
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMAPlayerState*          Victim                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerState::IncrementKills(class UClass* DamageType, class AMAPlayerState* Victim)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.IncrementKills");
	}

	AMAPlayerState_IncrementKills_Params params;
	params.DamageType = DamageType;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.IncrementEvacuations
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void AMAPlayerState::IncrementEvacuations()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.IncrementEvacuations");
	}

	AMAPlayerState_IncrementEvacuations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.IncrementDeaths
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMAPlayerState*          Victim                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerState::IncrementDeaths(class UClass* DamageType, class AMAPlayerState* Victim)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.IncrementDeaths");
	}

	AMAPlayerState_IncrementDeaths_Params params;
	params.DamageType = DamageType;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.IncrementAssists
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMAPlayerState*          Victim                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerState::IncrementAssists(class UClass* DamageType, class AMAPlayerState* Victim)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.IncrementAssists");
	}

	AMAPlayerState_IncrementAssists_Params params;
	params.DamageType = DamageType;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.GetPowerUp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMAPowerup*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMAPowerup* AMAPlayerState::GetPowerUp()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.GetPowerUp");
	}

	AMAPlayerState_GetPowerUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerState.GetPlayerTalkingState
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// MidairCE_EPlayerVoiceState     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MidairCE_EPlayerVoiceState AMAPlayerState::GetPlayerTalkingState()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.GetPlayerTalkingState");
	}

	AMAPlayerState_GetPlayerTalkingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerState.Client_NotifyScoreApplied
// (Net, Native, Event, Public, NetClient)
// Parameters:
// int                            ScoreID                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerState::Client_NotifyScoreApplied(int ScoreID, float Value)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.Client_NotifyScoreApplied");
	}

	AMAPlayerState_Client_NotifyScoreApplied_Params params;
	params.ScoreID = ScoreID;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerState.AdjustScore
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ScoreAdjustment                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerState::AdjustScore(int ScoreAdjustment)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerState.AdjustScore");
	}

	AMAPlayerState_AdjustScore_Params params;
	params.ScoreAdjustment = ScoreAdjustment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment_Art.Tick
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAugment_Art::Tick(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment_Art.Tick");
	}

	UAugment_Art_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment_Art.SetActive_Visuals
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAugment_Art::SetActive_Visuals(bool bActive)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment_Art.SetActive_Visuals");
	}

	UAugment_Art_SetActive_Visuals_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment_Art.SetActive_Audio
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAugment_Art::SetActive_Audio(bool bActive)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment_Art.SetActive_Audio");
	}

	UAugment_Art_SetActive_Audio_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment_Art.SetActive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAugment_Art::SetActive(bool bActive)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment_Art.SetActive");
	}

	UAugment_Art_SetActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.ServerUse
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void UAugment::ServerUse()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.ServerUse");
	}

	UAugment_ServerUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.ResetType
// (Final, Native, Public, BlueprintCallable)
void UAugment::ResetType()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.ResetType");
	}

	UAugment_ResetType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.OnRep_Trigger
// (Final, Native, Protected)
void UAugment::OnRep_Trigger()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.OnRep_Trigger");
	}

	UAugment_OnRep_Trigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.OnRep_Buddies
// (Final, Native, Protected)
void UAugment::OnRep_Buddies()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.OnRep_Buddies");
	}

	UAugment_OnRep_Buddies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.OnRemoved
// (Event, Protected, BlueprintEvent)
void UAugment::OnRemoved()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.OnRemoved");
	}

	UAugment_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.OnRemoveBuddy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter*            Buddy                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAugment::OnRemoveBuddy(class AMACharacter* Buddy)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.OnRemoveBuddy");
	}

	UAugment_OnRemoveBuddy_Params params;
	params.Buddy = Buddy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.OnGivenTo
// (Event, Protected, BlueprintEvent)
void UAugment::OnGivenTo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.OnGivenTo");
	}

	UAugment_OnGivenTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.OnEnergyDepleted
// (Native, Event, Protected, BlueprintEvent)
void UAugment::OnEnergyDepleted()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.OnEnergyDepleted");
	}

	UAugment_OnEnergyDepleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.OnAddBuddy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter*            Buddy                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAugment::OnAddBuddy(class AMACharacter* Buddy)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.OnAddBuddy");
	}

	UAugment_OnAddBuddy_Params params;
	params.Buddy = Buddy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.OnActiveChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter*            ReceivingCharacter             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAugment::OnActiveChanged(class AMACharacter* ReceivingCharacter)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.OnActiveChanged");
	}

	UAugment_OnActiveChanged_Params params;
	params.ReceivingCharacter = ReceivingCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.MakePassive
// (Final, Native, Public, BlueprintCallable)
void UAugment::MakePassive()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.MakePassive");
	}

	UAugment_MakePassive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.K2_Draw
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RenderDelta                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAugment::K2_Draw(class UCanvas* Canvas, float RenderDelta)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.K2_Draw");
	}

	UAugment_K2_Draw_Params params;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment.IsReady
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAugment::IsReady()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.IsReady");
	}

	UAugment_IsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.Augment.GetCurrentEnergyChangeRate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAugment::GetCurrentEnergyChangeRate()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.GetCurrentEnergyChangeRate");
	}

	UAugment_GetCurrentEnergyChangeRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.Augment.GetArtObjectFor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAugment_Art*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAugment_Art* UAugment::GetArtObjectFor(class AMACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.GetArtObjectFor");
	}

	UAugment_GetArtObjectFor_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.Augment.CanBeUsedWith
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                  OtherAugmentClass              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAugment::CanBeUsedWith(class UClass* OtherAugmentClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment.CanBeUsedWith");
	}

	UAugment_CanBeUsedWith_Params params;
	params.OtherAugmentClass = OtherAugmentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.Augment_Blink.ReceiveBlinkLocation
// (Native, Public)
void UAugment_Blink::ReceiveBlinkLocation()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment_Blink.ReceiveBlinkLocation");
	}

	UAugment_Blink_ReceiveBlinkLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment_Blink.OnBlinkOccured
// (Native, Public)
void UAugment_Blink::OnBlinkOccured()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment_Blink.OnBlinkOccured");
	}

	UAugment_Blink_OnBlinkOccured_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment_Blink_Art.StopBlink
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAugment_Blink_Art::StopBlink(const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment_Blink_Art.StopBlink");
	}

	UAugment_Blink_Art_StopBlink_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment_Blink_Art.StartBlink
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAugment_Blink_Art::StartBlink(const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment_Blink_Art.StartBlink");
	}

	UAugment_Blink_Art_StartBlink_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.Augment_FlatShield.OwnerTookDamage
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FTakeHitInfo            TakeHitInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAugment_FlatShield::OwnerTookDamage(const struct FTakeHitInfo& TakeHitInfo)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.Augment_FlatShield.OwnerTookDamage");
	}

	UAugment_FlatShield_OwnerTookDamage_Params params;
	params.TakeHitInfo = TakeHitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAItem.K2_Removed
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
void AMAItem::K2_Removed()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAItem.K2_Removed");
	}

	AMAItem_K2_Removed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAItem.K2_GivenTo
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   NewOwner                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAItem::K2_GivenTo(class APawn* NewOwner, bool bAutoActivate)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAItem.K2_GivenTo");
	}

	AMAItem_K2_GivenTo_Params params;
	params.NewOwner = NewOwner;
	params.bAutoActivate = bAutoActivate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAItem.ClientGivenTo
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// class APawn*                   NewInstigator                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAItem::ClientGivenTo(class APawn* NewInstigator, bool bAutoActivate)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAItem.ClientGivenTo");
	}

	AMAItem_ClientGivenTo_Params params;
	params.NewInstigator = NewInstigator;
	params.bAutoActivate = bAutoActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAWeapon.ResetAmmo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewTotal                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAWeapon::ResetAmmo(int NewTotal)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeapon.ResetAmmo");
	}

	AMAWeapon_ResetAmmo_Params params;
	params.NewTotal = NewTotal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAWeapon.K2_SetFireInterval
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          From                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          To                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAWeapon::K2_SetFireInterval(float From, float To)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeapon.K2_SetFireInterval");
	}

	AMAWeapon_K2_SetFireInterval_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAWeapon.K2_GetFireInterval
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          From                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          To                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAWeapon::K2_GetFireInterval(float* From, float* To)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeapon.K2_GetFireInterval");
	}

	AMAWeapon_K2_GetFireInterval_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (From != nullptr)
		*From = params.From;
	if (To != nullptr)
		*To = params.To;

}


// Function MidairCE.MAWeapon.GetAdjustedFireLocationAndRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 FireLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                FireRotation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AMAWeapon::GetAdjustedFireLocationAndRotation(struct FVector* FireLocation, struct FRotator* FireRotation)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeapon.GetAdjustedFireLocationAndRotation");
	}

	AMAWeapon_GetAdjustedFireLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FireLocation != nullptr)
		*FireLocation = params.FireLocation;
	if (FireRotation != nullptr)
		*FireRotation = params.FireRotation;

}


// Function MidairCE.MAWeapon.ClientAddAmmo
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAWeapon::ClientAddAmmo(int Amount)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeapon.ClientAddAmmo");
	}

	AMAWeapon_ClientAddAmmo_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAWeapon.BP_GetReloadCompletion
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMAWeapon::BP_GetReloadCompletion()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeapon.BP_GetReloadCompletion");
	}

	AMAWeapon_BP_GetReloadCompletion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAWeapon.AddAmmo
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AMAWeapon::AddAmmo(int Amount)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeapon.AddAmmo");
	}

	AMAWeapon_AddAmmo_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ChatWidget.ReleaseOwnership
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 CurrentOwner                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChatWidget::ReleaseOwnership(class UWidget* CurrentOwner)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ChatWidget.ReleaseOwnership");
	}

	UChatWidget_ReleaseOwnership_Params params;
	params.CurrentOwner = CurrentOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ChatWidget.ReleaseFocus
// (Final, Native, Public, BlueprintCallable)
void UChatWidget::ReleaseFocus()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ChatWidget.ReleaseFocus");
	}

	UChatWidget_ReleaseFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ChatWidget.ReceiveMessage
// (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FString                 PlayerName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            NameColor                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            MessageColor                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChatWidget::ReceiveMessage(const struct FString& PlayerName, const struct FLinearColor& NameColor, const struct FString& Message, const struct FLinearColor& MessageColor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ChatWidget.ReceiveMessage");
	}

	UChatWidget_ReceiveMessage_Params params;
	params.PlayerName = PlayerName;
	params.NameColor = NameColor;
	params.Message = Message;
	params.MessageColor = MessageColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ChatWidget.OnFocusPrompt
// (Event, Protected, BlueprintEvent)
void UChatWidget::OnFocusPrompt()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ChatWidget.OnFocusPrompt");
	}

	UChatWidget_OnFocusPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ChatWidget.FocusPrompt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bTeamOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChatWidget::FocusPrompt(bool bTeamOnly)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ChatWidget.FocusPrompt");
	}

	UChatWidget_FocusPrompt_Params params;
	params.bTeamOnly = bTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ChatWidget.CommitMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChatWidget::CommitMessage(const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ChatWidget.CommitMessage");
	}

	UChatWidget_CommitMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ChatWidget.ClaimOwnership
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 NewOwner                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChatWidget::ClaimOwnership(class UWidget* NewOwner)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ChatWidget.ClaimOwnership");
	}

	UChatWidget_ClaimOwnership_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ChatWidget.AddMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            Speaker                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTeamOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UChatWidget::AddMessage(class APlayerState* Speaker, const struct FString& Message, bool bTeamOnly)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ChatWidget.AddMessage");
	}

	UChatWidget_AddMessage_Params params;
	params.Speaker = Speaker;
	params.Message = Message;
	params.bTeamOnly = bTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ComplexStatusBar.SetValue2
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComplexStatusBar::SetValue2(float InPercent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ComplexStatusBar.SetValue2");
	}

	UComplexStatusBar_SetValue2_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ComplexStatusBar.SetValue1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComplexStatusBar::SetValue1(float InPercent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ComplexStatusBar.SetValue1");
	}

	UComplexStatusBar_SetValue1_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ComplexStatusBar.SetIsMarquee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InbIsMarquee                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComplexStatusBar::SetIsMarquee(bool InbIsMarquee)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ComplexStatusBar.SetIsMarquee");
	}

	UComplexStatusBar_SetIsMarquee_Params params;
	params.InbIsMarquee = InbIsMarquee;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ComplexStatusBar.SetFillMarkerColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComplexStatusBar::SetFillMarkerColorAndOpacity(const struct FLinearColor& InColor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ComplexStatusBar.SetFillMarkerColorAndOpacity");
	}

	UComplexStatusBar_SetFillMarkerColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ComplexStatusBar.SetFillColorAndOpacity2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComplexStatusBar::SetFillColorAndOpacity2(const struct FLinearColor& InColor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ComplexStatusBar.SetFillColorAndOpacity2");
	}

	UComplexStatusBar_SetFillColorAndOpacity2_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ComplexStatusBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComplexStatusBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ComplexStatusBar.SetFillColorAndOpacity");
	}

	UComplexStatusBar_SetFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.OOBVolume.PlayOOBEffects
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class AActor*                  ActorExiting                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AOOBVolume::PlayOOBEffects(class AActor* ActorExiting, const struct FVector& Location, const struct FVector& Direction)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.OOBVolume.PlayOOBEffects");
	}

	AOOBVolume_PlayOOBEffects_Params params;
	params.ActorExiting = ActorExiting;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.OOBVolume.CheckForCarriedObjectLeaving
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AOOBVolume::CheckForCarriedObjectLeaving(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.OOBVolume.CheckForCarriedObjectLeaving");
	}

	AOOBVolume_CheckForCarriedObjectLeaving_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.OOBVolume.CheckForCarriedObject
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BodyIndexbool                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AOOBVolume::CheckForCarriedObject(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndexbool, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.OOBVolume.CheckForCarriedObject");
	}

	AOOBVolume_CheckForCarriedObject_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.BodyIndexbool = BodyIndexbool;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.OOBVolume.BP_PlayOOBEffects
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  ActorExiting                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 WallNormal                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AOOBVolume::BP_PlayOOBEffects(class AActor* ActorExiting, const struct FVector& Location, const struct FVector& WallNormal)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.OOBVolume.BP_PlayOOBEffects");
	}

	AOOBVolume_BP_PlayOOBEffects_Params params;
	params.ActorExiting = ActorExiting;
	params.Location = Location;
	params.WallNormal = WallNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.DirectHotkey.HandleNamedHotkeyWithInt
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Int                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDirectHotkey::HandleNamedHotkeyWithInt(const struct FString& Hotkey, int Int)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.DirectHotkey.HandleNamedHotkeyWithInt");
	}

	UDirectHotkey_HandleNamedHotkeyWithInt_Params params;
	params.Hotkey = Hotkey;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.DirectHotkey.HandleDirectNamedHotkey
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Hotkey                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDirectHotkey::HandleDirectNamedHotkey(const struct FString& Hotkey)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.DirectHotkey.HandleDirectNamedHotkey");
	}

	UDirectHotkey_HandleDirectNamedHotkey_Params params;
	params.Hotkey = Hotkey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.EnergyConduit.OnComponentOverlapEnd
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AEnergyConduit::OnComponentOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.EnergyConduit.OnComponentOverlapEnd");
	}

	AEnergyConduit_OnComponentOverlapEnd_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.EnergyConduit.OnComponentOverlap
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BodyIndexbool                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AEnergyConduit::OnComponentOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndexbool, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.EnergyConduit.OnComponentOverlap");
	}

	AEnergyConduit_OnComponentOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.BodyIndexbool = BodyIndexbool;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.GetCurrentUserStatsAsyncTask.GetCurrentUserStats
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGetCurrentUserStatsAsyncTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetCurrentUserStatsAsyncTask* UGetCurrentUserStatsAsyncTask::STATIC_GetCurrentUserStats()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.GetCurrentUserStatsAsyncTask.GetCurrentUserStats");
	}

	UGetCurrentUserStatsAsyncTask_GetCurrentUserStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.GetDemoAsyncTask.PlayDemo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DemoId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           PlayDemo                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetDemoAsyncTask*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetDemoAsyncTask* UGetDemoAsyncTask::STATIC_PlayDemo(const struct FString& DemoId, bool PlayDemo)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.GetDemoAsyncTask.PlayDemo");
	}

	UGetDemoAsyncTask_PlayDemo_Params params;
	params.DemoId = DemoId;
	params.PlayDemo = PlayDemo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.GetLeaderBoardEntriesAsyncTask.GetLeaderBoardEntries
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   LeaboardName                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   GameMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<MidairCE_EMALeaderboardRequest> LeaderboardRequest             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeStart                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RangeEnd                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DetailCount                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetLeaderBoardEntriesAsyncTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetLeaderBoardEntriesAsyncTask* UGetLeaderBoardEntriesAsyncTask::STATIC_GetLeaderBoardEntries(const struct FName& LeaboardName, const struct FName& GameMode, TEnumAsByte<MidairCE_EMALeaderboardRequest> LeaderboardRequest, int RangeStart, int RangeEnd, int DetailCount)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.GetLeaderBoardEntriesAsyncTask.GetLeaderBoardEntries");
	}

	UGetLeaderBoardEntriesAsyncTask_GetLeaderBoardEntries_Params params;
	params.LeaboardName = LeaboardName;
	params.GameMode = GameMode;
	params.LeaderboardRequest = LeaderboardRequest;
	params.RangeStart = RangeStart;
	params.RangeEnd = RangeEnd;
	params.DetailCount = DetailCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.GetMatchHistoryAsyncTask.GetMatchHistory
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   GameMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Count                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetMatchHistoryAsyncTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetMatchHistoryAsyncTask* UGetMatchHistoryAsyncTask::STATIC_GetMatchHistory(class APlayerController* PlayerController, const struct FName& GameMode, int Count)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.GetMatchHistoryAsyncTask.GetMatchHistory");
	}

	UGetMatchHistoryAsyncTask_GetMatchHistory_Params params;
	params.PlayerController = PlayerController;
	params.GameMode = GameMode;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.GetPlayerPracticeDataAsyncTask.GetPlayerPracticeData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGetPlayerPracticeDataAsyncTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetPlayerPracticeDataAsyncTask* UGetPlayerPracticeDataAsyncTask::STATIC_GetPlayerPracticeData()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.GetPlayerPracticeDataAsyncTask.GetPlayerPracticeData");
	}

	UGetPlayerPracticeDataAsyncTask_GetPlayerPracticeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.GetUserStatsAsyncTask.GetUserStats
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMASteamId              SteamId                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 GameMode                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGetUserStatsAsyncTask*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetUserStatsAsyncTask* UGetUserStatsAsyncTask::STATIC_GetUserStats(const struct FMASteamId& SteamId, const struct FString& GameMode)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.GetUserStatsAsyncTask.GetUserStats");
	}

	UGetUserStatsAsyncTask_GetUserStats_Params params;
	params.SteamId = SteamId;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.LoadingScreenWidget.GetTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText ULoadingScreenWidget::GetTip()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.LoadingScreenWidget.GetTip");
	}

	ULoadingScreenWidget_GetTip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.LoadingScreenWidget.GetObjectives
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText ULoadingScreenWidget::GetObjectives()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.LoadingScreenWidget.GetObjectives");
	}

	ULoadingScreenWidget_GetObjectives_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.LoadingScreenWidget.GetMapName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString ULoadingScreenWidget::GetMapName()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.LoadingScreenWidget.GetMapName");
	}

	ULoadingScreenWidget_GetMapName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.LoadingScreenWidget.GetMapLore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText ULoadingScreenWidget::GetMapLore()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.LoadingScreenWidget.GetMapLore");
	}

	ULoadingScreenWidget_GetMapLore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.LoadingScreenWidget.GetBackground
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* ULoadingScreenWidget::GetBackground()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.LoadingScreenWidget.GetBackground");
	}

	ULoadingScreenWidget_GetBackground_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.LoadingScreenWidget.GetAuthors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText ULoadingScreenWidget::GetAuthors()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.LoadingScreenWidget.GetAuthors");
	}

	ULoadingScreenWidget_GetAuthors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.LoadoutPreview.UpdateSelectionPreview
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ObjectInfoClass                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  CosmeticCustomization          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACosmeticConfiguration*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ACosmeticConfiguration* ALoadoutPreview::STATIC_UpdateSelectionPreview(class UClass* ObjectInfoClass, class UClass* CosmeticCustomization)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.LoadoutPreview.UpdateSelectionPreview");
	}

	ALoadoutPreview_UpdateSelectionPreview_Params params;
	params.ObjectInfoClass = ObjectInfoClass;
	params.CosmeticCustomization = CosmeticCustomization;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.LoadoutPreview.GetWorldLoadoutPreview
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ALoadoutPreview*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ALoadoutPreview* ALoadoutPreview::STATIC_GetWorldLoadoutPreview()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.LoadoutPreview.GetWorldLoadoutPreview");
	}

	ALoadoutPreview_GetWorldLoadoutPreview_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.LoadoutPreview.GetCharacterLookAtLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector ALoadoutPreview::GetCharacterLookAtLocation()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.LoadoutPreview.GetCharacterLookAtLocation");
	}

	ALoadoutPreview_GetCharacterLookAtLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MABackpack.Use
// (Native, Public, BlueprintCallable)
void AMABackpack::Use()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MABackpack.Use");
	}

	AMABackpack_Use_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MABackpack.OnRep_Augments
// (Native, Protected)
void AMABackpack::OnRep_Augments()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MABackpack.OnRep_Augments");
	}

	AMABackpack_OnRep_Augments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.Timeout
// (Native, Public, BlueprintCallable)
void AMAProjectile::Timeout()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.Timeout");
	}

	AMAProjectile_Timeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.Stopped
// (Native, Protected, HasOutParms)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AMAProjectile::Stopped(const struct FHitResult& Hit)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.Stopped");
	}

	AMAProjectile_Stopped_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.SphereTouched
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AMAProjectile::SphereTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.SphereTouched");
	}

	AMAProjectile_SphereTouched_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.ShutDown
// (Native, Public, BlueprintCallable)
void AMAProjectile::ShutDown()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.ShutDown");
	}

	AMAProjectile_ShutDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.ProcessHit
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitNormal                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAProjectile::ProcessHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.ProcessHit");
	}

	AMAProjectile_ProcessHit_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.OnRep_TeamID
// (Event, Protected, BlueprintEvent)
void AMAProjectile::OnRep_TeamID()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.OnRep_TeamID");
	}

	AMAProjectile_OnRep_TeamID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.OnRep_LastSurfaceImpact
// (Native, Public)
void AMAProjectile::OnRep_LastSurfaceImpact()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.OnRep_LastSurfaceImpact");
	}

	AMAProjectile_OnRep_LastSurfaceImpact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.OnRep_CurrentStage
// (Native, Public)
void AMAProjectile::OnRep_CurrentStage()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.OnRep_CurrentStage");
	}

	AMAProjectile_OnRep_CurrentStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.LockInPlace
// (Native, Protected)
void AMAProjectile::LockInPlace()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.LockInPlace");
	}

	AMAProjectile_LockInPlace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.GetHomingTargetLocation
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAProjectile::GetHomingTargetLocation(struct FVector* TargetLocation)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.GetHomingTargetLocation");
	}

	AMAProjectile_GetHomingTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;


	return params.ReturnValue;
}


// Function MidairCE.MAProjectile.Explode
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitNormal                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAProjectile::Explode(const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.Explode");
	}

	AMAProjectile_Explode_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.DamageImpactedActor
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitNormal                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAProjectile::DamageImpactedActor(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.DamageImpactedActor");
	}

	AMAProjectile_DamageImpactedActor_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.CatchUp
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAProjectile::CatchUp(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.CatchUp");
	}

	AMAProjectile_CatchUp_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.BP_StartArm
// (Event, Protected, BlueprintEvent)
void AMAProjectile::BP_StartArm()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.BP_StartArm");
	}

	AMAProjectile_BP_StartArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.BP_FinishedArm
// (Event, Protected, BlueprintEvent)
void AMAProjectile::BP_FinishedArm()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.BP_FinishedArm");
	}

	AMAProjectile_BP_FinishedArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.BP_Activate
// (Event, Protected, BlueprintEvent)
void AMAProjectile::BP_Activate()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.BP_Activate");
	}

	AMAProjectile_BP_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAProjectile.Bounced
// (Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAProjectile::Bounced(const struct FHitResult& Hit, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAProjectile.Bounced");
	}

	AMAProjectile_Bounced_Params params;
	params.Hit = Hit;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MABeamProjectile.UpdateSpawnLocation
// (Native, Public)
void AMABeamProjectile::UpdateSpawnLocation()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MABeamProjectile.UpdateSpawnLocation");
	}

	AMABeamProjectile_UpdateSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObject.UpdateCameraDist
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          CameraDistPct                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACarriedObject::UpdateCameraDist(float CameraDistPct)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.UpdateCameraDist");
	}

	AMACarriedObject_UpdateCameraDist_Params params;
	params.CameraDistPct = CameraDistPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObject.TeamChanged
// (Native, Event, Protected, BlueprintEvent)
void AMACarriedObject::TeamChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.TeamChanged");
	}

	AMACarriedObject_TeamChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObject.StateChanged
// (Native, Public)
void AMACarriedObject::StateChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.StateChanged");
	}

	AMACarriedObject_StateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObject.OnRep_RemainingAutoReturnTime
// (Native, Public)
void AMACarriedObject::OnRep_RemainingAutoReturnTime()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.OnRep_RemainingAutoReturnTime");
	}

	AMACarriedObject_OnRep_RemainingAutoReturnTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObject.OnRep_RemainingAutoReturnSyncTime
// (Native, Public)
void AMACarriedObject::OnRep_RemainingAutoReturnSyncTime()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.OnRep_RemainingAutoReturnSyncTime");
	}

	AMACarriedObject_OnRep_RemainingAutoReturnSyncTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObject.OnRep_MAReplicatedMovement
// (Native, Public)
void AMACarriedObject::OnRep_MAReplicatedMovement()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.OnRep_MAReplicatedMovement");
	}

	AMACarriedObject_OnRep_MAReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObject.IsInState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InStateName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACarriedObject::IsInState(const struct FName& InStateName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.IsInState");
	}

	AMACarriedObject_IsInState_Params params;
	params.InStateName = InStateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACarriedObject.IsHome
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACarriedObject::IsHome()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.IsHome");
	}

	AMACarriedObject_IsHome_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACarriedObject.IsFlagOutOfBounds
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACarriedObject::IsFlagOutOfBounds()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.IsFlagOutOfBounds");
	}

	AMACarriedObject_IsFlagOutOfBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACarriedObject.HolderChanged
// (Native, Protected)
void AMACarriedObject::HolderChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.HolderChanged");
	}

	AMACarriedObject_HolderChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObject.GetRemainingOOBReturnTime
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMACarriedObject::GetRemainingOOBReturnTime()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.GetRemainingOOBReturnTime");
	}

	AMACarriedObject_GetRemainingOOBReturnTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACarriedObject.ChangeState
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACarriedObject::ChangeState(const struct FName& NewState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.ChangeState");
	}

	AMACarriedObject_ChangeState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObject.CatchUp
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACarriedObject::CatchUp(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.CatchUp");
	}

	AMACarriedObject_CatchUp_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObject.CapsuleTouched
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AMACarriedObject::CapsuleTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.CapsuleTouched");
	}

	AMACarriedObject_CapsuleTouched_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObject.AutoReturnTimer
// (Native, Public)
void AMACarriedObject::AutoReturnTimer()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.AutoReturnTimer");
	}

	AMACarriedObject_AutoReturnTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObject.AssistCapsuleTouched
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AMACarriedObject::AssistCapsuleTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObject.AssistCapsuleTouched");
	}

	AMACarriedObject_AssistCapsuleTouched_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObjectBase.ObjectStateChanged
// (Native, Public)
void AMACarriedObjectBase::ObjectStateChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObjectBase.ObjectStateChanged");
	}

	AMACarriedObjectBase_ObjectStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObjectBase.ObjectChanged
// (Native, Protected)
void AMACarriedObjectBase::ObjectChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObjectBase.ObjectChanged");
	}

	AMACarriedObjectBase_ObjectChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACarriedObjectOOBVolume.OnCarriedObjectOOB
// (Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BodyIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AMACarriedObjectOOBVolume::OnCarriedObjectOOB(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACarriedObjectOOBVolume.OnCarriedObjectOOB");
	}

	AMACarriedObjectOOBVolume_OnCarriedObjectOOB_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.BodyIndex = BodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.ZoomUpdated
// (Native, Public)
void AMACharacter::ZoomUpdated()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.ZoomUpdated");
	}

	AMACharacter_ZoomUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.WeaponActivityUpdated
// (Native, Public)
void AMACharacter::WeaponActivityUpdated()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.WeaponActivityUpdated");
	}

	AMACharacter_WeaponActivityUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.Vocalize
// (Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::Vocalize(class USoundBase* Sound)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.Vocalize");
	}

	AMACharacter_Vocalize_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.UsePack
// (Final, Exec, Native, Public)
void AMACharacter::UsePack()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.UsePack");
	}

	AMACharacter_UsePack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.UpdateWeaponAttachment
// (Native, Public)
void AMACharacter::UpdateWeaponAttachment()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.UpdateWeaponAttachment");
	}

	AMACharacter_UpdateWeaponAttachment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.UpdateVisualsToMatchCosmeticCustomizations
// (Final, Native, Public)
void AMACharacter::UpdateVisualsToMatchCosmeticCustomizations()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.UpdateVisualsToMatchCosmeticCustomizations");
	}

	AMACharacter_UpdateVisualsToMatchCosmeticCustomizations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.UpdateForClientPerspective
// (Final, Native, Public, BlueprintCallable)
void AMACharacter::UpdateForClientPerspective()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.UpdateForClientPerspective");
	}

	AMACharacter_UpdateForClientPerspective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.UpdateCameraDist
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          CameraDistPct                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::UpdateCameraDist(float CameraDistPct)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.UpdateCameraDist");
	}

	AMACharacter_UpdateCameraDist_Params params;
	params.CameraDistPct = CameraDistPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.TossFlag
// (Final, Exec, Native, Public)
void AMACharacter::TossFlag()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.TossFlag");
	}

	AMACharacter_TossFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.TossCarriedObject
// (Exec, Native, Public)
void AMACharacter::TossCarriedObject()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.TossCarriedObject");
	}

	AMACharacter_TossCarriedObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.ToggleZoom
// (Native, Public, BlueprintCallable)
void AMACharacter::ToggleZoom()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.ToggleZoom");
	}

	AMACharacter_ToggleZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.ToggleTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  FireMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::ToggleTrigger(unsigned char FireMode)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.ToggleTrigger");
	}

	AMACharacter_ToggleTrigger_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.SwitchToWeaponAtIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACharacter::SwitchToWeaponAtIndex(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.SwitchToWeaponAtIndex");
	}

	AMACharacter_SwitchToWeaponAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.SwitchToWeapon
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMAWeapon*               NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACharacter::SwitchToWeapon(class AMAWeapon* NewWeapon)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.SwitchToWeapon");
	}

	AMACharacter_SwitchToWeapon_Params params;
	params.NewWeapon = NewWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.SwitchToNextWeapon
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACharacter::SwitchToNextWeapon(int Direction)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.SwitchToNextWeapon");
	}

	AMACharacter_SwitchToNextWeapon_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.SwapTriggerBuffers
// (Final, Native, Public, BlueprintCallable)
void AMACharacter::SwapTriggerBuffers()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.SwapTriggerBuffers");
	}

	AMACharacter_SwapTriggerBuffers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.Suicide
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACharacter::Suicide()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.Suicide");
	}

	AMACharacter_Suicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.StopSkating
// (Native, Public, BlueprintCallable)
void AMACharacter::StopSkating()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.StopSkating");
	}

	AMACharacter_StopSkating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.StopPickup
// (Native, Public, BlueprintCallable)
void AMACharacter::StopPickup()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.StopPickup");
	}

	AMACharacter_StopPickup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.StopJetting
// (Native, Public, BlueprintCallable)
void AMACharacter::StopJetting()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.StopJetting");
	}

	AMACharacter_StopJetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.StartPickup
// (Native, Public, BlueprintCallable)
void AMACharacter::StartPickup()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.StartPickup");
	}

	AMACharacter_StartPickup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.StartInvulnerability
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::StartInvulnerability(float Length)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.StartInvulnerability");
	}

	AMACharacter_StartInvulnerability_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.Skate
// (Native, Public, BlueprintCallable)
void AMACharacter::Skate()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.Skate");
	}

	AMACharacter_Skate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.SetTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  FireMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSet                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::SetTrigger(unsigned char FireMode, bool bSet)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.SetTrigger");
	}

	AMACharacter_SetTrigger_Params params;
	params.FireMode = FireMode;
	params.bSet = bSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.SetOverrideMaterials
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      NewMaterial3P                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*      NewMaterial1P                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::SetOverrideMaterials(class UMaterialInterface* NewMaterial3P, class UMaterialInterface* NewMaterial1P)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.SetOverrideMaterials");
	}

	AMACharacter_SetOverrideMaterials_Params params;
	params.NewMaterial3P = NewMaterial3P;
	params.NewMaterial1P = NewMaterial1P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.SetLoadout
// (Native, Public, HasOutParms)
// Parameters:
// struct FMALoadout              Loadout                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bSetMaxes                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsBaseInventory               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::SetLoadout(const struct FMALoadout& Loadout, bool bSetMaxes, bool bIsBaseInventory)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.SetLoadout");
	}

	AMACharacter_SetLoadout_Params params;
	params.Loadout = Loadout;
	params.bSetMaxes = bSetMaxes;
	params.bIsBaseInventory = bIsBaseInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.SetCameraMode
// (Native, Public, BlueprintCallable)
// Parameters:
// MidairCE_ECameraMode           InCameraMode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::SetCameraMode(MidairCE_ECameraMode InCameraMode)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.SetCameraMode");
	}

	AMACharacter_SetCameraMode_Params params;
	params.InCameraMode = InCameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.ServerTrySpecificPickup
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AMAPickup*               Pickup                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::ServerTrySpecificPickup(class AMAPickup* Pickup)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.ServerTrySpecificPickup");
	}

	AMACharacter_ServerTrySpecificPickup_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.ServerTossCarriedObject
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AMACharacter::ServerTossCarriedObject()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.ServerTossCarriedObject");
	}

	AMACharacter_ServerTossCarriedObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.ServerSetCameraMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// MidairCE_ECameraMode           InCameraMode                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::ServerSetCameraMode(MidairCE_ECameraMode InCameraMode)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.ServerSetCameraMode");
	}

	AMACharacter_ServerSetCameraMode_Params params;
	params.InCameraMode = InCameraMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.Server_UseSpray
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AMACharacter::Server_UseSpray()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.Server_UseSpray");
	}

	AMACharacter_Server_UseSpray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.RemoveItem
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AMAItem*                 ItemToRemove                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::RemoveItem(class AMAItem* ItemToRemove)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.RemoveItem");
	}

	AMACharacter_RemoveItem_Params params;
	params.ItemToRemove = ItemToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.PlayCameraShake
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  Shake                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPlayInUserSpace               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                UserSpaceRot                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AMACharacter::PlayCameraShake(class UClass* Shake, float Scale, bool bPlayInUserSpace, const struct FRotator& UserSpaceRot)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.PlayCameraShake");
	}

	AMACharacter_PlayCameraShake_Params params;
	params.Shake = Shake;
	params.Scale = Scale;
	params.bPlayInUserSpace = bPlayInUserSpace;
	params.UserSpaceRot = UserSpaceRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.OnTookDamage
// (Native, Public, HasOutParms)
// Parameters:
// struct FTakeHitInfo            TakeHitInfo                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AMACharacter::OnTookDamage(const struct FTakeHitInfo& TakeHitInfo)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.OnTookDamage");
	}

	AMACharacter_OnTookDamage_Params params;
	params.TakeHitInfo = TakeHitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.OnRep_ReplicatedAccelInfo
// (Native, Public)
void AMACharacter::OnRep_ReplicatedAccelInfo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.OnRep_ReplicatedAccelInfo");
	}

	AMACharacter_OnRep_ReplicatedAccelInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.OnRep_PressedJet
// (Native, Public)
void AMACharacter::OnRep_PressedJet()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.OnRep_PressedJet");
	}

	AMACharacter_OnRep_PressedJet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.OnRep_MAReplicatedMovement
// (Native, Public)
void AMACharacter::OnRep_MAReplicatedMovement()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.OnRep_MAReplicatedMovement");
	}

	AMACharacter_OnRep_MAReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.OnRep_LMS
// (Final, Native, Public)
void AMACharacter::OnRep_LMS()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.OnRep_LMS");
	}

	AMACharacter_OnRep_LMS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.OnRep_LastAttachedSurfaceImpact
// (Final, Native, Public)
void AMACharacter::OnRep_LastAttachedSurfaceImpact()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.OnRep_LastAttachedSurfaceImpact");
	}

	AMACharacter_OnRep_LastAttachedSurfaceImpact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.OnRep_IsSkating
// (Native, Public)
void AMACharacter::OnRep_IsSkating()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.OnRep_IsSkating");
	}

	AMACharacter_OnRep_IsSkating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.OnHealthChanged
// (Native, Public)
// Parameters:
// bool                           bFromDamage                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::OnHealthChanged(bool bFromDamage)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.OnHealthChanged");
	}

	AMACharacter_OnHealthChanged_Params params;
	params.bFromDamage = bFromDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.OnFootStep
// (Native, Public, BlueprintCallable)
void AMACharacter::OnFootStep()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.OnFootStep");
	}

	AMACharacter_OnFootStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.OnEnergyDamage
// (Native, Public)
void AMACharacter::OnEnergyDamage()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.OnEnergyDamage");
	}

	AMACharacter_OnEnergyDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.OnDied
// (Native, Protected)
void AMACharacter::OnDied()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.OnDied");
	}

	AMACharacter_OnDied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.K2_FindPack
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bExactClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMAItem*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMAItem* AMACharacter::K2_FindPack(class UClass* Type, bool bExactClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.K2_FindPack");
	}

	AMACharacter_K2_FindPack_Params params;
	params.Type = Type;
	params.bExactClass = bExactClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.K2_FindItem
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bExactClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMAItem*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMAItem* AMACharacter::K2_FindItem(class UClass* Type, bool bExactClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.K2_FindItem");
	}

	AMACharacter_K2_FindItem_Params params;
	params.Type = Type;
	params.bExactClass = bExactClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.K2_CreateItem
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  NewItemClass                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMAItem*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMAItem* AMACharacter::K2_CreateItem(class UClass* NewItemClass, bool bAutoActivate)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.K2_CreateItem");
	}

	AMACharacter_K2_CreateItem_Params params;
	params.NewItemClass = NewItemClass;
	params.bAutoActivate = bAutoActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.Jet
// (Native, Public, BlueprintCallable)
void AMACharacter::Jet()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.Jet");
	}

	AMACharacter_Jet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.IsTriggerSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  FireMode                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACharacter::IsTriggerSet(unsigned char FireMode)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.IsTriggerSet");
	}

	AMACharacter_IsTriggerSet_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.IsInInventory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMAItem*                 ItemToFind                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACharacter::IsInInventory(class AMAItem* ItemToFind)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.IsInInventory");
	}

	AMACharacter_IsInInventory_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.IsDead
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACharacter::IsDead()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.IsDead");
	}

	AMACharacter_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.IsAccelerating
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACharacter::IsAccelerating()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.IsAccelerating");
	}

	AMACharacter_IsAccelerating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.GetRemoteViewPitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMACharacter::GetRemoteViewPitch()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.GetRemoteViewPitch");
	}

	AMACharacter_GetRemoteViewPitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.GetIsWarpingOut
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACharacter::GetIsWarpingOut()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.GetIsWarpingOut");
	}

	AMACharacter_GetIsWarpingOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.GetHealthPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMACharacter::GetHealthPct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.GetHealthPct");
	}

	AMACharacter_GetHealthPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.GetHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMACharacter::GetHealth()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.GetHealth");
	}

	AMACharacter_GetHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.GetEnergyPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMACharacter::GetEnergyPct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.GetEnergyPct");
	}

	AMACharacter_GetEnergyPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.GetEnergy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMACharacter::GetEnergy()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.GetEnergy");
	}

	AMACharacter_GetEnergy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.GetAccelerationYaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMACharacter::GetAccelerationYaw()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.GetAccelerationYaw");
	}

	AMACharacter_GetAccelerationYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.EndInvulnerability
// (Native, Public, BlueprintCallable)
void AMACharacter::EndInvulnerability()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.EndInvulnerability");
	}

	AMACharacter_EndInvulnerability_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.DiscardInventory
// (Native, Public, BlueprintCallable)
void AMACharacter::DiscardInventory()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.DiscardInventory");
	}

	AMACharacter_DiscardInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.CycleZoom
// (Native, Public, BlueprintCallable)
void AMACharacter::CycleZoom()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.CycleZoom");
	}

	AMACharacter_CycleZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.ClientLoadoutRefreshed
// (Net, NetReliable, Native, Event, Public, NetClient)
void AMACharacter::ClientLoadoutRefreshed()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.ClientLoadoutRefreshed");
	}

	AMACharacter_ClientLoadoutRefreshed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.ClearTriggers
// (Final, Native, Public, BlueprintCallable)
void AMACharacter::ClearTriggers()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.ClearTriggers");
	}

	AMACharacter_ClearTriggers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.CleanupDeadBody
// (Native, Protected)
void AMACharacter::CleanupDeadBody()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.CleanupDeadBody");
	}

	AMACharacter_CleanupDeadBody_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.CameraShakeUpdated
// (Native, Public)
void AMACharacter::CameraShakeUpdated()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.CameraShakeUpdated");
	}

	AMACharacter_CameraShakeUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.BP_UpdateForClientPerspective
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bFirstPerson                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACharacter::BP_UpdateForClientPerspective(bool bFirstPerson)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.BP_UpdateForClientPerspective");
	}

	AMACharacter_BP_UpdateForClientPerspective_Params params;
	params.bFirstPerson = bFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.BP_OnRep_PlayerState
// (Event, Public, BlueprintEvent)
void AMACharacter::BP_OnRep_PlayerState()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.BP_OnRep_PlayerState");
	}

	AMACharacter_BP_OnRep_PlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacter.BP_GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator AMACharacter::BP_GetViewRotation()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.BP_GetViewRotation");
	}

	AMACharacter_BP_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacter.AddItem
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AMAItem*                 ItemToAdd                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAutoActivate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACharacter::AddItem(class AMAItem* ItemToAdd, bool bAutoActivate)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacter.AddItem");
	}

	AMACharacter_AddItem_Params params;
	params.ItemToAdd = ItemToAdd;
	params.bAutoActivate = bAutoActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACharacterMovement.MAServerMove
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FMAPackedMoveBundle     Bundle                         (ConstParm, Parm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UMACharacterMovement::MAServerMove(const struct FMAPackedMoveBundle& Bundle)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacterMovement.MAServerMove");
	}

	UMACharacterMovement_MAServerMove_Params params;
	params.Bundle = Bundle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacterMovement.MAClientAdjustEnergy
// (Net, Native, Event, Public, NetClient)
// Parameters:
// float                          Energy                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMACharacterMovement::MAClientAdjustEnergy(float Energy)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacterMovement.MAClientAdjustEnergy");
	}

	UMACharacterMovement_MAClientAdjustEnergy_Params params;
	params.Energy = Energy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACharacterMovement.IsSkatingOnGround
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMACharacterMovement::IsSkatingOnGround()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACharacterMovement.IsSkatingOnGround");
	}

	UMACharacterMovement_IsSkatingOnGround_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACoreControllerInterface.PlayRecordedInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// MidairCE_EPlayerRecordableInputTypes InputType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMACoreControllerInterface::PlayRecordedInput(MidairCE_EPlayerRecordableInputTypes InputType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACoreControllerInterface.PlayRecordedInput");
	}

	UMACoreControllerInterface_PlayRecordedInput_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACoreControllerInterface.PlayRecordedCameraInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMACoreControllerInterface::PlayRecordedCameraInput(float Pitch, float Yaw)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACoreControllerInterface.PlayRecordedCameraInput");
	}

	UMACoreControllerInterface_PlayRecordedCameraInput_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACTFFlag.OnStop
// (Native, Public, HasOutParms)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AMACTFFlag::OnStop(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACTFFlag.OnStop");
	}

	AMACTFFlag_OnStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACTFFlag.OnBounce
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACTFFlag::OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACTFFlag.OnBounce");
	}

	AMACTFFlag_OnBounce_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameState.SortPlayersByScore
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class APlayerState*>    Players                        (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AMAGameState::SortPlayersByScore(TArray<class APlayerState*>* Players)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.SortPlayersByScore");
	}

	AMAGameState_SortPlayersByScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

}


// Function MidairCE.MAGameState.ServerRequestEnableTournamentMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAGameState::ServerRequestEnableTournamentMode(bool bIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.ServerRequestEnableTournamentMode");
	}

	AMAGameState_ServerRequestEnableTournamentMode_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameState.ServerRequestEnablePracticeMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAGameState::ServerRequestEnablePracticeMode(bool bIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.ServerRequestEnablePracticeMode");
	}

	AMAGameState_ServerRequestEnablePracticeMode_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameState.PredictWinner
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// MidairCE_EMapVoteOption        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MidairCE_EMapVoteOption AMAGameState::PredictWinner()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.PredictWinner");
	}

	AMAGameState_PredictWinner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.OnSameTeam
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor1                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor2                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAGameState::OnSameTeam(class AActor* Actor1, class AActor* Actor2)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.OnSameTeam");
	}

	AMAGameState_OnSameTeam_Params params;
	params.Actor1 = Actor1;
	params.Actor2 = Actor2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.OnRep_WinningOption
// (Final, Native, Public)
void AMAGameState::OnRep_WinningOption()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.OnRep_WinningOption");
	}

	AMAGameState_OnRep_WinningOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameState.OnRep_VotingStage
// (Final, Native, Public)
void AMAGameState::OnRep_VotingStage()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.OnRep_VotingStage");
	}

	AMAGameState_OnRep_VotingStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameState.OnRep_TeamArray
// (Final, Native, Public)
void AMAGameState::OnRep_TeamArray()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.OnRep_TeamArray");
	}

	AMAGameState_OnRep_TeamArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameState.OnRep_PunishVote
// (Final, Native, Public)
void AMAGameState::OnRep_PunishVote()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.OnRep_PunishVote");
	}

	AMAGameState_OnRep_PunishVote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameState.OnRep_MapVoteOptions
// (Final, Native, Public)
void AMAGameState::OnRep_MapVoteOptions()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.OnRep_MapVoteOptions");
	}

	AMAGameState_OnRep_MapVoteOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameState.IsAnySimpleVoteInProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAGameState::IsAnySimpleVoteInProgress()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.IsAnySimpleVoteInProgress");
	}

	AMAGameState_IsAnySimpleVoteInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.GetVotesForOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// MidairCE_EMapVoteOption        Option                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char AMAGameState::GetVotesForOption(MidairCE_EMapVoteOption Option)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetVotesForOption");
	}

	AMAGameState_GetVotesForOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.GetTotalPlayersOnTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char AMAGameState::GetTotalPlayersOnTeam(unsigned char TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetTotalPlayersOnTeam");
	}

	AMAGameState_GetTotalPlayersOnTeam_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.GetTeamStateById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMATeamState*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMATeamState* AMAGameState::GetTeamStateById(unsigned char TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetTeamStateById");
	}

	AMAGameState_GetTeamStateById_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.GetTeamMaxObjectCount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ObjectType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char AMAGameState::GetTeamMaxObjectCount(class UClass* ObjectType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetTeamMaxObjectCount");
	}

	AMAGameState_GetTeamMaxObjectCount_Params params;
	params.ObjectType = ObjectType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.GetRankedPlayerArrays
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AMAPlayerState*>  Team1RankedArray               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class AMAPlayerState*>  Team2RankedArray               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void AMAGameState::GetRankedPlayerArrays(TArray<class AMAPlayerState*>* Team1RankedArray, TArray<class AMAPlayerState*>* Team2RankedArray)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetRankedPlayerArrays");
	}

	AMAGameState_GetRankedPlayerArrays_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Team1RankedArray != nullptr)
		*Team1RankedArray = params.Team1RankedArray;
	if (Team2RankedArray != nullptr)
		*Team2RankedArray = params.Team2RankedArray;

}


// Function MidairCE.MAGameState.GetRankedPlayerArray
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AMAPlayerState*>  RankedArray                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void AMAGameState::GetRankedPlayerArray(TArray<class AMAPlayerState*>* RankedArray)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetRankedPlayerArray");
	}

	AMAGameState_GetRankedPlayerArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RankedArray != nullptr)
		*RankedArray = params.RankedArray;

}


// Function MidairCE.MAGameState.GetMatchStatus
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText AMAGameState::GetMatchStatus()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetMatchStatus");
	}

	AMAGameState_GetMatchStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.GetMAGameModeClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* AMAGameState::GetMAGameModeClass()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetMAGameModeClass");
	}

	AMAGameState_GetMAGameModeClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.GetLivesLeftOnTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMAGameState::GetLivesLeftOnTeam(unsigned char TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetLivesLeftOnTeam");
	}

	AMAGameState_GetLivesLeftOnTeam_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.GetLivePlayersOnTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char AMAGameState::GetLivePlayersOnTeam(unsigned char TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetLivePlayersOnTeam");
	}

	AMAGameState_GetLivePlayersOnTeam_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.GetGameTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString AMAGameState::GetGameTime()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetGameTime");
	}

	AMAGameState_GetGameTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.GetFlagHolderTimer
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText AMAGameState::GetFlagHolderTimer()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetFlagHolderTimer");
	}

	AMAGameState_GetFlagHolderTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.GetCurrentJackpot
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText AMAGameState::GetCurrentJackpot()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetCurrentJackpot");
	}

	AMAGameState_GetCurrentJackpot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameState.GetCurrentHolder
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText AMAGameState::GetCurrentHolder()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameState.GetCurrentHolder");
	}

	AMAGameState_GetCurrentHolder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACTFGameState.GetTeamFlag
// (Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMACarriedObject*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMACarriedObject* AMACTFGameState::GetTeamFlag(unsigned char TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACTFGameState.GetTeamFlag");
	}

	AMACTFGameState_GetTeamFlag_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACTFGameState.GetIsFlagHolder
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerState*          PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMACTFGameState::GetIsFlagHolder(class AMAPlayerState* PlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACTFGameState.GetIsFlagHolder");
	}

	AMACTFGameState_GetIsFlagHolder_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACTFGameState.GetFlagStateName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName AMACTFGameState::GetFlagStateName(unsigned char TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACTFGameState.GetFlagStateName");
	}

	AMACTFGameState_GetFlagStateName_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACTFGameState.GetFlagBase
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMACTFFlagBase*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMACTFFlagBase* AMACTFGameState::GetFlagBase(unsigned char TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACTFGameState.GetFlagBase");
	}

	AMACTFGameState_GetFlagBase_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MACTFPlayerState.IncrementMidairCarrierKills
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMAPlayerState*          Victim                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACTFPlayerState::IncrementMidairCarrierKills(class UClass* DamageType, class AMAPlayerState* Victim)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACTFPlayerState.IncrementMidairCarrierKills");
	}

	AMACTFPlayerState_IncrementMidairCarrierKills_Params params;
	params.DamageType = DamageType;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MACTFPlayerState.IncrementMidairCarrierDeaths
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMAPlayerState*          Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMACTFPlayerState::IncrementMidairCarrierDeaths(class UClass* DamageType, class AMAPlayerState* Killer)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MACTFPlayerState.IncrementMidairCarrierDeaths");
	}

	AMACTFPlayerState_IncrementMidairCarrierDeaths_Params params;
	params.DamageType = DamageType;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MADamageType.ComputeDamageSkillRating
// (Native, Public, Const)
// Parameters:
// float                          PreviousSkillRating            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMidairHit                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RadialDamageScale              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMADamageType::ComputeDamageSkillRating(float PreviousSkillRating, class AActor* Instigator, class AActor* Victim, bool bMidairHit, float RadialDamageScale)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MADamageType.ComputeDamageSkillRating");
	}

	UMADamageType_ComputeDamageSkillRating_Params params;
	params.PreviousSkillRating = PreviousSkillRating;
	params.Instigator = Instigator;
	params.Victim = Victim;
	params.bMidairHit = bMidairHit;
	params.RadialDamageScale = RadialDamageScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MALocalMessage.GetTextColor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            MessageIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UMALocalMessage::GetTextColor(int MessageIndex)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MALocalMessage.GetTextColor");
	}

	UMALocalMessage_GetTextColor_Params params;
	params.MessageIndex = MessageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MALocalMessage.GetText
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLocalMessageData       MessageData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMALocalMessage::GetText(const struct FLocalMessageData& MessageData)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MALocalMessage.GetText");
	}

	UMALocalMessage_GetText_Params params;
	params.MessageData = MessageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameInstance.ShowMatchMakingWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameInstance::ShowMatchMakingWidget(bool Show)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.ShowMatchMakingWidget");
	}

	UMAGameInstance_ShowMatchMakingWidget_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.ShowBanWidget
// (Final, Native, Public, BlueprintCallable)
void UMAGameInstance::ShowBanWidget()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.ShowBanWidget");
	}

	UMAGameInstance_ShowBanWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.SaveMouseSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DPI                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Sensitivity                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInvertY                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameInstance::SaveMouseSettings(float DPI, float Sensitivity, bool bInvertY)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.SaveMouseSettings");
	}

	UMAGameInstance_SaveMouseSettings_Params params;
	params.DPI = DPI;
	params.Sensitivity = Sensitivity;
	params.bInvertY = bInvertY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.SaveInputSettings
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FInputActionKeyMapping> ActionMappings                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FInputAxisKeyMapping> AxisMappings                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UMAGameInstance::SaveInputSettings(TArray<struct FInputActionKeyMapping> ActionMappings, TArray<struct FInputAxisKeyMapping> AxisMappings)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.SaveInputSettings");
	}

	UMAGameInstance_SaveInputSettings_Params params;
	params.ActionMappings = ActionMappings;
	params.AxisMappings = AxisMappings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.ResetInputSettings
// (Final, Native, Public, BlueprintCallable)
void UMAGameInstance::ResetInputSettings()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.ResetInputSettings");
	}

	UMAGameInstance_ResetInputSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.OpenFriendOverlayForInvite
// (Final, Native, Public, BlueprintCallable)
void UMAGameInstance::OpenFriendOverlayForInvite()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.OpenFriendOverlayForInvite");
	}

	UMAGameInstance_OpenFriendOverlayForInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.OnNetworkFailure
// (Final, Native, Public)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNetDriver*              NetDriver                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ENetworkFailure> FailureType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ErrorString                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameInstance::OnNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<Engine_ENetworkFailure> FailureType, const struct FString& ErrorString)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.OnNetworkFailure");
	}

	UMAGameInstance_OnNetworkFailure_Params params;
	params.World = World;
	params.NetDriver = NetDriver;
	params.FailureType = FailureType;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.InputPasswordForSteamPresence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RichPresence                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 JoinPassword                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameInstance::InputPasswordForSteamPresence(const struct FString& RichPresence, const struct FString& JoinPassword)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.InputPasswordForSteamPresence");
	}

	UMAGameInstance_InputPasswordForSteamPresence_Params params;
	params.RichPresence = RichPresence;
	params.JoinPassword = JoinPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.HideLoadingScreen
// (Final, Native, Public, BlueprintCallable)
void UMAGameInstance::HideLoadingScreen()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.HideLoadingScreen");
	}

	UMAGameInstance_HideLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.HandlePlayerComplete
// (Final, Native, Public, BlueprintCallable)
void UMAGameInstance::HandlePlayerComplete()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.HandlePlayerComplete");
	}

	UMAGameInstance_HandlePlayerComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.GetSoundCueForVoiceSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  VoiceSet                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SoundCueId                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USoundCue* UMAGameInstance::GetSoundCueForVoiceSet(class UClass* VoiceSet, int SoundCueId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.GetSoundCueForVoiceSet");
	}

	UMAGameInstance_GetSoundCueForVoiceSet_Params params;
	params.VoiceSet = VoiceSet;
	params.SoundCueId = SoundCueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameInstance.GetSoundCueForAnnouncer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SoundCueId                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundCue*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USoundCue* UMAGameInstance::GetSoundCueForAnnouncer(int SoundCueId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.GetSoundCueForAnnouncer");
	}

	UMAGameInstance_GetSoundCueForAnnouncer_Params params;
	params.SoundCueId = SoundCueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameInstance.GetServiceState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// MidairCE_EMAServiceState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MidairCE_EMAServiceState UMAGameInstance::GetServiceState()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.GetServiceState");
	}

	UMAGameInstance_GetServiceState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameInstance.GetServerAddress
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMAGameInstance::GetServerAddress(const struct FBlueprintSessionResult& SearchResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.GetServerAddress");
	}

	UMAGameInstance_GetServerAddress_Params params;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameInstance.GetRootProgressionObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObjectInfo*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObjectInfo* UMAGameInstance::GetRootProgressionObject()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.GetRootProgressionObject");
	}

	UMAGameInstance_GetRootProgressionObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameInstance.GetPlayerExpressionIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPlayerExpressionData   Expression                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMAGameInstance::GetPlayerExpressionIndex(const struct FPlayerExpressionData& Expression)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.GetPlayerExpressionIndex");
	}

	UMAGameInstance_GetPlayerExpressionIndex_Params params;
	params.Expression = Expression;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameInstance.GetPlayerDetails
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMAGameInstance::GetPlayerDetails(const struct FBlueprintSessionResult& SearchResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.GetPlayerDetails");
	}

	UMAGameInstance_GetPlayerDetails_Params params;
	params.SearchResult = SearchResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.GetMouseSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DPI                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Sensitivty                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInvertY                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameInstance::GetMouseSettings(float* DPI, float* Sensitivty, bool* bInvertY)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.GetMouseSettings");
	}

	UMAGameInstance_GetMouseSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DPI != nullptr)
		*DPI = params.DPI;
	if (Sensitivty != nullptr)
		*Sensitivty = params.Sensitivty;
	if (bInvertY != nullptr)
		*bInvertY = params.bInvertY;

}


// Function MidairCE.MAGameInstance.GetInputAxisMappings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FInputAxisKeyMapping> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FInputAxisKeyMapping> UMAGameInstance::GetInputAxisMappings()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.GetInputAxisMappings");
	}

	UMAGameInstance_GetInputAxisMappings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameInstance.GetInputActionMappings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FInputActionKeyMapping> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FInputActionKeyMapping> UMAGameInstance::GetInputActionMappings()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.GetInputActionMappings");
	}

	UMAGameInstance_GetInputActionMappings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameInstance.GetCurrenSeason
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMAGameInstance::GetCurrenSeason()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.GetCurrenSeason");
	}

	UMAGameInstance_GetCurrenSeason_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameInstance.FindSessions
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InFindSessionsResultsDelegate  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// MidairCE_EFindSessionsSortMethod SortMethod                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHideFull                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameInstance::FindSessions(const struct FScriptDelegate& InFindSessionsResultsDelegate, MidairCE_EFindSessionsSortMethod SortMethod, bool bHideFull)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.FindSessions");
	}

	UMAGameInstance_FindSessions_Params params;
	params.InFindSessionsResultsDelegate = InFindSessionsResultsDelegate;
	params.SortMethod = SortMethod;
	params.bHideFull = bHideFull;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.ClientJoinSession
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class ULocalPlayer*            Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 Password                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameInstance::ClientJoinSession(class ULocalPlayer* Player, const struct FBlueprintSessionResult& SearchResult, const struct FString& Password)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.ClientJoinSession");
	}

	UMAGameInstance_ClientJoinSession_Params params;
	params.Player = Player;
	params.SearchResult = SearchResult;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameInstance.ClearLastNetworkError
// (Final, Native, Public, BlueprintCallable)
void UMAGameInstance::ClearLastNetworkError()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.ClearLastNetworkError");
	}

	UMAGameInstance_ClearLastNetworkError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameInstance.CheckAndHandleNamedEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameInstance::CheckAndHandleNamedEvent(const struct FName& Name)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.CheckAndHandleNamedEvent");
	}

	UMAGameInstance_CheckAndHandleNamedEvent_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameInstance.AuthenticateWithService
// (Final, Native, Private)
void UMAGameInstance::AuthenticateWithService()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameInstance.AuthenticateWithService");
	}

	UMAGameInstance_AuthenticateWithService_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.TryUpdateAudioComponentPerspective
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameplayStatics::STATIC_TryUpdateAudioComponentPerspective(class UAudioComponent* AudioComponent, bool bInFirstPerson)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.TryUpdateAudioComponentPerspective");
	}

	UMAGameplayStatics_TryUpdateAudioComponentPerspective_Params params;
	params.AudioComponent = AudioComponent;
	params.bInFirstPerson = bInFirstPerson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.StashPresentationItems
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UClass*>          Items                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UMAGameplayStatics::STATIC_StashPresentationItems(class UObject* WorldContextObject, TArray<class UClass*> Items)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.StashPresentationItems");
	}

	UMAGameplayStatics_StashPresentationItems_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Items = Items;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.SpawnPerspectiveSoundAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EAttachLocation> LocationType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundConcurrency*       ConcurrencySettings            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAudioComponent* UMAGameplayStatics::STATIC_SpawnPerspectiveSoundAttached(class USoundBase* Sound, bool bInFirstPerson, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.SpawnPerspectiveSoundAttached");
	}

	UMAGameplayStatics_SpawnPerspectiveSoundAttached_Params params;
	params.Sound = Sound;
	params.bInFirstPerson = bInFirstPerson;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;
	params.ConcurrencySettings = ConcurrencySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.SpawnClientServerProjectile
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                   Instigator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMAPlayerController*     InstigatorController           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ProjectileClass                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 SpawnLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                SpawnRotation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          DamageModifier                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMAProjectile*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMAProjectile* UMAGameplayStatics::STATIC_SpawnClientServerProjectile(class APawn* Instigator, class AMAPlayerController* InstigatorController, class UClass* ProjectileClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, float DamageModifier)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.SpawnClientServerProjectile");
	}

	UMAGameplayStatics_SpawnClientServerProjectile_Params params;
	params.Instigator = Instigator;
	params.InstigatorController = InstigatorController;
	params.ProjectileClass = ProjectileClass;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.DamageModifier = DamageModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.ShowStorePageForItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameplayStatics::STATIC_ShowStorePageForItem(class UClass* ItemClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.ShowStorePageForItem");
	}

	UMAGameplayStatics_ShowStorePageForItem_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.ShowStorePage
// (Final, Native, Static, Public, BlueprintCallable)
void UMAGameplayStatics::STATIC_ShowStorePage()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.ShowStorePage");
	}

	UMAGameplayStatics_ShowStorePage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.ShowDLCStorePage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Appid                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameplayStatics::STATIC_ShowDLCStorePage(int Appid)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.ShowDLCStorePage");
	}

	UMAGameplayStatics_ShowDLCStorePage_Params params;
	params.Appid = Appid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.ShouldShowPerformanceStats
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameplayStatics::STATIC_ShouldShowPerformanceStats()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.ShouldShowPerformanceStats");
	}

	UMAGameplayStatics_ShouldShowPerformanceStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.SetTeamColorOnMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameplayStatics::STATIC_SetTeamColorOnMesh(class UMeshComponent* Mesh, unsigned char TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.SetTeamColorOnMesh");
	}

	UMAGameplayStatics_SetTeamColorOnMesh_Params params;
	params.Mesh = Mesh;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.SetSoundClassVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundClass*             SoundClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewVolume                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameplayStatics::STATIC_SetSoundClassVolume(class USoundClass* SoundClass, float NewVolume)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.SetSoundClassVolume");
	}

	UMAGameplayStatics_SetSoundClassVolume_Params params;
	params.SoundClass = SoundClass;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.SetSoundClassRadioFilterVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundClass*             SoundClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewVolume                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameplayStatics::STATIC_SetSoundClassRadioFilterVolume(class USoundClass* SoundClass, float NewVolume)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.SetSoundClassRadioFilterVolume");
	}

	UMAGameplayStatics_SetSoundClassRadioFilterVolume_Params params;
	params.SoundClass = SoundClass;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.SetLowPassFilterOnAllSounds
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Frequency                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameplayStatics::STATIC_SetLowPassFilterOnAllSounds(class UObject* WorldContextObject, bool bEnable, float Frequency)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.SetLowPassFilterOnAllSounds");
	}

	UMAGameplayStatics_SetLowPassFilterOnAllSounds_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bEnable = bEnable;
	params.Frequency = Frequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.SetDefaultNamedCosmeticForLoadout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameplayStatics::STATIC_SetDefaultNamedCosmeticForLoadout(const struct FName& Name, class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.SetDefaultNamedCosmeticForLoadout");
	}

	UMAGameplayStatics_SetDefaultNamedCosmeticForLoadout_Params params;
	params.Name = Name;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.SetAudioComponentPerspective
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameplayStatics::STATIC_SetAudioComponentPerspective(class UAudioComponent* AudioComponent, bool bInFirstPerson)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.SetAudioComponentPerspective");
	}

	UMAGameplayStatics_SetAudioComponentPerspective_Params params;
	params.AudioComponent = AudioComponent;
	params.bInFirstPerson = bInFirstPerson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.RefreshInventory
// (Final, Native, Static, Public, BlueprintCallable)
void UMAGameplayStatics::STATIC_RefreshInventory()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.RefreshInventory");
	}

	UMAGameplayStatics_RefreshInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.PurchaseCreditBundle
// (Final, Native, Static, Public, BlueprintCallable)
void UMAGameplayStatics::STATIC_PurchaseCreditBundle()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.PurchaseCreditBundle");
	}

	UMAGameplayStatics_PurchaseCreditBundle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.PredictProjectileCollisionPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ProjectileClass                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 InitialLocation                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                FireRotation                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          TimePerStep                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxPredictionTime              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FHitResult UMAGameplayStatics::STATIC_PredictProjectileCollisionPoint(class UWorld* World, class UClass* ProjectileClass, const struct FVector& InitialLocation, const struct FRotator& FireRotation, float TimePerStep, float MaxPredictionTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.PredictProjectileCollisionPoint");
	}

	UMAGameplayStatics_PredictProjectileCollisionPoint_Params params;
	params.World = World;
	params.ProjectileClass = ProjectileClass;
	params.InitialLocation = InitialLocation;
	params.FireRotation = FireRotation;
	params.TimePerStep = TimePerStep;
	params.MaxPredictionTime = MaxPredictionTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.MAPlayWorldCameraShake
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWorldCameraShakeParams ShakeParams                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 Epicenter                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ShakeClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameplayStatics::STATIC_MAPlayWorldCameraShake(class UObject* WorldContextObject, const struct FWorldCameraShakeParams& ShakeParams, const struct FVector& Epicenter, class UClass* ShakeClass, TArray<class AActor*> IgnoreActors)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.MAPlayWorldCameraShake");
	}

	UMAGameplayStatics_MAPlayWorldCameraShake_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ShakeParams = ShakeParams;
	params.Epicenter = Epicenter;
	params.ShakeClass = ShakeClass;
	params.IgnoreActors = IgnoreActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.MakeSpline
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext           Context                        (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               InStart                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InStartDir                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InEnd                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               InEndDir                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InThickness                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            InTint                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LayerOffset                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameplayStatics::STATIC_MakeSpline(struct FPaintContext* Context, const struct FVector2D& InStart, const struct FVector2D& InStartDir, const struct FVector2D& InEnd, const struct FVector2D& InEndDir, float InThickness, const struct FLinearColor& InTint, int LayerOffset)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.MakeSpline");
	}

	UMAGameplayStatics_MakeSpline_Params params;
	params.InStart = InStart;
	params.InStartDir = InStartDir;
	params.InEnd = InEnd;
	params.InEndDir = InEndDir;
	params.InThickness = InThickness;
	params.InTint = InTint;
	params.LayerOffset = LayerOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function MidairCE.MAGameplayStatics.MAGetDamageImpulse
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AActor*                  HitActor                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             EventInstigator                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UMAGameplayStatics::STATIC_MAGetDamageImpulse(const struct FDamageEvent& DamageEvent, class AActor* HitActor, class AController* EventInstigator)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.MAGetDamageImpulse");
	}

	UMAGameplayStatics_MAGetDamageImpulse_Params params;
	params.DamageEvent = DamageEvent;
	params.HitActor = HitActor;
	params.EventInstigator = EventInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.MAApplyRadialDamage
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRadialDamageParams     DamageParams                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             InstigatedByController         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameplayStatics::STATIC_MAApplyRadialDamage(class UObject* WorldContextObject, const struct FRadialDamageParams& DamageParams, const struct FVector& Origin, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.MAApplyRadialDamage");
	}

	UMAGameplayStatics_MAApplyRadialDamage_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DamageParams = DamageParams;
	params.Origin = Origin;
	params.DamageTypeClass = DamageTypeClass;
	params.IgnoreActors = IgnoreActors;
	params.DamageCauser = DamageCauser;
	params.InstigatedByController = InstigatedByController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.IsSteamConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameplayStatics::STATIC_IsSteamConnected()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.IsSteamConnected");
	}

	UMAGameplayStatics_IsSteamConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.IsItemUnlockedForUser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameplayStatics::STATIC_IsItemUnlockedForUser(class UClass* ItemClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.IsItemUnlockedForUser");
	}

	UMAGameplayStatics_IsItemUnlockedForUser_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.IsDLCOwned
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Appid                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameplayStatics::STATIC_IsDLCOwned(int Appid)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.IsDLCOwned");
	}

	UMAGameplayStatics_IsDLCOwned_Params params;
	params.Appid = Appid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetStashedPresentationItems
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UClass*> UMAGameplayStatics::STATIC_GetStashedPresentationItems(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetStashedPresentationItems");
	}

	UMAGameplayStatics_GetStashedPresentationItems_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetRecentlyRendered
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkinnedMeshComponent*   MeshComponent                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameplayStatics::STATIC_GetRecentlyRendered(class USkinnedMeshComponent* MeshComponent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetRecentlyRendered");
	}

	UMAGameplayStatics_GetRecentlyRendered_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetProjectVersionString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMAGameplayStatics::STATIC_GetProjectVersionString()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetProjectVersionString");
	}

	UMAGameplayStatics_GetProjectVersionString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetPredictedLOD
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkinnedMeshComponent*   MeshComponent                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMAGameplayStatics::STATIC_GetPredictedLOD(class USkinnedMeshComponent* MeshComponent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetPredictedLOD");
	}

	UMAGameplayStatics_GetPredictedLOD_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetObjectInfoClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UMAGameplayStatics::STATIC_GetObjectInfoClass(class UClass* ObjectClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetObjectInfoClass");
	}

	UMAGameplayStatics_GetObjectInfoClass_Params params;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetObjectInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObjectInfo*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObjectInfo* UMAGameplayStatics::STATIC_GetObjectInfo(class UClass* ObjectClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetObjectInfo");
	}

	UMAGameplayStatics_GetObjectInfo_Params params;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetMutableDefaultObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UMAGameplayStatics::STATIC_GetMutableDefaultObject(class UClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetMutableDefaultObject");
	}

	UMAGameplayStatics_GetMutableDefaultObject_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetMAGameState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMAGameState*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMAGameState* UMAGameplayStatics::STATIC_GetMAGameState(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetMAGameState");
	}

	UMAGameplayStatics_GetMAGameState_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetItemsBySteamDefinedType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// MidairCE_EDefinedItemType      Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  AssociativeFilter              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UClass*> UMAGameplayStatics::STATIC_GetItemsBySteamDefinedType(MidairCE_EDefinedItemType Type, class UClass* AssociativeFilter)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetItemsBySteamDefinedType");
	}

	UMAGameplayStatics_GetItemsBySteamDefinedType_Params params;
	params.Type = Type;
	params.AssociativeFilter = AssociativeFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetIsEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameplayStatics::STATIC_GetIsEditor()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetIsEditor");
	}

	UMAGameplayStatics_GetIsEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetDistanceFromPointToCollision
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAGameplayStatics::STATIC_GetDistanceFromPointToCollision(const struct FVector& Point, class UPrimitiveComponent* Component)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetDistanceFromPointToCollision");
	}

	UMAGameplayStatics_GetDistanceFromPointToCollision_Params params;
	params.Point = Point;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetDefaultNamedCosmeticForLoadout
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UMAGameplayStatics::STATIC_GetDefaultNamedCosmeticForLoadout(const struct FName& Name)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetDefaultNamedCosmeticForLoadout");
	}

	UMAGameplayStatics_GetDefaultNamedCosmeticForLoadout_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetCurrentLoadoutName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMAGameplayStatics::STATIC_GetCurrentLoadoutName()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetCurrentLoadoutName");
	}

	UMAGameplayStatics_GetCurrentLoadoutName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetCredits
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMAGameplayStatics::STATIC_GetCredits()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetCredits");
	}

	UMAGameplayStatics_GetCredits_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetCatchUpTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAGameplayStatics::STATIC_GetCatchUpTime(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetCatchUpTime");
	}

	UMAGameplayStatics_GetCatchUpTime_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetCarriedObjectsFromOverlap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameplayStatics::STATIC_GetCarriedObjectsFromOverlap(class UPrimitiveComponent* OverlappedComponent, unsigned char TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetCarriedObjectsFromOverlap");
	}

	UMAGameplayStatics_GetCarriedObjectsFromOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetActorInfoObjectFromActorClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObjectInfo*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObjectInfo* UMAGameplayStatics::STATIC_GetActorInfoObjectFromActorClass(class UClass* ActorClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetActorInfoObjectFromActorClass");
	}

	UMAGameplayStatics_GetActorInfoObjectFromActorClass_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.GetActorInfoObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  ActorInfoClass                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObjectInfo*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObjectInfo* UMAGameplayStatics::STATIC_GetActorInfoObject(class UClass* ActorInfoClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.GetActorInfoObject");
	}

	UMAGameplayStatics_GetActorInfoObject_Params params;
	params.ActorInfoClass = ActorInfoClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.FindComponentPerClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UClass*>          Classes                        (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
// TMap<class UClass*, class UActorComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TMap<class UClass*, class UActorComponent*> UMAGameplayStatics::STATIC_FindComponentPerClass(class AActor* Actor, TArray<class UClass*> Classes)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.FindComponentPerClass");
	}

	UMAGameplayStatics_FindComponentPerClass_Params params;
	params.Actor = Actor;
	params.Classes = Classes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.EjectCarriedObjectsFromOverlap
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 EjectVelocity                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAGameplayStatics::STATIC_EjectCarriedObjectsFromOverlap(class UPrimitiveComponent* OverlappedComponent, const struct FVector& EjectVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.EjectCarriedObjectsFromOverlap");
	}

	UMAGameplayStatics_EjectCarriedObjectsFromOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.EjectVelocity = EjectVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.ConvertUUVelocityToKPH
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 UUVelocity                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAGameplayStatics::STATIC_ConvertUUVelocityToKPH(const struct FVector& UUVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.ConvertUUVelocityToKPH");
	}

	UMAGameplayStatics_ConvertUUVelocityToKPH_Params params;
	params.UUVelocity = UUVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.ConvertUUSpeedToKPH
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          UUSpeed                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAGameplayStatics::STATIC_ConvertUUSpeedToKPH(float UUSpeed)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.ConvertUUSpeedToKPH");
	}

	UMAGameplayStatics_ConvertUUSpeedToKPH_Params params;
	params.UUSpeed = UUSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameplayStatics.CheckBeginOverlapForEjection
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInvertNormal                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BodyIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UMAGameplayStatics::STATIC_CheckBeginOverlapForEjection(class AActor* SelfActor, bool bInvertNormal, class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.CheckBeginOverlapForEjection");
	}

	UMAGameplayStatics_CheckBeginOverlapForEjection_Params params;
	params.SelfActor = SelfActor;
	params.bInvertNormal = bInvertNormal;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.BodyIndex = BodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameplayStatics.CheckAreaForSpecificActorClass
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ECollisionChannel> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 BaseLocation                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AActor*> UMAGameplayStatics::STATIC_CheckAreaForSpecificActorClass(class UObject* WorldContextObject, class UClass* ActorClass, TEnumAsByte<Engine_ECollisionChannel> TraceChannel, const struct FVector& BaseLocation, float Radius)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameplayStatics.CheckAreaForSpecificActorClass");
	}

	UMAGameplayStatics_CheckAreaForSpecificActorClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.TraceChannel = TraceChannel;
	params.BaseLocation = BaseLocation;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.SetUserFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewFOV                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::SetUserFOV(float NewFOV)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.SetUserFOV");
	}

	UMAGameUserSettings_SetUserFOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameUserSettings.SetTeamColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                  Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::SetTeamColor(int TeamId, const struct FColor& Color)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.SetTeamColor");
	}

	UMAGameUserSettings_SetTeamColor_Params params;
	params.TeamId = TeamId;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameUserSettings.SetSoundClassVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundClass*             Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::SetSoundClassVolume(class USoundClass* Class, float Volume)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.SetSoundClassVolume");
	}

	UMAGameUserSettings_SetSoundClassVolume_Params params;
	params.Class = Class;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameUserSettings.SetRelativeTeamColors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::SetRelativeTeamColors(bool State)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.SetRelativeTeamColors");
	}

	UMAGameUserSettings_SetRelativeTeamColors_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameUserSettings.SetIFFDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShouldShow                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::SetIFFDistance(bool ShouldShow)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.SetIFFDistance");
	}

	UMAGameUserSettings_SetIFFDistance_Params params;
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameUserSettings.SetFullscreenModeFromString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 AsString                       (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::SetFullscreenModeFromString(struct FString* AsString)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.SetFullscreenModeFromString");
	}

	UMAGameUserSettings_SetFullscreenModeFromString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsString != nullptr)
		*AsString = params.AsString;

}


// Function MidairCE.MAGameUserSettings.SetFrameRateCap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewFPC                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::SetFrameRateCap(float NewFPC)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.SetFrameRateCap");
	}

	UMAGameUserSettings_SetFrameRateCap_Params params;
	params.NewFPC = NewFPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameUserSettings.SetCrosshairIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 CrosshairType                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::SetCrosshairIndex(const struct FString& CrosshairType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.SetCrosshairIndex");
	}

	UMAGameUserSettings_SetCrosshairIndex_Params params;
	params.CrosshairType = CrosshairType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameUserSettings.SetCrosshairColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Color                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::SetCrosshairColor(const struct FString& Color)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.SetCrosshairColor");
	}

	UMAGameUserSettings_SetCrosshairColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameUserSettings.SetAllSettingsGroups
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AAQuality                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            VFXQuality                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FoliageQuality                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PPQuality                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ShadowQuality                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TextureQuality                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ViewDistance                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::SetAllSettingsGroups(int AAQuality, int VFXQuality, int FoliageQuality, int PPQuality, int ShadowQuality, int TextureQuality, int ViewDistance)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.SetAllSettingsGroups");
	}

	UMAGameUserSettings_SetAllSettingsGroups_Params params;
	params.AAQuality = AAQuality;
	params.VFXQuality = VFXQuality;
	params.FoliageQuality = FoliageQuality;
	params.PPQuality = PPQuality;
	params.ShadowQuality = ShadowQuality;
	params.TextureQuality = TextureQuality;
	params.ViewDistance = ViewDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameUserSettings.SetAdvancedSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InAnisotropy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InTextureStreamingPoolSize     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InMotionBlur                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::SetAdvancedSettings(int InAnisotropy, int InTextureStreamingPoolSize, int InMotionBlur)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.SetAdvancedSettings");
	}

	UMAGameUserSettings_SetAdvancedSettings_Params params;
	params.InAnisotropy = InAnisotropy;
	params.InTextureStreamingPoolSize = InTextureStreamingPoolSize;
	params.InMotionBlur = InMotionBlur;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameUserSettings.HideWelcomeMessage
// (Final, Native, Public, BlueprintCallable)
void UMAGameUserSettings::HideWelcomeMessage()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.HideWelcomeMessage");
	}

	UMAGameUserSettings_HideWelcomeMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAGameUserSettings.GetUserFOV
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAGameUserSettings::GetUserFOV()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetUserFOV");
	}

	UMAGameUserSettings_GetUserFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetTeamColorWithId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FColor UMAGameUserSettings::GetTeamColorWithId(int TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetTeamColorWithId");
	}

	UMAGameUserSettings_GetTeamColorWithId_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetTeamColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerController*     PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FColor UMAGameUserSettings::GetTeamColor(class AMAPlayerController* PlayerController, int TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetTeamColor");
	}

	UMAGameUserSettings_GetTeamColor_Params params;
	params.PlayerController = PlayerController;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetSoundClassVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USoundClass*             Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAGameUserSettings::GetSoundClassVolume(class USoundClass* Class)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetSoundClassVolume");
	}

	UMAGameUserSettings_GetSoundClassVolume_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetMAGameUserSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMAGameUserSettings*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMAGameUserSettings* UMAGameUserSettings::STATIC_GetMAGameUserSettings()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetMAGameUserSettings");
	}

	UMAGameUserSettings_GetMAGameUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetFrameRateCap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAGameUserSettings::GetFrameRateCap()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetFrameRateCap");
	}

	UMAGameUserSettings_GetFrameRateCap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetFPCMin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAGameUserSettings::STATIC_GetFPCMin()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetFPCMin");
	}

	UMAGameUserSettings_GetFPCMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetFPCMax
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAGameUserSettings::STATIC_GetFPCMax()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetFPCMax");
	}

	UMAGameUserSettings_GetFPCMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetFOVMin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAGameUserSettings::STATIC_GetFOVMin()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetFOVMin");
	}

	UMAGameUserSettings_GetFOVMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetFOVMax
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAGameUserSettings::STATIC_GetFOVMax()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetFOVMax");
	}

	UMAGameUserSettings_GetFOVMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetCrosshairType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMAGameUserSettings::GetCrosshairType()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetCrosshairType");
	}

	UMAGameUserSettings_GetCrosshairType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetCrosshairIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMAGameUserSettings::GetCrosshairIndex()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetCrosshairIndex");
	}

	UMAGameUserSettings_GetCrosshairIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetCrosshairColor
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMAGameUserSettings::GetCrosshairColor()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetCrosshairColor");
	}

	UMAGameUserSettings_GetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetCarriedObjectTeamColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FColor UMAGameUserSettings::GetCarriedObjectTeamColor(int TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetCarriedObjectTeamColor");
	}

	UMAGameUserSettings_GetCarriedObjectTeamColor_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAGameUserSettings.GetAllSettingsGroups
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            AAQuality                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            VFXQuality                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FoliageQuality                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PPQuality                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ShadowQuality                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TextureQuality                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ViewDistance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::GetAllSettingsGroups(int* AAQuality, int* VFXQuality, int* FoliageQuality, int* PPQuality, int* ShadowQuality, int* TextureQuality, int* ViewDistance)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetAllSettingsGroups");
	}

	UMAGameUserSettings_GetAllSettingsGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AAQuality != nullptr)
		*AAQuality = params.AAQuality;
	if (VFXQuality != nullptr)
		*VFXQuality = params.VFXQuality;
	if (FoliageQuality != nullptr)
		*FoliageQuality = params.FoliageQuality;
	if (PPQuality != nullptr)
		*PPQuality = params.PPQuality;
	if (ShadowQuality != nullptr)
		*ShadowQuality = params.ShadowQuality;
	if (TextureQuality != nullptr)
		*TextureQuality = params.TextureQuality;
	if (ViewDistance != nullptr)
		*ViewDistance = params.ViewDistance;

}


// Function MidairCE.MAGameUserSettings.GetAdvancedSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            OutAnisotropy                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OutTextureStreamingPoolSize    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OutMotionBlur                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAGameUserSettings::GetAdvancedSettings(int* OutAnisotropy, int* OutTextureStreamingPoolSize, int* OutMotionBlur)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.GetAdvancedSettings");
	}

	UMAGameUserSettings_GetAdvancedSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAnisotropy != nullptr)
		*OutAnisotropy = params.OutAnisotropy;
	if (OutTextureStreamingPoolSize != nullptr)
		*OutTextureStreamingPoolSize = params.OutTextureStreamingPoolSize;
	if (OutMotionBlur != nullptr)
		*OutMotionBlur = params.OutMotionBlur;

}


// Function MidairCE.MAGameUserSettings.ApplyFPCSetting
// (Final, Native, Public, BlueprintCallable)
void UMAGameUserSettings::ApplyFPCSetting()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAGameUserSettings.ApplyFPCSetting");
	}

	UMAGameUserSettings_ApplyFPCSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAHandGrenade.GetMaxAmmoCountFor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMACharacter*            Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AMAHandGrenade::GetMaxAmmoCountFor(class AMACharacter* Character)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHandGrenade.GetMaxAmmoCountFor");
	}

	AMAHandGrenade_GetMaxAmmoCountFor_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAHUD.UpdateReplayTime
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          PctOfReplay                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAHUD::UpdateReplayTime(float PctOfReplay)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.UpdateReplayTime");
	}

	AMAHUD_UpdateReplayTime_Params params;
	params.PctOfReplay = PctOfReplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAHUD.ToggleReplayHud
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAHUD::ToggleReplayHud(class APlayerController* Controller)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.ToggleReplayHud");
	}

	AMAHUD_ToggleReplayHud_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAHUD.TogglePauseReplay
// (Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAHUD::TogglePauseReplay(class APlayerController* Controller)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.TogglePauseReplay");
	}

	AMAHUD_TogglePauseReplay_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAHUD.ToggleInGameMenu
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMAPlayerController*     Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAHUD::ToggleInGameMenu(class AMAPlayerController* Controller)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.ToggleInGameMenu");
	}

	AMAHUD_ToggleInGameMenu_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAHUD.StartQuickVoice
// (Native, Event, Public, BlueprintEvent)
void AMAHUD::StartQuickVoice()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.StartQuickVoice");
	}

	AMAHUD_StartQuickVoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAHUD.StartChat
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bTeamOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAHUD::StartChat(bool bTeamOnly)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.StartChat");
	}

	AMAHUD_StartChat_Params params;
	params.bTeamOnly = bTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAHUD.ShowMapVote
// (Event, Public, BlueprintEvent)
void AMAHUD::ShowMapVote()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.ShowMapVote");
	}

	AMAHUD_ShowMapVote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAHUD.ShowIffOnly
// (Exec, Native, Public)
void AMAHUD::ShowIffOnly()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.ShowIffOnly");
	}

	AMAHUD_ShowIffOnly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAHUD.SetReplaySpeed
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAHUD::SetReplaySpeed(float Speed)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.SetReplaySpeed");
	}

	AMAHUD_SetReplaySpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAHUD.ProcessPlayerExpressionInput
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsAbortKey                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAHUD::ProcessPlayerExpressionInput(const struct FKey& Key, bool IsAbortKey)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.ProcessPlayerExpressionInput");
	}

	AMAHUD_ProcessPlayerExpressionInput_Params params;
	params.Key = Key;
	params.IsAbortKey = IsAbortKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAHUD.IsScoreboardVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAHUD::IsScoreboardVisible()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.IsScoreboardVisible");
	}

	AMAHUD_IsScoreboardVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAHUD.IsReplayPaused
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAHUD::IsReplayPaused()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.IsReplayPaused");
	}

	AMAHUD_IsReplayPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAHUD.IsInGameMenuVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAHUD::IsInGameMenuVisible()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.IsInGameMenuVisible");
	}

	AMAHUD_IsInGameMenuVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAHUD.GetTotalReplayTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AMAHUD::GetTotalReplayTime()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.GetTotalReplayTime");
	}

	AMAHUD_GetTotalReplayTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAHUD.GetReplaySpeed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMAHUD::GetReplaySpeed()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.GetReplaySpeed");
	}

	AMAHUD_GetReplaySpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAHUD.GetReplayPercent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMAHUD::GetReplayPercent()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.GetReplayPercent");
	}

	AMAHUD_GetReplayPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAHUD.GetCurrentReplayTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AMAHUD::GetCurrentReplayTime()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.GetCurrentReplayTime");
	}

	AMAHUD_GetCurrentReplayTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAHUD.GetCurrentCrosshairTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture* AMAHUD::GetCurrentCrosshairTexture()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.GetCurrentCrosshairTexture");
	}

	AMAHUD_GetCurrentCrosshairTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAHUD.BP_OnScoreApplied
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   ScoreText                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAHUD::BP_OnScoreApplied(const struct FText& ScoreText, float Value)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAHUD.BP_OnScoreApplied");
	}

	AMAHUD_BP_OnScoreApplied_Params params;
	params.ScoreText = ScoreText;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAInputSettings.UpdateMousePropertiesForPawn
// (Final, Native, Public)
// Parameters:
// class APawn*                   Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAInputSettings::UpdateMousePropertiesForPawn(class APawn* Class)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.UpdateMousePropertiesForPawn");
	}

	UMAInputSettings_UpdateMousePropertiesForPawn_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAInputSettings.TryResolveLastConflict
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// MidairCE_EMappingConflictResolution Resolution                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAInputSettings::TryResolveLastConflict(MidairCE_EMappingConflictResolution Resolution)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.TryResolveLastConflict");
	}

	UMAInputSettings_TryResolveLastConflict_Params params;
	params.Resolution = Resolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAInputSettings.TryResetKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   MappingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MidairCE_EMappingPriority      KeyPriority                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAInputSettings::TryResetKey(const struct FName& MappingName, MidairCE_EMappingPriority KeyPriority)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.TryResetKey");
	}

	UMAInputSettings_TryResetKey_Params params;
	params.MappingName = MappingName;
	params.KeyPriority = KeyPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAInputSettings.TryBindKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   MappingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionKeyMapping  NewKey                         (Parm, NativeAccessSpecifierPublic)
// MidairCE_EMappingPriority      KeyPriority                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAInputSettings::TryBindKey(const struct FName& MappingName, const struct FInputActionKeyMapping& NewKey, MidairCE_EMappingPriority KeyPriority)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.TryBindKey");
	}

	UMAInputSettings_TryBindKey_Params params;
	params.MappingName = MappingName;
	params.NewKey = NewKey;
	params.KeyPriority = KeyPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAInputSettings.SetMouseSensitivityForName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAInputSettings::SetMouseSensitivityForName(const struct FName& Name, float Value)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.SetMouseSensitivityForName");
	}

	UMAInputSettings_SetMouseSensitivityForName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAInputSettings.SetMouseInvertForName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInvert                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAInputSettings::SetMouseInvertForName(const struct FName& Name, bool bInvert)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.SetMouseInvertForName");
	}

	UMAInputSettings_SetMouseInvertForName_Params params;
	params.Name = Name;
	params.bInvert = bInvert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAInputSettings.ResetAll
// (Final, Native, Public, BlueprintCallable)
void UMAInputSettings::ResetAll()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.ResetAll");
	}

	UMAInputSettings_ResetAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAInputSettings.IsMappingDefault
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   MappingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MidairCE_EMappingPriority      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MidairCE_EMappingPriority UMAInputSettings::IsMappingDefault(const struct FName& MappingName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.IsMappingDefault");
	}

	UMAInputSettings_IsMappingDefault_Params params;
	params.MappingName = MappingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.HasAnyPendingConflict
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAInputSettings::HasAnyPendingConflict()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.HasAnyPendingConflict");
	}

	UMAInputSettings_HasAnyPendingConflict_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetUISensitivityScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAInputSettings::GetUISensitivityScale()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetUISensitivityScale");
	}

	UMAInputSettings_GetUISensitivityScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetSpecificInputMapping
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   MappingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMidairInputMapping     ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMidairInputMapping UMAInputSettings::GetSpecificInputMapping(const struct FName& MappingName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetSpecificInputMapping");
	}

	UMAInputSettings_GetSpecificInputMapping_Params params;
	params.MappingName = MappingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetSettingsNameForPawn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMAInputSettings::STATIC_GetSettingsNameForPawn(class APawn* Pawn)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetSettingsNameForPawn");
	}

	UMAInputSettings_GetSettingsNameForPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetMouseSensitivityForPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAInputSettings::GetMouseSensitivityForPawn(class APawn* Pawn)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetMouseSensitivityForPawn");
	}

	UMAInputSettings_GetMouseSensitivityForPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetMouseSensitivityForName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAInputSettings::GetMouseSensitivityForName(const struct FName& Name)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetMouseSensitivityForName");
	}

	UMAInputSettings_GetMouseSensitivityForName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetMouseInvertForPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAInputSettings::GetMouseInvertForPawn(class APawn* Pawn)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetMouseInvertForPawn");
	}

	UMAInputSettings_GetMouseInvertForPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetMouseInvertForName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAInputSettings::GetMouseInvertForName(const struct FName& Name)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetMouseInvertForName");
	}

	UMAInputSettings_GetMouseInvertForName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetMappingDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMidairInputMapping     Mapping                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// MidairCE_EMappingPriority      Priority                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMAInputSettings::STATIC_GetMappingDisplayName(const struct FMidairInputMapping& Mapping, MidairCE_EMappingPriority Priority)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetMappingDisplayName");
	}

	UMAInputSettings_GetMappingDisplayName_Params params;
	params.Mapping = Mapping;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetMAInputSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMAInputSettings*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMAInputSettings* UMAInputSettings::STATIC_GetMAInputSettings()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetMAInputSettings");
	}

	UMAInputSettings_GetMAInputSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetInputMappingNamesOrdered
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FName> UMAInputSettings::STATIC_GetInputMappingNamesOrdered()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetInputMappingNamesOrdered");
	}

	UMAInputSettings_GetInputMappingNamesOrdered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetInputMappingByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMidairInputMapping     ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMidairInputMapping UMAInputSettings::GetInputMappingByName(const struct FName& Name)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetInputMappingByName");
	}

	UMAInputSettings_GetInputMappingByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetInputCategoryNamesOrdered
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FName> UMAInputSettings::STATIC_GetInputCategoryNamesOrdered()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetInputCategoryNamesOrdered");
	}

	UMAInputSettings_GetInputCategoryNamesOrdered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetInputCategoryByName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMidairInputCategory    ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMidairInputCategory UMAInputSettings::STATIC_GetInputCategoryByName(const struct FName& Name)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetInputCategoryByName");
	}

	UMAInputSettings_GetInputCategoryByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetDefaultInputMappingByName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMidairInputMapping     ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMidairInputMapping UMAInputSettings::STATIC_GetDefaultInputMappingByName(const struct FName& Name)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetDefaultInputMappingByName");
	}

	UMAInputSettings_GetDefaultInputMappingByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.GetActionKeyMappingDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionKeyMapping  KeyMapping                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMAInputSettings::STATIC_GetActionKeyMappingDisplayName(const struct FInputActionKeyMapping& KeyMapping)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.GetActionKeyMappingDisplayName");
	}

	UMAInputSettings_GetActionKeyMappingDisplayName_Params params;
	params.KeyMapping = KeyMapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.ClearKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   MappingName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MidairCE_EMappingPriority      KeyPriority                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAInputSettings::ClearKey(const struct FName& MappingName, MidairCE_EMappingPriority KeyPriority)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.ClearKey");
	}

	UMAInputSettings_ClearKey_Params params;
	params.MappingName = MappingName;
	params.KeyPriority = KeyPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAInputSettings.ClearAll
// (Final, Native, Public, BlueprintCallable)
void UMAInputSettings::ClearAll()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.ClearAll");
	}

	UMAInputSettings_ClearAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAInputSettings.AreMappingsEqual
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionKeyMapping  First                          (Parm, NativeAccessSpecifierPublic)
// struct FInputActionKeyMapping  Second                         (Parm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAInputSettings::AreMappingsEqual(const struct FInputActionKeyMapping& First, const struct FInputActionKeyMapping& Second)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.AreMappingsEqual");
	}

	UMAInputSettings_AreMappingsEqual_Params params;
	params.First = First;
	params.Second = Second;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAInputSettings.ApplyAndSaveAll
// (Final, Native, Public, BlueprintCallable)
void UMAInputSettings::ApplyAndSaveAll()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAInputSettings.ApplyAndSaveAll");
	}

	UMAInputSettings_ApplyAndSaveAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MALocalMessagesWidget.Clear
// (Native, Public, BlueprintCallable)
void UMALocalMessagesWidget::Clear()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MALocalMessagesWidget.Clear");
	}

	UMALocalMessagesWidget_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MALocalMessagesWidget.BP_Clear
// (Event, Protected, BlueprintEvent)
void UMALocalMessagesWidget::BP_Clear()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MALocalMessagesWidget.BP_Clear");
	}

	UMALocalMessagesWidget_BP_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MALocalMessagesWidget.AddMessage
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UClass*                  MessageClass                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLocalMessageData       MessageData                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMALocalMessagesWidget::AddMessage(class UClass* MessageClass, const struct FLocalMessageData& MessageData)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MALocalMessagesWidget.AddMessage");
	}

	UMALocalMessagesWidget_AddMessage_Params params;
	params.MessageClass = MessageClass;
	params.MessageData = MessageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MALocalPlayer.AddXP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            XP                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMALocalPlayer::AddXP(int XP)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MALocalPlayer.AddXP");
	}

	UMALocalPlayer_AddXP_Params params;
	params.XP = XP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.FlagReturnPainVolume.OnCarriedIntoVolume
// (Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BodyIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AFlagReturnPainVolume::OnCarriedIntoVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.FlagReturnPainVolume.OnCarriedIntoVolume");
	}

	AFlagReturnPainVolume_OnCarriedIntoVolume_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.BodyIndex = BodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPickupBackpack.UpdateVisuals
// (Native, Public)
void AMAPickupBackpack::UpdateVisuals()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPickupBackpack.UpdateVisuals");
	}

	AMAPickupBackpack_UpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlaybackComponent.K2_CreateAndAddEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  EventClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMAPlaybackEvent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMAPlaybackEvent* UMAPlaybackComponent::K2_CreateAndAddEvent(class UClass* EventClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlaybackComponent.K2_CreateAndAddEvent");
	}

	UMAPlaybackComponent_K2_CreateAndAddEvent_Params params;
	params.EventClass = EventClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerControllerBase.ToggleMenu
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAPlayerControllerBase::ToggleMenu()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.ToggleMenu");
	}

	AMAPlayerControllerBase_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerControllerBase.SetMouseSensitivityToDefault
// (Final, Exec, Native, Public)
void AMAPlayerControllerBase::SetMouseSensitivityToDefault()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.SetMouseSensitivityToDefault");
	}

	AMAPlayerControllerBase_SetMouseSensitivityToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.SetMouseSensitivity
// (Final, Exec, Native, Public)
// Parameters:
// float                          Sensitivity                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerControllerBase::SetMouseSensitivity(float Sensitivity)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.SetMouseSensitivity");
	}

	AMAPlayerControllerBase_SetMouseSensitivity_Params params;
	params.Sensitivity = Sensitivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.ServerUpdateUserUnlocks
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
void AMAPlayerControllerBase::ServerUpdateUserUnlocks()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.ServerUpdateUserUnlocks");
	}

	AMAPlayerControllerBase_ServerUpdateUserUnlocks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.ServerSay
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTeamOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerControllerBase::ServerSay(const struct FString& Message, bool bTeamOnly)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.ServerSay");
	}

	AMAPlayerControllerBase_ServerSay_Params params;
	params.Message = Message;
	params.bTeamOnly = bTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.ServerDoExpression
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            MessageType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerControllerBase::ServerDoExpression(int MessageType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.ServerDoExpression");
	}

	AMAPlayerControllerBase_ServerDoExpression_Params params;
	params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.Say
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTeamOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerControllerBase::Say(const struct FString& Message, bool bTeamOnly)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.Say");
	}

	AMAPlayerControllerBase_Say_Params params;
	params.Message = Message;
	params.bTeamOnly = bTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.SaveGeneralSettings
// (Native, Public, BlueprintCallable)
void AMAPlayerControllerBase::SaveGeneralSettings()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.SaveGeneralSettings");
	}

	AMAPlayerControllerBase_SaveGeneralSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.ResetAllSteamData
// (Final, Exec, Native, Public)
void AMAPlayerControllerBase::ResetAllSteamData()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.ResetAllSteamData");
	}

	AMAPlayerControllerBase_ResetAllSteamData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.RefreshSteamInventory
// (Final, Exec, Native, Public)
void AMAPlayerControllerBase::RefreshSteamInventory()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.RefreshSteamInventory");
	}

	AMAPlayerControllerBase_RefreshSteamInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.InvertMouse
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bInvert                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerControllerBase::InvertMouse(bool bInvert)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.InvertMouse");
	}

	AMAPlayerControllerBase_InvertMouse_Params params;
	params.bInvert = bInvert;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.GiveXP
// (Final, Exec, Native, Public)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerControllerBase::GiveXP(int Amount)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.GiveXP");
	}

	AMAPlayerControllerBase_GiveXP_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.GetMALocalPlayer
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMALocalPlayer*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMALocalPlayer* AMAPlayerControllerBase::GetMALocalPlayer()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.GetMALocalPlayer");
	}

	AMAPlayerControllerBase_GetMALocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerControllerBase.GetIsFinalizedPlayerInventory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAPlayerControllerBase::GetIsFinalizedPlayerInventory()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.GetIsFinalizedPlayerInventory");
	}

	AMAPlayerControllerBase_GetIsFinalizedPlayerInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerControllerBase.EndQuickVoice
// (Native, Public, BlueprintCallable)
void AMAPlayerControllerBase::EndQuickVoice()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.EndQuickVoice");
	}

	AMAPlayerControllerBase_EndQuickVoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.DoExpression
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            MessageType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerControllerBase::DoExpression(int MessageType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.DoExpression");
	}

	AMAPlayerControllerBase_DoExpression_Params params;
	params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.DebugCrashGame
// (Final, Exec, Native, Protected)
void AMAPlayerControllerBase::DebugCrashGame()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.DebugCrashGame");
	}

	AMAPlayerControllerBase_DebugCrashGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.ClientSay
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APlayerState*            Speaker                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTeamOnly                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerControllerBase::ClientSay(class APlayerState* Speaker, const struct FString& Message, bool bTeamOnly)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.ClientSay");
	}

	AMAPlayerControllerBase_ClientSay_Params params;
	params.Speaker = Speaker;
	params.Message = Message;
	params.bTeamOnly = bTeamOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.ClientRefreshProgression
// (Net, NetReliable, Native, Event, Protected, NetClient)
void AMAPlayerControllerBase::ClientRefreshProgression()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.ClientRefreshProgression");
	}

	AMAPlayerControllerBase_ClientRefreshProgression_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.ClientInventoryFinalized
// (Net, NetReliable, Native, Event, Protected, NetClient)
void AMAPlayerControllerBase::ClientInventoryFinalized()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.ClientInventoryFinalized");
	}

	AMAPlayerControllerBase_ClientInventoryFinalized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.ClientGivenXP
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// int                            XP                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bHasLevelupReward              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerControllerBase::ClientGivenXP(int XP, bool bHasLevelupReward)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.ClientGivenXP");
	}

	AMAPlayerControllerBase_ClientGivenXP_Params params;
	params.XP = XP;
	params.bHasLevelupReward = bHasLevelupReward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerControllerBase.ClientDoExpression
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APlayerState*            Speaker                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MessageType                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerControllerBase::ClientDoExpression(class APlayerState* Speaker, int MessageType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerControllerBase.ClientDoExpression");
	}

	AMAPlayerControllerBase_ClientDoExpression_Params params;
	params.Speaker = Speaker;
	params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.VotePunishPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMAPlayerState*          TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MidairCE_EPunishType           Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::VotePunishPlayer(class AMAPlayerState* TargetPlayer, MidairCE_EPunishType Type)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.VotePunishPlayer");
	}

	AMAPlayerController_VotePunishPlayer_Params params;
	params.TargetPlayer = TargetPlayer;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.UpdateServerName
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AMAPlayerController::UpdateServerName()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.UpdateServerName");
	}

	AMAPlayerController_UpdateServerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.UnsetPassword
// (Final, Exec, Native, Public)
void AMAPlayerController::UnsetPassword()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.UnsetPassword");
	}

	AMAPlayerController_UnsetPassword_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.UnPause
// (Final, Exec, Native, Public)
void AMAPlayerController::UnPause()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.UnPause");
	}

	AMAPlayerController_UnPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ToggleScoreboard
// (Native, Public, BlueprintCallable)
void AMAPlayerController::ToggleScoreboard()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ToggleScoreboard");
	}

	AMAPlayerController_ToggleScoreboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.TogglePracticeMenu
// (Native, Public, BlueprintCallable)
void AMAPlayerController::TogglePracticeMenu()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.TogglePracticeMenu");
	}

	AMAPlayerController_TogglePracticeMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.SpectateJumpToLocation
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 LocationString                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::SpectateJumpToLocation(const struct FString& LocationString)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.SpectateJumpToLocation");
	}

	AMAPlayerController_SpectateJumpToLocation_Params params;
	params.LocationString = LocationString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.Spectate
// (Final, Exec, Native, Public)
void AMAPlayerController::Spectate()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.Spectate");
	}

	AMAPlayerController_Spectate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ShowScoreboard
// (Native, Public, BlueprintCallable)
void AMAPlayerController::ShowScoreboard()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ShowScoreboard");
	}

	AMAPlayerController_ShowScoreboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.SetupDeathEffects
// (Event, Public, BlueprintEvent)
void AMAPlayerController::SetupDeathEffects()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.SetupDeathEffects");
	}

	AMAPlayerController_SetupDeathEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.SetServerName
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 ServerName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::SetServerName(const struct FString& ServerName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.SetServerName");
	}

	AMAPlayerController_SetServerName_Params params;
	params.ServerName = ServerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.SetPassword
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 NewPassword                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::SetPassword(const struct FString& NewPassword)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.SetPassword");
	}

	AMAPlayerController_SetPassword_Params params;
	params.NewPassword = NewPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.SetEnabledPawnRelatedInput
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  RequestingActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::SetEnabledPawnRelatedInput(class AActor* RequestingActor, bool bEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.SetEnabledPawnRelatedInput");
	}

	AMAPlayerController_SetEnabledPawnRelatedInput_Params params;
	params.RequestingActor = RequestingActor;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.SetAutoBalanceEnabled
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bAutoBalanceEnabled            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::SetAutoBalanceEnabled(bool bAutoBalanceEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.SetAutoBalanceEnabled");
	}

	AMAPlayerController_SetAutoBalanceEnabled_Params params;
	params.bAutoBalanceEnabled = bAutoBalanceEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerVotePunishPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AMAPlayerState*          TargetPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// MidairCE_EPunishType           Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerVotePunishPlayer(class AMAPlayerState* TargetPlayer, MidairCE_EPunishType Type)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerVotePunishPlayer");
	}

	AMAPlayerController_ServerVotePunishPlayer_Params params;
	params.TargetPlayer = TargetPlayer;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerVoteMakePlayerAdmin
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// unsigned char                  PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerVoteMakePlayerAdmin(unsigned char PlayerIndex)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerVoteMakePlayerAdmin");
	}

	AMAPlayerController_ServerVoteMakePlayerAdmin_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerVoteEndWithNextMap
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// unsigned char                  MapIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerVoteEndWithNextMap(unsigned char MapIndex)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerVoteEndWithNextMap");
	}

	AMAPlayerController_ServerVoteEndWithNextMap_Params params;
	params.MapIndex = MapIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerViewRedFlag
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AMAPlayerController::ServerViewRedFlag()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerViewRedFlag");
	}

	AMAPlayerController_ServerViewRedFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerViewBlueFlag
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AMAPlayerController::ServerViewBlueFlag()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerViewBlueFlag");
	}

	AMAPlayerController_ServerViewBlueFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerViewAPlayerState
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APlayerState*            PlayerStateToView              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerViewAPlayerState(class APlayerState* PlayerStateToView)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerViewAPlayerState");
	}

	AMAPlayerController_ServerViewAPlayerState_Params params;
	params.PlayerStateToView = PlayerStateToView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerUpdateRTT
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          RTT                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerUpdateRTT(float RTT)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerUpdateRTT");
	}

	AMAPlayerController_ServerUpdateRTT_Params params;
	params.RTT = RTT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerUpdateReplicatedInputSettings
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FRepInputSettings       RepInputSettings               (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerUpdateReplicatedInputSettings(const struct FRepInputSettings& RepInputSettings)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerUpdateReplicatedInputSettings");
	}

	AMAPlayerController_ServerUpdateReplicatedInputSettings_Params params;
	params.RepInputSettings = RepInputSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerUpdateReplicatedGeneralSettings
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FRepGenSettings         RepGenSettings                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerUpdateReplicatedGeneralSettings(const struct FRepGenSettings& RepGenSettings)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerUpdateReplicatedGeneralSettings");
	}

	AMAPlayerController_ServerUpdateReplicatedGeneralSettings_Params params;
	params.RepGenSettings = RepGenSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerUnsetPassword
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AMAPlayerController::ServerUnsetPassword()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerUnsetPassword");
	}

	AMAPlayerController_ServerUnsetPassword_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerUnPause
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AMAPlayerController::ServerUnPause()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerUnPause");
	}

	AMAPlayerController_ServerUnPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerToggleSpectateMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AMAPlayerController::ServerToggleSpectateMode()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerToggleSpectateMode");
	}

	AMAPlayerController_ServerToggleSpectateMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerSuicide
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AMAPlayerController::ServerSuicide()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerSuicide");
	}

	AMAPlayerController_ServerSuicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerSubmitSimpleVote
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// MidairCE_ESimpleVote           Vote                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerSubmitSimpleVote(MidairCE_ESimpleVote Vote)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerSubmitSimpleVote");
	}

	AMAPlayerController_ServerSubmitSimpleVote_Params params;
	params.Vote = Vote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerSpectate
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AMAPlayerController::ServerSpectate()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerSpectate");
	}

	AMAPlayerController_ServerSpectate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerSetViewTarget
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerSetViewTarget(class AActor* Target)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerSetViewTarget");
	}

	AMAPlayerController_ServerSetViewTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerSetSpectateMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// MidairCE_ESpectateMode         Mode                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerSetSpectateMode(MidairCE_ESpectateMode Mode)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerSetSpectateMode");
	}

	AMAPlayerController_ServerSetSpectateMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerSetPassword
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 NewPassword                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerSetPassword(const struct FString& NewPassword)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerSetPassword");
	}

	AMAPlayerController_ServerSetPassword_Params params;
	params.NewPassword = NewPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerSetLoadout
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FMALoadout              Loadout                        (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerSetLoadout(const struct FMALoadout& Loadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerSetLoadout");
	}

	AMAPlayerController_ServerSetLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerSetAutoBalanceEnabled
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bAutoBalanceEnabled            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerSetAutoBalanceEnabled(bool bAutoBalanceEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerSetAutoBalanceEnabled");
	}

	AMAPlayerController_ServerSetAutoBalanceEnabled_Params params;
	params.bAutoBalanceEnabled = bAutoBalanceEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerSelectLoadoutByClass
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UClass*                  CharacterInfo                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerSelectLoadoutByClass(class UClass* CharacterInfo)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerSelectLoadoutByClass");
	}

	AMAPlayerController_ServerSelectLoadoutByClass_Params params;
	params.CharacterInfo = CharacterInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerRespawnWithBasicLoadout
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AMAPlayerController::ServerRespawnWithBasicLoadout()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerRespawnWithBasicLoadout");
	}

	AMAPlayerController_ServerRespawnWithBasicLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerRconOverrideNextMap
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerRconOverrideNextMap(const struct FString& MapName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerRconOverrideNextMap");
	}

	AMAPlayerController_ServerRconOverrideNextMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerRconEndMatch
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void AMAPlayerController::ServerRconEndMatch()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerRconEndMatch");
	}

	AMAPlayerController_ServerRconEndMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerNegotiatePredictionPing
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          NewPredictionPing              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerNegotiatePredictionPing(float NewPredictionPing)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerNegotiatePredictionPing");
	}

	AMAPlayerController_ServerNegotiatePredictionPing_Params params;
	params.NewPredictionPing = NewPredictionPing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerMoveToSpectate
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class APlayerState*            PlayerToMove                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerMoveToSpectate(class APlayerState* PlayerToMove)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerMoveToSpectate");
	}

	AMAPlayerController_ServerMoveToSpectate_Params params;
	params.PlayerToMove = PlayerToMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerKickSelfForAfk
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
void AMAPlayerController::ServerKickSelfForAfk()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerKickSelfForAfk");
	}

	AMAPlayerController_ServerKickSelfForAfk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerKickPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class APlayerState*            KickedPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Reason                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerKickPlayer(class APlayerState* KickedPlayer, const struct FString& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerKickPlayer");
	}

	AMAPlayerController_ServerKickPlayer_Params params;
	params.KickedPlayer = KickedPlayer;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerEnableTournamentMode
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerEnableTournamentMode(bool bIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerEnableTournamentMode");
	}

	AMAPlayerController_ServerEnableTournamentMode_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerEnablePracticeMode
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerEnablePracticeMode(bool bIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerEnablePracticeMode");
	}

	AMAPlayerController_ServerEnablePracticeMode_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerChangePlayerTeam
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class APlayerState*            PlayerToMove                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerChangePlayerTeam(class APlayerState* PlayerToMove)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerChangePlayerTeam");
	}

	AMAPlayerController_ServerChangePlayerTeam_Params params;
	params.PlayerToMove = PlayerToMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerCastOptionVote
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// MidairCE_EMapVoteOption        Option                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerCastOptionVote(MidairCE_EMapVoteOption Option)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerCastOptionVote");
	}

	AMAPlayerController_ServerCastOptionVote_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerBanPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class APlayerState*            BannedPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Reason                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerBanPlayer(class APlayerState* BannedPlayer, const struct FString& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerBanPlayer");
	}

	AMAPlayerController_ServerBanPlayer_Params params;
	params.BannedPlayer = BannedPlayer;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ServerAdminLogin
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FString                 Password                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ServerAdminLogin(const struct FString& Password)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ServerAdminLogin");
	}

	AMAPlayerController_ServerAdminLogin_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.SendLoadoutToServer
// (Native, Public, BlueprintCallable)
void AMAPlayerController::SendLoadoutToServer()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.SendLoadoutToServer");
	}

	AMAPlayerController_SendLoadoutToServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.SelectCurrentLoadout
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMALoadout              Loadout                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AMAPlayerController::SelectCurrentLoadout(const struct FMALoadout& Loadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.SelectCurrentLoadout");
	}

	AMAPlayerController_SelectCurrentLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.RecievedClearActiveRespawnDelay
// (Net, NetReliable, Native, Event, Public, NetClient)
void AMAPlayerController::RecievedClearActiveRespawnDelay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.RecievedClearActiveRespawnDelay");
	}

	AMAPlayerController_RecievedClearActiveRespawnDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.RecievedActiveRespawnDelay
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::RecievedActiveRespawnDelay(float Time)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.RecievedActiveRespawnDelay");
	}

	AMAPlayerController_RecievedActiveRespawnDelay_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.RconOverrideNextMap
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::RconOverrideNextMap(const struct FString& MapName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.RconOverrideNextMap");
	}

	AMAPlayerController_RconOverrideNextMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.RconEndMatch
// (Final, Exec, Native, Public)
void AMAPlayerController::RconEndMatch()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.RconEndMatch");
	}

	AMAPlayerController_RconEndMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.Predict
// (Exec, Native, Public)
// Parameters:
// float                          NewPredictionPing              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::Predict(float NewPredictionPing)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.Predict");
	}

	AMAPlayerController_Predict_Params params;
	params.NewPredictionPing = NewPredictionPing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.PlayRecordedInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// MidairCE_EPlayerRecordableInputTypes InputType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::PlayRecordedInput(MidairCE_EPlayerRecordableInputTypes InputType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.PlayRecordedInput");
	}

	AMAPlayerController_PlayRecordedInput_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.PlayRecordedCameraInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::PlayRecordedCameraInput(float Pitch, float Yaw)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.PlayRecordedCameraInput");
	}

	AMAPlayerController_PlayRecordedCameraInput_Params params;
	params.Pitch = Pitch;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.PickedupPowerup
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                          PowerupLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 PowerupName                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::PickedupPowerup(float PowerupLength, const struct FString& PowerupName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.PickedupPowerup");
	}

	AMAPlayerController_PickedupPowerup_Params params;
	params.PowerupLength = PowerupLength;
	params.PowerupName = PowerupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.OnRep_ServerDisablePawnRelatedInputRequests
// (Native, Public)
void AMAPlayerController::OnRep_ServerDisablePawnRelatedInputRequests()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.OnRep_ServerDisablePawnRelatedInputRequests");
	}

	AMAPlayerController_OnRep_ServerDisablePawnRelatedInputRequests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.OnRep_PlayerLoadout
// (Native, Public)
void AMAPlayerController::OnRep_PlayerLoadout()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.OnRep_PlayerLoadout");
	}

	AMAPlayerController_OnRep_PlayerLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.OnRep_DemoMessage
// (Native, Public)
void AMAPlayerController::OnRep_DemoMessage()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.OnRep_DemoMessage");
	}

	AMAPlayerController_OnRep_DemoMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.LoadTeamAvatars
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 PathFromContentFolder          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  AssetClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           LoadFromSubfolders             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UObject*> AMAPlayerController::STATIC_LoadTeamAvatars(const struct FString& PathFromContentFolder, class UClass* AssetClass, bool LoadFromSubfolders)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.LoadTeamAvatars");
	}

	AMAPlayerController_LoadTeamAvatars_Params params;
	params.PathFromContentFolder = PathFromContentFolder;
	params.AssetClass = AssetClass;
	params.LoadFromSubfolders = LoadFromSubfolders;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerController.IsPawnRelatedInputEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMAPlayerController::IsPawnRelatedInputEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.IsPawnRelatedInputEnabled");
	}

	AMAPlayerController_IsPawnRelatedInputEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerController.HideScoreboard
// (Native, Public, BlueprintCallable)
void AMAPlayerController::HideScoreboard()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.HideScoreboard");
	}

	AMAPlayerController_HideScoreboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.HandleMenu
// (Native, Public, BlueprintCallable)
void AMAPlayerController::HandleMenu()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.HandleMenu");
	}

	AMAPlayerController_HandleMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.GetTimeDead
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMAPlayerController::GetTimeDead()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.GetTimeDead");
	}

	AMAPlayerController_GetTimeDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerController.GetLastControlledCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMACharacter*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMACharacter* AMAPlayerController::GetLastControlledCharacter()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.GetLastControlledCharacter");
	}

	AMAPlayerController_GetLastControlledCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerController.GetEffectiveControlRotation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator AMAPlayerController::GetEffectiveControlRotation()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.GetEffectiveControlRotation");
	}

	AMAPlayerController_GetEffectiveControlRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerController.GetCurrentXPPool
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AMAPlayerController::GetCurrentXPPool()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.GetCurrentXPPool");
	}

	AMAPlayerController_GetCurrentXPPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerController.GetControlledCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMACharacter*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMACharacter* AMAPlayerController::GetControlledCharacter()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.GetControlledCharacter");
	}

	AMAPlayerController_GetControlledCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerController.GetCharacterVitals
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMAVitalsComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMAVitalsComponent* AMAPlayerController::GetCharacterVitals()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.GetCharacterVitals");
	}

	AMAPlayerController_GetCharacterVitals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerController.GetActiveRespawnDelay
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMAPlayerController::GetActiveRespawnDelay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.GetActiveRespawnDelay");
	}

	AMAPlayerController_GetActiveRespawnDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerController.FinishPlayerAdminVote
// (Net, NetReliable, Native, Event, Public, NetClient)
void AMAPlayerController::FinishPlayerAdminVote()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.FinishPlayerAdminVote");
	}

	AMAPlayerController_FinishPlayerAdminVote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.FinishEndMatchVote
// (Net, NetReliable, Native, Event, Public, NetClient)
void AMAPlayerController::FinishEndMatchVote()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.FinishEndMatchVote");
	}

	AMAPlayerController_FinishEndMatchVote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.FindRelevantCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMACharacter*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMACharacter* AMAPlayerController::FindRelevantCharacter()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.FindRelevantCharacter");
	}

	AMAPlayerController_FindRelevantCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerController.FindMostRelevantPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* AMAPlayerController::FindMostRelevantPawn()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.FindMostRelevantPawn");
	}

	AMAPlayerController_FindMostRelevantPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPlayerController.EnterTemporarySpectate
// (Final, Native, Public)
void AMAPlayerController::EnterTemporarySpectate()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.EnterTemporarySpectate");
	}

	AMAPlayerController_EnterTemporarySpectate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.EnableTournamentMode
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::EnableTournamentMode(bool bIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.EnableTournamentMode");
	}

	AMAPlayerController_EnableTournamentMode_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.EnablePracticeMode
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::EnablePracticeMode(bool bIsEnabled)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.EnablePracticeMode");
	}

	AMAPlayerController_EnablePracticeMode_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ClientUnPause
// (Net, NetReliable, Native, Event, Public, NetClient)
void AMAPlayerController::ClientUnPause()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ClientUnPause");
	}

	AMAPlayerController_ClientUnPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ClientSetDeathTime
// (Net, NetReliable, Native, Event, Public, NetClient)
void AMAPlayerController::ClientSetDeathTime()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ClientSetDeathTime");
	}

	AMAPlayerController_ClientSetDeathTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ClientReceiveDeathMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FDeathMessageData       DeathMessageData               (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AMAPlayerController::ClientReceiveDeathMessage(const struct FDeathMessageData& DeathMessageData)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ClientReceiveDeathMessage");
	}

	AMAPlayerController_ClientReceiveDeathMessage_Params params;
	params.DeathMessageData = DeathMessageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ClientPlayerKicked
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 KickReason                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TimeRemaining                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ClientPlayerKicked(const struct FString& KickReason, float TimeRemaining)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ClientPlayerKicked");
	}

	AMAPlayerController_ClientPlayerKicked_Params params;
	params.KickReason = KickReason;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ClientNotifyMapChange
// (Net, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ClientNotifyMapChange(const struct FString& MapName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ClientNotifyMapChange");
	}

	AMAPlayerController_ClientNotifyMapChange_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ClearDeathEffects
// (Event, Public, BlueprintEvent)
void AMAPlayerController::ClearDeathEffects()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ClearDeathEffects");
	}

	AMAPlayerController_ClearDeathEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ChangeTeam
// (Exec, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  DesiredTeamId                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ChangeTeam(unsigned char DesiredTeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ChangeTeam");
	}

	AMAPlayerController_ChangeTeam_Params params;
	params.DesiredTeamId = DesiredTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ChangeScoreboard
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ChangeScoreboard(bool bShow)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ChangeScoreboard");
	}

	AMAPlayerController_ChangeScoreboard_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.ChangeMap
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::ChangeMap(const struct FString& MapName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.ChangeMap");
	}

	AMAPlayerController_ChangeMap_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.BeginPlayerAdminVote
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// unsigned char                  PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::BeginPlayerAdminVote(unsigned char PlayerIndex)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.BeginPlayerAdminVote");
	}

	AMAPlayerController_BeginPlayerAdminVote_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.BeginEndMatchVote
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// unsigned char                  MapIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::BeginEndMatchVote(unsigned char MapIndex)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.BeginEndMatchVote");
	}

	AMAPlayerController_BeginEndMatchVote_Params params;
	params.MapIndex = MapIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPlayerController.AdminLogin
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Password                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPlayerController::AdminLogin(const struct FString& Password)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPlayerController.AdminLogin");
	}

	AMAPlayerController_AdminLogin_Params params;
	params.Password = Password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPowerup.Tick
// (Native, Protected)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAPowerup::Tick(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPowerup.Tick");
	}

	AMAPowerup_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPowerup.CapsuleTouched
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AMAPowerup::CapsuleTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPowerup.CapsuleTouched");
	}

	AMAPowerup_CapsuleTouched_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPowerup.AssistCapsuleTouched
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AMAPowerup::AssistCapsuleTouched(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPowerup.AssistCapsuleTouched");
	}

	AMAPowerup_AssistCapsuleTouched_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPowerupBase.ObjectChanged
// (Native, Protected)
void AMAPowerupBase::ObjectChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPowerupBase.ObjectChanged");
	}

	AMAPowerupBase_ObjectChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.StartSelectedDrill
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::StartSelectedDrill()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.StartSelectedDrill");
	}

	UMAPracticeComponent_StartSelectedDrill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SpawnPlayerTrail
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FMARouteTrail           RouteTrail                     (Parm, NativeAccessSpecifierPublic)
void UMAPracticeComponent::SpawnPlayerTrail(const struct FMARouteTrail& RouteTrail)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SpawnPlayerTrail");
	}

	UMAPracticeComponent_SpawnPlayerTrail_Params params;
	params.RouteTrail = RouteTrail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SpawnBotToRunSelectedRoute
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bBotCanBeDamaged               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bBotAlwaysFollowPath           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::SpawnBotToRunSelectedRoute(bool bBotCanBeDamaged, bool bBotAlwaysFollowPath)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SpawnBotToRunSelectedRoute");
	}

	UMAPracticeComponent_SpawnBotToRunSelectedRoute_Params params;
	params.bBotCanBeDamaged = bBotCanBeDamaged;
	params.bBotAlwaysFollowPath = bBotAlwaysFollowPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SpawnBotToRunRoute
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FMARouteTrail           RouteTrail                     (Parm, NativeAccessSpecifierPublic)
// int                            RouteMarkerIndexToStartAt      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bBotCanBeDamaged               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bBotAlwaysFollowPath           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::SpawnBotToRunRoute(const struct FMARouteTrail& RouteTrail, int RouteMarkerIndexToStartAt, bool bBotCanBeDamaged, bool bBotAlwaysFollowPath)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SpawnBotToRunRoute");
	}

	UMAPracticeComponent_SpawnBotToRunRoute_Params params;
	params.RouteTrail = RouteTrail;
	params.RouteMarkerIndexToStartAt = RouteMarkerIndexToStartAt;
	params.bBotCanBeDamaged = bBotCanBeDamaged;
	params.bBotAlwaysFollowPath = bBotAlwaysFollowPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SetSelectedRouteTrailName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RouteTrailName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::SetSelectedRouteTrailName(const struct FString& RouteTrailName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SetSelectedRouteTrailName");
	}

	UMAPracticeComponent_SetSelectedRouteTrailName_Params params;
	params.RouteTrailName = RouteTrailName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SetSelectedRouteTrailDescription
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RouteTrailDescription          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::SetSelectedRouteTrailDescription(const struct FString& RouteTrailDescription)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SetSelectedRouteTrailDescription");
	}

	UMAPracticeComponent_SetSelectedRouteTrailDescription_Params params;
	params.RouteTrailDescription = RouteTrailDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SetSelectedDrillName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 DrillName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::SetSelectedDrillName(const struct FString& DrillName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SetSelectedDrillName");
	}

	UMAPracticeComponent_SetSelectedDrillName_Params params;
	params.DrillName = DrillName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SetSelectedDrillDescription
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 DrillDescription               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::SetSelectedDrillDescription(const struct FString& DrillDescription)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SetSelectedDrillDescription");
	}

	UMAPracticeComponent_SetSelectedDrillDescription_Params params;
	params.DrillDescription = DrillDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SetSavedPositionAsDrillStart
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::SetSavedPositionAsDrillStart()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SetSavedPositionAsDrillStart");
	}

	UMAPracticeComponent_SetSavedPositionAsDrillStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SetRouteTrailBPClass
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  PlayerTrailMarkerClass         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::SetRouteTrailBPClass(class UClass* PlayerTrailMarkerClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SetRouteTrailBPClass");
	}

	UMAPracticeComponent_SetRouteTrailBPClass_Params params;
	params.PlayerTrailMarkerClass = PlayerTrailMarkerClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.ServerStoreRouteData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FMARouteTrail           RouteTrail                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::ServerStoreRouteData(const struct FMARouteTrail& RouteTrail, int PlayerId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.ServerStoreRouteData");
	}

	UMAPracticeComponent_ServerStoreRouteData_Params params;
	params.RouteTrail = RouteTrail;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.ServerSpawnBotToRunSelectedRoute
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            RequestingPlayerId             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RouteTrailName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StartMarkerIndex               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bBotCanBeDamaged               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bBotAlwaysFollowPath           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::ServerSpawnBotToRunSelectedRoute(int RequestingPlayerId, const struct FString& RouteTrailName, int StartMarkerIndex, bool bBotCanBeDamaged, bool bBotAlwaysFollowPath)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.ServerSpawnBotToRunSelectedRoute");
	}

	UMAPracticeComponent_ServerSpawnBotToRunSelectedRoute_Params params;
	params.RequestingPlayerId = RequestingPlayerId;
	params.RouteTrailName = RouteTrailName;
	params.StartMarkerIndex = StartMarkerIndex;
	params.bBotCanBeDamaged = bBotCanBeDamaged;
	params.bBotAlwaysFollowPath = bBotAlwaysFollowPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.ServerResetFlags
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
void UMAPracticeComponent::ServerResetFlags()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.ServerResetFlags");
	}

	UMAPracticeComponent_ServerResetFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.ServerLoadPosition
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FPlayerLocationAndState pls                            (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           SilentLoad                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::ServerLoadPosition(const struct FPlayerLocationAndState& pls, bool SilentLoad)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.ServerLoadPosition");
	}

	UMAPracticeComponent_ServerLoadPosition_Params params;
	params.pls = pls;
	params.SilentLoad = SilentLoad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SaveSelectedDrill
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::SaveSelectedDrill()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SaveSelectedDrill");
	}

	UMAPracticeComponent_SaveSelectedDrill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SavePosition
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::SavePosition()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SavePosition");
	}

	UMAPracticeComponent_SavePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SaveLatestRouteTrail
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RouteTrailName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 RouteDescription               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::SaveLatestRouteTrail(const struct FString& RouteTrailName, const struct FString& RouteDescription)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SaveLatestRouteTrail");
	}

	UMAPracticeComponent_SaveLatestRouteTrail_Params params;
	params.RouteTrailName = RouteTrailName;
	params.RouteDescription = RouteDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.SaveAllRouteTrailsToFile
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::SaveAllRouteTrailsToFile()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.SaveAllRouteTrailsToFile");
	}

	UMAPracticeComponent_SaveAllRouteTrailsToFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.RouteTrailMarkerTouched
// (Native, Public, BlueprintCallable)
// Parameters:
// class AMAPlayerTrailMarker*    Trail                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::RouteTrailMarkerTouched(class AMAPlayerTrailMarker* Trail)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.RouteTrailMarkerTouched");
	}

	UMAPracticeComponent_RouteTrailMarkerTouched_Params params;
	params.Trail = Trail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.ResetFlags
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::ResetFlags()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.ResetFlags");
	}

	UMAPracticeComponent_ResetFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.ResetCurrentSelectedRouteTrail
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::ResetCurrentSelectedRouteTrail()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.ResetCurrentSelectedRouteTrail");
	}

	UMAPracticeComponent_ResetCurrentSelectedRouteTrail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.RemoveRouteFromDrill
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RouteName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::RemoveRouteFromDrill(const struct FString& RouteName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.RemoveRouteFromDrill");
	}

	UMAPracticeComponent_RemoveRouteFromDrill_Params params;
	params.RouteName = RouteName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.OnFlagReturned
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bIsFlagInAir                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::OnFlagReturned(bool bIsFlagInAir)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.OnFlagReturned");
	}

	UMAPracticeComponent_OnFlagReturned_Params params;
	params.bIsFlagInAir = bIsFlagInAir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.MovePawnOnRoutePath
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::MovePawnOnRoutePath()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.MovePawnOnRoutePath");
	}

	UMAPracticeComponent_MovePawnOnRoutePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.LoadRouteTrailsFromFile
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::LoadRouteTrailsFromFile()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.LoadRouteTrailsFromFile");
	}

	UMAPracticeComponent_LoadRouteTrailsFromFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.LoadRouteTrailPosition
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            MarkerNumber                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::LoadRouteTrailPosition(int MarkerNumber)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.LoadRouteTrailPosition");
	}

	UMAPracticeComponent_LoadRouteTrailPosition_Params params;
	params.MarkerNumber = MarkerNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.LoadRouteTrailByName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RouteTrailName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::LoadRouteTrailByName(const struct FString& RouteTrailName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.LoadRouteTrailByName");
	}

	UMAPracticeComponent_LoadRouteTrailByName_Params params;
	params.RouteTrailName = RouteTrailName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.LoadPosition
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::LoadPosition()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.LoadPosition");
	}

	UMAPracticeComponent_LoadPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.LoadMarkerPosition
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::LoadMarkerPosition()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.LoadMarkerPosition");
	}

	UMAPracticeComponent_LoadMarkerPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.LoadDrillByName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 DrillName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::LoadDrillByName(const struct FString& DrillName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.LoadDrillByName");
	}

	UMAPracticeComponent_LoadDrillByName_Params params;
	params.DrillName = DrillName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.IsPracticeModeCommandEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAPracticeComponent::IsPracticeModeCommandEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.IsPracticeModeCommandEnabled");
	}

	UMAPracticeComponent_IsPracticeModeCommandEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPracticeComponent.IsKeyReplayActive
// (Native, Public, BlueprintCallable)
// Parameters:
// MidairCE_EPlayerRecordableInputTypes InputType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAPracticeComponent::IsKeyReplayActive(MidairCE_EPlayerRecordableInputTypes InputType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.IsKeyReplayActive");
	}

	UMAPracticeComponent_IsKeyReplayActive_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPracticeComponent.IncreaseMarkerPosition
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::IncreaseMarkerPosition()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.IncreaseMarkerPosition");
	}

	UMAPracticeComponent_IncreaseMarkerPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.GoToRouteTrailStart
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::GoToRouteTrailStart()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.GoToRouteTrailStart");
	}

	UMAPracticeComponent_GoToRouteTrailStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.GoToRouteTrailGrab
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::GoToRouteTrailGrab()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.GoToRouteTrailGrab");
	}

	UMAPracticeComponent_GoToRouteTrailGrab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.GetTeamID
// (Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UMAPracticeComponent::GetTeamID()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.GetTeamID");
	}

	UMAPracticeComponent_GetTeamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPracticeComponent.GetRouteTrailNames
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMAPracticeComponent::GetRouteTrailNames()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.GetRouteTrailNames");
	}

	UMAPracticeComponent_GetRouteTrailNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPracticeComponent.GetRoutesInDrill
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UMAPracticeComponent::GetRoutesInDrill()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.GetRoutesInDrill");
	}

	UMAPracticeComponent_GetRoutesInDrill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPracticeComponent.GetPracticeMenuText
// (Native, Public, BlueprintCallable)
// Parameters:
// MidairCE_EPracticeMenuDataTypes DataType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMAPracticeComponent::GetPracticeMenuText(MidairCE_EPracticeMenuDataTypes DataType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.GetPracticeMenuText");
	}

	UMAPracticeComponent_GetPracticeMenuText_Params params;
	params.DataType = DataType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPracticeComponent.GetLowPrecisionRouteTrail
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FMARouteTrail           RouteTrail                     (Parm, NativeAccessSpecifierPublic)
// struct FMARouteTrail           ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMARouteTrail UMAPracticeComponent::GetLowPrecisionRouteTrail(const struct FMARouteTrail& RouteTrail)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.GetLowPrecisionRouteTrail");
	}

	UMAPracticeComponent_GetLowPrecisionRouteTrail_Params params;
	params.RouteTrail = RouteTrail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPracticeComponent.GetLoadedRouteTrails
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FMARouteTrail>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FMARouteTrail> UMAPracticeComponent::GetLoadedRouteTrails()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.GetLoadedRouteTrails");
	}

	UMAPracticeComponent_GetLoadedRouteTrails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPracticeComponent.GetLoadedDrills
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FMADrill>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FMADrill> UMAPracticeComponent::GetLoadedDrills()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.GetLoadedDrills");
	}

	UMAPracticeComponent_GetLoadedDrills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPracticeComponent.GetControlledCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMACharacter*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMACharacter* UMAPracticeComponent::GetControlledCharacter()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.GetControlledCharacter");
	}

	UMAPracticeComponent_GetControlledCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPracticeComponent.GetAvailableRoutesForDrill
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UMAPracticeComponent::GetAvailableRoutesForDrill()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.GetAvailableRoutesForDrill");
	}

	UMAPracticeComponent_GetAvailableRoutesForDrill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAPracticeComponent.EndCurrentDrillByTimeout
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::EndCurrentDrillByTimeout()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.EndCurrentDrillByTimeout");
	}

	UMAPracticeComponent_EndCurrentDrillByTimeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.DeletePlayerTrail
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RouteTrailName                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::DeletePlayerTrail(const struct FString& RouteTrailName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.DeletePlayerTrail");
	}

	UMAPracticeComponent_DeletePlayerTrail_Params params;
	params.RouteTrailName = RouteTrailName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.DeleteDrillByName
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 DrillName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::DeleteDrillByName(const struct FString& DrillName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.DeleteDrillByName");
	}

	UMAPracticeComponent_DeleteDrillByName_Params params;
	params.DrillName = DrillName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.DecreaseMarkerPosition
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::DecreaseMarkerPosition()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.DecreaseMarkerPosition");
	}

	UMAPracticeComponent_DecreaseMarkerPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.ClearDrillResultMessage
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::ClearDrillResultMessage()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.ClearDrillResultMessage");
	}

	UMAPracticeComponent_ClearDrillResultMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.ClearDisplayedRouteTrail
// (Native, Public, BlueprintCallable)
void UMAPracticeComponent::ClearDisplayedRouteTrail()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.ClearDisplayedRouteTrail");
	}

	UMAPracticeComponent_ClearDisplayedRouteTrail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.ChangeRouteTrailCollisionDifficulty
// (Native, Public, BlueprintCallable)
// Parameters:
// MidairCE_EPracticeRouteTrailHitDifficulty HitDifficulty                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::ChangeRouteTrailCollisionDifficulty(MidairCE_EPracticeRouteTrailHitDifficulty HitDifficulty)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.ChangeRouteTrailCollisionDifficulty");
	}

	UMAPracticeComponent_ChangeRouteTrailCollisionDifficulty_Params params;
	params.HitDifficulty = HitDifficulty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAPracticeComponent.AddRouteToDrill
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RouteName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAPracticeComponent::AddRouteToDrill(const struct FString& RouteName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAPracticeComponent.AddRouteToDrill");
	}

	UMAPracticeComponent_AddRouteToDrill_Params params;
	params.RouteName = RouteName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.StagedMissileMovement.StartNewStage
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          InStageLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStagedMissileMovement::StartNewStage(float InStageLength)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.StagedMissileMovement.StartNewStage");
	}

	UStagedMissileMovement_StartNewStage_Params params;
	params.InStageLength = InStageLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MatchMakingStatusWidget.ReleaseOwnership
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 CurrentOwner                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchMakingStatusWidget::ReleaseOwnership(class UWidget* CurrentOwner)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MatchMakingStatusWidget.ReleaseOwnership");
	}

	UMatchMakingStatusWidget_ReleaseOwnership_Params params;
	params.CurrentOwner = CurrentOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MatchMakingStatusWidget.ClaimOwnership
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 NewOwner                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMatchMakingStatusWidget::ClaimOwnership(class UWidget* NewOwner)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MatchMakingStatusWidget.ClaimOwnership");
	}

	UMatchMakingStatusWidget_ClaimOwnership_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MATeamInterface.GetTeamID
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UMATeamInterface::GetTeamID()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamInterface.GetTeamID");
	}

	UMATeamInterface_GetTeamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MATeamState.RemoveFromTeam
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AMAPlayerState*          PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMATeamState::RemoveFromTeam(class AMAPlayerState* PlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamState.RemoveFromTeam");
	}

	AMATeamState_RemoveFromTeam_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MATeamState.NetMulticast_SetWeaponLimited
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UClass*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLimited                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMATeamState::NetMulticast_SetWeaponLimited(class UClass* Weapon, bool bLimited)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamState.NetMulticast_SetWeaponLimited");
	}

	AMATeamState_NetMulticast_SetWeaponLimited_Params params;
	params.Weapon = Weapon;
	params.bLimited = bLimited;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MATeamState.IsWeaponRestricted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMATeamState::IsWeaponRestricted(class UClass* Weapon)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamState.IsWeaponRestricted");
	}

	AMATeamState_IsWeaponRestricted_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MATeamState.GetObjectCount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ObjectType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char AMATeamState::GetObjectCount(class UClass* ObjectType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamState.GetObjectCount");
	}

	AMATeamState_GetObjectCount_Params params;
	params.ObjectType = ObjectType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MATeamState.GetNumPlayers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AMATeamState::GetNumPlayers()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamState.GetNumPlayers");
	}

	AMATeamState_GetNumPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MATeamState.FilterRestrictedItems
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          InItems                        (Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<class UClass*>          OutItems                       (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
void AMATeamState::FilterRestrictedItems(TArray<class UClass*>* InItems, TArray<class UClass*>* OutItems)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamState.FilterRestrictedItems");
	}

	AMATeamState_FilterRestrictedItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InItems != nullptr)
		*InItems = params.InItems;
	if (OutItems != nullptr)
		*OutItems = params.OutItems;

}


// Function MidairCE.MATeamState.CheckAndHandleSpawnWeapon
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMATeamState::CheckAndHandleSpawnWeapon(class UClass* Weapon)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamState.CheckAndHandleSpawnWeapon");
	}

	AMATeamState_CheckAndHandleSpawnWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MATeamState.CanSpawnWeapon
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMATeamState::CanSpawnWeapon(class UClass* Weapon)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamState.CanSpawnWeapon");
	}

	AMATeamState_CanSpawnWeapon_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MATeamState.AdjustScore
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ScoreAdjustment                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMATeamState::AdjustScore(int ScoreAdjustment)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamState.AdjustScore");
	}

	AMATeamState_AdjustScore_Params params;
	params.ScoreAdjustment = ScoreAdjustment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MATeamState.AdjustLives
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ScoreAdjustment                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMATeamState::AdjustLives(int ScoreAdjustment)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamState.AdjustLives");
	}

	AMATeamState_AdjustLives_Params params;
	params.ScoreAdjustment = ScoreAdjustment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MATeamState.AdjustJackpot
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int                            ScoreAdjustment                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMATeamState::AdjustJackpot(int ScoreAdjustment)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamState.AdjustJackpot");
	}

	AMATeamState_AdjustJackpot_Params params;
	params.ScoreAdjustment = ScoreAdjustment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MATeamState.AddToTeam
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AMAPlayerState*          PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMATeamState::AddToTeam(class AMAPlayerState* PlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATeamState.AddToTeam");
	}

	AMATeamState_AddToTeam_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MATRFlag.OnStop
// (Native, Public, HasOutParms)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AMATRFlag::OnStop(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATRFlag.OnStop");
	}

	AMATRFlag_OnStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MATRFlag.OnBounce
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMATRFlag::OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATRFlag.OnBounce");
	}

	AMATRFlag_OnBounce_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MATRGameState.GetIsFlagHolder
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerState*          PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMATRGameState::GetIsFlagHolder(class AMAPlayerState* PlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATRGameState.GetIsFlagHolder");
	}

	AMATRGameState_GetIsFlagHolder_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MATRGameState.GetFlagStateName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName AMATRGameState::GetFlagStateName(unsigned char TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATRGameState.GetFlagStateName");
	}

	AMATRGameState_GetFlagStateName_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MATRGameState.GetFlagBase
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  TeamId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AMATRFlagBase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMATRFlagBase* AMATRGameState::GetFlagBase(unsigned char TeamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MATRGameState.GetFlagBase");
	}

	AMATRGameState_GetFlagBase_Params params;
	params.TeamId = TeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAVitalsComponent.TookDamage
// (Native, Protected)
void UMAVitalsComponent::TookDamage()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.TookDamage");
	}

	UMAVitalsComponent_TookDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAVitalsComponent.TakeDamage
// (Native, Public, HasOutParms)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAVitalsComponent::TakeDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.TakeDamage");
	}

	UMAVitalsComponent_TakeDamage_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAVitalsComponent.ShieldStatusChanged
// (Native, Protected)
void UMAVitalsComponent::ShieldStatusChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.ShieldStatusChanged");
	}

	UMAVitalsComponent_ShieldStatusChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAVitalsComponent.SetHitFlashMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UMeshComponent*>  Meshes                         (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UMAVitalsComponent::SetHitFlashMeshes(TArray<class UMeshComponent*> Meshes)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.SetHitFlashMeshes");
	}

	UMAVitalsComponent_SetHitFlashMeshes_Params params;
	params.Meshes = Meshes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAVitalsComponent.RepairHealth
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          RequestedAmount                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAVitalsComponent::RepairHealth(float RequestedAmount)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.RepairHealth");
	}

	UMAVitalsComponent_RepairHealth_Params params;
	params.RequestedAmount = RequestedAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAVitalsComponent.Repair
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          EnergyUsed                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAVitalsComponent::Repair(float EnergyUsed)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.Repair");
	}

	UMAVitalsComponent_Repair_Params params;
	params.EnergyUsed = EnergyUsed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAVitalsComponent.OnRep_IsDead
// (Native, Protected)
void UMAVitalsComponent::OnRep_IsDead()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.OnRep_IsDead");
	}

	UMAVitalsComponent_OnRep_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAVitalsComponent.OnRep_Health
// (Native, Protected)
void UMAVitalsComponent::OnRep_Health()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.OnRep_Health");
	}

	UMAVitalsComponent_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAVitalsComponent.IsDead
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAVitalsComponent::IsDead()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.IsDead");
	}

	UMAVitalsComponent_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAVitalsComponent.HasLowHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAVitalsComponent::HasLowHealth()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.HasLowHealth");
	}

	UMAVitalsComponent_HasLowHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAVitalsComponent.HasFullHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAVitalsComponent::HasFullHealth()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.HasFullHealth");
	}

	UMAVitalsComponent_HasFullHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAVitalsComponent.GetHealthPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAVitalsComponent::GetHealthPct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.GetHealthPct");
	}

	UMAVitalsComponent_GetHealthPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAVitalsComponent.GetEnergyPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAVitalsComponent::GetEnergyPct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.GetEnergyPct");
	}

	UMAVitalsComponent_GetEnergyPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAVitalsComponent.ConsumeEnergy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          RequestedAmount                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReturnPct                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMAVitalsComponent::ConsumeEnergy(float RequestedAmount, bool bReturnPct)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.ConsumeEnergy");
	}

	UMAVitalsComponent_ConsumeEnergy_Params params;
	params.RequestedAmount = RequestedAmount;
	params.bReturnPct = bReturnPct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAVitalsComponent.ClientDisableEnergyRegen
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMAVitalsComponent::ClientDisableEnergyRegen(float Duration)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.ClientDisableEnergyRegen");
	}

	UMAVitalsComponent_ClientDisableEnergyRegen_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAVitalsComponent.CanBeRepaired
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMAVitalsComponent::CanBeRepaired()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAVitalsComponent.CanBeRepaired");
	}

	UMAVitalsComponent_CanBeRepaired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAWeaponAttachment.SetOverrideMaterials
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      NewMaterial3P                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*      NewMaterial1P                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAWeaponAttachment::SetOverrideMaterials(class UMaterialInterface* NewMaterial3P, class UMaterialInterface* NewMaterial1P)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeaponAttachment.SetOverrideMaterials");
	}

	AMAWeaponAttachment_SetOverrideMaterials_Params params;
	params.NewMaterial3P = NewMaterial3P;
	params.NewMaterial1P = NewMaterial1P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAWeaponAttachment.SetChargeIndicator
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAWeaponAttachment::SetChargeIndicator(float Intensity)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeaponAttachment.SetChargeIndicator");
	}

	AMAWeaponAttachment_SetChargeIndicator_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAWeaponAttachment.OnCharacterGrabAmmo
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAWeaponAttachment::OnCharacterGrabAmmo(bool bInFirstPerson)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeaponAttachment.OnCharacterGrabAmmo");
	}

	AMAWeaponAttachment_OnCharacterGrabAmmo_Params params;
	params.bInFirstPerson = bInFirstPerson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAWeaponAttachment.OnCharacterAttachAmmo
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAWeaponAttachment::OnCharacterAttachAmmo(bool bInFirstPerson)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeaponAttachment.OnCharacterAttachAmmo");
	}

	AMAWeaponAttachment_OnCharacterAttachAmmo_Params params;
	params.bInFirstPerson = bInFirstPerson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAWeaponAttachment.K2_UpdateForClientPerspective
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAWeaponAttachment::K2_UpdateForClientPerspective(bool bInFirstPerson)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeaponAttachment.K2_UpdateForClientPerspective");
	}

	AMAWeaponAttachment_K2_UpdateForClientPerspective_Params params;
	params.bInFirstPerson = bInFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.MAWeaponAttachment.GetHeat
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AMAWeaponAttachment::GetHeat()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeaponAttachment.GetHeat");
	}

	AMAWeaponAttachment_GetHeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.MAWeaponAttachment.DetachFirstAmmoActor
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMAWeaponAttachment::DetachFirstAmmoActor(bool bInFirstPerson)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.MAWeaponAttachment.DetachFirstAmmoActor");
	}

	AMAWeaponAttachment_DetachFirstAmmoActor_Params params;
	params.bInFirstPerson = bInFirstPerson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ObjectInfo.GetObjectInfoFromClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  InObjectClass                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObjectInfo*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObjectInfo* UObjectInfo::STATIC_GetObjectInfoFromClass(class UClass* InObjectClass)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectInfo.GetObjectInfoFromClass");
	}

	UObjectInfo_GetObjectInfoFromClass_Params params;
	params.InObjectClass = InObjectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ObjectInfo.GetObjectInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObjectInfo*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObjectInfo* UObjectInfo::STATIC_GetObjectInfo(class UObject* InObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectInfo.GetObjectInfo");
	}

	UObjectInfo_GetObjectInfo_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ObjectInfo.GetActionText
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UObjectInfo::GetActionText(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectInfo.GetActionText");
	}

	UObjectInfo_GetActionText_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ObjectInfo.FilterObjectInfoArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UClass*>          Base                           (Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<class UClass*>          AppliedFilter                  (Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<class UClass*>          outResult                      (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
// bool                           bReturnInBoth                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectInfo::STATIC_FilterObjectInfoArray(TArray<class UClass*>* Base, TArray<class UClass*>* AppliedFilter, TArray<class UClass*>* outResult, bool bReturnInBoth)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectInfo.FilterObjectInfoArray");
	}

	UObjectInfo_FilterObjectInfoArray_Params params;
	params.bReturnInBoth = bReturnInBoth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Base != nullptr)
		*Base = params.Base;
	if (AppliedFilter != nullptr)
		*AppliedFilter = params.AppliedFilter;
	if (outResult != nullptr)
		*outResult = params.outResult;

}


// Function MidairCE.ObjectInfo.ConvertObjectArrayToItemArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UClass*>          Objects                        (Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<class UClass*>          OutItems                       (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
void UObjectInfo::STATIC_ConvertObjectArrayToItemArray(TArray<class UClass*>* Objects, TArray<class UClass*>* OutItems)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectInfo.ConvertObjectArrayToItemArray");
	}

	UObjectInfo_ConvertObjectArrayToItemArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Objects != nullptr)
		*Objects = params.Objects;
	if (OutItems != nullptr)
		*OutItems = params.OutItems;

}


// Function MidairCE.WeaponInfo.GetStats
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWeaponStatDetails      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FWeaponStatDetails UWeaponInfo::GetStats()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.WeaponInfo.GetStats");
	}

	UWeaponInfo_GetStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.AugmentInfo.CanBeUsedWith
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAugmentInfo*            AugmentInfo                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAugmentInfo::CanBeUsedWith(class UAugmentInfo* AugmentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.AugmentInfo.CanBeUsedWith");
	}

	UAugmentInfo_CanBeUsedWith_Params params;
	params.AugmentInfo = AugmentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.BackpackInfo.GetAvailableSecondaryAugments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
TArray<class UClass*> UBackpackInfo::GetAvailableSecondaryAugments()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.BackpackInfo.GetAvailableSecondaryAugments");
	}

	UBackpackInfo_GetAvailableSecondaryAugments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.BackpackInfo.GetAvailablePrimaryAugments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
TArray<class UClass*> UBackpackInfo::GetAvailablePrimaryAugments()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.BackpackInfo.GetAvailablePrimaryAugments");
	}

	UBackpackInfo_GetAvailablePrimaryAugments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.CharacterInfo.IsWeaponAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Weapon                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCharacterInfo::IsWeaponAvailable(class UClass* Weapon)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.CharacterInfo.IsWeaponAvailable");
	}

	UCharacterInfo_IsWeaponAvailable_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.CharacterInfo.IsVoiceSetAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  VoiceSet                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCharacterInfo::IsVoiceSetAvailable(class UClass* VoiceSet)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.CharacterInfo.IsVoiceSetAvailable");
	}

	UCharacterInfo_IsVoiceSetAvailable_Params params;
	params.VoiceSet = VoiceSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.CharacterInfo.IsThrowableAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Throwable                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCharacterInfo::IsThrowableAvailable(class UClass* Throwable)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.CharacterInfo.IsThrowableAvailable");
	}

	UCharacterInfo_IsThrowableAvailable_Params params;
	params.Throwable = Throwable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.CharacterInfo.IsAugmentAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Augment                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCharacterInfo::IsAugmentAvailable(class UClass* Augment)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.CharacterInfo.IsAugmentAvailable");
	}

	UCharacterInfo_IsAugmentAvailable_Params params;
	params.Augment = Augment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.CharacterInfo.GetUnavailableAugments
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
TArray<class UClass*> UCharacterInfo::GetUnavailableAugments()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.CharacterInfo.GetUnavailableAugments");
	}

	UCharacterInfo_GetUnavailableAugments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.CharacterInfo.GetStats
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCharacterStatDetails   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FCharacterStatDetails UCharacterInfo::GetStats()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.CharacterInfo.GetStats");
	}

	UCharacterInfo_GetStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.CharacterInfo.GetAvailableWeapons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
TArray<class UClass*> UCharacterInfo::GetAvailableWeapons()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.CharacterInfo.GetAvailableWeapons");
	}

	UCharacterInfo_GetAvailableWeapons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.CharacterInfo.GetAvailableVoiceSets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
TArray<class UClass*> UCharacterInfo::GetAvailableVoiceSets()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.CharacterInfo.GetAvailableVoiceSets");
	}

	UCharacterInfo_GetAvailableVoiceSets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.CharacterInfo.GetAvailableThrowables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
TArray<class UClass*> UCharacterInfo::GetAvailableThrowables()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.CharacterInfo.GetAvailableThrowables");
	}

	UCharacterInfo_GetAvailableThrowables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.CharacterInfo.GetAvailableDeployables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
TArray<class UClass*> UCharacterInfo::GetAvailableDeployables()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.CharacterInfo.GetAvailableDeployables");
	}

	UCharacterInfo_GetAvailableDeployables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.CharacterInfo.GetAvailableBackpacks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
TArray<class UClass*> UCharacterInfo::GetAvailableBackpacks()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.CharacterInfo.GetAvailableBackpacks");
	}

	UCharacterInfo_GetAvailableBackpacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ObjectivePrompt.UpdateExistingPrompt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMidairObjectiveInfo    DeltaObjectiveInfo             (Parm, OutParm, NativeAccessSpecifierPublic)
// MidairCE_EObjectiveUpdateType  UpdateType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWantsUpdate                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectivePrompt::UpdateExistingPrompt(struct FMidairObjectiveInfo* DeltaObjectiveInfo, MidairCE_EObjectiveUpdateType UpdateType, bool bWantsUpdate)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectivePrompt.UpdateExistingPrompt");
	}

	UObjectivePrompt_UpdateExistingPrompt_Params params;
	params.UpdateType = UpdateType;
	params.bWantsUpdate = bWantsUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeltaObjectiveInfo != nullptr)
		*DeltaObjectiveInfo = params.DeltaObjectiveInfo;

}


// Function MidairCE.ObjectivePrompt.SetPrompt
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMidairObjectiveInfo    NewObjectiveInfo               (Parm, OutParm, NativeAccessSpecifierPublic)
void UObjectivePrompt::SetPrompt(struct FMidairObjectiveInfo* NewObjectiveInfo)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectivePrompt.SetPrompt");
	}

	UObjectivePrompt_SetPrompt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewObjectiveInfo != nullptr)
		*NewObjectiveInfo = params.NewObjectiveInfo;

}


// Function MidairCE.ObjectivePrompt.OnPromptChanged
// (Event, Public, BlueprintEvent)
void UObjectivePrompt::OnPromptChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectivePrompt.OnPromptChanged");
	}

	UObjectivePrompt_OnPromptChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ObjectivePrompt.OnObjectiveCompleted
// (Event, Public, BlueprintEvent)
void UObjectivePrompt::OnObjectiveCompleted()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectivePrompt.OnObjectiveCompleted");
	}

	UObjectivePrompt_OnObjectiveCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ObjectivePrompt.ClearPrompt
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCompleted                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectivePrompt::ClearPrompt(bool bCompleted)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectivePrompt.ClearPrompt");
	}

	UObjectivePrompt_ClearPrompt_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ObjectiveVolume.OnOverlap
// (Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BodyIndexbool                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AObjectiveVolume::OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int BodyIndexbool, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectiveVolume.OnOverlap");
	}

	AObjectiveVolume_OnOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.BodyIndexbool = BodyIndexbool;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ObjectiveVolume.EndOverlap
// (Native, Protected)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AObjectiveVolume::EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectiveVolume.EndOverlap");
	}

	AObjectiveVolume_EndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ObjectLauncher.OnSpawnedActorDeath
// (Native, Public)
void AObjectLauncher::OnSpawnedActorDeath()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectLauncher.OnSpawnedActorDeath");
	}

	AObjectLauncher_OnSpawnedActorDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ObjectLauncher.LaunchActor
// (Native, Public)
void AObjectLauncher::LaunchActor()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectLauncher.LaunchActor");
	}

	AObjectLauncher_LaunchActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ObjectLauncher_Spline.SpawnActorToLaunch
// (Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AObjectLauncher_Spline::SpawnActorToLaunch()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ObjectLauncher_Spline.SpawnActorToLaunch");
	}

	AObjectLauncher_Spline_SpawnActorToLaunch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ParticleConfiguration.SetParticlesOnComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UParticleSystemComponent* Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AParticleConfiguration::SetParticlesOnComponent(class UParticleSystemComponent* Component)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ParticleConfiguration.SetParticlesOnComponent");
	}

	AParticleConfiguration_SetParticlesOnComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.ParticleConfiguration.SetParticlesOnActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AParticleConfiguration::SetParticlesOnActor(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ParticleConfiguration.SetParticlesOnActor");
	}

	AParticleConfiguration_SetParticlesOnActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.PlayerLoadoutsSave.SetLastSelectedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerLoadoutsSave::SetLastSelectedIndex(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.SetLastSelectedIndex");
	}

	UPlayerLoadoutsSave_SetLastSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.PlayerLoadoutsSave.SaveChanges
// (Final, Native, Public, BlueprintCallable)
void UPlayerLoadoutsSave::SaveChanges()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.SaveChanges");
	}

	UPlayerLoadoutsSave_SaveChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.PlayerLoadoutsSave.RestoreDefaultLoadoutsForGame
// (Final, Native, Public, BlueprintCallable)
void UPlayerLoadoutsSave::RestoreDefaultLoadoutsForGame()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.RestoreDefaultLoadoutsForGame");
	}

	UPlayerLoadoutsSave_RestoreDefaultLoadoutsForGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Weapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  DesiredWeapon                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  DesiredSkin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDoCheck                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlayerLoadoutsSave::ModifySelectedLoadout_Weapon(int IndexAt, class UClass* DesiredWeapon, class UClass* DesiredSkin, bool bDoCheck)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Weapon");
	}

	UPlayerLoadoutsSave_ModifySelectedLoadout_Weapon_Params params;
	params.IndexAt = IndexAt;
	params.DesiredWeapon = DesiredWeapon;
	params.DesiredSkin = DesiredSkin;
	params.bDoCheck = bDoCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_VoiceSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredVoiceSet                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlayerLoadoutsSave::ModifySelectedLoadout_VoiceSet(class UClass* DesiredVoiceSet)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_VoiceSet");
	}

	UPlayerLoadoutsSave_ModifySelectedLoadout_VoiceSet_Params params;
	params.DesiredVoiceSet = DesiredVoiceSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Throwable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  DesiredThrowable               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDoCheck                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlayerLoadoutsSave::ModifySelectedLoadout_Throwable(int IndexAt, class UClass* DesiredThrowable, bool bDoCheck)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Throwable");
	}

	UPlayerLoadoutsSave_ModifySelectedLoadout_Throwable_Params params;
	params.IndexAt = IndexAt;
	params.DesiredThrowable = DesiredThrowable;
	params.bDoCheck = bDoCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Pack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredBackpack                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDoCheck                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlayerLoadoutsSave::ModifySelectedLoadout_Pack(class UClass* DesiredBackpack, bool bDoCheck)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Pack");
	}

	UPlayerLoadoutsSave_ModifySelectedLoadout_Pack_Params params;
	params.DesiredBackpack = DesiredBackpack;
	params.bDoCheck = bDoCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_ObjectSkin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ObjectInfoClass                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  DesiredSkin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlayerLoadoutsSave::ModifySelectedLoadout_ObjectSkin(class UClass* ObjectInfoClass, class UClass* DesiredSkin)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_ObjectSkin");
	}

	UPlayerLoadoutsSave_ModifySelectedLoadout_ObjectSkin_Params params;
	params.ObjectInfoClass = ObjectInfoClass;
	params.DesiredSkin = DesiredSkin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Name
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 DesiredName                    (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerLoadoutsSave::ModifySelectedLoadout_Name(struct FString* DesiredName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Name");
	}

	UPlayerLoadoutsSave_ModifySelectedLoadout_Name_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DesiredName != nullptr)
		*DesiredName = params.DesiredName;

}


// Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Character
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredCharacter               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDoCheck                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlayerLoadoutsSave::ModifySelectedLoadout_Character(class UClass* DesiredCharacter, bool bDoCheck)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.ModifySelectedLoadout_Character");
	}

	UPlayerLoadoutsSave_ModifySelectedLoadout_Character_Params params;
	params.DesiredCharacter = DesiredCharacter;
	params.bDoCheck = bDoCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.ModifyNamedCosmeticSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  Cosmetic                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerLoadoutsSave::ModifyNamedCosmeticSelection(const struct FName& Name, class UClass* Cosmetic)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.ModifyNamedCosmeticSelection");
	}

	UPlayerLoadoutsSave_ModifyNamedCosmeticSelection_Params params;
	params.Name = Name;
	params.Cosmetic = Cosmetic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.PlayerLoadoutsSave.GetVoiceIdent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UPlayerLoadoutsSave::STATIC_GetVoiceIdent()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetVoiceIdent");
	}

	UPlayerLoadoutsSave_GetVoiceIdent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.GetSprayIdent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UPlayerLoadoutsSave::STATIC_GetSprayIdent()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetSprayIdent");
	}

	UPlayerLoadoutsSave_GetSprayIdent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.GetNamedCosmeticSelection
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UPlayerLoadoutsSave::GetNamedCosmeticSelection(const struct FName& Name)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetNamedCosmeticSelection");
	}

	UPlayerLoadoutsSave_GetNamedCosmeticSelection_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.GetLoadoutWeapons
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UClass*>          OutWeapons                     (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
void UPlayerLoadoutsSave::STATIC_GetLoadoutWeapons(TArray<class UClass*>* OutWeapons)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetLoadoutWeapons");
	}

	UPlayerLoadoutsSave_GetLoadoutWeapons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWeapons != nullptr)
		*OutWeapons = params.OutWeapons;

}


// Function MidairCE.PlayerLoadoutsSave.GetLoadoutThrowables
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UClass*>          OutThrowables                  (Parm, OutParm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
void UPlayerLoadoutsSave::STATIC_GetLoadoutThrowables(TArray<class UClass*>* OutThrowables)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetLoadoutThrowables");
	}

	UPlayerLoadoutsSave_GetLoadoutThrowables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutThrowables != nullptr)
		*OutThrowables = params.OutThrowables;

}


// Function MidairCE.PlayerLoadoutsSave.GetLoadoutsForGamemode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FMALoadout>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FMALoadout> UPlayerLoadoutsSave::GetLoadoutsForGamemode()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetLoadoutsForGamemode");
	}

	UPlayerLoadoutsSave_GetLoadoutsForGamemode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.GetLoadoutIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMALoadout              Loadout                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPlayerLoadoutsSave::GetLoadoutIndex(struct FMALoadout* Loadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetLoadoutIndex");
	}

	UPlayerLoadoutsSave_GetLoadoutIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loadout != nullptr)
		*Loadout = params.Loadout;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.GetLoadoutCharacterInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCharacterInfo*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCharacterInfo* UPlayerLoadoutsSave::STATIC_GetLoadoutCharacterInfo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetLoadoutCharacterInfo");
	}

	UPlayerLoadoutsSave_GetLoadoutCharacterInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.GetLoadoutCharacter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  OutCharacter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerLoadoutsSave::STATIC_GetLoadoutCharacter(class UClass** OutCharacter)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetLoadoutCharacter");
	}

	UPlayerLoadoutsSave_GetLoadoutCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCharacter != nullptr)
		*OutCharacter = params.OutCharacter;

}


// Function MidairCE.PlayerLoadoutsSave.GetLoadoutBackpackInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBackpackInfo*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBackpackInfo* UPlayerLoadoutsSave::STATIC_GetLoadoutBackpackInfo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetLoadoutBackpackInfo");
	}

	UPlayerLoadoutsSave_GetLoadoutBackpackInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.GetLoadoutBackpack
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  OutBackpack                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerLoadoutsSave::STATIC_GetLoadoutBackpack(class UClass** OutBackpack)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetLoadoutBackpack");
	}

	UPlayerLoadoutsSave_GetLoadoutBackpack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutBackpack != nullptr)
		*OutBackpack = params.OutBackpack;

}


// Function MidairCE.PlayerLoadoutsSave.GetLastSelectedLoadout
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FMALoadout              outLoadout                     (Parm, OutParm, NativeAccessSpecifierPublic)
void UPlayerLoadoutsSave::GetLastSelectedLoadout(struct FMALoadout* outLoadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetLastSelectedLoadout");
	}

	UPlayerLoadoutsSave_GetLastSelectedLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outLoadout != nullptr)
		*outLoadout = params.outLoadout;

}


// Function MidairCE.PlayerLoadoutsSave.GetLastSelectedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPlayerLoadoutsSave::GetLastSelectedIndex()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetLastSelectedIndex");
	}

	UPlayerLoadoutsSave_GetLastSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.GetGlobalLoadoutsSave
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bForceNew                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerLoadoutsSave*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPlayerLoadoutsSave* UPlayerLoadoutsSave::STATIC_GetGlobalLoadoutsSave(bool bForceNew)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetGlobalLoadoutsSave");
	}

	UPlayerLoadoutsSave_GetGlobalLoadoutsSave_Params params;
	params.bForceNew = bForceNew;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.GetCustomLoadoutsSave
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bForceNew                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerLoadoutsSave*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPlayerLoadoutsSave* UPlayerLoadoutsSave::STATIC_GetCustomLoadoutsSave(bool bForceNew)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.GetCustomLoadoutsSave");
	}

	UPlayerLoadoutsSave_GetCustomLoadoutsSave_Params params;
	params.bForceNew = bForceNew;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.CheckWeaponForLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  DesiredWeapon                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMALoadout              UseLoadout                     (Parm, NativeAccessSpecifierPublic)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FText> UPlayerLoadoutsSave::CheckWeaponForLoadout(int IndexAt, class UClass* DesiredWeapon, const struct FMALoadout& UseLoadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.CheckWeaponForLoadout");
	}

	UPlayerLoadoutsSave_CheckWeaponForLoadout_Params params;
	params.IndexAt = IndexAt;
	params.DesiredWeapon = DesiredWeapon;
	params.UseLoadout = UseLoadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.CheckWeaponForCurrentLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  DesiredWeapon                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FText> UPlayerLoadoutsSave::CheckWeaponForCurrentLoadout(int IndexAt, class UClass* DesiredWeapon)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.CheckWeaponForCurrentLoadout");
	}

	UPlayerLoadoutsSave_CheckWeaponForCurrentLoadout_Params params;
	params.IndexAt = IndexAt;
	params.DesiredWeapon = DesiredWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.CheckThrowableForLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  DesiredThrowable               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMALoadout              UseLoadout                     (Parm, NativeAccessSpecifierPublic)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FText> UPlayerLoadoutsSave::CheckThrowableForLoadout(int IndexAt, class UClass* DesiredThrowable, const struct FMALoadout& UseLoadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.CheckThrowableForLoadout");
	}

	UPlayerLoadoutsSave_CheckThrowableForLoadout_Params params;
	params.IndexAt = IndexAt;
	params.DesiredThrowable = DesiredThrowable;
	params.UseLoadout = UseLoadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.CheckThrowableForCurrentLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            IndexAt                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  DesiredThrowable               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FText> UPlayerLoadoutsSave::CheckThrowableForCurrentLoadout(int IndexAt, class UClass* DesiredThrowable)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.CheckThrowableForCurrentLoadout");
	}

	UPlayerLoadoutsSave_CheckThrowableForCurrentLoadout_Params params;
	params.IndexAt = IndexAt;
	params.DesiredThrowable = DesiredThrowable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.CheckPackForLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredBackpack                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMALoadout              UseLoadout                     (Parm, NativeAccessSpecifierPublic)
// class UClass*                  OverrideComparisonCharacter    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FText> UPlayerLoadoutsSave::CheckPackForLoadout(class UClass* DesiredBackpack, const struct FMALoadout& UseLoadout, class UClass* OverrideComparisonCharacter)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.CheckPackForLoadout");
	}

	UPlayerLoadoutsSave_CheckPackForLoadout_Params params;
	params.DesiredBackpack = DesiredBackpack;
	params.UseLoadout = UseLoadout;
	params.OverrideComparisonCharacter = OverrideComparisonCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.CheckPackForCurrentLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredBackpack                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  OverrideComparisonCharacter    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FText> UPlayerLoadoutsSave::CheckPackForCurrentLoadout(class UClass* DesiredBackpack, class UClass* OverrideComparisonCharacter)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.CheckPackForCurrentLoadout");
	}

	UPlayerLoadoutsSave_CheckPackForCurrentLoadout_Params params;
	params.DesiredBackpack = DesiredBackpack;
	params.OverrideComparisonCharacter = OverrideComparisonCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.CheckLoadoutNameUnique
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 DesiredName                    (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPlayerLoadoutsSave::CheckLoadoutNameUnique(struct FString* DesiredName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.CheckLoadoutNameUnique");
	}

	UPlayerLoadoutsSave_CheckLoadoutNameUnique_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DesiredName != nullptr)
		*DesiredName = params.DesiredName;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.CheckCharacterForLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredCharacter               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMALoadout              UseLoadout                     (Parm, NativeAccessSpecifierPublic)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FText> UPlayerLoadoutsSave::CheckCharacterForLoadout(class UClass* DesiredCharacter, const struct FMALoadout& UseLoadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.CheckCharacterForLoadout");
	}

	UPlayerLoadoutsSave_CheckCharacterForLoadout_Params params;
	params.DesiredCharacter = DesiredCharacter;
	params.UseLoadout = UseLoadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.CheckCharacterForCurrentLoadout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  DesiredCharacter               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FText> UPlayerLoadoutsSave::CheckCharacterForCurrentLoadout(class UClass* DesiredCharacter)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.CheckCharacterForCurrentLoadout");
	}

	UPlayerLoadoutsSave_CheckCharacterForCurrentLoadout_Params params;
	params.DesiredCharacter = DesiredCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PlayerLoadoutsSave.ChangeSelectedLoadout
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMALoadout              Loadout                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UPlayerLoadoutsSave::ChangeSelectedLoadout(struct FMALoadout* Loadout)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PlayerLoadoutsSave.ChangeSelectedLoadout");
	}

	UPlayerLoadoutsSave_ChangeSelectedLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Loadout != nullptr)
		*Loadout = params.Loadout;

}


// Function MidairCE.TutorialDialougeManager.TryAddSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTutorialDialougeDetails NewSound                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UTutorialDialougeManager::TryAddSound(const struct FTutorialDialougeDetails& NewSound)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TutorialDialougeManager.TryAddSound");
	}

	UTutorialDialougeManager_TryAddSound_Params params;
	params.NewSound = NewSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.TutorialDialougeManager.StartNewDialouge
// (Final, Native, Public)
void UTutorialDialougeManager::StartNewDialouge()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TutorialDialougeManager.StartNewDialouge");
	}

	UTutorialDialougeManager_StartNewDialouge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.TutorialDialougeManager.NewDialougeManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Owner                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTutorialDialougeManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTutorialDialougeManager* UTutorialDialougeManager::STATIC_NewDialougeManager(class UObject* Owner)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TutorialDialougeManager.NewDialougeManager");
	}

	UTutorialDialougeManager_NewDialougeManager_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.TutorialDialougeManager.DialougeFinished
// (Final, Native, Public)
void UTutorialDialougeManager::DialougeFinished()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TutorialDialougeManager.DialougeFinished");
	}

	UTutorialDialougeManager_DialougeFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.TutorialDialougeManager.ClearAndStopAllSounds
// (Final, Native, Public, BlueprintCallable)
void UTutorialDialougeManager::ClearAndStopAllSounds()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TutorialDialougeManager.ClearAndStopAllSounds");
	}

	UTutorialDialougeManager_ClearAndStopAllSounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.PRGameMode.OnTriggerEndLesson
// (Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APRGameMode::OnTriggerEndLesson(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PRGameMode.OnTriggerEndLesson");
	}

	APRGameMode_OnTriggerEndLesson_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.PRGameMode.OnTriggerBeginLesson
// (Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APRGameMode::OnTriggerBeginLesson(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PRGameMode.OnTriggerBeginLesson");
	}

	APRGameMode_OnTriggerBeginLesson_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.PRGameMode.GetCurrentLessonTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName APRGameMode::GetCurrentLessonTag()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PRGameMode.GetCurrentLessonTag");
	}

	APRGameMode_GetCurrentLessonTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PRGameMode.GetCurrentLesson
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPracticeLessonDetails  ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FPracticeLessonDetails APRGameMode::GetCurrentLesson()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PRGameMode.GetCurrentLesson");
	}

	APRGameMode_GetCurrentLesson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.PRGameMode.AdvanceTrackingToLesson
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APRGameMode::AdvanceTrackingToLesson(int Index)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PRGameMode.AdvanceTrackingToLesson");
	}

	APRGameMode_AdvanceTrackingToLesson_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.PRGameMode.AdvanceToNextLesson
// (Native, Public, BlueprintCallable)
void APRGameMode::AdvanceToNextLesson()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.PRGameMode.AdvanceToNextLesson");
	}

	APRGameMode_AdvanceToNextLesson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.SensorNetworkComponent.SetSensorChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  NewChannel                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USensorNetworkComponent::SetSensorChannel(unsigned char NewChannel)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SensorNetworkComponent.SetSensorChannel");
	}

	USensorNetworkComponent_SetSensorChannel_Params params;
	params.NewChannel = NewChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.SensorNetworkComponent.Reactivate
// (Native, Public)
void USensorNetworkComponent::Reactivate()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SensorNetworkComponent.Reactivate");
	}

	USensorNetworkComponent_Reactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.SensorNetworkComponent.HasDetectedTarget
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetComponent*        TargetComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USensorNetworkComponent::HasDetectedTarget(class UTargetComponent* TargetComponent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SensorNetworkComponent.HasDetectedTarget");
	}

	USensorNetworkComponent_HasDetectedTarget_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.SensorNetworkComponent.GetSensorChannel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char USensorNetworkComponent::GetSensorChannel()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SensorNetworkComponent.GetSensorChannel");
	}

	USensorNetworkComponent_GetSensorChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ServiceBlueprintLibrary.TeamUpdate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamTags                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Avatar                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UServiceBlueprintLibrary::STATIC_TeamUpdate(class APlayerController* Player, const struct FString& TeamId, const struct FString& Description, const struct FString& TeamName, const struct FString& TeamTags, const struct FString& Avatar)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ServiceBlueprintLibrary.TeamUpdate");
	}

	UServiceBlueprintLibrary_TeamUpdate_Params params;
	params.Player = Player;
	params.TeamId = TeamId;
	params.Description = Description;
	params.TeamName = TeamName;
	params.TeamTags = TeamTags;
	params.Avatar = Avatar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ServiceBlueprintLibrary.TeamRespondToInvite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InviteId                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Response                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InviteIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UServiceBlueprintLibrary::STATIC_TeamRespondToInvite(class APlayerController* Player, const struct FString& InviteId, const struct FString& Response, int InviteIndex)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ServiceBlueprintLibrary.TeamRespondToInvite");
	}

	UServiceBlueprintLibrary_TeamRespondToInvite_Params params;
	params.Player = Player;
	params.InviteId = InviteId;
	params.Response = Response;
	params.InviteIndex = InviteIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ServiceBlueprintLibrary.TeamRemoveOrLeave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMATeam                 Team                           (Parm, NativeAccessSpecifierPublic)
// struct FString                 SteamId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UServiceBlueprintLibrary::STATIC_TeamRemoveOrLeave(class APlayerController* Player, const struct FMATeam& Team, const struct FString& SteamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ServiceBlueprintLibrary.TeamRemoveOrLeave");
	}

	UServiceBlueprintLibrary_TeamRemoveOrLeave_Params params;
	params.Player = Player;
	params.Team = Team;
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ServiceBlueprintLibrary.TeamInvitePlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 SteamId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UServiceBlueprintLibrary::STATIC_TeamInvitePlayer(class APlayerController* Player, const struct FString& SteamId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ServiceBlueprintLibrary.TeamInvitePlayer");
	}

	UServiceBlueprintLibrary_TeamInvitePlayer_Params params;
	params.Player = Player;
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ServiceBlueprintLibrary.TeamDisband
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMATeam                 Team                           (Parm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UServiceBlueprintLibrary::STATIC_TeamDisband(class APlayerController* Player, const struct FMATeam& Team)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ServiceBlueprintLibrary.TeamDisband");
	}

	UServiceBlueprintLibrary_TeamDisband_Params params;
	params.Player = Player;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ServiceBlueprintLibrary.TeamCreate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       NewPlayer                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TeamTags                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UServiceBlueprintLibrary::STATIC_TeamCreate(class APlayerController* NewPlayer, const struct FString& TeamName, const struct FString& TeamTags, const struct FString& Description)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ServiceBlueprintLibrary.TeamCreate");
	}

	UServiceBlueprintLibrary_TeamCreate_Params params;
	params.NewPlayer = NewPlayer;
	params.TeamName = TeamName;
	params.TeamTags = TeamTags;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ServiceBlueprintLibrary.IsSameDemoVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DemoVersion                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UServiceBlueprintLibrary::STATIC_IsSameDemoVersion(const struct FString& DemoVersion)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ServiceBlueprintLibrary.IsSameDemoVersion");
	}

	UServiceBlueprintLibrary_IsSameDemoVersion_Params params;
	params.DemoVersion = DemoVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ServiceBlueprintLibrary.IsDownloadedDemo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 DemoId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UServiceBlueprintLibrary::STATIC_IsDownloadedDemo(const struct FString& DemoId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ServiceBlueprintLibrary.IsDownloadedDemo");
	}

	UServiceBlueprintLibrary_IsDownloadedDemo_Params params;
	params.DemoId = DemoId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ServiceBlueprintLibrary.GetDemoProgress
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UServiceBlueprintLibrary::STATIC_GetDemoProgress()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ServiceBlueprintLibrary.GetDemoProgress");
	}

	UServiceBlueprintLibrary_GetDemoProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.ServiceBlueprintLibrary.CancelGetDemo
// (Final, Native, Static, Public, BlueprintCallable)
void UServiceBlueprintLibrary::STATIC_CancelGetDemo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.ServiceBlueprintLibrary.CancelGetDemo");
	}

	UServiceBlueprintLibrary_CancelGetDemo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.SetUserBanStatusAsyncTask.BanUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsBanned                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USetUserBanStatusAsyncTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USetUserBanStatusAsyncTask* USetUserBanStatusAsyncTask::STATIC_BanUser(class APlayerState* PlayerState, bool bIsBanned)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SetUserBanStatusAsyncTask.BanUser");
	}

	USetUserBanStatusAsyncTask_BanUser_Params params;
	params.PlayerState = PlayerState;
	params.bIsBanned = bIsBanned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.SteamMatchMakingBlueprintLibrary.StopMatchMaking
// (Final, Native, Static, Public, BlueprintCallable)
void USteamMatchMakingBlueprintLibrary::STATIC_StopMatchMaking()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SteamMatchMakingBlueprintLibrary.StopMatchMaking");
	}

	USteamMatchMakingBlueprintLibrary_StopMatchMaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.SteamMatchMakingBlueprintLibrary.StartMatchMaking
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<TEnumAsByte<MidairCE_EMAMatchType>> MatchType                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           WaitingWarmupServer            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IncludeNonOfficialServer       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamMatchMakingBlueprintLibrary::STATIC_StartMatchMaking(TArray<TEnumAsByte<MidairCE_EMAMatchType>> MatchType, bool WaitingWarmupServer, bool IncludeNonOfficialServer)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SteamMatchMakingBlueprintLibrary.StartMatchMaking");
	}

	USteamMatchMakingBlueprintLibrary_StartMatchMaking_Params params;
	params.MatchType = MatchType;
	params.WaitingWarmupServer = WaitingWarmupServer;
	params.IncludeNonOfficialServer = IncludeNonOfficialServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.SteamMatchMakingBlueprintLibrary.IsValidLobby
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<MidairCE_EMAMatchType> MatchType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamMatchMakingBlueprintLibrary::STATIC_IsValidLobby(TEnumAsByte<MidairCE_EMAMatchType> MatchType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SteamMatchMakingBlueprintLibrary.IsValidLobby");
	}

	USteamMatchMakingBlueprintLibrary_IsValidLobby_Params params;
	params.MatchType = MatchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.SteamMatchMakingBlueprintLibrary.IsLobbyOwner
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamMatchMakingBlueprintLibrary::STATIC_IsLobbyOwner()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SteamMatchMakingBlueprintLibrary.IsLobbyOwner");
	}

	USteamMatchMakingBlueprintLibrary_IsLobbyOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.SteamMatchMakingBlueprintLibrary.GetNumLobbyMembers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<MidairCE_EMAMatchType> MatchType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USteamMatchMakingBlueprintLibrary::STATIC_GetNumLobbyMembers(TEnumAsByte<MidairCE_EMAMatchType> MatchType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SteamMatchMakingBlueprintLibrary.GetNumLobbyMembers");
	}

	USteamMatchMakingBlueprintLibrary_GetNumLobbyMembers_Params params;
	params.MatchType = MatchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.SteamMatchMakingBlueprintLibrary.GetMyPlayerInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlayerInfo             PlayerInfo                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamMatchMakingBlueprintLibrary::STATIC_GetMyPlayerInfo(struct FPlayerInfo* PlayerInfo)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SteamMatchMakingBlueprintLibrary.GetMyPlayerInfo");
	}

	USteamMatchMakingBlueprintLibrary_GetMyPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;


	return params.ReturnValue;
}


// Function MidairCE.SteamMatchMakingBlueprintLibrary.GetMatchMakingTime
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FTimespan USteamMatchMakingBlueprintLibrary::STATIC_GetMatchMakingTime()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SteamMatchMakingBlueprintLibrary.GetMatchMakingTime");
	}

	USteamMatchMakingBlueprintLibrary_GetMatchMakingTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.SteamMatchMakingBlueprintLibrary.GetLobbyStatus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<MidairCE_EMAMatchLobbyStatus> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<MidairCE_EMAMatchLobbyStatus> USteamMatchMakingBlueprintLibrary::STATIC_GetLobbyStatus()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SteamMatchMakingBlueprintLibrary.GetLobbyStatus");
	}

	USteamMatchMakingBlueprintLibrary_GetLobbyStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.SteamMatchMakingBlueprintLibrary.GetLobbyPlayers
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<MidairCE_EMAMatchType> MatchType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPlayerInfo>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FPlayerInfo> USteamMatchMakingBlueprintLibrary::STATIC_GetLobbyPlayers(TEnumAsByte<MidairCE_EMAMatchType> MatchType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SteamMatchMakingBlueprintLibrary.GetLobbyPlayers");
	}

	USteamMatchMakingBlueprintLibrary_GetLobbyPlayers_Params params;
	params.MatchType = MatchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.SteamMatchMakingBlueprintLibrary.GetLobbyGameCreated
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLobbyGameCreated       LobbyGameCreated               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamMatchMakingBlueprintLibrary::STATIC_GetLobbyGameCreated(struct FLobbyGameCreated* LobbyGameCreated)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SteamMatchMakingBlueprintLibrary.GetLobbyGameCreated");
	}

	USteamMatchMakingBlueprintLibrary_GetLobbyGameCreated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LobbyGameCreated != nullptr)
		*LobbyGameCreated = params.LobbyGameCreated;


	return params.ReturnValue;
}


// Function MidairCE.SteamMatchMakingBlueprintLibrary.EventTick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USteamMatchMakingBlueprintLibrary::STATIC_EventTick(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SteamMatchMakingBlueprintLibrary.EventTick");
	}

	USteamMatchMakingBlueprintLibrary_EventTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.SteamMatchMakingBlueprintLibrary.Equal
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl        UniqueId1                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl        UniqueId2                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USteamMatchMakingBlueprintLibrary::STATIC_Equal(const struct FUniqueNetIdRepl& UniqueId1, const struct FUniqueNetIdRepl& UniqueId2)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SteamMatchMakingBlueprintLibrary.Equal");
	}

	USteamMatchMakingBlueprintLibrary_Equal_Params params;
	params.UniqueId1 = UniqueId1;
	params.UniqueId2 = UniqueId2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.SubmitUserReportAsyncTask.SubmitUserReport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SteamId                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Summary                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Description                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Reproduce                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Severity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USubmitUserReportAsyncTask* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USubmitUserReportAsyncTask* USubmitUserReportAsyncTask::STATIC_SubmitUserReport(const struct FString& SteamId, const struct FString& Summary, const struct FString& Description, const struct FString& Reproduce, int Severity)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.SubmitUserReportAsyncTask.SubmitUserReport");
	}

	USubmitUserReportAsyncTask_SubmitUserReport_Params params;
	params.SteamId = SteamId;
	params.Summary = Summary;
	params.Description = Description;
	params.Reproduce = Reproduce;
	params.Severity = Severity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.TargetComponent.StopAllTargetting
// (Native, Protected)
void UTargetComponent::StopAllTargetting()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TargetComponent.StopAllTargetting");
	}

	UTargetComponent_StopAllTargetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.TargetComponent.SetSensorResolutionStrengthTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// MidairCE_ESensorResolutionStrength Strength                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTargetComponent::SetSensorResolutionStrengthTime(MidairCE_ESensorResolutionStrength Strength, float Time)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TargetComponent.SetSensorResolutionStrengthTime");
	}

	UTargetComponent_SetSensorResolutionStrengthTime_Params params;
	params.Strength = Strength;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.TargetComponent.PushSensorModifiers
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSensorTargetModifiers  Modifiers                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UTargetComponent::PushSensorModifiers(const struct FSensorTargetModifiers& Modifiers)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TargetComponent.PushSensorModifiers");
	}

	UTargetComponent_PushSensorModifiers_Params params;
	params.Modifiers = Modifiers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.TargetComponent.PopSensorModifiers
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSensorTargetModifiers  Modifiers                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UTargetComponent::PopSensorModifiers(const struct FSensorTargetModifiers& Modifiers)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TargetComponent.PopSensorModifiers");
	}

	UTargetComponent_PopSensorModifiers_Params params;
	params.Modifiers = Modifiers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.TargetComponent.IsDetectedByChannel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  InChannel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTargetComponent::IsDetectedByChannel(unsigned char InChannel)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TargetComponent.IsDetectedByChannel");
	}

	UTargetComponent_IsDetectedByChannel_Params params;
	params.InChannel = InChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.TargetComponent.GetHighestDetectedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// MidairCE_EDetectedState        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MidairCE_EDetectedState UTargetComponent::GetHighestDetectedState()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TargetComponent.GetHighestDetectedState");
	}

	UTargetComponent_GetHighestDetectedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.TargetDummy.OnDied
// (Final, Native, Public)
void ATargetDummy::OnDied()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TargetDummy.OnDied");
	}

	ATargetDummy_OnDied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.TargetDummy.GetTeamID
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char ATargetDummy::GetTeamID()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TargetDummy.GetTeamID");
	}

	ATargetDummy_GetTeamID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.TargetDummy.ForceKill
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void ATargetDummy::ForceKill()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TargetDummy.ForceKill");
	}

	ATargetDummy_ForceKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.TDMFlag.OnStop
// (Native, Public, HasOutParms)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void ATDMFlag::OnStop(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TDMFlag.OnStop");
	}

	ATDMFlag_OnStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.TDMFlag.OnBounce
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATDMFlag::OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TDMFlag.OnBounce");
	}

	ATDMFlag_OnBounce_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.TDMGameState.GetIsFlagHolder
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AMAPlayerState*          PlayerState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ATDMGameState::GetIsFlagHolder(class AMAPlayerState* PlayerState)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TDMGameState.GetIsFlagHolder");
	}

	ATDMGameState_GetIsFlagHolder_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.TDMGameState.GetHoldingTeam
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ATDMGameState::GetHoldingTeam()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TDMGameState.GetHoldingTeam");
	}

	ATDMGameState_GetHoldingTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.TDMGameState.GetFlagStateName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName ATDMGameState::GetFlagStateName()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TDMGameState.GetFlagStateName");
	}

	ATDMGameState_GetFlagStateName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.TDMGameState.GetFlagBase
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ATDMFlagBase*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ATDMFlagBase* ATDMGameState::GetFlagBase()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.TDMGameState.GetFlagBase");
	}

	ATDMGameState_GetFlagBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MidairCE.WeaponAmmoArt.SetOverrideMaterials
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      NewMaterial3P                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*      NewMaterial1P                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWeaponAmmoArt::SetOverrideMaterials(class UMaterialInterface* NewMaterial3P, class UMaterialInterface* NewMaterial1P)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.WeaponAmmoArt.SetOverrideMaterials");
	}

	AWeaponAmmoArt_SetOverrideMaterials_Params params;
	params.NewMaterial3P = NewMaterial3P;
	params.NewMaterial1P = NewMaterial1P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.WeaponAmmoArt.SetChargeIndicator
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AWeaponAmmoArt::SetChargeIndicator(float Intensity)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.WeaponAmmoArt.SetChargeIndicator");
	}

	AWeaponAmmoArt_SetChargeIndicator_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MidairCE.WeaponAmmoArt.OnComponentHit
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AWeaponAmmoArt::OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function MidairCE.WeaponAmmoArt.OnComponentHit");
	}

	AWeaponAmmoArt_OnComponentHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
