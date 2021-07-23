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

// Function Powerup.Powerup_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APowerup_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Powerup.Powerup_C.ReceiveActorBeginOverlap");
	}

	APowerup_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Powerup.Powerup_C.ExecuteUbergraph_Powerup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APowerup_C::ExecuteUbergraph_Powerup(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Powerup.Powerup_C.ExecuteUbergraph_Powerup");
	}

	APowerup_C_ExecuteUbergraph_Powerup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
