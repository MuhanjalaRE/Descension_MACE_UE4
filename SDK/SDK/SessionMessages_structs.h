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

// ScriptStruct SessionMessages.SessionServicePing
// 0x0010
struct FSessionServicePing
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001
struct FSessionServiceLogSubscribe
{
	unsigned char                                      UnknownData_A1VW[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct SessionMessages.SessionServiceLog
// 0x0038
struct FSessionServiceLog
{
	struct FName                                       Category;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Data;                                                      // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       InstanceId;                                                // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                             TimeSeconds;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Verbosity;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3NOC[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct SessionMessages.SessionServicePong
// 0x0098
struct FSessionServicePong
{
	bool                                               Authorized;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1Z48[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BuildDate;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceName;                                                // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       InstanceId;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InstanceName;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsConsoleBuild;                                            // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQB7[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlatformName;                                              // 0x0050(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       SessionId;                                                 // 0x0060(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionName;                                               // 0x0070(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionOwner;                                              // 0x0080(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Standalone;                                                // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WW4W[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001
struct FSessionServiceLogUnsubscribe
{
	unsigned char                                      UnknownData_RGRG[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
