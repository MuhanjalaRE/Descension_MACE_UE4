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

// Class Qos.QosBeaconClient
// 0x0038 (FullSize[0x02F8] - InheritedSize[0x02C0])
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	unsigned char                                      UnknownData_7UGP[0x38];                                    // 0x02C0(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class Qos.QosBeaconClient");
		}
		return ptr;
	}



	void ServerQosRequest(const struct FString& InSessionId);
	void ClientQosResponse(Qos_EQosResponseType Response);
};

// Class Qos.QosBeaconHost
// 0x0010 (FullSize[0x0278] - InheritedSize[0x0268])
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	unsigned char                                      UnknownData_L2BA[0x10];                                    // 0x0268(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class Qos.QosBeaconHost");
		}
		return ptr;
	}



};

// Class Qos.QosEvaluator
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UQosEvaluator : public UObject
{
public:
	unsigned char                                      UnknownData_TFK3[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bInProgress;                                               // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCancelOperation;                                          // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R1LA[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDatacenterQosInstance>              Datacenters;                                               // 0x0050(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OTHD[0x20];                                    // 0x0060(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class Qos.QosEvaluator");
		}
		return ptr;
	}



};

// Class Qos.QosRegionManager
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UQosRegionManager : public UObject
{
public:
	int                                                NumTestsPerRegion;                                         // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PingTimeout;                                               // 0x002C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FQosRegionInfo>                      RegionDefinitions;                                         // 0x0030(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FQosDatacenterInfo>                  DatacenterDefinitions;                                     // 0x0040(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	struct FDateTime                                   LastCheckTimestamp;                                        // 0x0050(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UQosEvaluator*                               Evaluator;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Qos_EQosCompletionResult                           QosEvalResult;                                             // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TQKX[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRegionQosInstance>                  RegionOptions;                                             // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FString                                     ForceRegionId;                                             // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bRegionForcedViaCommandline;                               // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N5KE[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SelectedRegionId;                                          // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0ZPP[0x20];                                    // 0x00A0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class Qos.QosRegionManager");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
