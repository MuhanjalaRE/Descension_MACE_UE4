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

// Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.GetMAPracticeComponentForWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMAPracticeComponent*    MAPracticeComponent            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RouteTrailRow_C::GetMAPracticeComponentForWidget(class UMAPracticeComponent** MAPracticeComponent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.GetMAPracticeComponentForWidget");
	}

	UWBP_RouteTrailRow_C_GetMAPracticeComponentForWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MAPracticeComponent != nullptr)
		*MAPracticeComponent = params.MAPracticeComponent;

}


// Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.SetRouteTrail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMARouteTrail           RouteTrail                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_RouteTrailRow_C::SetRouteTrail(const struct FMARouteTrail& RouteTrail)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.SetRouteTrail");
	}

	UWBP_RouteTrailRow_C_SetRouteTrail_Params params;
	params.RouteTrail = RouteTrail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
void UWBP_RouteTrailRow_C::BP_OnEntryReleased()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.BP_OnEntryReleased");
	}

	UWBP_RouteTrailRow_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RouteTrailRow_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.BP_OnItemExpansionChanged");
	}

	UWBP_RouteTrailRow_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RouteTrailRow_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.BP_OnItemSelectionChanged");
	}

	UWBP_RouteTrailRow_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RouteTrailRow_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.OnListItemObjectSet");
	}

	UWBP_RouteTrailRow_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.BndEvt__LoadRouteTrailButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_RouteTrailRow_C::BndEvt__LoadRouteTrailButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.BndEvt__LoadRouteTrailButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_RouteTrailRow_C_BndEvt__LoadRouteTrailButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.BndEvt__DeleteRouteTrailButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UWBP_RouteTrailRow_C::BndEvt__DeleteRouteTrailButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.BndEvt__DeleteRouteTrailButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
	}

	UWBP_RouteTrailRow_C_BndEvt__DeleteRouteTrailButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.ExecuteUbergraph_WBP_RouteTrailRow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RouteTrailRow_C::ExecuteUbergraph_WBP_RouteTrailRow(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.ExecuteUbergraph_WBP_RouteTrailRow");
	}

	UWBP_RouteTrailRow_C_ExecuteUbergraph_WBP_RouteTrailRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RouteTrailRow_C::NewEventDispatcher_0__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_RouteTrailRow.WBP_RouteTrailRow_C.NewEventDispatcher_0__DelegateSignature");
	}

	UWBP_RouteTrailRow_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
