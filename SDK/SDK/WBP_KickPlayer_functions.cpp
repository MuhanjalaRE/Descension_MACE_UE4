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

// Function WBP_KickPlayer.WBP_KickPlayer_C.SetPlayerData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UniqueNetIdRepl                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FText                   PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_KickPlayer_C::SetPlayerData(const struct FUniqueNetIdRepl& UniqueNetIdRepl, const struct FText& PlayerName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.SetPlayerData");
	}

	UWBP_KickPlayer_C_SetPlayerData_Params params;
	params.UniqueNetIdRepl = UniqueNetIdRepl;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_KickPlayer.WBP_KickPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_KickPlayer_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.Construct");
	}

	UWBP_KickPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_KickPlayer.WBP_KickPlayer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_KickPlayer_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_KickPlayer_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_122_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_KickPlayer.WBP_KickPlayer_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_KickPlayer_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_KickPlayer_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_KickPlayer.WBP_KickPlayer_C.ExecuteUbergraph_WBP_KickPlayer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KickPlayer_C::ExecuteUbergraph_WBP_KickPlayer(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.ExecuteUbergraph_WBP_KickPlayer");
	}

	UWBP_KickPlayer_C_ExecuteUbergraph_WBP_KickPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_KickPlayer.WBP_KickPlayer_C.OnLeave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_KickPlayer_C::OnLeave__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.OnLeave__DelegateSignature");
	}

	UWBP_KickPlayer_C_OnLeave__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_KickPlayer.WBP_KickPlayer_C.OnKick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_KickPlayer_C::OnKick__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_KickPlayer.WBP_KickPlayer_C.OnKick__DelegateSignature");
	}

	UWBP_KickPlayer_C_OnKick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
