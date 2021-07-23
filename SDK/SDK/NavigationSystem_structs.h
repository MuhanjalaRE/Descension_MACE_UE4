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

// Enum NavigationSystem.ERuntimeGenerationType
enum class NavigationSystem_ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static = 0,
	ERuntimeGenerationType__DynamicModifiersOnly = 1,
	ERuntimeGenerationType__Dynamic = 2,
	ERuntimeGenerationType__LegacyGeneration = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4,

};

// Enum NavigationSystem.ENavCostDisplay
enum class NavigationSystem_ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost     = 0,
	ENavCostDisplay__HeuristicOnly = 1,
	ENavCostDisplay__RealCostOnly  = 2,
	ENavCostDisplay__ENavCostDisplay_MAX = 3,

};

// Enum NavigationSystem.ERecastPartitioning
enum class NavigationSystem_ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone  = 0,
	ERecastPartitioning__Watershed = 1,
	ERecastPartitioning__ChunkyMonotone = 2,
	ERecastPartitioning__ERecastPartitioning_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0018
struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TravelCostOverride;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnteringCostOverride;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsExcluded : 1;                                           // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideTravelCost : 1;                                   // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideEnteringCost : 1;                                 // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9U8T[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag1 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag2 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag3 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag4 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag5 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag6 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag7 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag8 : 1;                                             // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag9 : 1;                                             // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag10 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag11 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag12 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag13 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag14 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag15 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MG87[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0018
struct FNavCollisionBox
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Extent;                                                    // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0014
struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct NavigationSystem.NavGraphNode
// 0x0018
struct FNavGraphNode
{
	class UObject*                                     Owner;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VNPG[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0018
struct FNavGraphEdge
{
	unsigned char                                      UnknownData_UFNP[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0020
struct FSupportedAreaData
{
	struct FString                                     AreaClassName;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaID;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MDGR[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AreaClass;                                                 // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
