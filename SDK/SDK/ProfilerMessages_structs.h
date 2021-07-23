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

// ScriptStruct ProfilerMessages.ProfilerServiceUnsubscribe
// 0x0020
struct FProfilerServiceUnsubscribe
{
	struct FGuid                                       SessionId;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       InstanceId;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ProfilerMessages.ProfilerServiceRequest
// 0x0004
struct FProfilerServiceRequest
{
	uint32_t                                           Request;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ProfilerMessages.ProfilerServicePong
// 0x0001
struct FProfilerServicePong
{
	unsigned char                                      UnknownData_5C9G[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct ProfilerMessages.ProfilerServicePreview
// 0x0001
struct FProfilerServicePreview
{
	bool                                               bRequestedPreviewState;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ProfilerMessages.ProfilerServiceCapture
// 0x0001
struct FProfilerServiceCapture
{
	bool                                               bRequestedCaptureState;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ProfilerMessages.ProfilerServiceSubscribe
// 0x0020
struct FProfilerServiceSubscribe
{
	struct FGuid                                       SessionId;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       InstanceId;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ProfilerMessages.ProfilerServicePing
// 0x0001
struct FProfilerServicePing
{
	unsigned char                                      UnknownData_HWVF[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct ProfilerMessages.ProfilerServiceFileChunk
// 0x0050
struct FProfilerServiceFileChunk
{
	struct FGuid                                       InstanceId;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HexData;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Header;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ChunkHash;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ProfilerMessages.ProfilerServiceAuthorize
// 0x0020
struct FProfilerServiceAuthorize
{
	struct FGuid                                       SessionId;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       InstanceId;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ProfilerMessages.ProfilerServiceData2
// 0x0030
struct FProfilerServiceData2
{
	struct FGuid                                       InstanceId;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            Frame;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CompressedSize;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UncompressedSize;                                          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HexData;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ProfilerMessages.ProfilerServicePreviewAck
// 0x0010
struct FProfilerServicePreviewAck
{
	struct FGuid                                       InstanceId;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
