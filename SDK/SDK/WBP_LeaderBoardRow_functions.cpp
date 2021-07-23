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

// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_LeaderBoardRow_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.OnMouseButtonDown");
	}

	UWBP_LeaderBoardRow_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Get_TextScore_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_LeaderBoardRow_C::Get_TextScore_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Get_TextScore_Text_1");
	}

	UWBP_LeaderBoardRow_C_Get_TextScore_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Get_TextNo_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_LeaderBoardRow_C::Get_TextNo_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Get_TextNo_Text_1");
	}

	UWBP_LeaderBoardRow_C_Get_TextNo_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Get_TextPlayerName_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_LeaderBoardRow_C::Get_TextPlayerName_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Get_TextPlayerName_Text_1");
	}

	UWBP_LeaderBoardRow_C_Get_TextPlayerName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Unselect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_LeaderBoardRow_C::Unselect()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Unselect");
	}

	UWBP_LeaderBoardRow_C_Unselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_LeaderBoardRow_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.Construct");
	}

	UWBP_LeaderBoardRow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_LeaderBoardRow_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.OnMouseEnter");
	}

	UWBP_LeaderBoardRow_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_LeaderBoardRow_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.OnMouseLeave");
	}

	UWBP_LeaderBoardRow_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.ExecuteUbergraph_WBP_LeaderBoardRow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LeaderBoardRow_C::ExecuteUbergraph_WBP_LeaderBoardRow(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LeaderBoardRow.WBP_LeaderBoardRow_C.ExecuteUbergraph_WBP_LeaderBoardRow");
	}

	UWBP_LeaderBoardRow_C_ExecuteUbergraph_WBP_LeaderBoardRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
