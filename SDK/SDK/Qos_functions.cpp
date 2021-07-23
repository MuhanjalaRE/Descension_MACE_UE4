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

// Function Qos.QosBeaconClient.ServerQosRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString                 InSessionId                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AQosBeaconClient::ServerQosRequest(const struct FString& InSessionId)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Qos.QosBeaconClient.ServerQosRequest");
	}

	AQosBeaconClient_ServerQosRequest_Params params;
	params.InSessionId = InSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Qos.QosBeaconClient.ClientQosResponse
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// Qos_EQosResponseType           Response                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AQosBeaconClient::ClientQosResponse(Qos_EQosResponseType Response)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Qos.QosBeaconClient.ClientQosResponse");
	}

	AQosBeaconClient_ClientQosResponse_Params params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
