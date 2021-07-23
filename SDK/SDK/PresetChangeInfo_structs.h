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

// UserDefinedStruct PresetChangeInfo.PresetChangeInfo
// 0x0018
struct FPresetChangeInfo
{
	bool                                               ReloadSelected_25_165DD8E44AE6D7882C2F5ABE35BF41BA;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_17BJ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Selected_16_785F8D8944070D067940B8B6B53E25FC;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PresetSelection_EPresetSelection>      Mode_17_A4BD793844A78E1A22E2778BB14BE206;                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4G5Q[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TransitionDuration_19_73F6782E4DE8FB03600ECFBBB894BC0B;    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    TransitionFunc_18_88BE11474DF134CA5C3E6190B2940A25;        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZLCZ[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChangeAfterTime_21_BF5A190D458432A5BC9B168EA48AE7ED;       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
