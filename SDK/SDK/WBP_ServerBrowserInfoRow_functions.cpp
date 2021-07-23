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

// Function WBP_ServerBrowserInfoRow.WBP_ServerBrowserInfoRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ServerBrowserInfoRow_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserInfoRow.WBP_ServerBrowserInfoRow_C.Construct");
	}

	UWBP_ServerBrowserInfoRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ServerBrowserInfoRow.WBP_ServerBrowserInfoRow_C.ExecuteUbergraph_WBP_ServerBrowserInfoRow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ServerBrowserInfoRow_C::ExecuteUbergraph_WBP_ServerBrowserInfoRow(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ServerBrowserInfoRow.WBP_ServerBrowserInfoRow_C.ExecuteUbergraph_WBP_ServerBrowserInfoRow");
	}

	UWBP_ServerBrowserInfoRow_C_ExecuteUbergraph_WBP_ServerBrowserInfoRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
