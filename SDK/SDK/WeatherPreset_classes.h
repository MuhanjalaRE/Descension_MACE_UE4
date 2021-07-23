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

// BlueprintGeneratedClass WeatherPreset.WeatherPreset_C
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UWeatherPreset_C : public UObject
{
public:
	struct FWeatherData                                Data;                                                      // 0x0028(0x0068) (Edit, BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass WeatherPreset.WeatherPreset_C");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
