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

// Function BP_RouteTrailMarker.BP_RouteTrailMarker_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RouteTrailMarker_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_RouteTrailMarker.BP_RouteTrailMarker_C.ReceiveActorEndOverlap");
	}

	ABP_RouteTrailMarker_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RouteTrailMarker.BP_RouteTrailMarker_C.ExecuteUbergraph_BP_RouteTrailMarker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RouteTrailMarker_C::ExecuteUbergraph_BP_RouteTrailMarker(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_RouteTrailMarker.BP_RouteTrailMarker_C.ExecuteUbergraph_BP_RouteTrailMarker");
	}

	ABP_RouteTrailMarker_C_ExecuteUbergraph_BP_RouteTrailMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
