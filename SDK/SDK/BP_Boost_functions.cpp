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

// Function BP_Boost.BP_Boost_C.OnActiveChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AMACharacter*            ReceivingCharacter             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Boost_C::OnActiveChanged(class AMACharacter* ReceivingCharacter)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Boost.BP_Boost_C.OnActiveChanged");
	}

	UBP_Boost_C_OnActiveChanged_Params params;
	params.ReceivingCharacter = ReceivingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Boost.BP_Boost_C.ExecuteUbergraph_BP_Boost
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Boost_C::ExecuteUbergraph_BP_Boost(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Boost.BP_Boost_C.ExecuteUbergraph_BP_Boost");
	}

	UBP_Boost_C_ExecuteUbergraph_BP_Boost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
