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

// Function WBP_BannedPanel.WBP_BannedPanel_C.BndEvt__Button_548_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_BannedPanel_C::BndEvt__Button_548_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BannedPanel.WBP_BannedPanel_C.BndEvt__Button_548_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
	}

	UWBP_BannedPanel_C_BndEvt__Button_548_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_BannedPanel.WBP_BannedPanel_C.ExecuteUbergraph_WBP_BannedPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BannedPanel_C::ExecuteUbergraph_WBP_BannedPanel(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_BannedPanel.WBP_BannedPanel_C.ExecuteUbergraph_WBP_BannedPanel");
	}

	UWBP_BannedPanel_C_ExecuteUbergraph_WBP_BannedPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
