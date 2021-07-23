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

// Function WBP_CharacterInfo.WBP_CharacterInfo_C.Get_TextBlock_5_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_CharacterInfo_C::Get_TextBlock_5_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_CharacterInfo.WBP_CharacterInfo_C.Get_TextBlock_5_Text_1");
	}

	UWBP_CharacterInfo_C_Get_TextBlock_5_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_CharacterInfo.WBP_CharacterInfo_C.Get_StatValue_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWBP_CharacterInfo_C::Get_StatValue_Text_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_CharacterInfo.WBP_CharacterInfo_C.Get_StatValue_Text_1");
	}

	UWBP_CharacterInfo_C_Get_StatValue_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_CharacterInfo.WBP_CharacterInfo_C.Set Stat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterStatDetails   Stat                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CharacterInfo_C::Set_Stat(const struct FCharacterStatDetails& Stat)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_CharacterInfo.WBP_CharacterInfo_C.Set Stat");
	}

	UWBP_CharacterInfo_C_Set_Stat_Params params;
	params.Stat = Stat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_CharacterInfo.WBP_CharacterInfo_C.ExecuteUbergraph_WBP_CharacterInfo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CharacterInfo_C::ExecuteUbergraph_WBP_CharacterInfo(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_CharacterInfo.WBP_CharacterInfo_C.ExecuteUbergraph_WBP_CharacterInfo");
	}

	UWBP_CharacterInfo_C_ExecuteUbergraph_WBP_CharacterInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
