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

// Function WBP_Loadouts_PackInfo.WBP_Loadouts_PackInfo_C.SetErrorOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   New_Error                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Loadouts_PackInfo_C::SetErrorOnly(const struct FText& New_Error)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackInfo.WBP_Loadouts_PackInfo_C.SetErrorOnly");
	}

	UWBP_Loadouts_PackInfo_C_SetErrorOnly_Params params;
	params.New_Error = New_Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_Loadouts_PackInfo.WBP_Loadouts_PackInfo_C.Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PackInfo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Error_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Loadouts_PackInfo_C::Set(class UClass* PackInfo, const struct FText& Error_Text)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_Loadouts_PackInfo.WBP_Loadouts_PackInfo_C.Set");
	}

	UWBP_Loadouts_PackInfo_C_Set_Params params;
	params.PackInfo = PackInfo;
	params.Error_Text = Error_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
