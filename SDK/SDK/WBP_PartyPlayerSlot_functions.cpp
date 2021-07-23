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

// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Get_LeaderIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_PartyPlayerSlot_C::Get_LeaderIcon_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Get_LeaderIcon_Visibility_1");
	}

	UWBP_PartyPlayerSlot_C_Get_LeaderIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Update Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASteamBeaconPlayerState* Steam_Player_State             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyPlayerSlot_C::Update_Slot(class ASteamBeaconPlayerState* Steam_Player_State)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Update Slot");
	}

	UWBP_PartyPlayerSlot_C_Update_Slot_Params params;
	params.Steam_Player_State = Steam_Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PartyPlayerSlot_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.PreConstruct");
	}

	UWBP_PartyPlayerSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PartyPlayerSlot_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.Construct");
	}

	UWBP_PartyPlayerSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.BndEvt__WBP_SelectableButtonWithIcon_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyPlayerSlot_C::BndEvt__WBP_SelectableButtonWithIcon_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.BndEvt__WBP_SelectableButtonWithIcon_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature");
	}

	UWBP_PartyPlayerSlot_C_BndEvt__WBP_SelectableButtonWithIcon_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.ExecuteUbergraph_WBP_PartyPlayerSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PartyPlayerSlot_C::ExecuteUbergraph_WBP_PartyPlayerSlot(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PartyPlayerSlot.WBP_PartyPlayerSlot_C.ExecuteUbergraph_WBP_PartyPlayerSlot");
	}

	UWBP_PartyPlayerSlot_C_ExecuteUbergraph_WBP_PartyPlayerSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
