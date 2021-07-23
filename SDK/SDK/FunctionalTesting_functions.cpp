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

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeHighResScreenshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ResX                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ResY                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filename                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACameraActor*            Camera                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMaskEnabled                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCaptureHDR                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAutomationBlueprintFunctionLibrary::STATIC_TakeHighResScreenshot(int ResX, int ResY, const struct FString& Filename, class ACameraActor* Camera, bool bMaskEnabled, bool bCaptureHDR)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeHighResScreenshot");
	}

	UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Params params;
	params.ResX = ResX;
	params.ResY = ResY;
	params.Filename = Filename;
	params.Camera = Camera;
	params.bMaskEnabled = bMaskEnabled;
	params.bCaptureHDR = bCaptureHDR;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotOfUI
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAutomationScreenshotOptions Options                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAutomationBlueprintFunctionLibrary::STATIC_TakeAutomationScreenshotOfUI(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& Name, const struct FAutomationScreenshotOptions& Options)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotOfUI");
	}

	UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Name = Name;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ACameraActor*            Camera                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 NameOverride                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Notes                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAutomationScreenshotOptions Options                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAutomationBlueprintFunctionLibrary::STATIC_TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const struct FString& NameOverride, const struct FString& Notes, const struct FAutomationScreenshotOptions& Options)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera");
	}

	UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Camera = Camera;
	params.NameOverride = NameOverride;
	params.Notes = Notes;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Notes                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAutomationScreenshotOptions Options                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAutomationBlueprintFunctionLibrary::STATIC_TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& Name, const struct FString& Notes, const struct FAutomationScreenshotOptions& Options)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot");
	}

	UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Name = Name;
	params.Notes = Notes;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetScalabilityQualityToLow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAutomationBlueprintFunctionLibrary::STATIC_SetScalabilityQualityToLow(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetScalabilityQualityToLow");
	}

	UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetScalabilityQualityToEpic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAutomationBlueprintFunctionLibrary::STATIC_SetScalabilityQualityToEpic(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetScalabilityQualityToEpic");
	}

	UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetScalabilityQualityLevelRelativeToMax
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAutomationBlueprintFunctionLibrary::STATIC_SetScalabilityQualityLevelRelativeToMax(class UObject* WorldContextObject, int Value)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetScalabilityQualityLevelRelativeToMax");
	}

	UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatIncMax
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAutomationBlueprintFunctionLibrary::STATIC_GetStatIncMax(const struct FName& StatName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatIncMax");
	}

	UAutomationBlueprintFunctionLibrary_GetStatIncMax_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatIncAverage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAutomationBlueprintFunctionLibrary::STATIC_GetStatIncAverage(const struct FName& StatName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatIncAverage");
	}

	UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatExcMax
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAutomationBlueprintFunctionLibrary::STATIC_GetStatExcMax(const struct FName& StatName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatExcMax");
	}

	UAutomationBlueprintFunctionLibrary_GetStatExcMax_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatExcAverage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAutomationBlueprintFunctionLibrary::STATIC_GetStatExcAverage(const struct FName& StatName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatExcAverage");
	}

	UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatCallCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAutomationBlueprintFunctionLibrary::STATIC_GetStatCallCount(const struct FName& StatName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatCallCount");
	}

	UAutomationBlueprintFunctionLibrary_GetStatCallCount_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetDefaultScreenshotOptionsForRendering
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FunctionalTesting_EComparisonTolerance Tolerance                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAutomationScreenshotOptions ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAutomationScreenshotOptions UAutomationBlueprintFunctionLibrary::STATIC_GetDefaultScreenshotOptionsForRendering(FunctionalTesting_EComparisonTolerance Tolerance, float Delay)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetDefaultScreenshotOptionsForRendering");
	}

	UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Params params;
	params.Tolerance = Tolerance;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetDefaultScreenshotOptionsForGameplay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FunctionalTesting_EComparisonTolerance Tolerance                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAutomationScreenshotOptions ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAutomationScreenshotOptions UAutomationBlueprintFunctionLibrary::STATIC_GetDefaultScreenshotOptionsForGameplay(FunctionalTesting_EComparisonTolerance Tolerance, float Delay)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetDefaultScreenshotOptionsForGameplay");
	}

	UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Params params;
	params.Tolerance = Tolerance;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.EnableStatGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   GroupName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAutomationBlueprintFunctionLibrary::STATIC_EnableStatGroup(class UObject* WorldContextObject, const struct FName& GroupName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.EnableStatGroup");
	}

	UAutomationBlueprintFunctionLibrary_EnableStatGroup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.DisableStatGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   GroupName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAutomationBlueprintFunctionLibrary::STATIC_DisableStatGroup(class UObject* WorldContextObject, const struct FName& GroupName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.DisableStatGroup");
	}

	UAutomationBlueprintFunctionLibrary_DisableStatGroup_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.AutomationWaitForLoading
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UAutomationBlueprintFunctionLibrary::STATIC_AutomationWaitForLoading(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.AutomationWaitForLoading");
	}

	UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.AreAutomatedTestsRunning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAutomationBlueprintFunctionLibrary::STATIC_AreAutomatedTestsRunning()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationBlueprintFunctionLibrary.AreAutomatedTestsRunning");
	}

	UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.SetTimeLimit
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          NewTimeLimit                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FunctionalTesting_EFunctionalTestResult ResultWhenTimeRunsOut          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFunctionalTest::SetTimeLimit(float NewTimeLimit, FunctionalTesting_EFunctionalTestResult ResultWhenTimeRunsOut)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.SetTimeLimit");
	}

	AFunctionalTest_SetTimeLimit_Params params;
	params.NewTimeLimit = NewTimeLimit;
	params.ResultWhenTimeRunsOut = ResultWhenTimeRunsOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.FunctionalTest.RegisterAutoDestroyActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActorToAutoDestroy             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFunctionalTest::RegisterAutoDestroyActor(class AActor* ActorToAutoDestroy)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.RegisterAutoDestroyActor");
	}

	AFunctionalTest_RegisterAutoDestroyActor_Params params;
	params.ActorToAutoDestroy = ActorToAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.FunctionalTest.ReceiveStartTest
