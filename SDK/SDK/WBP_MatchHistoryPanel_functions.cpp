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

// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.GetMaxValue2_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_MatchHistoryPanel_C::GetMaxValue2_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.GetMaxValue2_1");
	}

	UWBP_MatchHistoryPanel_C_GetMaxValue2_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.GetMaxValue1_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_MatchHistoryPanel_C::GetMaxValue1_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.GetMaxValue1_1");
	}

	UWBP_MatchHistoryPanel_C_GetMaxValue1_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.UpdateStatistics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_MatchHistoryPanel_C::UpdateStatistics()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.UpdateStatistics");
	}

	UWBP_MatchHistoryPanel_C_UpdateStatistics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.ResetStatistics
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_MatchHistoryPanel_C::ResetStatistics()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.ResetStatistics");
	}

	UWBP_MatchHistoryPanel_C_ResetStatistics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.GetStatistics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMatchHistory           MatchHistory                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_MatchHistoryPanel_C::GetStatistics(const struct FMatchHistory& MatchHistory)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.GetStatistics");
	}

	UWBP_MatchHistoryPanel_C_GetStatistics_Params params;
	params.MatchHistory = MatchHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_MatchHistoryPanel_C::GetVisibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.GetVisibility_1");
	}

	UWBP_MatchHistoryPanel_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MatchHistoryPanel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.OnFocusReceived");
	}

	UWBP_MatchHistoryPanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.Set Selected Match
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MatchHistoryRow_C*  Matchr_Row                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MatchHistoryPanel_C::Set_Selected_Match(class UWBP_MatchHistoryRow_C* Matchr_Row)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.Set Selected Match");
	}

	UWBP_MatchHistoryPanel_C_Set_Selected_Match_Params params;
	params.Matchr_Row = Matchr_Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.OnFail_AF56C4AE43AE5AC8993AB38B3825525B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMatchHistory>   MatchHistory                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWBP_MatchHistoryPanel_C::OnFail_AF56C4AE43AE5AC8993AB38B3825525B(TArray<struct FMatchHistory> MatchHistory)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.OnFail_AF56C4AE43AE5AC8993AB38B3825525B");
	}

	UWBP_MatchHistoryPanel_C_OnFail_AF56C4AE43AE5AC8993AB38B3825525B_Params params;
	params.MatchHistory = MatchHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.OnSuccess_AF56C4AE43AE5AC8993AB38B3825525B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FMatchHistory>   MatchHistory                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UWBP_MatchHistoryPanel_C::OnSuccess_AF56C4AE43AE5AC8993AB38B3825525B(TArray<struct FMatchHistory> MatchHistory)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.OnSuccess_AF56C4AE43AE5AC8993AB38B3825525B");
	}

	UWBP_MatchHistoryPanel_C_OnSuccess_AF56C4AE43AE5AC8993AB38B3825525B_Params params;
	params.MatchHistory = MatchHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.OnGetMatchHistory
// (BlueprintCallable, BlueprintEvent)
void UWBP_MatchHistoryPanel_C::OnGetMatchHistory()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.OnGetMatchHistory");
	}

	UWBP_MatchHistoryPanel_C_OnGetMatchHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_68_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TEnumAsByte<SlateCore_ESelectInfo> SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MatchHistoryPanel_C::BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_68_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_68_OnSelectionChangedEvent__DelegateSignature");
	}

	UWBP_MatchHistoryPanel_C_BndEvt__GameModeSelection_K2Node_ComponentBoundEvent_68_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          CurrentOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MatchHistoryPanel_C::BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");
	}

	UWBP_MatchHistoryPanel_C_BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_MatchHistoryPanel_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.Construct");
	}

	UWBP_MatchHistoryPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.Cleanup Loop
// (BlueprintCallable, BlueprintEvent)
void UWBP_MatchHistoryPanel_C::Cleanup_Loop()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.Cleanup Loop");
	}

	UWBP_MatchHistoryPanel_C_Cleanup_Loop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.ExecuteUbergraph_WBP_MatchHistoryPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MatchHistoryPanel_C::ExecuteUbergraph_WBP_MatchHistoryPanel(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MatchHistoryPanel.WBP_MatchHistoryPanel_C.ExecuteUbergraph_WBP_MatchHistoryPanel");
	}

	UWBP_MatchHistoryPanel_C_ExecuteUbergraph_WBP_MatchHistoryPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
