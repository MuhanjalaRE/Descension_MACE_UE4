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

// Function WBP_StatsPanel.WBP_StatsPanel_C.Switch To Player Stats
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_StatsPanel_C::Switch_To_Player_Stats()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StatsPanel.WBP_StatsPanel_C.Switch To Player Stats");
	}

	UWBP_StatsPanel_C_Switch_To_Player_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StatsPanel.WBP_StatsPanel_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_StatsPanel_C::Refresh()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StatsPanel.WBP_StatsPanel_C.Refresh");
	}

	UWBP_StatsPanel_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StatsPanel.WBP_StatsPanel_C.Switch to Match History
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_StatsPanel_C::Switch_to_Match_History()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StatsPanel.WBP_StatsPanel_C.Switch to Match History");
	}

	UWBP_StatsPanel_C_Switch_to_Match_History_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StatsPanel.WBP_StatsPanel_C.Switch To Leaderboards
// (Public, BlueprintCallable, BlueprintEvent)
void UWBP_StatsPanel_C::Switch_To_Leaderboards()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StatsPanel.WBP_StatsPanel_C.Switch To Leaderboards");
	}

	UWBP_StatsPanel_C_Switch_To_Leaderboards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_StatsPanel.WBP_StatsPanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_StatsPanel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_StatsPanel.WBP_StatsPanel_C.OnFocusReceived");
	}

	UWBP_StatsPanel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
