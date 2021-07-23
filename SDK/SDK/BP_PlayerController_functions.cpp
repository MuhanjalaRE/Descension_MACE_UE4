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

// Function BP_PlayerController.BP_PlayerController_C.SetupDeathEffects
// (Event, Public, BlueprintEvent)
void ABP_PlayerController_C::SetupDeathEffects()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.SetupDeathEffects");
	}

	ABP_PlayerController_C_SetupDeathEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.ClearDeathEffects
// (Event, Public, BlueprintEvent)
void ABP_PlayerController_C::ClearDeathEffects()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ClearDeathEffects");
	}

	ABP_PlayerController_C_ClearDeathEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_C::ExecuteUbergraph_BP_PlayerController(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController");
	}

	ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
