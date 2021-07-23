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

// Function WBP_MenuToast.WBP_MenuToast_C.Quickly Hide
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time_Unitl_Hid                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MenuToast_C::Quickly_Hide(float* Time_Unitl_Hid)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MenuToast.WBP_MenuToast_C.Quickly Hide");
	}

	UWBP_MenuToast_C_Quickly_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time_Unitl_Hid != nullptr)
		*Time_Unitl_Hid = params.Time_Unitl_Hid;

}


// Function WBP_MenuToast.WBP_MenuToast_C.GetBrush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UWBP_MenuToast_C::GetBrush_1()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MenuToast.WBP_MenuToast_C.GetBrush_1");
	}

	UWBP_MenuToast_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WBP_MenuToast.WBP_MenuToast_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              DisplayImage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_MenuToast_C::Update(const struct FText& Title, class UTexture2D* DisplayImage, const struct FText& Message)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MenuToast.WBP_MenuToast_C.Update");
	}

	UWBP_MenuToast_C_Update_Params params;
	params.Title = Title;
	params.DisplayImage = DisplayImage;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MenuToast.WBP_MenuToast_C.Hide
// (BlueprintCallable, BlueprintEvent)
void UWBP_MenuToast_C::Hide()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MenuToast.WBP_MenuToast_C.Hide");
	}

	UWBP_MenuToast_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WBP_MenuToast.WBP_MenuToast_C.ExecuteUbergraph_WBP_MenuToast
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MenuToast_C::ExecuteUbergraph_WBP_MenuToast(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function WBP_MenuToast.WBP_MenuToast_C.ExecuteUbergraph_WBP_MenuToast");
	}

	UWBP_MenuToast_C_ExecuteUbergraph_WBP_MenuToast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
