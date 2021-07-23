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

// Function BP_KineticWeaponryA.BP_KineticWeaponryA_C.OnGivenTo
// (Event, Protected, BlueprintEvent)
void UBP_KineticWeaponryA_C::OnGivenTo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_KineticWeaponryA.BP_KineticWeaponryA_C.OnGivenTo");
	}

	UBP_KineticWeaponryA_C_OnGivenTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KineticWeaponryA.BP_KineticWeaponryA_C.OnRemoved
// (Event, Protected, BlueprintEvent)
void UBP_KineticWeaponryA_C::OnRemoved()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_KineticWeaponryA.BP_KineticWeaponryA_C.OnRemoved");
	}

	UBP_KineticWeaponryA_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KineticWeaponryA.BP_KineticWeaponryA_C.ExecuteUbergraph_BP_KineticWeaponryA
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KineticWeaponryA_C::ExecuteUbergraph_BP_KineticWeaponryA(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_KineticWeaponryA.BP_KineticWeaponryA_C.ExecuteUbergraph_BP_KineticWeaponryA");
	}

	UBP_KineticWeaponryA_C_ExecuteUbergraph_BP_KineticWeaponryA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
