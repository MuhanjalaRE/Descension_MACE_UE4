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
// Classes
//---------------------------------------------------------------------------

// Class FunctionalTesting.AutomationBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAutomationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.AutomationBlueprintFunctionLibrary");
		}
		return ptr;
	}



	bool STATIC_TakeHighResScreenshot(int ResX, int ResY, const struct FString& Filename, class ACameraActor* Camera, bool bMaskEnabled, bool bCaptureHDR);
	void STATIC_TakeAutomationScreenshotOfUI(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& Name, const struct FAutomationScreenshotOptions& Options);
	void STATIC_TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const struct FString& NameOverride, const struct FString& Notes, const struct FAutomationScreenshotOptions& Options);
	void STATIC_TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& Name, const struct FString& Notes, const struct FAutomationScreenshotOptions& Options);
	void STATIC_SetScalabilityQualityToLow(class UObject* WorldContextObject);
	void STATIC_SetScalabilityQualityToEpic(class UObject* WorldContextObject);
	void STATIC_SetScalabilityQualityLevelRelativeToMax(class UObject* WorldContextObject, int Value);
	float STATIC_GetStatIncMax(const struct FName& StatName);
	float STATIC_GetStatIncAverage(const struct FName& StatName);
	float STATIC_GetStatExcMax(const struct FName& StatName);
	float STATIC_GetStatExcAverage(const struct FName& StatName);
	float STATIC_GetStatCallCount(const struct FName& StatName);
	struct FAutomationScreenshotOptions STATIC_GetDefaultScreenshotOptionsForRendering(FunctionalTesting_EComparisonTolerance Tolerance, float Delay);
	struct FAutomationScreenshotOptions STATIC_GetDefaultScreenshotOptionsForGameplay(FunctionalTesting_EComparisonTolerance Tolerance, float Delay);
	void STATIC_EnableStatGroup(class UObject* WorldContextObject, const struct FName& GroupName);
	void STATIC_DisableStatGroup(class UObject* WorldContextObject, const struct FName& GroupName);
	void STATIC_AutomationWaitForLoading(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	bool STATIC_AreAutomatedTestsRunning();
};

// Class FunctionalTesting.AutomationViewSettings
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UAutomationViewSettings : public UDataAsset
{
public:
	bool                                               AntiAliasing;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MotionBlur;                                                // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TemporalAA;                                                // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ScreenSpaceReflections;                                    // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ScreenSpaceAO;                                             // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DistanceFieldAO;                                           // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ContactShadows;                                            // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EyeAdaptation;                                             // 0x0037(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Bloom;                                                     // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ALJX[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.AutomationViewSettings");
		}
		return ptr;
	}



};

// Class FunctionalTesting.FuncTestRenderingComponent
// 0x0000 (FullSize[0x0410] - InheritedSize[0x0410])
class UFuncTestRenderingComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.FuncTestRenderingComponent");
		}
		return ptr;
	}



};

