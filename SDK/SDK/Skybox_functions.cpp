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

// Function Skybox.Skybox_C.InitLightningData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Clouds                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Scattering                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Skydome                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::InitLightningData(const struct FVector& Position, float Radius, float Clouds, float Scattering, float Skydome)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.InitLightningData");
	}

	ASkybox_C_InitLightningData_Params params;
	params.Position = Position;
	params.Radius = Radius;
	params.Clouds = Clouds;
	params.Scattering = Scattering;
	params.Skydome = Skydome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.UpdateLightningData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SkyLight                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MoonLight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::UpdateLightningData(float SkyLight, float MoonLight, const struct FLinearColor& Color)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateLightningData");
	}

	ASkybox_C_UpdateLightningData_Params params;
	params.SkyLight = SkyLight;
	params.MoonLight = MoonLight;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.GetSunDirectionAtTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rtation                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASkybox_C::GetSunDirectionAtTime(float Time, struct FRotator* Rtation)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.GetSunDirectionAtTime");
	}

	ASkybox_C_GetSunDirectionAtTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rtation != nullptr)
		*Rtation = params.Rtation;

}


// Function Skybox.Skybox_C.SelectCustomWeather
// (Public, BlueprintCallable, BlueprintEvent)
void ASkybox_C::SelectCustomWeather()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.SelectCustomWeather");
	}

	ASkybox_C_SelectCustomWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.TimeOfDayPresetChanged
// (Public, BlueprintCallable, BlueprintEvent)
void ASkybox_C::TimeOfDayPresetChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.TimeOfDayPresetChanged");
	}

	ASkybox_C_TimeOfDayPresetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.WetherPresetChanged
// (Public, BlueprintCallable, BlueprintEvent)
void ASkybox_C::WetherPresetChanged()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.WetherPresetChanged");
	}

	ASkybox_C_WetherPresetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.SetTimeOfDayExternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::SetTimeOfDayExternal(class UClass* Preset, float TransitionDuration)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.SetTimeOfDayExternal");
	}

	ASkybox_C_SetTimeOfDayExternal_Params params;
	params.Preset = Preset;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.SetTimeCycleDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RealTimeMinutes                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::SetTimeCycleDuration(float RealTimeMinutes)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.SetTimeCycleDuration");
	}

	ASkybox_C_SetTimeCycleDuration_Params params;
	params.RealTimeMinutes = RealTimeMinutes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.ChangeTimeOfDay
// (Private, BlueprintCallable, BlueprintEvent)
void ASkybox_C::ChangeTimeOfDay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.ChangeTimeOfDay");
	}

	ASkybox_C_ChangeTimeOfDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.SetTimeOfDayChangeMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<PresetSelection_EPresetSelection> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ChangeAfterTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EEasingFunc> Transition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::SetTimeOfDayChangeMode(TEnumAsByte<PresetSelection_EPresetSelection> Mode, float ChangeAfterTime, TEnumAsByte<Engine_EEasingFunc> Transition)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.SetTimeOfDayChangeMode");
	}

	ASkybox_C_SetTimeOfDayChangeMode_Params params;
	params.Mode = Mode;
	params.ChangeAfterTime = ChangeAfterTime;
	params.Transition = Transition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.SetTimeOfDayByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Preset_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::SetTimeOfDayByIndex(int Preset_Index, float TransitionDuration)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.SetTimeOfDayByIndex");
	}

	ASkybox_C_SetTimeOfDayByIndex_Params params;
	params.Preset_Index = Preset_Index;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.LerpTimeOfDayPreset
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimeOfDayData          From                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimeOfDayData          To                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimeOfDayData          StructOut                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::LerpTimeOfDayPreset(const struct FTimeOfDayData& From, const struct FTimeOfDayData& To, float Alpha, struct FTimeOfDayData* StructOut)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.LerpTimeOfDayPreset");
	}

	ASkybox_C_LerpTimeOfDayPreset_Params params;
	params.From = From;
	params.To = To;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StructOut != nullptr)
		*StructOut = params.StructOut;

}


