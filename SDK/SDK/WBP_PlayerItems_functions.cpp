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

// Function WBP_PlayerItems.WBP_PlayerItems_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_PlayerItems_C::GetText_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerItems.WBP_PlayerItems_C.GetText_1");
	}

	UWBP_PlayerItems_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_PlayerItems.WBP_PlayerItems_C.Get_ItemExampleWidget_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_PlayerItems_C::Get_ItemExampleWidget_Visibility_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerItems.WBP_PlayerItems_C.Get_ItemExampleWidget_Visibility_1");
	}

	UWBP_PlayerItems_C_Get_ItemExampleWidget_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_PlayerItems.WBP_PlayerItems_C.GetObjectInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObjectInfo*             Info                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerItems_C::GetObjectInfo(class UObjectInfo** Info)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerItems.WBP_PlayerItems_C.GetObjectInfo");
	}

	UWBP_PlayerItems_C_GetObjectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

}


// Function WBP_PlayerItems.WBP_PlayerItems_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UWBP_PlayerItems_C::GetBrush_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerItems.WBP_PlayerItems_C.GetBrush_1");
	}

	UWBP_PlayerItems_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_PlayerItems.WBP_PlayerItems_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerItems_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerItems.WBP_PlayerItems_C.Construct");
	}

	UWBP_PlayerItems_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayerItems.WBP_PlayerItems_C.Slow Tick
// (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerItems_C::Slow_Tick()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerItems.WBP_PlayerItems_C.Slow Tick");
	}

	UWBP_PlayerItems_C_Slow_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayerItems.WBP_PlayerItems_C.ExecuteUbergraph_WBP_PlayerItems
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerItems_C::ExecuteUbergraph_WBP_PlayerItems(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayerItems.WBP_PlayerItems_C.ExecuteUbergraph_WBP_PlayerItems");
	}

	UWBP_PlayerItems_C_ExecuteUbergraph_WBP_PlayerItems_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
