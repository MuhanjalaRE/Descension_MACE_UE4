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

// Function WBP_DrillRow.WBP_DrillRow_C.Get_DrillNameText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_DrillRow_C::Get_DrillNameText_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DrillRow.WBP_DrillRow_C.Get_DrillNameText_Text_1");
	}

	UWBP_DrillRow_C_Get_DrillNameText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_DrillRow.WBP_DrillRow_C.GetMAPracticeComponentForWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMAPracticeComponent*    MAPracticeComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DrillRow_C::GetMAPracticeComponentForWidget(class UMAPracticeComponent** MAPracticeComponent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DrillRow.WBP_DrillRow_C.GetMAPracticeComponentForWidget");
	}

	UWBP_DrillRow_C_GetMAPracticeComponentForWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MAPracticeComponent != nullptr)
		*MAPracticeComponent = params.MAPracticeComponent;

}


// Function WBP_DrillRow.WBP_DrillRow_C.SetRouteTrail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMARouteTrail           RouteTrail                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_DrillRow_C::SetRouteTrail(const struct FMARouteTrail& RouteTrail)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DrillRow.WBP_DrillRow_C.SetRouteTrail");
	}

	UWBP_DrillRow_C_SetRouteTrail_Params params;
	params.RouteTrail = RouteTrail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DrillRow.WBP_DrillRow_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
void UWBP_DrillRow_C::BP_OnEntryReleased()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DrillRow.WBP_DrillRow_C.BP_OnEntryReleased");
	}

	UWBP_DrillRow_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DrillRow.WBP_DrillRow_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DrillRow_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DrillRow.WBP_DrillRow_C.BP_OnItemExpansionChanged");
	}

	UWBP_DrillRow_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DrillRow.WBP_DrillRow_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DrillRow_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DrillRow.WBP_DrillRow_C.BP_OnItemSelectionChanged");
	}

	UWBP_DrillRow_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DrillRow.WBP_DrillRow_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DrillRow_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DrillRow.WBP_DrillRow_C.OnListItemObjectSet");
	}

	UWBP_DrillRow_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DrillRow.WBP_DrillRow_C.BndEvt__LoadRouteTrailButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_DrillRow_C::BndEvt__LoadRouteTrailButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DrillRow.WBP_DrillRow_C.BndEvt__LoadRouteTrailButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_DrillRow_C_BndEvt__LoadRouteTrailButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DrillRow.WBP_DrillRow_C.BndEvt__DeleteRouteTrailButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_DrillRow_C::BndEvt__DeleteRouteTrailButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DrillRow.WBP_DrillRow_C.BndEvt__DeleteRouteTrailButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_DrillRow_C_BndEvt__DeleteRouteTrailButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DrillRow.WBP_DrillRow_C.ExecuteUbergraph_WBP_DrillRow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DrillRow_C::ExecuteUbergraph_WBP_DrillRow(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DrillRow.WBP_DrillRow_C.ExecuteUbergraph_WBP_DrillRow");
	}

	UWBP_DrillRow_C_ExecuteUbergraph_WBP_DrillRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_DrillRow.WBP_DrillRow_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_DrillRow_C::NewEventDispatcher_0__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_DrillRow.WBP_DrillRow_C.NewEventDispatcher_0__DelegateSignature");
	}

	UWBP_DrillRow_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
