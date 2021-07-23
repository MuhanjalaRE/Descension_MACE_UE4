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

// Function WBP_MapVote.WBP_MapVote_C.Get_VoteText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_MapVote_C::Get_VoteText_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MapVote.WBP_MapVote_C.Get_VoteText_Text_1");
	}

	UWBP_MapVote_C_Get_VoteText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_MapVote.WBP_MapVote_C.BndEvt__Button_70_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_MapVote_C::BndEvt__Button_70_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MapVote.WBP_MapVote_C.BndEvt__Button_70_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_MapVote_C_BndEvt__Button_70_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MapVote.WBP_MapVote_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_MapVote_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MapVote.WBP_MapVote_C.Construct");
	}

	UWBP_MapVote_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MapVote.WBP_MapVote_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MapVote_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MapVote.WBP_MapVote_C.Tick");
	}

	UWBP_MapVote_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MapVote.WBP_MapVote_C.RefreshName
// (BlueprintCallable, BlueprintEvent)
void UWBP_MapVote_C::RefreshName()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MapVote.WBP_MapVote_C.RefreshName");
	}

	UWBP_MapVote_C_RefreshName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MapVote.WBP_MapVote_C.ExecuteUbergraph_WBP_MapVote
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MapVote_C::ExecuteUbergraph_WBP_MapVote(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MapVote.WBP_MapVote_C.ExecuteUbergraph_WBP_MapVote");
	}

	UWBP_MapVote_C_ExecuteUbergraph_WBP_MapVote_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
