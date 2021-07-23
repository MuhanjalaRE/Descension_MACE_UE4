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

// Function BP_BaseCharacter.BP_BaseCharacter_C.Zoomed
struct ABP_BaseCharacter_C_Zoomed_Params
{
	bool                                               isZoomed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetWeaponByIndex
struct ABP_BaseCharacter_C_GetWeaponByIndex_Params
{
	int                                                WeaponIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMAWeapon*                                   Weapon;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UserConstructionScript
struct ABP_BaseCharacter_C_UserConstructionScript_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_0__FinishedFunc
struct ABP_BaseCharacter_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_0__UpdateFunc
struct ABP_BaseCharacter_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_PlayTakeHitEffects
struct ABP_BaseCharacter_C_BP_PlayTakeHitEffects_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick
struct ABP_BaseCharacter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.BP_OnRep_PlayerState
struct ABP_BaseCharacter_C_BP_OnRep_PlayerState_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged
struct ABP_BaseCharacter_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PrevCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      NewCustomMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter
struct ABP_BaseCharacter_C_ExecuteUbergraph_BP_BaseCharacter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
