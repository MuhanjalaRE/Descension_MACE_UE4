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

// Enum Qos.EQosResponseType
enum class Qos_EQosResponseType : uint8_t
{
	EQosResponseType__NoResponse   = 0,
	EQosResponseType__Success      = 1,
	EQosResponseType__Failure      = 2,
	EQosResponseType__EQosResponseType_MAX = 3,

};

// Enum Qos.EQosCompletionResult
enum class Qos_EQosCompletionResult : uint8_t
{
	EQosCompletionResult__Invalid  = 0,
	EQosCompletionResult__Success  = 1,
	EQosCompletionResult__Failure  = 2,
	EQosCompletionResult__Canceled = 3,
	EQosCompletionResult__EQosCompletionResult_MAX = 4,

};

// Enum Qos.EQosDatacenterResult
enum class Qos_EQosDatacenterResult : uint8_t
{
	EQosDatacenterResult__Invalid  = 0,
	EQosDatacenterResult__Success  = 1,
	EQosDatacenterResult__Incomplete = 2,
	EQosDatacenterResult__EQosDatacenterResult_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Qos.QosPingServerInfo
// 0x0018
struct FQosPingServerInfo
{
	struct FString                                     Address;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_74SY[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Qos.QosDatacenterInfo
// 0x0038
struct FQosDatacenterInfo
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RegionId;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WQN9[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FQosPingServerInfo>                  Servers;                                                   // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Qos.QosRegionInfo
// 0x0030
struct FQosRegionInfo
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	struct FString                                     RegionId;                                                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisible;                                                  // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoAssignable;                                           // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K0Y4[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Qos.DatacenterQosInstance
// 0x0068
struct FDatacenterQosInstance
{
	struct FQosDatacenterInfo                          Definition;                                                // 0x0000(0x0038) (Transient, NativeAccessSpecifierPublic)
	Qos_EQosDatacenterResult                           Result;                                                    // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TG06[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AvgPingMs;                                                 // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        PingResults;                                               // 0x0040(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5FOQ[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   LastCheckTimestamp;                                        // 0x0058(0x0008) (ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsable;                                                   // 0x0060(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ADH3[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Qos.RegionQosInstance
// 0x0040
struct FRegionQosInstance
{
	struct FQosRegionInfo                              Definition;                                                // 0x0000(0x0030) (Transient, NativeAccessSpecifierPublic)
	TArray<struct FDatacenterQosInstance>              DatacenterOptions;                                         // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
