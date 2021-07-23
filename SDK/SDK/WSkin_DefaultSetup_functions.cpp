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

// Function WSkin_DefaultSetup.WSkin_DefaultSetup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWSkin_DefaultSetup_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WSkin_DefaultSetup.WSkin_DefaultSetup_C.ReceiveBeginPlay");
	}

	AWSkin_DefaultSetup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WSkin_DefaultSetup.WSkin_DefaultSetup_C.ExecuteUbergraph_WSkin_DefaultSetup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWSkin_DefaultSetup_C::ExecuteUbergraph_WSkin_DefaultSetup(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WSkin_DefaultSetup.WSkin_DefaultSetup_C.ExecuteUbergraph_WSkin_DefaultSetup");
	}

	AWSkin_DefaultSetup_C_ExecuteUbergraph_WSkin_DefaultSetup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
