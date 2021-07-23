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

// Function WBP_DeathEffects.WBP_DeathEffects_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DeathEffects_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DeathEffects.WBP_DeathEffects_C.Construct");
	}

	UWBP_DeathEffects_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DeathEffects.WBP_DeathEffects_C.Cleanup
// (BlueprintCallable, BlueprintEvent)
void UWBP_DeathEffects_C::Cleanup()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DeathEffects.WBP_DeathEffects_C.Cleanup");
	}

	UWBP_DeathEffects_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DeathEffects.WBP_DeathEffects_C.ExecuteUbergraph_WBP_DeathEffects
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DeathEffects_C::ExecuteUbergraph_WBP_DeathEffects(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DeathEffects.WBP_DeathEffects_C.ExecuteUbergraph_WBP_DeathEffects");
	}

	UWBP_DeathEffects_C_ExecuteUbergraph_WBP_DeathEffects_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
