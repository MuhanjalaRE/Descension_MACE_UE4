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
// Enums
//---------------------------------------------------------------------------

// Enum FunctionalTesting.EComparisonTolerance
enum class FunctionalTesting_EComparisonTolerance : uint8_t
{
	EComparisonTolerance__Zero     = 0,
	EComparisonTolerance__Low      = 1,
	EComparisonTolerance__Medium   = 2,
	EComparisonTolerance__High     = 3,
	EComparisonTolerance__Custom   = 4,
	EComparisonTolerance__EComparisonTolerance_MAX = 5,

};

// Enum FunctionalTesting.EFunctionalTestLogHandling
enum class FunctionalTesting_EFunctionalTestLogHandling : uint8_t
{
	EFunctionalTestLogHandling__ProjectDefault = 0,
	EFunctionalTestLogHandling__OutputIsError = 1,
	EFunctionalTestLogHandling__OutputIgnored = 2,
	EFunctionalTestLogHandling__EFunctionalTestLogHandling_MAX = 3,

};

// Enum FunctionalTesting.EFunctionalTestResult
enum class FunctionalTesting_EFunctionalTestResult : uint8_t
{
	EFunctionalTestResult__Default = 0,
	EFunctionalTestResult__Invalid = 1,
	EFunctionalTestResult__Error   = 2,
	EFunctionalTestResult__Running = 3,
	EFunctionalTestResult__Failed  = 4,
	EFunctionalTestResult__Succeeded = 5,
	EFunctionalTestResult__EFunctionalTestResult_MAX = 6,

};

// Enum FunctionalTesting.EComparisonMethod
enum class FunctionalTesting_EComparisonMethod : uint8_t
{
	EComparisonMethod__Equal_To    = 0,
	EComparisonMethod__Not_Equal_To = 1,
	EComparisonMethod__Greater_Than_Or_Equal_To = 2,
	EComparisonMethod__Less_Than_Or_Equal_To = 3,
	EComparisonMethod__Greater_Than = 4,
	EComparisonMethod__Less_Than   = 5,
	EComparisonMethod__EComparisonMethod_MAX = 6,

};

// Enum FunctionalTesting.EWidgetTestAppearLocation
enum class FunctionalTesting_EWidgetTestAppearLocation : uint8_t
{
	EWidgetTestAppearLocation__Viewport = 0,
	EWidgetTestAppearLocation__PlayerScreen = 1,
	EWidgetTestAppearLocation__EWidgetTestAppearLocation_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FunctionalTesting.ComparisonToleranceAmount
// 0x0006
struct FComparisonToleranceAmount
{
	unsigned char                                      Red;                                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Green;                                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Blue;                                                      // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Alpha;                                                     // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MinBrightness;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxBrightness;                                             // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FunctionalTesting.AITestSpawnInfo
// 0x0040
struct FAITestSpawnInfo
{
	class UClass*                                      PawnClass;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ControllerClass;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericTeamId                              TeamId;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OOZB[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTree*                               BehaviorTree;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SpawnLocation;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberToSpawn;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnDelay;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreSpawnDelay;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LS4V[0xC];                                     // 0x0034(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct FunctionalTesting.AITestSpawnSet
// 0x0028
struct FAITestSpawnSet
{
	TArray<struct FAITestSpawnInfo>                    SpawnInfoContainer;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnabled : 1;                                              // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I2IR[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      FallbackSpawnLocation;                                     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FunctionalTesting.PendingDelayedSpawn
// 0x0010 (0x0050 - 0x0040)
struct FPendingDelayedSpawn : public FAITestSpawnInfo
{
	unsigned char                                      UnknownData_TF25[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct FunctionalTesting.TraceQueryTestNames
// 0x0018
struct FTraceQueryTestNames
{
	struct FName                                       ComponentName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PhysicalMaterialName;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActorName;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FunctionalTesting.TraceQueryTestResultsInnerMost
// 0x00D0
struct FTraceQueryTestResultsInnerMost
{
	struct FHitResult                                  SingleHit;                                                 // 0x0000(0x0088) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceQueryTestNames                        SingleNames;                                               // 0x0088(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSingleResult;                                             // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XSE7[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHitResult>                          MultiHits;                                                 // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FTraceQueryTestNames>                MultiNames;                                                // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bMultiResult;                                              // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4XP2[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct FunctionalTesting.TraceQueryTestResultsInner
// 0x0340
struct FTraceQueryTestResultsInner
{
	struct FTraceQueryTestResultsInnerMost             LineResults;                                               // 0x0000(0x00D0) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceQueryTestResultsInnerMost             SphereResults;                                             // 0x00D0(0x00D0) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceQueryTestResultsInnerMost             CapsuleResults;                                            // 0x01A0(0x00D0) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTraceQueryTestResultsInnerMost             BoxResults;                                                // 0x0270(0x00D0) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct FunctionalTesting.TraceChannelTestBatchOptions
// 0x0007
struct FTraceChannelTestBatchOptions
{
	bool                                               bLineTrace;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSphereTrace;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCapsuleTrace;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBoxTrace;                                                 // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChannelTrace;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bObjectsTrace;                                             // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bProfileTrace;                                             // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FunctionalTesting.AutomationScreenshotOptions
// 0x0040
struct FAutomationScreenshotOptions
{
	struct FVector2D                                   Resolution;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverride_OverrideTimeTo;                                  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5BC1[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OverrideTimeTo;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableNoisyRenderingFeatures;                            // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableTonemapping;                                       // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0U8E[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAutomationViewSettings*                     ViewSettings;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       VisualizeBuffer;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FunctionalTesting_EComparisonTolerance             Tolerance;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComparisonToleranceAmount                  ToleranceAmount;                                           // 0x0029(0x0006) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_75GK[0x1];                                     // 0x002F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaximumLocalError;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumGlobalError;                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreAntiAliasing;                                       // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreColors;                                             // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VBBE[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
