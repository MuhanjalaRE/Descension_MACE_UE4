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

// Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FragGrenade_Shell_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.ReceiveEndPlay");
	}

	ABP_FragGrenade_Shell_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.ExecuteUbergraph_BP_FragGrenade_Shell
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FragGrenade_Shell_C::ExecuteUbergraph_BP_FragGrenade_Shell(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_FragGrenade_Shell.BP_FragGrenade_Shell_C.ExecuteUbergraph_BP_FragGrenade_Shell");
	}

	ABP_FragGrenade_Shell_C_ExecuteUbergraph_BP_FragGrenade_Shell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
