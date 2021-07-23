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

// Function WBP_AppearanceMenu.WBP_AppearanceMenu_C.BndEvt__Skinbutton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWBP_SelectableButton_C* Clicked_Button                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AppearanceMenu_C::BndEvt__Skinbutton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(class UWBP_SelectableButton_C* Clicked_Button)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_AppearanceMenu.WBP_AppearanceMenu_C.BndEvt__Skinbutton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature");
	}

	UWBP_AppearanceMenu_C_BndEvt__Skinbutton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature_Params params;
	params.Clicked_Button = Clicked_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_AppearanceMenu.WBP_AppearanceMenu_C.ExecuteUbergraph_WBP_AppearanceMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AppearanceMenu_C::ExecuteUbergraph_WBP_AppearanceMenu(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_AppearanceMenu.WBP_AppearanceMenu_C.ExecuteUbergraph_WBP_AppearanceMenu");
	}

	UWBP_AppearanceMenu_C_ExecuteUbergraph_WBP_AppearanceMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_AppearanceMenu.WBP_AppearanceMenu_C.TryOpenSkins__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_AppearanceMenu_C::TryOpenSkins__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_AppearanceMenu.WBP_AppearanceMenu_C.TryOpenSkins__DelegateSignature");
	}

	UWBP_AppearanceMenu_C_TryOpenSkins__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
