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

// Enum VariantManagerContent.EPropertyValueCategory
enum class VariantManagerContent_EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined = 0,
	EPropertyValueCategory__Generic = 1,
	EPropertyValueCategory__RelativeLocation = 2,
	EPropertyValueCategory__RelativeRotation = 3,
	EPropertyValueCategory__RelativeScale3D = 4,
	EPropertyValueCategory__bVisible = 5,
	EPropertyValueCategory__Material = 6,
	EPropertyValueCategory__Color  = 7,
	EPropertyValueCategory__EPropertyValueCategory_MAX = 8,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VariantManagerContent.CapturedPropSegment
// 0x0028
struct FCapturedPropSegment
{
	struct FString                                     PropertyName;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PropertyIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VW6M[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ComponentName;                                             // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct VariantManagerContent.FunctionCaller
// 0x0008
struct FFunctionCaller
{
	struct FName                                       FunctionName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
