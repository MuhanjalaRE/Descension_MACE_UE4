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

// Function WBP_LobbyPlayerRow.WBP_LobbyPlayerRow_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 DisplayName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*              InAvatar                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LobbyPlayerRow_C::SetData(const struct FString& DisplayName, class UTexture2D* InAvatar)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_LobbyPlayerRow.WBP_LobbyPlayerRow_C.SetData");
	}

	UWBP_LobbyPlayerRow_C_SetData_Params params;
	params.DisplayName = DisplayName;
	params.InAvatar = InAvatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