// Class FunctionalTesting.FunctionalTest
// 0x0118 (FullSize[0x0358] - InheritedSize[0x0240])
class AFunctionalTest : public AActor
{
public:
	class UBillboardComponent*                         SpriteComponent;                                           // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsEnabled : 1;                                            // 0x0248(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OAFW[0x3];                                     // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	FunctionalTesting_EFunctionalTestLogHandling       LogErrorHandling;                                          // 0x024C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FunctionalTesting_EFunctionalTestLogHandling       LogWarningHandling;                                        // 0x024D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3K3B[0x2];                                     // 0x024E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Author;                                                    // 0x0250(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     Description;                                               // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ObservationPoint;                                          // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRandomStream                               RandomNumbersStream;                                       // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	FunctionalTesting_EFunctionalTestResult            Result;                                                    // 0x0280(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GW56[0x3];                                     // 0x0281(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PreparationTimeLimit;                                      // 0x0284(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeLimit;                                                 // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BKRM[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TimesUpMessage;                                            // 0x0290(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FunctionalTesting_EFunctionalTestResult            TimesUpResult;                                             // 0x02A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_10K6[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTestPrepare;                                             // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTestStart;                                               // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTestFinished;                                            // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              AutoDestroyActors;                                         // 0x02E0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4NF9[0x38];                                    // 0x02F0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsRunning;                                                // 0x0328(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9EA9[0x17];                                    // 0x0329(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TotalTime;                                                 // 0x0340(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S2ZN[0x14];                                    // 0x0344(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.FunctionalTest");
		}
		return ptr;
	}



	void SetTimeLimit(float NewTimeLimit, FunctionalTesting_EFunctionalTestResult ResultWhenTimeRunsOut);
	void RegisterAutoDestroyActor(class AActor* ActorToAutoDestroy);
	void ReceiveStartTest();
	void ReceivePrepareTest();
	bool OnWantsReRunCheck();
	struct FString OnAdditionalTestFinishedMessageRequest(FunctionalTesting_EFunctionalTestResult TestResult);
	void LogMessage(const struct FString& Message);
	bool IsRunning();
	bool IsReady();
	bool IsEnabled();
	struct FName GetCurrentRerunReason();
	void FinishTest(FunctionalTesting_EFunctionalTestResult TestResult, const struct FString& Message);
	TArray<class AActor*> DebugGatherRelevantActors();
	bool AssertValue_Int(int Actual, FunctionalTesting_EComparisonMethod ShouldBe, int Expected, const struct FString& What, class UObject* ContextObject);
	bool AssertValue_Float(float Actual, FunctionalTesting_EComparisonMethod ShouldBe, float Expected, const struct FString& What, class UObject* ContextObject);
	bool AssertValue_DateTime(const struct FDateTime& Actual, FunctionalTesting_EComparisonMethod ShouldBe, const struct FDateTime& Expected, const struct FString& What, class UObject* ContextObject);
	bool AssertTrue(bool Condition, const struct FString& Message, class UObject* ContextObject);
	bool AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const struct FString& What, class UObject* ContextObject);
	bool AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const struct FString& What, class UObject* ContextObject);
	bool AssertNotEqual_String(const struct FString& Actual, const struct FString& NotExpected, const struct FString& What, class UObject* ContextObject);
	bool AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const struct FString& What, class UObject* ContextObject);
	bool AssertIsValid(class UObject* Object, const struct FString& Message, class UObject* ContextObject);
	bool AssertFalse(bool Condition, const struct FString& Message, class UObject* ContextObject);
	bool AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_TraceQueryResults(class UTraceQueryTestResults* Actual, class UTraceQueryTestResults* Expected, const struct FString& What, class UObject* ContextObject);
	bool AssertEqual_String(const struct FString& Actual, const struct FString& Expected, const struct FString& What, class UObject* ContextObject);
	bool AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_Name(const struct FName& Actual, const struct FName& Expected, const struct FString& What, class UObject* ContextObject);
	bool AssertEqual_Int(int Actual, int Expected, const struct FString& What, class UObject* ContextObject);
	bool AssertEqual_Float(float Actual, float Expected, const struct FString& What, float Tolerance, class UObject* ContextObject);
	bool AssertEqual_Bool(bool Actual, bool Expected, const struct FString& What, class UObject* ContextObject);
	void AddWarning(const struct FString& Message);
	void AddRerun(const struct FName& Reason);
	void AddError(const struct FString& Message);
};

// Class FunctionalTesting.FunctionalAITest
// 0x0098 (FullSize[0x03F0] - InheritedSize[0x0358])
class AFunctionalAITest : public AFunctionalTest
{
public:
	TArray<struct FAITestSpawnSet>                     SpawnSets;                                                 // 0x0358(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              SpawnLocationRandomizationRange;                           // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I7X0[0x4];                                     // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APawn*>                               SpawnedPawns;                                              // 0x0370(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPendingDelayedSpawn>                PendingDelayedSpawns;                                      // 0x0380(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int                                                CurrentSpawnSetIndex;                                      // 0x0390(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KY6V[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrentSpawnSetName;                                       // 0x0398(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnAISpawned;                                               // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnAllAISPawned;                                            // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FVector                                     NavMeshDebugOrigin;                                        // 0x03C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     NavMeshDebugExtent;                                        // 0x03D4(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bWaitForNavMesh : 1;                                       // 0x03E0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bDebugNavMeshOnTimeout : 1;                                // 0x03E0(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PR6A[0xF];                                     // 0x03E1(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.FunctionalAITest");
		}
		return ptr;
	}



	bool IsOneOfSpawnedPawns(class AActor* Actor);
};

// Class FunctionalTesting.AutomationPerformaceHelper
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UAutomationPerformaceHelper : public UObject
{
public:
	unsigned char                                      UnknownData_7WR9[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.AutomationPerformaceHelper");
		}
		return ptr;
	}



	void WriteLogFile(const struct FString& CaptureDir, const struct FString& CaptureExtension);
	void TriggerGPUTraceIfRecordFallsBelowBudget();
	void Tick(float DeltaSeconds);
	void StopCPUProfiling();
	void StartCPUProfiling();
	void Sample(float DeltaSeconds);
	void OnBeginTests();
	void OnAllTestsComplete();
	bool IsRecording();
	bool IsCurrentRecordWithinRenderThreadBudget();
	bool IsCurrentRecordWithinGPUBudget();
	bool IsCurrentRecordWithinGameThreadBudget();
	void EndStatsFile();
	void EndRecordingBaseline();
	void EndRecording();
	void BeginStatsFile(const struct FString& RecordName);
	void BeginRecordingBaseline(const struct FString& RecordName);
	void BeginRecording(const struct FString& RecordName, float InGPUBudget, float InRenderThreadBudget, float InGameThreadBudget);
};

