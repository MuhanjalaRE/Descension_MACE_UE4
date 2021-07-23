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

// Class Hotfix.OnlineHotfixManager
// 0x01F8 (FullSize[0x0220] - InheritedSize[0x0028])
class UOnlineHotfixManager : public UObject
{
public:
	unsigned char                                      UnknownData_1CQL[0x1B8];                                   // 0x0028(0x01B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OssName;                                                   // 0x01E0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HotfixManagerClassName;                                    // 0x01F0(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DebugPrefix;                                               // 0x0200(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             AssetsHotfixedFromIniFiles;                                // 0x0210(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class Hotfix.OnlineHotfixManager");
		}
		return ptr;
	}



	void StartHotfixProcess();
};

// Class Hotfix.UpdateManager
// 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
class UUpdateManager : public UObject
{
public:
	unsigned char                                      UnknownData_CY1O[0x60];                                    // 0x0028(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HotfixCheckCompleteDelay;                                  // 0x0088(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              UpdateCheckCompleteDelay;                                  // 0x008C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HotfixAvailabilityCheckCompleteDelay;                      // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              UpdateCheckAvailabilityCompleteDelay;                      // 0x0094(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCheckPlatformOSSForUpdate;                                // 0x0098(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCheckOSSForUpdate;                                        // 0x0099(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NNYN[0x2];                                     // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AppSuspendedUpdateCheckTimeSeconds;                        // 0x009C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E6U7[0x8];                                     // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bPlatformEnvironmentDetected;                              // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bInitialUpdateFinished;                                    // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCheckHotfixAvailabilityOnly;                              // 0x00AA(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Hotfix_EUpdateState                                CurrentUpdateState;                                        // 0x00AB(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                WorstNumFilesPendingLoadViewed;                            // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Hotfix_EPatchCheckResult                           LastPatchCheckResult;                                      // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Hotfix_EHotfixResult                               LastHotfixResult;                                          // 0x00B1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TOZT[0x2E];                                    // 0x00B2(0x002E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   LastUpdateCheck[0x2];                                      // 0x00E0(0x0010) (ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Hotfix_EUpdateCompletionStatus                     LastCompletionResult[0x2];                                 // 0x00F0(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7WXA[0x16];                                    // 0x00F2(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnum*                                       UpdateStateEnum;                                           // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEnum*                                       UpdateCompletionEnum;                                      // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class Hotfix.UpdateManager");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
