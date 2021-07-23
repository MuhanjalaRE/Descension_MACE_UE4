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

// Class ImgMedia.ImgMediaSource
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UImgMediaSource : public UBaseMediaSource
{
public:
	struct FFrameRate                                  FrameRateOverride;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProxyOverride;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                              SequencePath;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class ImgMedia.ImgMediaSource");
		}
		return ptr;
	}



	void SetSequencePath(const struct FString& Path);
	struct FString GetSequencePath();
	void GetProxies(TArray<struct FString>* OutProxies);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
