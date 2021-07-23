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

// Enum AutomationController.EAutomationState
enum class AutomationController_EAutomationState : uint8_t
{
	EAutomationState__NotRun       = 0,
	EAutomationState__InProcess    = 1,
	EAutomationState__Fail         = 2,
	EAutomationState__Success      = 3,
	EAutomationState__NotEnoughParticipants = 4,
	EAutomationState__EAutomationState_MAX = 5,

};

// Enum AutomationController.EAutomationArtifactType
enum class AutomationController_EAutomationArtifactType : uint8_t
{
	EAutomationArtifactType__None  = 0,
	EAutomationArtifactType__Image = 1,
	EAutomationArtifactType__Comparison = 2,
	EAutomationArtifactType__EAutomationArtifactType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AutomationController.AutomatedTestFilter
// 0x0018
struct FAutomatedTestFilter
{
	struct FString                                     Contains;                                                  // 0x0000(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MatchFromStart;                                            // 0x0010(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NKJU[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AutomationController.AutomationArtifact
// 0x00C8
struct FAutomationArtifact
{
	struct FGuid                                       ID;                                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AutomationController_EAutomationArtifactType       Type;                                                      // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P7BH[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FString>               Files;                                                     // 0x0028(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ISRH[0x50];                                    // 0x0078(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct AutomationController.AutomatedTestResult
// 0x0060
struct FAutomatedTestResult
{
	unsigned char                                      UnknownData_YHYU[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TestDisplayName;                                           // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FullTestPath;                                              // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AutomationController_EAutomationState              State;                                                     // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LOCN[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAutomationExecutionEntry>           Entries;                                                   // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	int                                                Warnings;                                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Errors;                                                    // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FAutomationArtifact>                 Artifacts;                                                 // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct AutomationController.AutomatedTestGroup
// 0x0020
struct FAutomatedTestGroup
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAutomatedTestFilter>                Filters;                                                   // 0x0010(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)

};

// ScriptStruct AutomationController.AutomatedTestPassResults
// 0x0050
struct FAutomatedTestPassResults
{
	struct FString                                     ClientDescriptor;                                          // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   ReportCreatedOn;                                           // 0x0010(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Succeeded;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SucceededWithWarnings;                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Failed;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NotRun;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalDuration;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ComparisonExported;                                        // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z4BV[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ComparisonExportDirectory;                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAutomatedTestResult>                Tests;                                                     // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