// (Event, Protected, BlueprintEvent)
void AFunctionalTest::ReceiveStartTest()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.ReceiveStartTest");
	}

	AFunctionalTest_ReceiveStartTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.FunctionalTest.ReceivePrepareTest
// (Event, Protected, BlueprintEvent)
void AFunctionalTest::ReceivePrepareTest()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.ReceivePrepareTest");
	}

	AFunctionalTest_ReceivePrepareTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.FunctionalTest.OnWantsReRunCheck
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::OnWantsReRunCheck()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.OnWantsReRunCheck");
	}

	AFunctionalTest_OnWantsReRunCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.OnAdditionalTestFinishedMessageRequest
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// FunctionalTesting_EFunctionalTestResult TestResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString AFunctionalTest::OnAdditionalTestFinishedMessageRequest(FunctionalTesting_EFunctionalTestResult TestResult)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.OnAdditionalTestFinishedMessageRequest");
	}

	AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Params params;
	params.TestResult = TestResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.LogMessage
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFunctionalTest::LogMessage(const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.LogMessage");
	}

	AFunctionalTest_LogMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.FunctionalTest.IsRunning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::IsRunning()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.IsRunning");
	}

	AFunctionalTest_IsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.IsReady
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::IsReady()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.IsReady");
	}

	AFunctionalTest_IsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::IsEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.IsEnabled");
	}

	AFunctionalTest_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.GetCurrentRerunReason
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName AFunctionalTest::GetCurrentRerunReason()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.GetCurrentRerunReason");
	}

	AFunctionalTest_GetCurrentRerunReason_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.FinishTest
