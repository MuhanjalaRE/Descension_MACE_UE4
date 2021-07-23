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

// BlueprintGeneratedClass Skybox.Skybox_C
// 0x060C (FullSize[0x084C] - InheritedSize[0x0240])
class ASkybox_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Dummy;                                                     // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SkyMesh;                                                   // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              TimeOfDay;                                                 // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              TimeChangeSpeed;                                           // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeCycleDuration;                                         // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseTimeOfDayCurves;                                        // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3ETB[0x3];                                     // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimeOfDayCurves                            TimeOfDayCurves;                                           // 0x0270(0x0050) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              WeatherPresetList;                                         // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SelectedWeatherPreset;                                     // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReloadSelectedWeather;                                     // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<PresetSelection_EPresetSelection>      WeatherChangeMode;                                         // 0x02D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F7E1[0x2];                                     // 0x02D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeatherChangeDuration;                                     // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    WeatherChangeTransition;                                   // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_05WQ[0x3];                                     // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeatherChangeAfterTime;                                    // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeOfDayData                              TimeOfDaySettings;                                         // 0x02E4(0x00A4) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              TimeOfDayPresetList;                                       // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FPresetChangeInfo                           TimeOfDayPresetChange;                                     // 0x0398(0x0018) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    MoonDirection;                                             // 0x03B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              SunHeight;                                                 // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeatherData                                WeatherSettings;                                           // 0x03C0(0x0068) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SkyMaterialInst;                                           // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      WeatherPresetTarget;                                       // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WeatherPresetInterp;                                       // 0x0438(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HJIV[0x4];                                     // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceConstant*                   SkyMaterial;                                               // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkyLightRecaptureDelay;                                    // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z8JM[0x4];                                     // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTextureCube*>                        SkyLightStaticCubemaps;                                    // 0x0450(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               SkyLightCubemapsTimeDriven;                                // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_49V5[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Saturation;                                                // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsBloom;                                               // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsFluffy;                                              // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UVHorizonRadius;                                           // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UVHorizonMapping;                                          // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UVScale;                                                   // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FogDirectionalInScattering;                                // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FogDensity;                                                // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                UVBaseLayerPosition;                                       // 0x0484(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                UVBaseLayerSize;                                           // 0x0494(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                UVSecondLayerSize;                                         // 0x04A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                UVSecondLayerPosition;                                     // 0x04B4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1RBW[0x4];                                     // 0x04C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    CloudsLayer1;                                              // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                                    CloudsLayer2;                                              // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizonTilt;                                               // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   WindForce;                                                 // 0x04DC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunRadius;                                                 // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunShine;                                                  // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunSaturation;                                             // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunMaxAltitude;                                            // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunAzimuth;                                                // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SunVisibleDuration;                                        // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SunDirectionTimeOfDay;                                     // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4HVA[0x3];                                     // 0x04FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    SunDirection;                                              // 0x0500(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StarsBrightness;                                           // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                                    MoonTexture;                                               // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonBightness;                                             // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonRadius;                                                // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonClouds;                                                // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonShine;                                                 // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonRoll;                                                  // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonVisibleDuration;                                       // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MoonSyncedToSun;                                           // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z18Q[0x3];                                     // 0x0531(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    MoonRotation;                                              // 0x0534(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FWeatherData                                WeatherFrom;                                               // 0x0540(0x0068) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeatherData                                WeatherTo;                                                 // 0x05A8(0x0068) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    MoonChangeSpeed;                                           // 0x0610(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WorldRotation;                                             // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WorldRotationSpeed;                                        // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UYBP[0x4];                                     // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    WorldLayerTexture;                                         // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WorldLayerFog;                                             // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WorldLayerDepth;                                           // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                WorldLayerColor;                                           // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkyLightRecaptureTime;                                     // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeOfDayFrom;                                             // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeOfDayTo;                                               // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeOfDayTransitionDuration;                               // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    TimeOfDayTransition;                                       // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CYVK[0x3];                                     // 0x0659(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeOfDayInterp;                                           // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*                   GroundShadowMaterial;                                      // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GroundShadowScale;                                         // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GroundShadowSoft;                                          // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    GroundShadowMaterialInst;                                  // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Version;                                                   // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeOfDayData                              TimeOfDayDataFrom;                                         // 0x067C(0x00A4) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeOfDayData                              TimeOfDayDataTo;                                           // 0x0720(0x00A4) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeOfDayPresetInterp;                                     // 0x07C4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      TimeOfDayPresetTarget;                                     // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkyLightIntensity;                                         // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TW46[0x4];                                     // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ADirectionalLight*                           SunLightSource;                                            // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                                   SkyLight;                                                  // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                       HeightFog;                                                 // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                           MoonLightSource;                                           // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkyLightLightning;                                         // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseWorldSpaceRotation;                                     // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WUFG[0x3];                                     // 0x07FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DaysPassedBy;                                              // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X160[0x4];                                     // 0x0804(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnWeatherPresetChanged;                                    // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnTimeOfDayPresetChanged;                                  // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnHourPassedBy;                                            // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnDayPassedBy;                                             // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              MoonLightLightning;                                        // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("BlueprintGeneratedClass Skybox.Skybox_C");
		}
		return ptr;
	}



	void InitLightningData(const struct FVector& Position, float Radius, float Clouds, float Scattering, float Skydome);
	void UpdateLightningData(float SkyLight, float MoonLight, const struct FLinearColor& Color);
	void GetSunDirectionAtTime(float Time, struct FRotator* Rtation);
	void SelectCustomWeather();
	void TimeOfDayPresetChanged();
	void WetherPresetChanged();
	void SetTimeOfDayExternal(class UClass* Preset, float TransitionDuration);
	void SetTimeCycleDuration(float RealTimeMinutes);
	void ChangeTimeOfDay();
	void SetTimeOfDayChangeMode(TEnumAsByte<PresetSelection_EPresetSelection> Mode, float ChangeAfterTime, TEnumAsByte<Engine_EEasingFunc> Transition);
	void SetTimeOfDayByIndex(int Preset_Index, float TransitionDuration);
	void LerpTimeOfDayPreset(const struct FTimeOfDayData& From, const struct FTimeOfDayData& To, float Alpha, struct FTimeOfDayData* StructOut);
	void UpdateTimeOfDayPreset(float DeltaTime);
	void Versioning();
	void GetPrecomputedSkyLight(float Time, class UTextureCube** From, class UTextureCube** To, float* Alpha);
	void UpdateMoon(float DeltaTime);
	void SetShadowFunction(class UMaterialInstanceConstant* Material);
	void UpdateShadowParameters();
	void SetTime(float TargetTime, float TransitionDuration, TEnumAsByte<Engine_EEasingFunc> TransitionFunction);
	void UpdateSunParameters();
	void UpdateSkyLight();
	void SetPresetChangeMode(TEnumAsByte<PresetSelection_EPresetSelection> Mode, float ChangeAfterTime, TEnumAsByte<Engine_EEasingFunc> Transition);
	void SetPresetExternal(class UClass* PresetToSet, float TransitionDuration);
	void LerpWeatherPreset(const struct FWeatherData& A, const struct FWeatherData& B, float Alpha, struct FWeatherData* StructOut);
	void UpdateExternalActors();
	void SampleCurveBySunHeight(class UCurveLinearColor* Curve, const struct FLinearColor& Default, struct FLinearColor* Color);
	void UpdateNightParameters();
	void UpdateWeatherPreset(float DeltaTime);
	void SetPresetByIndex(int Preset_Index, float TransitionDuration);
	void UpdateLayersParameters(float DeltaTime);
	void UpdateCloudsParameters();
	void UpdateHorizonParameters();
	void ChangeWeather();
	void UpdateDateTime(float DeltaTime);
	void UpdateCurves();
	void UpdateSkyParameters(float DeltaTime);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void RecaptureSky();
	void SetTimeOfDay(float TimeOfDay);
	void PostConstructionScript();
	void ExecuteUbergraph_Skybox(int EntryPoint);
	void OnDayPassedBy__DelegateSignature(int Day);
	void OnHourPassedBy__DelegateSignature(int Hour);
	void OnTimeOfDayPresetChanged__DelegateSignature(class UClass* Preset, float TransitionDuraion);
	void OnWeatherPresetChanged__DelegateSignature(class UClass* Preset, float TransitionDuration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
