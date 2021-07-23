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

// Function BP_BlasterAttachment.BP_BlasterAttachment_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BlasterAttachment_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BlasterAttachment.BP_BlasterAttachment_C.ReceiveBeginPlay");
	}

	ABP_BlasterAttachment_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BlasterAttachment.BP_BlasterAttachment_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BlasterAttachment_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BlasterAttachment.BP_BlasterAttachment_C.ReceiveTick");
	}

	ABP_BlasterAttachment_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BlasterAttachment.BP_BlasterAttachment_C.ExecuteUbergraph_BP_BlasterAttachment
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BlasterAttachment_C::ExecuteUbergraph_BP_BlasterAttachment(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_BlasterAttachment.BP_BlasterAttachment_C.ExecuteUbergraph_BP_BlasterAttachment");
	}

	ABP_BlasterAttachment_C_ExecuteUbergraph_BP_BlasterAttachment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
