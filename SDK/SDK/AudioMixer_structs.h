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
// Enums
//---------------------------------------------------------------------------

// Enum AudioMixer.EFFTSize
enum class AudioMixer_EFFTSize : uint8_t
{
	EFFTSize__DefaultSize          = 0,
	EFFTSize__Min                  = 1,
	EFFTSize__Small                = 2,
	EFFTSize__Medium               = 3,
	EFFTSize__Large                = 4,
	EFFTSize__Max                  = 5,

};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class AudioMixer_ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared = 1,
	ESubmixEffectDynamicsPeakMode__Peak = 2,
	ESubmixEffectDynamicsPeakMode__Count = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX = 4,

};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class AudioMixer_ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor = 0,
	ESubmixEffectDynamicsProcessorType__Limiter = 1,
	ESubmixEffectDynamicsProcessorType__Expander = 2,
	ESubmixEffectDynamicsProcessorType__Gate = 3,
	ESubmixEffectDynamicsProcessorType__Count = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX = 5,

};

// Enum AudioMixer.EFFTWindowType
enum class AudioMixer_EFFTWindowType : uint8_t
{
	EFFTWindowType__None           = 0,
	EFFTWindowType__Hamming        = 1,
	EFFTWindowType__Hann           = 2,
	EFFTWindowType__Blackman       = 3,
	EFFTWindowType__EFFTWindowType_MAX = 4,

};

// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class AudioMixer_EFFTPeakInterpolationMethod : uint8_t
{
	EFFTPeakInterpolationMethod__NearestNeighbor = 0,
	EFFTPeakInterpolationMethod__Linear = 1,
	EFFTPeakInterpolationMethod__Quadratic = 2,
	EFFTPeakInterpolationMethod__EFFTPeakInterpolationMethod_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioMixer.SubmixEffectEQBand
// 0x0010
struct FSubmixEffectEQBand
{
	float                                              Frequency;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bandwidth;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GainDb;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnabled : 1;                                              // 0x000C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9FU2[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0010
struct FSubmixEffectSubmixEQSettings
{
	TArray<struct FSubmixEffectEQBand>                 EQBands;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0034
struct FSubmixEffectReverbSettings
{
	float                                              Density;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Diffusion;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gain;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GainHF;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecayTime;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecayHFRatio;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReflectionsGain;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReflectionsDelay;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LateGain;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LateDelay;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AirAbsorptionGainHF;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WetLevel;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryLevel;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
// 0x0034
struct FSubmixEffectReverbFastSettings
{
	float                                              Density;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Diffusion;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gain;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GainHF;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecayTime;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecayHFRatio;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReflectionsGain;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReflectionsDelay;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LateGain;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LateDelay;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AirAbsorptionGainHF;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WetLevel;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryLevel;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// 0x0028
struct FSubmixEffectDynamicsProcessorSettings
{
	AudioMixer_ESubmixEffectDynamicsProcessorType      DynamicsProcessorType;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AudioMixer_ESubmixEffectDynamicsPeakMode           PeakMode;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2SL0[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookAheadMsec;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackTimeMsec;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReleaseTimeMsec;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThresholdDb;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ratio;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KneeBandwidthDb;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InputGainDb;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutputGainDb;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bChannelLinked : 1;                                        // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAnalogMode : 1;                                           // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A1BO[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
