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

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UMaterialShaderQualitySettings : public UObject
{
public:
	TMap<struct FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                         // 0x0028(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MaterialShaderQualitySettings.MaterialShaderQualitySettings");
		}
		return ptr;
	}



};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UShaderPlatformQualitySettings : public UObject
{
public:
	struct FMaterialQualityOverrides                   QualityOverrides[0x3];                                     // 0x0028(0x0018) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M8Z3[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
