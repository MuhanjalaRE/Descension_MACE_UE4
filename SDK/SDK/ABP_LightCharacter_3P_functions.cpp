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

// Function ABP_LightCharacter_3P.ABP_LightCharacter_3P_C.Get Weapon Scale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AMAWeaponAttachment*     Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Weapon_Scale                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_LightCharacter_3P_C::Get_Weapon_Scale(class AMAWeaponAttachment* Weapon, float* Weapon_Scale)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function ABP_LightCharacter_3P.ABP_LightCharacter_3P_C.Get Weapon Scale");
	}

	UABP_LightCharacter_3P_C_Get_Weapon_Scale_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Weapon_Scale != nullptr)
		*Weapon_Scale = params.Weapon_Scale;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
