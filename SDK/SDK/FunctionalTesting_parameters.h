#pragma once

// Name: mace, Version: 1.9.1.12285


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeHighResScreenshot
struct UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Params
{
	int                                                ResX;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ResY;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACameraActor*                                Camera;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMaskEnabled;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCaptureHDR;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotOfUI
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutomationScreenshotOptions                Options;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class ACameraActor*                                Camera;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NameOverride;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Notes;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutomationScreenshotOptions                Options;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Notes;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutomationScreenshotOptions                Options;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetScalabilityQualityToLow
struct UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetScalabilityQualityToEpic
struct UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.SetScalabilityQualityLevelRelativeToMax
struct UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatIncMax
struct UAutomationBlueprintFunctionLibrary_GetStatIncMax_Params
{
	struct FName                                       StatName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatIncAverage
struct UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Params
{
	struct FName                                       StatName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatExcMax
struct UAutomationBlueprintFunctionLibrary_GetStatExcMax_Params
{
	struct FName                                       StatName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatExcAverage
struct UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Params
{
	struct FName                                       StatName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetStatCallCount
struct UAutomationBlueprintFunctionLibrary_GetStatCallCount_Params
{
	struct FName                                       StatName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetDefaultScreenshotOptionsForRendering
struct UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Params
{
	FunctionalTesting_EComparisonTolerance             Tolerance;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutomationScreenshotOptions                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.GetDefaultScreenshotOptionsForGameplay
struct UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Params
{
	FunctionalTesting_EComparisonTolerance             Tolerance;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutomationScreenshotOptions                ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.EnableStatGroup
struct UAutomationBlueprintFunctionLibrary_EnableStatGroup_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       GroupName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.DisableStatGroup
struct UAutomationBlueprintFunctionLibrary_DisableStatGroup_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       GroupName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.AutomationWaitForLoading
struct UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationBlueprintFunctionLibrary.AreAutomatedTestsRunning
struct UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.SetTimeLimit
struct AFunctionalTest_SetTimeLimit_Params
{
	float                                              NewTimeLimit;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FunctionalTesting_EFunctionalTestResult            ResultWhenTimeRunsOut;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.RegisterAutoDestroyActor
struct AFunctionalTest_RegisterAutoDestroyActor_Params
{
	class AActor*                                      ActorToAutoDestroy;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.ReceiveStartTest
struct AFunctionalTest_ReceiveStartTest_Params
{
};

// Function FunctionalTesting.FunctionalTest.ReceivePrepareTest
struct AFunctionalTest_ReceivePrepareTest_Params
{
};

// Function FunctionalTesting.FunctionalTest.OnWantsReRunCheck
struct AFunctionalTest_OnWantsReRunCheck_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.OnAdditionalTestFinishedMessageRequest
struct AFunctionalTest_OnAdditionalTestFinishedMessageRequest_Params
{
	FunctionalTesting_EFunctionalTestResult            TestResult;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.LogMessage
struct AFunctionalTest_LogMessage_Params
{
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.IsRunning
struct AFunctionalTest_IsRunning_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.IsReady
struct AFunctionalTest_IsReady_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.IsEnabled
struct AFunctionalTest_IsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.GetCurrentRerunReason
struct AFunctionalTest_GetCurrentRerunReason_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.FinishTest
struct AFunctionalTest_FinishTest_Params
{
	FunctionalTesting_EFunctionalTestResult            TestResult;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.DebugGatherRelevantActors
struct AFunctionalTest_DebugGatherRelevantActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertValue_Int
struct AFunctionalTest_AssertValue_Int_Params
{
	int                                                Actual;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FunctionalTesting_EComparisonMethod                ShouldBe;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Expected;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertValue_Float
struct AFunctionalTest_AssertValue_Float_Params
{
	float                                              Actual;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FunctionalTesting_EComparisonMethod                ShouldBe;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Expected;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertValue_DateTime
struct AFunctionalTest_AssertValue_DateTime_Params
{
	struct FDateTime                                   Actual;                                                    // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FunctionalTesting_EComparisonMethod                ShouldBe;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   Expected;                                                  // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertTrue
struct AFunctionalTest_AssertTrue_Params
{
	bool                                               Condition;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Vector
struct AFunctionalTest_AssertNotEqual_Vector_Params
{
	struct FVector                                     Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NotExpected;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Transform
struct AFunctionalTest_AssertNotEqual_Transform_Params
{
	struct FTransform                                  Actual;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  NotExpected;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertNotEqual_String
struct AFunctionalTest_AssertNotEqual_String_Params
{
	struct FString                                     Actual;                                                    // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NotExpected;                                               // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertNotEqual_Rotator
struct AFunctionalTest_AssertNotEqual_Rotator_Params
{
	struct FRotator                                    Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    NotExpected;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertIsValid
struct AFunctionalTest_AssertIsValid_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertFalse
struct AFunctionalTest_AssertFalse_Params
{
	bool                                               Condition;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertEqual_Vector
struct AFunctionalTest_AssertEqual_Vector_Params
{
	struct FVector                                     Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Expected;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Tolerance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertEqual_Transform
struct AFunctionalTest_AssertEqual_Transform_Params
{
	struct FTransform                                  Actual;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Expected;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Tolerance;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertEqual_TraceQueryResults
struct AFunctionalTest_AssertEqual_TraceQueryResults_Params
{
	class UTraceQueryTestResults*                      Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTraceQueryTestResults*                      Expected;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertEqual_String
struct AFunctionalTest_AssertEqual_String_Params
{
	struct FString                                     Actual;                                                    // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Expected;                                                  // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertEqual_Rotator
struct AFunctionalTest_AssertEqual_Rotator_Params
{
	struct FRotator                                    Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Expected;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Tolerance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertEqual_Name
struct AFunctionalTest_AssertEqual_Name_Params
{
	struct FName                                       Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Expected;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertEqual_Int
struct AFunctionalTest_AssertEqual_Int_Params
{
	int                                                Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Expected;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertEqual_Float
struct AFunctionalTest_AssertEqual_Float_Params
{
	float                                              Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Expected;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Tolerance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AssertEqual_Bool
struct AFunctionalTest_AssertEqual_Bool_Params
{
	bool                                               Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Expected;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AddWarning
struct AFunctionalTest_AddWarning_Params
{
	struct FString                                     Message;                                                   // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AddRerun
struct AFunctionalTest_AddRerun_Params
{
	struct FName                                       Reason;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTest.AddError
struct AFunctionalTest_AddError_Params
{
	struct FString                                     Message;                                                   // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalAITest.IsOneOfSpawnedPawns
struct AFunctionalAITest_IsOneOfSpawnedPawns_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationPerformaceHelper.WriteLogFile
struct UAutomationPerformaceHelper_WriteLogFile_Params
{
	struct FString                                     CaptureDir;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CaptureExtension;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationPerformaceHelper.TriggerGPUTraceIfRecordFallsBelowBudget
struct UAutomationPerformaceHelper_TriggerGPUTraceIfRecordFallsBelowBudget_Params
{
};

// Function FunctionalTesting.AutomationPerformaceHelper.Tick
struct UAutomationPerformaceHelper_Tick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationPerformaceHelper.StopCPUProfiling
struct UAutomationPerformaceHelper_StopCPUProfiling_Params
{
};

// Function FunctionalTesting.AutomationPerformaceHelper.StartCPUProfiling
struct UAutomationPerformaceHelper_StartCPUProfiling_Params
{
};

// Function FunctionalTesting.AutomationPerformaceHelper.Sample
struct UAutomationPerformaceHelper_Sample_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationPerformaceHelper.OnBeginTests
struct UAutomationPerformaceHelper_OnBeginTests_Params
{
};

// Function FunctionalTesting.AutomationPerformaceHelper.OnAllTestsComplete
struct UAutomationPerformaceHelper_OnAllTestsComplete_Params
{
};

// Function FunctionalTesting.AutomationPerformaceHelper.IsRecording
struct UAutomationPerformaceHelper_IsRecording_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinRenderThreadBudget
struct UAutomationPerformaceHelper_IsCurrentRecordWithinRenderThreadBudget_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGPUBudget
struct UAutomationPerformaceHelper_IsCurrentRecordWithinGPUBudget_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationPerformaceHelper.IsCurrentRecordWithinGameThreadBudget
struct UAutomationPerformaceHelper_IsCurrentRecordWithinGameThreadBudget_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationPerformaceHelper.EndStatsFile
struct UAutomationPerformaceHelper_EndStatsFile_Params
{
};

// Function FunctionalTesting.AutomationPerformaceHelper.EndRecordingBaseline
struct UAutomationPerformaceHelper_EndRecordingBaseline_Params
{
};

// Function FunctionalTesting.AutomationPerformaceHelper.EndRecording
struct UAutomationPerformaceHelper_EndRecording_Params
{
};

// Function FunctionalTesting.AutomationPerformaceHelper.BeginStatsFile
struct UAutomationPerformaceHelper_BeginStatsFile_Params
{
	struct FString                                     RecordName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationPerformaceHelper.BeginRecordingBaseline
struct UAutomationPerformaceHelper_BeginRecordingBaseline_Params
{
	struct FString                                     RecordName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.AutomationPerformaceHelper.BeginRecording
struct UAutomationPerformaceHelper_BeginRecording_Params
{
	struct FString                                     RecordName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InGPUBudget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InRenderThreadBudget;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InGameThreadBudget;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.FunctionalTestingManager.RunAllFunctionalTests
struct UFunctionalTestingManager_RunAllFunctionalTests_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNewLog;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRunLooped;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FailedTestsReproString;                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingComplete
struct APhasedAutomationActorBase_OnFunctionalTestingComplete_Params
{
};

// Function FunctionalTesting.PhasedAutomationActorBase.OnFunctionalTestingBegin
struct APhasedAutomationActorBase_OnFunctionalTestingBegin_Params
{
};

// Function FunctionalTesting.FunctionalTestUtilityLibrary.TraceChannelTestUtil
struct UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTraceChannelTestBatchOptions               BatchOptions;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Start;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     End;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SphereCapsuleRadius;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CapsuleHalfHeight;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoxHalfSize;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETraceTypeQuery>                TraceChannel;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<Engine_EObjectTypeQuery>>       ObjectTypes;                                               // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       ProfileName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceComplex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ActorsToIgnore;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bIgnoreSelf;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EDrawDebugTrace>                DrawDebugType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TraceColor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TraceHitColor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DrawTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTraceQueryTestResults*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.GroundTruthData.SaveObject
struct UGroundTruthData_SaveObject_Params
{
	class UObject*                                     GroundTruth;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.GroundTruthData.LoadObject
struct UGroundTruthData_LoadObject_Params
{
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.GroundTruthData.CanModify
struct UGroundTruthData_CanModify_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FunctionalTesting.TraceQueryTestResults.ToString
struct UTraceQueryTestResults_ToString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
