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

// Function WBP_PlayPanel.WBP_PlayPanel_C.Switch To Quick Play
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayPanel_C::Switch_To_Quick_Play()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayPanel.WBP_PlayPanel_C.Switch To Quick Play");
	}

	UWBP_PlayPanel_C_Switch_To_Quick_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayPanel.WBP_PlayPanel_C.Switch To Server List
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayPanel_C::Switch_To_Server_List()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayPanel.WBP_PlayPanel_C.Switch To Server List");
	}

	UWBP_PlayPanel_C_Switch_To_Server_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayPanel.WBP_PlayPanel_C.Switch To Match Making
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayPanel_C::Switch_To_Match_Making()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayPanel.WBP_PlayPanel_C.Switch To Match Making");
	}

	UWBP_PlayPanel_C_Switch_To_Match_Making_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayPanel.WBP_PlayPanel_C.Switch to Tutorials
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayPanel_C::Switch_to_Tutorials()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayPanel.WBP_PlayPanel_C.Switch to Tutorials");
	}

	UWBP_PlayPanel_C_Switch_to_Tutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayPanel.WBP_PlayPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayPanel_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayPanel.WBP_PlayPanel_C.Construct");
	}

	UWBP_PlayPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_PlayPanel.WBP_PlayPanel_C.ExecuteUbergraph_WBP_PlayPanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayPanel_C::ExecuteUbergraph_WBP_PlayPanel(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_PlayPanel.WBP_PlayPanel_C.ExecuteUbergraph_WBP_PlayPanel");
	}

	UWBP_PlayPanel_C_ExecuteUbergraph_WBP_PlayPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
