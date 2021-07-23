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

// Function BP_Blink_Art.BP_Blink_Art_C.StartBlink
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Blink_Art_C::StartBlink(const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Blink_Art.BP_Blink_Art_C.StartBlink");
	}

	UBP_Blink_Art_C_StartBlink_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Blink_Art.BP_Blink_Art_C.StopBlink
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Blink_Art_C::StopBlink(const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Blink_Art.BP_Blink_Art_C.StopBlink");
	}

	UBP_Blink_Art_C_StopBlink_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Blink_Art.BP_Blink_Art_C.ExecuteUbergraph_BP_Blink_Art
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Blink_Art_C::ExecuteUbergraph_BP_Blink_Art(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_Blink_Art.BP_Blink_Art_C.ExecuteUbergraph_BP_Blink_Art");
	}

	UBP_Blink_Art_C_ExecuteUbergraph_BP_Blink_Art_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
