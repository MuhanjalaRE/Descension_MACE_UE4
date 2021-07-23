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

// Function WBP_StaticMessage.WBP_StaticMessage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_StaticMessage_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StaticMessage.WBP_StaticMessage_C.PreConstruct");
	}

	UWBP_StaticMessage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StaticMessage.WBP_StaticMessage_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_StaticMessage_C::Remove()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StaticMessage.WBP_StaticMessage_C.Remove");
	}

	UWBP_StaticMessage_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StaticMessage.WBP_StaticMessage_C.ExecuteUbergraph_WBP_StaticMessage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StaticMessage_C::ExecuteUbergraph_WBP_StaticMessage(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StaticMessage.WBP_StaticMessage_C.ExecuteUbergraph_WBP_StaticMessage");
	}

	UWBP_StaticMessage_C_ExecuteUbergraph_WBP_StaticMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StaticMessage.WBP_StaticMessage_C.OnRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_StaticMessage_C::OnRemoved__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StaticMessage.WBP_StaticMessage_C.OnRemoved__DelegateSignature");
	}

	UWBP_StaticMessage_C_OnRemoved__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StaticMessage.WBP_StaticMessage_C.OnActionAccepted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_StaticMessage_C::OnActionAccepted__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StaticMessage.WBP_StaticMessage_C.OnActionAccepted__DelegateSignature");
	}

	UWBP_StaticMessage_C_OnActionAccepted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