// (Native, Public, BlueprintCallable)
// Parameters:
// FunctionalTesting_EFunctionalTestResult TestResult                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFunctionalTest::FinishTest(FunctionalTesting_EFunctionalTestResult TestResult, const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.FinishTest");
	}

	AFunctionalTest_FinishTest_Params params;
	params.TestResult = TestResult;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.FunctionalTest.DebugGatherRelevantActors
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AActor*> AFunctionalTest::DebugGatherRelevantActors()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.DebugGatherRelevantActors");
	}

	AFunctionalTest_DebugGatherRelevantActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertValue_Int
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Actual                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FunctionalTesting_EComparisonMethod ShouldBe                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Expected                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertValue_Int(int Actual, FunctionalTesting_EComparisonMethod ShouldBe, int Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertValue_Int");
	}

	AFunctionalTest_AssertValue_Int_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertValue_Float
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Actual                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FunctionalTesting_EComparisonMethod ShouldBe                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Expected                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertValue_Float(float Actual, FunctionalTesting_EComparisonMethod ShouldBe, float Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertValue_Float");
	}

	AFunctionalTest_AssertValue_Float_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertValue_DateTime
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime               Actual                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FunctionalTesting_EComparisonMethod ShouldBe                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime               Expected                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertValue_DateTime(const struct FDateTime& Actual, FunctionalTesting_EComparisonMethod ShouldBe, const struct FDateTime& Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertValue_DateTime");
	}

	AFunctionalTest_AssertValue_DateTime_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertTrue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertTrue(bool Condition, const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertTrue");
	}

	AFunctionalTest_AssertTrue_Params params;
	params.Condition = Condition;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Vector
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NotExpected                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertNotEqual_Vector");
	}

	AFunctionalTest_AssertNotEqual_Vector_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Transform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Actual                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              NotExpected                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertNotEqual_Transform");
	}

	AFunctionalTest_AssertNotEqual_Transform_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_String
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Actual                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 NotExpected                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertNotEqual_String(const struct FString& Actual, const struct FString& NotExpected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertNotEqual_String");
	}

	AFunctionalTest_AssertNotEqual_String_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Rotator
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                NotExpected                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertNotEqual_Rotator");
	}

	AFunctionalTest_AssertNotEqual_Rotator_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertIsValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertIsValid(class UObject* Object, const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertIsValid");
	}

	AFunctionalTest_AssertIsValid_Params params;
	params.Object = Object;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertFalse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Message                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertFalse(bool Condition, const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertFalse");
	}

	AFunctionalTest_AssertFalse_Params params;
	params.Condition = Condition;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Vector
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Tolerance                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_Vector");
	}

	AFunctionalTest_AssertEqual_Vector_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Transform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Actual                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform              Expected                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_Transform");
	}

	AFunctionalTest_AssertEqual_Transform_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertEqual_TraceQueryResults
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTraceQueryTestResults*  Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTraceQueryTestResults*  Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertEqual_TraceQueryResults(class UTraceQueryTestResults* Actual, class UTraceQueryTestResults* Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_TraceQueryResults");
	}

	AFunctionalTest_AssertEqual_TraceQueryResults_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertEqual_String
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Actual                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Expected                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertEqual_String(const struct FString& Actual, const struct FString& Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_String");
	}

	AFunctionalTest_AssertEqual_String_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Rotator
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Tolerance                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_Rotator");
	}

	AFunctionalTest_AssertEqual_Rotator_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Name
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertEqual_Name(const struct FName& Actual, const struct FName& Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_Name");
	}

	AFunctionalTest_AssertEqual_Name_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Int
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertEqual_Int(int Actual, int Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_Int");
	}

	AFunctionalTest_AssertEqual_Int_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Float
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Tolerance                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertEqual_Float(float Actual, float Expected, const struct FString& What, float Tolerance, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_Float");
	}

	AFunctionalTest_AssertEqual_Float_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AssertEqual_Bool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Actual                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Expected                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 What                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ContextObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalTest::AssertEqual_Bool(bool Actual, bool Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AssertEqual_Bool");
	}

	AFunctionalTest_AssertEqual_Bool_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.FunctionalTest.AddWarning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFunctionalTest::AddWarning(const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AddWarning");
	}

	AFunctionalTest_AddWarning_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.FunctionalTest.AddRerun
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFunctionalTest::AddRerun(const struct FName& Reason)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AddRerun");
	}

	AFunctionalTest_AddRerun_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.FunctionalTest.AddError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Message                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFunctionalTest::AddError(const struct FString& Message)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTest.AddError");
	}

	AFunctionalTest_AddError_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.FunctionalAITest.IsOneOfSpawnedPawns
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AFunctionalAITest::IsOneOfSpawnedPawns(class AActor* Actor)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalAITest.IsOneOfSpawnedPawns");
	}

	AFunctionalAITest_IsOneOfSpawnedPawns_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationPerformaceHelper.WriteLogFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 CaptureDir                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 CaptureExtension               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAutomationPerformaceHelper::WriteLogFile(const struct FString& CaptureDir, const struct FString& CaptureExtension)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.WriteLogFile");
	}

	UAutomationPerformaceHelper_WriteLogFile_Params params;
	params.CaptureDir = CaptureDir;
	params.CaptureExtension = CaptureExtension;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.TriggerGPUTraceIfRecordFallsBelowBudget
