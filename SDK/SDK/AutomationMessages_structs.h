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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AutomationMessages.AutomationWorkerFindWorkers
// 0x0038
struct FAutomationWorkerFindWorkers
{
	int                                                Changelist;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CTRX[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameName;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProcessName;                                               // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       SessionId;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AutomationMessages.AutomationWorkerPerformanceDataResponse
// 0x0018
struct FAutomationWorkerPerformanceDataResponse
{
	bool                                               bSuccess;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_37B8[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ErrorMessage;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AutomationMessages.AutomationWorkerPerformanceDataRequest
// 0x0040
struct FAutomationWorkerPerformanceDataRequest
{
	struct FString                                     Platform;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Hardware;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TestName;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<double>                                     DataPoints;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AutomationMessages.AutomationWorkerNextNetworkCommandReply
// 0x0001
struct FAutomationWorkerNextNetworkCommandReply
{
	unsigned char                                      UnknownData_R0I5[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AutomationMessages.AutomationWorkerRequestNextNetworkCommand
// 0x0004
struct FAutomationWorkerRequestNextNetworkCommand
{
	uint32_t                                           ExecutionCount;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AutomationMessages.AutomationWorkerRunTestsReply
// 0x0038
struct FAutomationWorkerRunTestsReply
{
	struct FString                                     TestName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAutomationExecutionEntry>           Entries;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                WarningTotal;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ErrorTotal;                                                // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ExecutionCount;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Success;                                                   // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9XNC[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AutomationMessages.AutomationWorkerRunTests
// 0x0030
struct FAutomationWorkerRunTests
{
	uint32_t                                           ExecutionCount;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RoleIndex;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TestName;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BeautifiedTestName;                                        // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSendAnalytics;                                            // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XKE9[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AutomationMessages.AutomationWorkerPong
// 0x0001
struct FAutomationWorkerPong
{
	unsigned char                                      UnknownData_KZBL[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AutomationMessages.AutomationWorkerStopTests
// 0x0001
struct FAutomationWorkerStopTests
{
	unsigned char                                      UnknownData_7TDQ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AutomationMessages.AutomationWorkerResetTests
// 0x0001
struct FAutomationWorkerResetTests
{
	unsigned char                                      UnknownData_3IZV[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AutomationMessages.AutomationWorkerPing
// 0x0001
struct FAutomationWorkerPing
{
	unsigned char                                      UnknownData_F7H8[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AutomationMessages.AutomationWorkerWorkerOffline
// 0x0001
struct FAutomationWorkerWorkerOffline
{
	unsigned char                                      UnknownData_TD45[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AutomationMessages.AutomationWorkerFindWorkersResponse
// 0x0098
struct FAutomationWorkerFindWorkersResponse
{
	struct FString                                     DeviceName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstanceName;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Platform;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OSVersionName;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ModelName;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GPUName;                                                   // 0x0050(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CPUModelName;                                              // 0x0060(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           RAMInGB;                                                   // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4EAX[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     RenderModeName;                                            // 0x0078(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       SessionId;                                                 // 0x0088(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AutomationMessages.AutomationScreenshotMetadata
// 0x0118
struct FAutomationScreenshotMetadata
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Context;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Notes;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ID;                                                        // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Commit;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RHI;                                                       // 0x0058(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Platform;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FeatureLevel;                                              // 0x0078(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsStereo;                                                 // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NX9S[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Vendor;                                                    // 0x0090(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AdapterName;                                               // 0x00A0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AdapterInternalDriverVersion;                              // 0x00B0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AdapterUserDriverVersion;                                  // 0x00C0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UniqueDeviceId;                                            // 0x00D0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ResolutionQuality;                                         // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ViewDistanceQuality;                                       // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AntiAliasingQuality;                                       // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShadowQuality;                                             // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PostProcessQuality;                                        // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureQuality;                                            // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EffectsQuality;                                            // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FoliageQuality;                                            // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasComparisonRules;                                       // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ToleranceRed;                                              // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ToleranceGreen;                                            // 0x0102(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ToleranceBlue;                                             // 0x0103(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ToleranceAlpha;                                            // 0x0104(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ToleranceMinBrightness;                                    // 0x0105(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ToleranceMaxBrightness;                                    // 0x0106(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6WOX[0x1];                                     // 0x0107(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaximumLocalError;                                         // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumGlobalError;                                        // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreAntiAliasing;                                       // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreColors;                                             // 0x0111(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FS3K[0x6];                                     // 0x0112(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct AutomationMessages.AutomationWorkerScreenImage
// 0x0138
struct FAutomationWorkerScreenImage
{
	TArray<unsigned char>                              ScreenImage;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ScreenShotName;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAutomationScreenshotMetadata               MetaData;                                                  // 0x0020(0x0118) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct AutomationMessages.AutomationWorkerImageComparisonResults
// 0x0038
struct FAutomationWorkerImageComparisonResults
{
	struct FGuid                                       UniqueId;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNew;                                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSimilar;                                                  // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NFL8[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             MaxLocalDifference;                                        // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             GlobalDifference;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ErrorMessage;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AutomationMessages.AutomationWorkerRequestTests
// 0x0008
struct FAutomationWorkerRequestTests
{
	bool                                               DeveloperDirectoryIncluded;                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GGJP[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           RequestedTestFlags;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AutomationMessages.AutomationWorkerTestDataResponse
// 0x0018
struct FAutomationWorkerTestDataResponse
{
	struct FString                                     JsonData;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNew;                                                    // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M1OA[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AutomationMessages.AutomationWorkerTestDataRequest
// 0x0050
struct FAutomationWorkerTestDataRequest
{
	struct FString                                     DataType;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DataPlatform;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DataTestName;                                              // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DataName;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     JsonData;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AutomationMessages.AutomationWorkerSingleTestReply
// 0x0080
struct FAutomationWorkerSingleTestReply
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FullTestPath;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TestName;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TestParameter;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SourceFile;                                                // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SourceFileLine;                                            // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G54I[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AssetPath;                                                 // 0x0058(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OpenCommand;                                               // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           TestFlags;                                                 // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NumParticipantsRequired;                                   // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AutomationMessages.AutomationWorkerRequestTestsReplyComplete
// 0x0010
struct FAutomationWorkerRequestTestsReplyComplete
{
	TArray<struct FAutomationWorkerSingleTestReply>    Tests;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
