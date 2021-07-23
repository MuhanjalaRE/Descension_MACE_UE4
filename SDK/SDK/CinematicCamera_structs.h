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

// Enum CinematicCamera.ECameraFocusMethod
enum class CinematicCamera_ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__None       = 0,
	ECameraFocusMethod__Manual     = 1,
	ECameraFocusMethod__Tracking   = 2,
	ECameraFocusMethod__ECameraFocusMethod_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// 0x0038
struct FCameraTrackingFocusSettings
{
	unsigned char                                      ActorToTrack[0x28];                                        // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CinematicCamera.CameraTrackingFocusSettings.ActorToTrack
	struct FVector                                     RelativeOffset;                                            // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDebugTrackingFocusPoint : 1;                          // 0x0034(0x0001) BIT_FIELD (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7FYX[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CinematicCamera.CameraLensSettings
// 0x0018
struct FCameraLensSettings
{
	float                                              MinFocalLength;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFocalLength;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinFStop;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFStop;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumFocusDistance;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DiaphragmBladeCount;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// 0x000C
struct FCameraFilmbackSettings
{
	float                                              SensorWidth;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SensorHeight;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SensorAspectRatio;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// 0x0020
struct FNamedFilmbackPreset
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings                     FilmbackSettings;                                          // 0x0010(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CDGY[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// 0x0050
struct FCameraLookatTrackingSettings
{
	unsigned char                                      bEnableLookAtTracking : 1;                                 // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDebugLookAtTrackingPosition : 1;                      // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z701[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookAtTrackingInterpSpeed;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PCBT[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ActorToTrack[0x28];                                        // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CinematicCamera.CameraLookatTrackingSettings.ActorToTrack
	struct FVector                                     RelativeOffset;                                            // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowRoll : 1;                                            // 0x004C(0x0001) BIT_FIELD (Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZITN[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CinematicCamera.CameraFocusSettings
// 0x0058
struct FCameraFocusSettings
{
	CinematicCamera_ECameraFocusMethod                 FocusMethod;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZB67[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ManualFocusDistance;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraTrackingFocusSettings                TrackingFocusSettings;                                     // 0x0008(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDebugFocusPlane : 1;                                  // 0x0040(0x0001) BIT_FIELD (Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GN98[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      DebugFocusPlaneColor;                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSmoothFocusChanges : 1;                                   // 0x0048(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NZ9K[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FocusSmoothingInterpSpeed;                                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FocusOffset;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MP9U[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CinematicCamera.NamedLensPreset
// 0x0028
struct FNamedLensPreset
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                         LensSettings;                                              // 0x0010(0x0018) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