// Function Skybox.Skybox_C.UpdateTimeOfDayPreset
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::UpdateTimeOfDayPreset(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateTimeOfDayPreset");
	}

	ASkybox_C_UpdateTimeOfDayPreset_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.Versioning
// (Public, BlueprintCallable, BlueprintEvent)
void ASkybox_C::Versioning()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.Versioning");
	}

	ASkybox_C_Versioning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.GetPrecomputedSkyLight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureCube*            From                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureCube*            To                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::GetPrecomputedSkyLight(float Time, class UTextureCube** From, class UTextureCube** To, float* Alpha)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.GetPrecomputedSkyLight");
	}

	ASkybox_C_GetPrecomputedSkyLight_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (From != nullptr)
		*From = params.From;
	if (To != nullptr)
		*To = params.To;
	if (Alpha != nullptr)
		*Alpha = params.Alpha;

}


// Function Skybox.Skybox_C.UpdateMoon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::UpdateMoon(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateMoon");
	}

	ASkybox_C_UpdateMoon_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.SetShadowFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceConstant* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::SetShadowFunction(class UMaterialInstanceConstant* Material)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.SetShadowFunction");
	}

	ASkybox_C_SetShadowFunction_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.UpdateShadowParameters
// (Private, BlueprintCallable, BlueprintEvent)
void ASkybox_C::UpdateShadowParameters()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateShadowParameters");
	}

	ASkybox_C_UpdateShadowParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.SetTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TargetTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EEasingFunc> TransitionFunction             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::SetTime(float TargetTime, float TransitionDuration, TEnumAsByte<Engine_EEasingFunc> TransitionFunction)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.SetTime");
	}

	ASkybox_C_SetTime_Params params;
	params.TargetTime = TargetTime;
	params.TransitionDuration = TransitionDuration;
	params.TransitionFunction = TransitionFunction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.UpdateSunParameters
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASkybox_C::UpdateSunParameters()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateSunParameters");
	}

	ASkybox_C_UpdateSunParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.UpdateSkyLight
// (Public, BlueprintCallable, BlueprintEvent)
void ASkybox_C::UpdateSkyLight()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateSkyLight");
	}

	ASkybox_C_UpdateSkyLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.SetPresetChangeMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<PresetSelection_EPresetSelection> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ChangeAfterTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EEasingFunc> Transition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::SetPresetChangeMode(TEnumAsByte<PresetSelection_EPresetSelection> Mode, float ChangeAfterTime, TEnumAsByte<Engine_EEasingFunc> Transition)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.SetPresetChangeMode");
	}

	ASkybox_C_SetPresetChangeMode_Params params;
	params.Mode = Mode;
	params.ChangeAfterTime = ChangeAfterTime;
	params.Transition = Transition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.SetPresetExternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PresetToSet                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::SetPresetExternal(class UClass* PresetToSet, float TransitionDuration)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.SetPresetExternal");
	}

	ASkybox_C_SetPresetExternal_Params params;
	params.PresetToSet = PresetToSet;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.LerpWeatherPreset
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FWeatherData            A                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherData            B                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherData            StructOut                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::LerpWeatherPreset(const struct FWeatherData& A, const struct FWeatherData& B, float Alpha, struct FWeatherData* StructOut)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.LerpWeatherPreset");
	}

	ASkybox_C_LerpWeatherPreset_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StructOut != nullptr)
		*StructOut = params.StructOut;

}


