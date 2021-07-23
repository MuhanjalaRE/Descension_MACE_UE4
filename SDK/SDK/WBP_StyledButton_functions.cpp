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

// Function WBP_StyledButton.WBP_StyledButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_StyledButton_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StyledButton.WBP_StyledButton_C.Construct");
	}

	UWBP_StyledButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StyledButton.WBP_StyledButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StyledButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StyledButton.WBP_StyledButton_C.Tick");
	}

	UWBP_StyledButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StyledButton.WBP_StyledButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_StyledButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StyledButton.WBP_StyledButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_StyledButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StyledButton.WBP_StyledButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_StyledButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StyledButton.WBP_StyledButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
	}

	UWBP_StyledButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StyledButton.WBP_StyledButton_C.ExecuteUbergraph_WBP_StyledButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StyledButton_C::ExecuteUbergraph_WBP_StyledButton(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StyledButton.WBP_StyledButton_C.ExecuteUbergraph_WBP_StyledButton");
	}

	UWBP_StyledButton_C_ExecuteUbergraph_WBP_StyledButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StyledButton.WBP_StyledButton_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Ident                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_StyledButton_C::Clicked__DelegateSignature(int Ident)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StyledButton.WBP_StyledButton_C.Clicked__DelegateSignature");
	}

	UWBP_StyledButton_C_Clicked__DelegateSignature_Params params;
	params.Ident = Ident;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
