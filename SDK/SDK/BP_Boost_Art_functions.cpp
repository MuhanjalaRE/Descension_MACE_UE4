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

// Function BP_Boost_Art.BP_Boost_Art_C.SetActive_Visuals
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Boost_Art_C::SetActive_Visuals(bool bActive)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Boost_Art.BP_Boost_Art_C.SetActive_Visuals");
	}

	UBP_Boost_Art_C_SetActive_Visuals_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Boost_Art.BP_Boost_Art_C.ExecuteUbergraph_BP_Boost_Art
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Boost_Art_C::ExecuteUbergraph_BP_Boost_Art(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Boost_Art.BP_Boost_Art_C.ExecuteUbergraph_BP_Boost_Art");
	}

	UBP_Boost_Art_C_ExecuteUbergraph_BP_Boost_Art_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
