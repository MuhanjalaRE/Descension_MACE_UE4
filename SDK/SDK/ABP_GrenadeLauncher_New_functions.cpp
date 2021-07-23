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

// Function ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UABP_GrenadeLauncher_New_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C.AnimGraph");
	}

	UABP_GrenadeLauncher_New_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_GrenadeLauncher_New_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C.BlueprintUpdateAnimation");
	}

	UABP_GrenadeLauncher_New_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C.ExecuteUbergraph_ABP_GrenadeLauncher_New
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_GrenadeLauncher_New_C::ExecuteUbergraph_ABP_GrenadeLauncher_New(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function ABP_GrenadeLauncher_New.ABP_GrenadeLauncher_New_C.ExecuteUbergraph_ABP_GrenadeLauncher_New");
	}

	UABP_GrenadeLauncher_New_C_ExecuteUbergraph_ABP_GrenadeLauncher_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
