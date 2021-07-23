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

// Function WBP_ScoreFeed.WBP_ScoreFeed_C.Add Score Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Score_Name                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Score_Value                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ScoreFeed_C::Add_Score_Event(const struct FText& Score_Name, float Score_Value)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ScoreFeed.WBP_ScoreFeed_C.Add Score Event");
	}

	UWBP_ScoreFeed_C_Add_Score_Event_Params params;
	params.Score_Name = Score_Name;
	params.Score_Value = Score_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ScoreFeed.WBP_ScoreFeed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ScoreFeed_C::Construct()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ScoreFeed.WBP_ScoreFeed_C.Construct");
	}

	UWBP_ScoreFeed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_ScoreFeed.WBP_ScoreFeed_C.ExecuteUbergraph_WBP_ScoreFeed
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ScoreFeed_C::ExecuteUbergraph_WBP_ScoreFeed(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_ScoreFeed.WBP_ScoreFeed_C.ExecuteUbergraph_WBP_ScoreFeed");
	}

	UWBP_ScoreFeed_C_ExecuteUbergraph_WBP_ScoreFeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