// (Final, Native, Public, BlueprintCallable)
void UAutomationPerformaceHelper::TriggerGPUTraceIfRecordFallsBelowBudget()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.TriggerGPUTraceIfRecordFallsBelowBudget");
	}

	UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.Tick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAutomationPerformaceHelper::Tick(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.Tick");
	}

	UAutomationPerformaceHelper_Tick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.StopCPUProfiling
// (Final, Native, Public, BlueprintCallable)
void UAutomationPerformaceHelper::StopCPUProfiling()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.StopCPUProfiling");
	}

	UAutomationPerformaceHelper_StopCPUProfiling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.StartCPUProfiling
// (Final, Native, Public, BlueprintCallable)
void UAutomationPerformaceHelper::StartCPUProfiling()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.StartCPUProfiling");
	}

	UAutomationPerformaceHelper_StartCPUProfiling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.Sample
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAutomationPerformaceHelper::Sample(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.Sample");
	}

	UAutomationPerformaceHelper_Sample_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.OnBeginTests
// (Final, Native, Public, BlueprintCallable)
void UAutomationPerformaceHelper::OnBeginTests()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.OnBeginTests");
	}

	UAutomationPerformaceHelper_OnBeginTests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.OnAllTestsComplete
// (Final, Native, Public, BlueprintCallable)
void UAutomationPerformaceHelper::OnAllTestsComplete()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.OnAllTestsComplete");
	}

	UAutomationPerformaceHelper_OnAllTestsComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.IsRecording
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAutomationPerformaceHelper::IsRecording()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.IsRecording");
	}

	UAutomationPerformaceHelper_IsRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinRenderThreadBudget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAutomationPerformaceHelper::IsCurrentRecordWithinRenderThreadBudget()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinRenderThreadBudget");
	}

	UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGPUBudget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAutomationPerformaceHelper::IsCurrentRecordWithinGPUBudget()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGPUBudget");
	}

	UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGameThreadBudget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAutomationPerformaceHelper::IsCurrentRecordWithinGameThreadBudget()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGameThreadBudget");
	}

	UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.AutomationPerformaceHelper.EndStatsFile
// (Final, Native, Public, BlueprintCallable)
void UAutomationPerformaceHelper::EndStatsFile()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.EndStatsFile");
	}

	UAutomationPerformaceHelper_EndStatsFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.EndRecordingBaseline
// (Final, Native, Public, BlueprintCallable)
void UAutomationPerformaceHelper::EndRecordingBaseline()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.EndRecordingBaseline");
	}

	UAutomationPerformaceHelper_EndRecordingBaseline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.EndRecording
