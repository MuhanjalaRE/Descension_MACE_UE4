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

// Function BP_CTFGameMode.BP_CTFGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_CTFGameMode_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_CTFGameMode.BP_CTFGameMode_C.ReceiveBeginPlay");
	}

	ABP_CTFGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CTFGameMode.BP_CTFGameMode_C.ExecuteUbergraph_BP_CTFGameMode
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CTFGameMode_C::ExecuteUbergraph_BP_CTFGameMode(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_CTFGameMode.BP_CTFGameMode_C.ExecuteUbergraph_BP_CTFGameMode");
	}

	ABP_CTFGameMode_C_ExecuteUbergraph_BP_CTFGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
