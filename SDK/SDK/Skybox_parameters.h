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
// Parameters
//---------------------------------------------------------------------------

// Function Skybox.Skybox_C.InitLightningData
struct ASkybox_C_InitLightningData_Params
{
	struct FVector                                     Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Clouds;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scattering;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Skydome;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.UpdateLightningData
struct ASkybox_C_UpdateLightningData_Params
{
	float                                              SkyLight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonLight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.GetSunDirectionAtTime
struct ASkybox_C_GetSunDirectionAtTime_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rtation;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Skybox.Skybox_C.SelectCustomWeather
struct ASkybox_C_SelectCustomWeather_Params
{
};

// Function Skybox.Skybox_C.TimeOfDayPresetChanged
struct ASkybox_C_TimeOfDayPresetChanged_Params
{
};

// Function Skybox.Skybox_C.WetherPresetChanged
struct ASkybox_C_WetherPresetChanged_Params
{
};

// Function Skybox.Skybox_C.SetTimeOfDayExternal
struct ASkybox_C_SetTimeOfDayExternal_Params
{
	class UClass*                                      Preset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.SetTimeCycleDuration
struct ASkybox_C_SetTimeCycleDuration_Params
{
	float                                              RealTimeMinutes;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.ChangeTimeOfDay
struct ASkybox_C_ChangeTimeOfDay_Params
{
};

// Function Skybox.Skybox_C.SetTimeOfDayChangeMode
struct ASkybox_C_SetTimeOfDayChangeMode_Params
{
	TEnumAsByte<PresetSelection_EPresetSelection>      Mode;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChangeAfterTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    Transition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.SetTimeOfDayByIndex
struct ASkybox_C_SetTimeOfDayByIndex_Params
{
	int                                                Preset_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.LerpTimeOfDayPreset
struct ASkybox_C_LerpTimeOfDayPreset_Params
{
	struct FTimeOfDayData                              From;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeOfDayData                              To;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeOfDayData                              StructOut;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.UpdateTimeOfDayPreset
struct ASkybox_C_UpdateTimeOfDayPreset_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.Versioning
struct ASkybox_C_Versioning_Params
{
};

// Function Skybox.Skybox_C.GetPrecomputedSkyLight
struct ASkybox_C_GetPrecomputedSkyLight_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureCube*                                From;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureCube*                                To;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alpha;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.UpdateMoon
struct ASkybox_C_UpdateMoon_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.SetShadowFunction
struct ASkybox_C_SetShadowFunction_Params
{
	class UMaterialInstanceConstant*                   Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.UpdateShadowParameters
struct ASkybox_C_UpdateShadowParameters_Params
{
};

// Function Skybox.Skybox_C.SetTime
struct ASkybox_C_SetTime_Params
{
	float                                              TargetTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    TransitionFunction;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.UpdateSunParameters
struct ASkybox_C_UpdateSunParameters_Params
{
};

// Function Skybox.Skybox_C.UpdateSkyLight
struct ASkybox_C_UpdateSkyLight_Params
{
};

// Function Skybox.Skybox_C.SetPresetChangeMode
struct ASkybox_C_SetPresetChangeMode_Params
{
	TEnumAsByte<PresetSelection_EPresetSelection>      Mode;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChangeAfterTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    Transition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.SetPresetExternal
struct ASkybox_C_SetPresetExternal_Params
{
	class UClass*                                      PresetToSet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.LerpWeatherPreset
struct ASkybox_C_LerpWeatherPreset_Params
{
	struct FWeatherData                                A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeatherData                                B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeatherData                                StructOut;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.UpdateExternalActors
struct ASkybox_C_UpdateExternalActors_Params
{
};

// Function Skybox.Skybox_C.SampleCurveBySunHeight
struct ASkybox_C_SampleCurveBySunHeight_Params
{
	class UCurveLinearColor*                           Curve;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Default;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.UpdateNightParameters
struct ASkybox_C_UpdateNightParameters_Params
{
};

// Function Skybox.Skybox_C.UpdateWeatherPreset
struct ASkybox_C_UpdateWeatherPreset_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.SetPresetByIndex
struct ASkybox_C_SetPresetByIndex_Params
{
	int                                                Preset_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.UpdateLayersParameters
struct ASkybox_C_UpdateLayersParameters_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.UpdateCloudsParameters
struct ASkybox_C_UpdateCloudsParameters_Params
{
};

// Function Skybox.Skybox_C.UpdateHorizonParameters
struct ASkybox_C_UpdateHorizonParameters_Params
{
};

// Function Skybox.Skybox_C.ChangeWeather
struct ASkybox_C_ChangeWeather_Params
{
};

// Function Skybox.Skybox_C.UpdateDateTime
struct ASkybox_C_UpdateDateTime_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.UpdateCurves
struct ASkybox_C_UpdateCurves_Params
{
};

// Function Skybox.Skybox_C.UpdateSkyParameters
struct ASkybox_C_UpdateSkyParameters_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.UserConstructionScript
struct ASkybox_C_UserConstructionScript_Params
{
};

// Function Skybox.Skybox_C.ReceiveTick
struct ASkybox_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.ReceiveBeginPlay
struct ASkybox_C_ReceiveBeginPlay_Params
{
};

// Function Skybox.Skybox_C.RecaptureSky
struct ASkybox_C_RecaptureSky_Params
{
};

// Function Skybox.Skybox_C.SetTimeOfDay
struct ASkybox_C_SetTimeOfDay_Params
{
	float                                              TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.PostConstructionScript
struct ASkybox_C_PostConstructionScript_Params
{
};

// Function Skybox.Skybox_C.ExecuteUbergraph_Skybox
struct ASkybox_C_ExecuteUbergraph_Skybox_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.OnDayPassedBy__DelegateSignature
struct ASkybox_C_OnDayPassedBy__DelegateSignature_Params
{
	int                                                Day;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.OnHourPassedBy__DelegateSignature
struct ASkybox_C_OnHourPassedBy__DelegateSignature_Params
{
	int                                                Hour;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.OnTimeOfDayPresetChanged__DelegateSignature
struct ASkybox_C_OnTimeOfDayPresetChanged__DelegateSignature_Params
{
	class UClass*                                      Preset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuraion;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Skybox.Skybox_C.OnWeatherPresetChanged__DelegateSignature
struct ASkybox_C_OnWeatherPresetChanged__DelegateSignature_Params
{
	class UClass*                                      Preset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
