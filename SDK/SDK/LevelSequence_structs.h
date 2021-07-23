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

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
struct FLevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData_77Q7[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// 0x0020
struct FLevelSequenceLegacyObjectReference
{
	unsigned char                                      UnknownData_97RO[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
struct FLevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                             // 0x0000(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0UI5[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ComponentName;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                      CachedComponent;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001
struct FBoundActorProxy
{
	unsigned char                                      UnknownData_EZ1B[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// 0x0038
struct FLevelSequenceBindingReference
{
	struct FString                                     PackageName;                                               // 0x0000(0x0010) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                             ExternalObjectPath;                                        // 0x0010(0x0018) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ObjectPath;                                                // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// 0x0010
struct FLevelSequenceBindingReferenceArray
{
	TArray<struct FLevelSequenceBindingReference>      References;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// 0x00A0
struct FLevelSequenceBindingReferences
{
	TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;                                     // 0x0000(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      AnimSequenceInstances[0x50];                               // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty LevelSequence.LevelSequenceBindingReferences.AnimSequenceInstances

};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x000C
struct FLevelSequenceSnapshotSettings
{
	unsigned char                                      ZeroPadAmount;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q1E2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFrameRate                                  FrameRate;                                                 // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x00B8
struct FLevelSequencePlayerSnapshot
{
	struct FString                                     MasterName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                         MasterTime;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                         SourceTime;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrentShotName;                                           // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                         CurrentShotLocalTime;                                      // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                         CurrentShotSourceTime;                                     // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SourceTimecode;                                            // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CameraComponent[0x28];                                     // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty LevelSequence.LevelSequencePlayerSnapshot.CameraComponent
	struct FLevelSequenceSnapshotSettings              Settings;                                                  // 0x0098(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UDHG[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULevelSequence*                              ActiveShot;                                                // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                       ShotID;                                                    // 0x00B0(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8N1E[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