// Class FunctionalTesting.FunctionalTestGameMode
// 0x0000 (FullSize[0x02E8] - InheritedSize[0x02E8])
class AFunctionalTestGameMode : public AGameModeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.FunctionalTestGameMode");
		}
		return ptr;
	}



};

// Class FunctionalTesting.FunctionalTestingManager
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UFunctionalTestingManager : public UBlueprintFunctionLibrary
{
public:
	TArray<class AFunctionalTest*>                     TestsLeft;                                                 // 0x0028(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class AFunctionalTest*>                     AllTests;                                                  // 0x0038(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSetupTests;                                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTestsComplete;                                           // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTestsBegin;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_25EO[0x48];                                    // 0x0078(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.FunctionalTestingManager");
		}
		return ptr;
	}



	bool STATIC_RunAllFunctionalTests(class UObject* WorldContextObject, bool bNewLog, bool bRunLooped, const struct FString& FailedTestsReproString);
};

// Class FunctionalTesting.PhasedAutomationActorBase
// 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
class APhasedAutomationActorBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.PhasedAutomationActorBase");
		}
		return ptr;
	}



	void OnFunctionalTestingComplete();
	void OnFunctionalTestingBegin();
};

// Class FunctionalTesting.FunctionalTestLevelScript
// 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
class AFunctionalTestLevelScript : public ALevelScriptActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.FunctionalTestLevelScript");
		}
		return ptr;
	}



};

// Class FunctionalTesting.FunctionalTestUtilityLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFunctionalTestUtilityLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.FunctionalTestUtilityLibrary");
		}
		return ptr;
	}



	class UTraceQueryTestResults* STATIC_TraceChannelTestUtil(class UObject* WorldContextObject, const struct FTraceChannelTestBatchOptions& BatchOptions, const struct FVector& Start, const struct FVector& End, float SphereCapsuleRadius, float CapsuleHalfHeight, const struct FVector& BoxHalfSize, const struct FRotator& Orientation, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, TArray<TEnumAsByte<Engine_EObjectTypeQuery>> ObjectTypes, const struct FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
};

// Class FunctionalTesting.ScreenshotFunctionalTestBase
// 0x0078 (FullSize[0x03D0] - InheritedSize[0x0358])
class AScreenshotFunctionalTestBase : public AFunctionalTest
{
public:
	struct FString                                     Notes;                                                     // 0x0358(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraComponent*                            ScreenshotCamera;                                          // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FAutomationScreenshotOptions                ScreenshotOptions;                                         // 0x0370(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, SimpleDisplay, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5TDM[0x20];                                    // 0x03B0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.ScreenshotFunctionalTestBase");
		}
		return ptr;
	}



};

// Class FunctionalTesting.FunctionalUIScreenshotTest
// 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
class AFunctionalUIScreenshotTest : public AScreenshotFunctionalTestBase
{
public:
	class UClass*                                      WidgetClass;                                               // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                                 SpawnedWidget;                                             // 0x03D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FunctionalTesting_EWidgetTestAppearLocation        WidgetLocation;                                            // 0x03E0(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HT2H[0x3];                                     // 0x03E0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_RO1P[0x4];                                     // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureRenderTarget2D*                      ScreenshotRT;                                              // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.FunctionalUIScreenshotTest");
		}
		return ptr;
	}



};

// Class FunctionalTesting.GroundTruthData
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UGroundTruthData : public UObject
{
public:
	bool                                               bResetGroundTruth;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WFY5[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ObjectData;                                                // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.GroundTruthData");
		}
		return ptr;
	}



	void SaveObject(class UObject* GroundTruth);
	class UObject* LoadObject();
	bool CanModify();
};

// Class FunctionalTesting.ScreenshotFunctionalTest
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class AScreenshotFunctionalTest : public AScreenshotFunctionalTestBase
{
public:
	bool                                               bCameraCutOnScreenshotPrep;                                // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B9PO[0x7];                                     // 0x03D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.ScreenshotFunctionalTest");
		}
		return ptr;
	}



};

// Class FunctionalTesting.TestPhaseComponent
// 0x0008 (FullSize[0x0220] - InheritedSize[0x0218])
class UTestPhaseComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_30ZT[0x8];                                     // 0x0218(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.TestPhaseComponent");
		}
		return ptr;
	}



};

// Class FunctionalTesting.TraceQueryTestResults
// 0x09C8 (FullSize[0x09F0] - InheritedSize[0x0028])
class UTraceQueryTestResults : public UObject
{
public:
	struct FTraceQueryTestResultsInner                 ChannelResults;                                            // 0x0028(0x0340) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceQueryTestResultsInner                 ObjectResults;                                             // 0x0368(0x0340) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceQueryTestResultsInner                 ProfileResults;                                            // 0x06A8(0x0340) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceChannelTestBatchOptions               BatchOptions;                                              // 0x09E8(0x0007) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B086[0x1];                                     // 0x09EF(0x0001) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FunctionalTesting.TraceQueryTestResults");
		}
		return ptr;
	}



	struct FString ToString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
