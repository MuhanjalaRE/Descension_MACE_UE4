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

// Function BP_BaseCharacter.BP_BaseCharacter_C.Zoomed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isZoomed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BaseCharacter_C::Zoomed(bool isZoomed)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Zoomed");
	}

	ABP_BaseCharacter_C_Zoomed_Params params;
	params.isZoomed = isZoomed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.GetWeaponByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WeaponIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMAWeapon*               Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::GetWeaponByIndex(int WeaponIndex, class AMAWeapon** Weapon)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetWeaponByIndex");
	}

	ABP_BaseCharacter_C_GetWeaponByIndex_Params params;
	params.WeaponIndex = WeaponIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UserConstructionScript");
	}

	ABP_BaseCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABP_BaseCharacter_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_0__FinishedFunc");
	}

	ABP_BaseCharacter_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABP_BaseCharacter_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_0__UpdateFunc");
	}

	ABP_BaseCharacter_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_PlayTakeHitEffects
// (BlueprintCallable, BlueprintEvent)
void ABP_BaseCharacter_C::BP_PlayTakeHitEffects()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BP_PlayTakeHitEffects");
	}

	ABP_BaseCharacter_C_BP_PlayTakeHitEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick");
	}

	ABP_BaseCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_OnRep_PlayerState
// (Event, Public, BlueprintEvent)
void ABP_BaseCharacter_C::BP_OnRep_PlayerState()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BP_OnRep_PlayerState");
	}

	ABP_BaseCharacter_C_BP_OnRep_PlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EMovementMode> PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EMovementMode> NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged");
	}

	ABP_BaseCharacter_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCharacter_C::ExecuteUbergraph_BP_BaseCharacter(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter");
	}

	ABP_BaseCharacter_C_ExecuteUbergraph_BP_BaseCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
