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

// Function WBP_WeaponInfo.WBP_WeaponInfo_C.Update Weapon Stats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponStatDetails      Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WeaponInfo_C::Update_Weapon_Stats(const struct FWeaponStatDetails& Stats)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_WeaponInfo.WBP_WeaponInfo_C.Update Weapon Stats");
	}

	UWBP_WeaponInfo_C_Update_Weapon_Stats_Params params;
	params.Stats = Stats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_WeaponInfo.WBP_WeaponInfo_C.ExecuteUbergraph_WBP_WeaponInfo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WeaponInfo_C::ExecuteUbergraph_WBP_WeaponInfo(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_WeaponInfo.WBP_WeaponInfo_C.ExecuteUbergraph_WBP_WeaponInfo");
	}

	UWBP_WeaponInfo_C_ExecuteUbergraph_WBP_WeaponInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
