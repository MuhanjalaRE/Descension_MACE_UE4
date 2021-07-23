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

// Function IWBP_LoadoutSubPanel.IWBP_LoadoutSubPanel_C.CosmeticSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Cosmetic                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIWBP_LoadoutSubPanel_C::CosmeticSelected(class UClass* Cosmetic)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function IWBP_LoadoutSubPanel.IWBP_LoadoutSubPanel_C.CosmeticSelected");
	}

	UIWBP_LoadoutSubPanel_C_CosmeticSelected_Params params;
	params.Cosmetic = Cosmetic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IWBP_LoadoutSubPanel.IWBP_LoadoutSubPanel_C.Confirm Selection
// (Public, BlueprintCallable, BlueprintEvent)
void UIWBP_LoadoutSubPanel_C::Confirm_Selection()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function IWBP_LoadoutSubPanel.IWBP_LoadoutSubPanel_C.Confirm Selection");
	}

	UIWBP_LoadoutSubPanel_C_Confirm_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
