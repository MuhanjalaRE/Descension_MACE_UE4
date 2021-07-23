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

// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Get_Backpack_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_PlayerLoadout_C::Get_Backpack_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Get_Backpack_Text_1");
	}

	UWBP_PlayerLoadout_C_Get_Backpack_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerLoadout_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Construct");
	}

	UWBP_PlayerLoadout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Custom Tick
// (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerLoadout_C::Custom_Tick()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.Custom Tick");
	}

	UWBP_PlayerLoadout_C_Custom_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.ExecuteUbergraph_WBP_PlayerLoadout
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerLoadout_C::ExecuteUbergraph_WBP_PlayerLoadout(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerLoadout.WBP_PlayerLoadout_C.ExecuteUbergraph_WBP_PlayerLoadout");
	}

	UWBP_PlayerLoadout_C_ExecuteUbergraph_WBP_PlayerLoadout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