// Function Skybox.Skybox_C.UpdateExternalActors
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASkybox_C::UpdateExternalActors()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateExternalActors");
	}

	ASkybox_C_UpdateExternalActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.SampleCurveBySunHeight
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveLinearColor*       Curve                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Default                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::SampleCurveBySunHeight(class UCurveLinearColor* Curve, const struct FLinearColor& Default, struct FLinearColor* Color)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.SampleCurveBySunHeight");
	}

	ASkybox_C_SampleCurveBySunHeight_Params params;
	params.Curve = Curve;
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function Skybox.Skybox_C.UpdateNightParameters
// (Private, BlueprintCallable, BlueprintEvent)
void ASkybox_C::UpdateNightParameters()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateNightParameters");
	}

	ASkybox_C_UpdateNightParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.UpdateWeatherPreset
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::UpdateWeatherPreset(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateWeatherPreset");
	}

	ASkybox_C_UpdateWeatherPreset_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.SetPresetByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Preset_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::SetPresetByIndex(int Preset_Index, float TransitionDuration)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.SetPresetByIndex");
	}

	ASkybox_C_SetPresetByIndex_Params params;
	params.Preset_Index = Preset_Index;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.UpdateLayersParameters
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::UpdateLayersParameters(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateLayersParameters");
	}

	ASkybox_C_UpdateLayersParameters_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.UpdateCloudsParameters
// (Private, BlueprintCallable, BlueprintEvent)
void ASkybox_C::UpdateCloudsParameters()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateCloudsParameters");
	}

	ASkybox_C_UpdateCloudsParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.UpdateHorizonParameters
// (Private, BlueprintCallable, BlueprintEvent)
void ASkybox_C::UpdateHorizonParameters()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateHorizonParameters");
	}

	ASkybox_C_UpdateHorizonParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.ChangeWeather
// (Private, BlueprintCallable, BlueprintEvent)
void ASkybox_C::ChangeWeather()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.ChangeWeather");
	}

	ASkybox_C_ChangeWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.UpdateDateTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::UpdateDateTime(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateDateTime");
	}

	ASkybox_C_UpdateDateTime_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.UpdateCurves
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASkybox_C::UpdateCurves()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateCurves");
	}

	ASkybox_C_UpdateCurves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.UpdateSkyParameters
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::UpdateSkyParameters(float DeltaTime)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UpdateSkyParameters");
	}

	ASkybox_C_UpdateSkyParameters_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASkybox_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.UserConstructionScript");
	}

	ASkybox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.ReceiveTick");
	}

	ASkybox_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASkybox_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.ReceiveBeginPlay");
	}

	ASkybox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.RecaptureSky
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASkybox_C::RecaptureSky()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.RecaptureSky");
	}

	ASkybox_C_RecaptureSky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.SetTimeOfDay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::SetTimeOfDay(float TimeOfDay)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.SetTimeOfDay");
	}

	ASkybox_C_SetTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.PostConstructionScript
// (BlueprintCallable, BlueprintEvent)
void ASkybox_C::PostConstructionScript()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.PostConstructionScript");
	}

	ASkybox_C_PostConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.ExecuteUbergraph_Skybox
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::ExecuteUbergraph_Skybox(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.ExecuteUbergraph_Skybox");
	}

	ASkybox_C_ExecuteUbergraph_Skybox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.OnDayPassedBy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Day                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::OnDayPassedBy__DelegateSignature(int Day)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.OnDayPassedBy__DelegateSignature");
	}

	ASkybox_C_OnDayPassedBy__DelegateSignature_Params params;
	params.Day = Day;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.OnHourPassedBy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Hour                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::OnHourPassedBy__DelegateSignature(int Hour)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.OnHourPassedBy__DelegateSignature");
	}

	ASkybox_C_OnHourPassedBy__DelegateSignature_Params params;
	params.Hour = Hour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.OnTimeOfDayPresetChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuraion              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::OnTimeOfDayPresetChanged__DelegateSignature(class UClass* Preset, float TransitionDuraion)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.OnTimeOfDayPresetChanged__DelegateSignature");
	}

	ASkybox_C_OnTimeOfDayPresetChanged__DelegateSignature_Params params;
	params.Preset = Preset;
	params.TransitionDuraion = TransitionDuraion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Skybox.Skybox_C.OnWeatherPresetChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Preset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkybox_C::OnWeatherPresetChanged__DelegateSignature(class UClass* Preset, float TransitionDuration)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function Skybox.Skybox_C.OnWeatherPresetChanged__DelegateSignature");
	}

	ASkybox_C_OnWeatherPresetChanged__DelegateSignature_Params params;
	params.Preset = Preset;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
