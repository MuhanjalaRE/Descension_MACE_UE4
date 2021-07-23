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

// Function BP_Blaster_Bolt.BP_Blaster_Bolt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Blaster_Bolt_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Blaster_Bolt.BP_Blaster_Bolt_C.ReceiveBeginPlay");
	}

	ABP_Blaster_Bolt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Blaster_Bolt.BP_Blaster_Bolt_C.ExecuteUbergraph_BP_Blaster_Bolt
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Blaster_Bolt_C::ExecuteUbergraph_BP_Blaster_Bolt(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Blaster_Bolt.BP_Blaster_Bolt_C.ExecuteUbergraph_BP_Blaster_Bolt");
	}

	ABP_Blaster_Bolt_C_ExecuteUbergraph_BP_Blaster_Bolt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
