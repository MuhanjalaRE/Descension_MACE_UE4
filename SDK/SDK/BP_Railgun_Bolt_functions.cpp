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

// Function BP_Railgun_Bolt.BP_Railgun_Bolt_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Railgun_Bolt_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Railgun_Bolt.BP_Railgun_Bolt_C.UserConstructionScript");
	}

	ABP_Railgun_Bolt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Railgun_Bolt.BP_Railgun_Bolt_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Railgun_Bolt_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Railgun_Bolt.BP_Railgun_Bolt_C.ReceiveBeginPlay");
	}

	ABP_Railgun_Bolt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Railgun_Bolt.BP_Railgun_Bolt_C.ExecuteUbergraph_BP_Railgun_Bolt
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Railgun_Bolt_C::ExecuteUbergraph_BP_Railgun_Bolt(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Railgun_Bolt.BP_Railgun_Bolt_C.ExecuteUbergraph_BP_Railgun_Bolt");
	}

	ABP_Railgun_Bolt_C_ExecuteUbergraph_BP_Railgun_Bolt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
