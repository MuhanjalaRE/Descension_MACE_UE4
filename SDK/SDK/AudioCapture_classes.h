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

// Class AudioCapture.AudioCaptureFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class AudioCapture.AudioCaptureFunctionLibrary");
		}
		return ptr;
	}



	class UAudioCapture* STATIC_CreateAudioCapture();
};

// Class AudioCapture.AudioCaptureComponent
// 0x00B0 (FullSize[0x06F0] - InheritedSize[0x0640])
class UAudioCaptureComponent : public USynthComponent
{
public:
	int                                                JitterLatencyFrames;                                       // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LIIM[0xAC];                                    // 0x0644(0x00AC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class AudioCapture.AudioCaptureComponent");
		}
		return ptr;
	}



};

// Class AudioCapture.AudioCapture
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UAudioCapture : public UAudioGenerator
{
public:
	unsigned char                                      UnknownData_JJV6[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class AudioCapture.AudioCapture");
		}
		return ptr;
	}



	void StopCapturingAudio();
	void StartCapturingAudio();
	bool IsCapturingAudio();
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
