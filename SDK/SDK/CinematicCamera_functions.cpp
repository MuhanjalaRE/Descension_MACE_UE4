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

// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCineCameraComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCineCameraComponent* ACineCameraActor::GetCineCameraComponent()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraActor.GetCineCameraComponent");
	}

	ACineCameraActor_GetCineCameraComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPresetName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetLensPresetByName(const struct FString& InPresetName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensPresetByName");
	}

	UCineCameraComponent_SetLensPresetByName_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPresetName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetFilmbackPresetByName(const struct FString& InPresetName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName");
	}

	UCineCameraComponent_SetFilmbackPresetByName_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCineCameraComponent::GetVerticalFieldOfView()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView");
	}

	UCineCameraComponent_GetVerticalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetLensPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetLensPresetName()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetName");
	}

	UCineCameraComponent_GetLensPresetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCineCameraComponent::GetHorizontalFieldOfView()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView");
	}

	UCineCameraComponent_GetHorizontalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetFilmbackPresetName()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName");
	}

	UCineCameraComponent_GetFilmbackPresetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