// (Final, Native, Public, BlueprintCallable)
void UAutomationPerformaceHelper::EndRecording()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.EndRecording");
	}

	UAutomationPerformaceHelper_EndRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.BeginStatsFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RecordName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAutomationPerformaceHelper::BeginStatsFile(const struct FString& RecordName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.BeginStatsFile");
	}

	UAutomationPerformaceHelper_BeginStatsFile_Params params;
	params.RecordName = RecordName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.BeginRecordingBaseline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RecordName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAutomationPerformaceHelper::BeginRecordingBaseline(const struct FString& RecordName)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.BeginRecordingBaseline");
	}

	UAutomationPerformaceHelper_BeginRecordingBaseline_Params params;
	params.RecordName = RecordName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.AutomationPerformaceHelper.BeginRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RecordName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InGPUBudget                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InRenderThreadBudget           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InGameThreadBudget             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAutomationPerformaceHelper::BeginRecording(const struct FString& RecordName, float InGPUBudget, float InRenderThreadBudget, float InGameThreadBudget)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.AutomationPerformaceHelper.BeginRecording");
	}

	UAutomationPerformaceHelper_BeginRecording_Params params;
	params.RecordName = RecordName;
	params.InGPUBudget = InGPUBudget;
	params.InRenderThreadBudget = InRenderThreadBudget;
	params.InGameThreadBudget = InGameThreadBudget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.FunctionalTestingManager.RunAllFunctionalTests
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNewLog                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRunLooped                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FailedTestsReproString         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFunctionalTestingManager::STATIC_RunAllFunctionalTests(class UObject* WorldContextObject, bool bNewLog, bool bRunLooped, const struct FString& FailedTestsReproString)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTestingManager.RunAllFunctionalTests");
	}

	UFunctionalTestingManager_RunAllFunctionalTests_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bNewLog = bNewLog;
	params.bRunLooped = bRunLooped;
	params.FailedTestsReproString = FailedTestsReproString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingComplete
// (Event, Public, BlueprintEvent)
void APhasedAutomationActorBase::OnFunctionalTestingComplete()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingComplete");
	}

	APhasedAutomationActorBase_OnFunctionalTestingComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingBegin
// (Event, Public, BlueprintEvent)
void APhasedAutomationActorBase::OnFunctionalTestingBegin()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingBegin");
	}

	APhasedAutomationActorBase_OnFunctionalTestingBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.FunctionalTestUtilityLibrary.TraceChannelTestUtil
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTraceChannelTestBatchOptions BatchOptions                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                 Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SphereCapsuleRadius            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CapsuleHalfHeight              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 BoxHalfSize                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Orientation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TEnumAsByte<Engine_EObjectTypeQuery>> ObjectTypes                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FName                   ProfileName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTraceQueryTestResults*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTraceQueryTestResults* UFunctionalTestUtilityLibrary::STATIC_TraceChannelTestUtil(class UObject* WorldContextObject, const struct FTraceChannelTestBatchOptions& BatchOptions, const struct FVector& Start, const struct FVector& End, float SphereCapsuleRadius, float CapsuleHalfHeight, const struct FVector& BoxHalfSize, const struct FRotator& Orientation, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, TArray<TEnumAsByte<Engine_EObjectTypeQuery>> ObjectTypes, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.FunctionalTestUtilityLibrary.TraceChannelTestUtil");
	}

	UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BatchOptions = BatchOptions;
	params.Start = Start;
	params.End = End;
	params.SphereCapsuleRadius = SphereCapsuleRadius;
	params.CapsuleHalfHeight = CapsuleHalfHeight;
	params.BoxHalfSize = BoxHalfSize;
	params.Orientation = Orientation;
	params.TraceChannel = TraceChannel;
	params.ObjectTypes = ObjectTypes;
	params.ProfileName = ProfileName;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bIgnoreSelf = bIgnoreSelf;
	params.DrawDebugType = DrawDebugType;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.GroundTruthData.SaveObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 GroundTruth                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGroundTruthData::SaveObject(class UObject* GroundTruth)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.GroundTruthData.SaveObject");
	}

	UGroundTruthData_SaveObject_Params params;
	params.GroundTruth = GroundTruth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FunctionalTesting.GroundTruthData.LoadObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UGroundTruthData::LoadObject()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.GroundTruthData.LoadObject");
	}

	UGroundTruthData_LoadObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.GroundTruthData.CanModify
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGroundTruthData::CanModify()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.GroundTruthData.CanModify");
	}

	UGroundTruthData_CanModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FunctionalTesting.TraceQueryTestResults.ToString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTraceQueryTestResults::ToString()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function FunctionalTesting.TraceQueryTestResults.ToString");
	}

	UTraceQueryTestResults_ToString_Params params;

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
