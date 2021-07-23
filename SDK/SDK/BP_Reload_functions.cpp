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

// Function BP_Reload.BP_Reload_C.OnActiveChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter*            ReceivingCharacter             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Reload_C::OnActiveChanged(class AMACharacter* ReceivingCharacter)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Reload.BP_Reload_C.OnActiveChanged");
	}

	UBP_Reload_C_OnActiveChanged_Params params;
	params.ReceivingCharacter = ReceivingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Reload.BP_Reload_C.OnGivenTo
// (Event, Protected, BlueprintEvent)
void UBP_Reload_C::OnGivenTo()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Reload.BP_Reload_C.OnGivenTo");
	}

	UBP_Reload_C_OnGivenTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Reload.BP_Reload_C.OnRemoved
// (Event, Protected, BlueprintEvent)
void UBP_Reload_C::OnRemoved()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Reload.BP_Reload_C.OnRemoved");
	}

	UBP_Reload_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Reload.BP_Reload_C.ExecuteUbergraph_BP_Reload
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Reload_C::ExecuteUbergraph_BP_Reload(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Reload.BP_Reload_C.ExecuteUbergraph_BP_Reload");
	}

	UBP_Reload_C_ExecuteUbergraph_BP_Reload_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
