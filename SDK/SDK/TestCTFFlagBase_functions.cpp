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

// Function TestCTFFlagBase.TestCTFFlagBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATestCTFFlagBase_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function TestCTFFlagBase.TestCTFFlagBase_C.UserConstructionScript");
	}

	ATestCTFFlagBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestCTFFlagBase.TestCTFFlagBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATestCTFFlagBase_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function TestCTFFlagBase.TestCTFFlagBase_C.ReceiveBeginPlay");
	}

	ATestCTFFlagBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestCTFFlagBase.TestCTFFlagBase_C.ExecuteUbergraph_TestCTFFlagBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestCTFFlagBase_C::ExecuteUbergraph_TestCTFFlagBase(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function TestCTFFlagBase.TestCTFFlagBase_C.ExecuteUbergraph_TestCTFFlagBase");
	}

	ATestCTFFlagBase_C_ExecuteUbergraph_TestCTFFlagBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
