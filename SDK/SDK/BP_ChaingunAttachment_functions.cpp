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

// Function BP_ChaingunAttachment.BP_ChaingunAttachment_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_ChaingunAttachment_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_ChaingunAttachment.BP_ChaingunAttachment_C.ReceiveBeginPlay");
	}

	ABP_ChaingunAttachment_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ChaingunAttachment.BP_ChaingunAttachment_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ChaingunAttachment_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_ChaingunAttachment.BP_ChaingunAttachment_C.ReceiveTick");
	}

	ABP_ChaingunAttachment_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ChaingunAttachment.BP_ChaingunAttachment_C.ExecuteUbergraph_BP_ChaingunAttachment
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ChaingunAttachment_C::ExecuteUbergraph_BP_ChaingunAttachment(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function BP_ChaingunAttachment.BP_ChaingunAttachment_C.ExecuteUbergraph_BP_ChaingunAttachment");
	}

	ABP_ChaingunAttachment_C_ExecuteUbergraph_BP_ChaingunAttachment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
