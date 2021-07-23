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

// Function BP_PlayerController_Bot.BP_PlayerController_Bot_C.SetupDeathEffects_2
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_Bot_C::SetupDeathEffects_2()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_PlayerController_Bot.BP_PlayerController_Bot_C.SetupDeathEffects_2");
	}

	ABP_PlayerController_Bot_C_SetupDeathEffects_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController_Bot.BP_PlayerController_Bot_C.ClearDeathEffects_2
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerController_Bot_C::ClearDeathEffects_2()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_PlayerController_Bot.BP_PlayerController_Bot_C.ClearDeathEffects_2");
	}

	ABP_PlayerController_Bot_C_ClearDeathEffects_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerController_Bot.BP_PlayerController_Bot_C.ExecuteUbergraph_BP_PlayerController_Bot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerController_Bot_C::ExecuteUbergraph_BP_PlayerController_Bot(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_PlayerController_Bot.BP_PlayerController_Bot_C.ExecuteUbergraph_BP_PlayerController_Bot");
	}

	ABP_PlayerController_Bot_C_ExecuteUbergraph_BP_PlayerController_Bot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
