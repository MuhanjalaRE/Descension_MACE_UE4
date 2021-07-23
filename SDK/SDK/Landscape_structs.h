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

// Enum Landscape.ELandscapeBlendMode
enum class Landscape_ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend             = 0,
	LSBM_AlphaBlend                = 1,
	LSBM_MAX                       = 2,

};

// Enum Landscape.ELandscapeSetupErrors
enum class Landscape_ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4,

};

// Enum Landscape.ELandscapeClearMode
enum class Landscape_ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                = 0,
	Clear_Heightmap                = 1,
	Clear_All                      = 2,
	Clear_MAX                      = 3,

};

// Enum Landscape.ELandscapeGizmoType
enum class Landscape_ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3,

};

// Enum Landscape.EGrassScaling
enum class Landscape_EGrassScaling : uint8_t
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3,

};

// Enum Landscape.ELandscapeLODFalloff
enum class Landscape_ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2,

};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class Landscape_ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default = 0,
	ELandscapeLayerDisplayMode__Alphabetical = 1,
	ELandscapeLayerDisplayMode__UserSpecific = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX = 3,

};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class Landscape_ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4,

};

// Enum Landscape.ELandscapeImportAlphamapType
enum class Landscape_ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2,

};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class Landscape_ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2,

};

// Enum Landscape.ELandscapeLayerBlendType
enum class Landscape_ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3,

};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class Landscape_ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5,

};

// Enum Landscape.ETerrainCoordMappingType
enum class Landscape_ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.HeightmapData
// 0x0008
struct FHeightmapData
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0010
struct FWeightmapLayerAllocationInfo
{
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WeightmapTextureIndex;                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WeightmapTextureChannel;                                   // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J10E[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.WeightmapData
// 0x0030
struct FWeightmapData
{
	TArray<class UTexture2D*>                          Textures;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWeightmapLayerAllocationInfo>       LayerAllocations;                                          // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ULandscapeWeightmapUsage*>            TextureUsages;                                             // 0x0020(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LandscapeLayerComponentData
// 0x0038
struct FLandscapeLayerComponentData
{
	struct FHeightmapData                              HeightmapData;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FWeightmapData                              WeightmapData;                                             // 0x0008(0x0030) (NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
// 0x0010
struct FLandscapeComponentMaterialOverride
{
	struct FPerPlatformInt                             LODIndex;                                                  // 0x0000(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_46W1[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          Material;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LandscapeEditToolRenderData
// 0x0030
struct FLandscapeEditToolRenderData
{
	class UMaterialInterface*                          ToolMaterial;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          GizmoMaterial;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SelectedType;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DebugChannelR;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DebugChannelG;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DebugChannelB;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  DataTexture;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  LayerContributionTexture;                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.GizmoSelectData
// 0x0050
struct FGizmoSelectData
{
	unsigned char                                      UnknownData_7EWO[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001
struct FLandscapeEditorLayerSettings
{
	unsigned char                                      UnknownData_OMOK[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0010
struct FLandscapeSplineConnection
{
	class ULandscapeSplineSegment*                     Segment;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      End : 1;                                                   // 0x0008(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3PH4[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001
struct FForeignWorldSplineData
{
	unsigned char                                      UnknownData_Q23N[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001
struct FForeignSplineSegmentData
{
	unsigned char                                      UnknownData_E4C2[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0001
struct FForeignControlPointData
{
	unsigned char                                      UnknownData_YLSD[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0038
struct FLandscapeSplineMeshEntry
{
	class UStaticMesh*                                 Mesh;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                         // 0x0008(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bCenterH : 1;                                              // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DFSI[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   CenterAdjust;                                              // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bScaleToWidth : 1;                                         // 0x0024(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LEPX[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Scale;                                                     // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeSplineMeshOrientation> Orientation;                                               // 0x0034(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ESplineMeshAxis>                ForwardAxis;                                               // 0x0035(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ESplineMeshAxis>                UpAxis;                                                    // 0x0036(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OL75[0x1];                                     // 0x0037(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0018
struct FLandscapeSplineSegmentConnection
{
	class ULandscapeSplineControlPoint*                ControlPoint;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TangentLen;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JKKO[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.GrassInput
// 0x0028
struct FGrassInput
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULandscapeGrassType*                         GrassType;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                            Input;                                                     // 0x0010(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NZHX[0xC];                                     // 0x001C(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.LayerBlendInput
// 0x0048
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeLayerBlendType>    BlendType;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OF03[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            LayerInput;                                                // 0x000C(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T6TU[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpressionInput                            HeightInput;                                               // 0x0020(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DF2L[0x8];                                     // 0x002C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PreviewWeight;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ConstLayerInput;                                           // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConstHeightInput;                                          // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
// 0x0010
struct FLandscapeProxyMaterialOverride
{
	struct FPerPlatformInt                             LODIndex;                                                  // 0x0000(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4DVW[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          Material;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0040
struct FLandscapeSplineInterpPoint
{
	struct FVector                                     Center;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Left;                                                      // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Right;                                                     // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FalloffLeft;                                               // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FalloffRight;                                              // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartEndFalloff;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.GrassVariety
// 0x0048
struct FGrassVariety
{
	class UStaticMesh*                                 GrassMesh;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerPlatformFloat                           GrassDensity;                                              // 0x0008(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseGrid;                                                  // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XAUJ[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlacementJitter;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                             StartCullDistance;                                         // 0x0014(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformInt                             EndCullDistance;                                           // 0x0018(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MinLOD;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Landscape_EGrassScaling                            Scaling;                                                   // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FSMY[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFloatInterval                              ScaleX;                                                    // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                              ScaleY;                                                    // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatInterval                              ScaleZ;                                                    // 0x0034(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RandomRotation;                                            // 0x003C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlignToSurface;                                            // 0x003D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLandscapeLightmap;                                     // 0x003E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightingChannels                           LightingChannels;                                          // 0x003F(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               bReceivesDecals;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCastDynamicShadow;                                        // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepInstanceBufferCPUCopy;                                // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DA9Q[0x5];                                     // 0x0043(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0010
struct FLandscapeInfoLayerSettings
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       LayerName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001
struct FLandscapeImportLayerInfo
{
	unsigned char                                      UnknownData_FC7F[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0008
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Landscape.LandscapeLayerBrush
// 0x0001
struct FLandscapeLayerBrush
{
	unsigned char                                      UnknownData_V654[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Landscape.LandscapeLayer
// 0x0088
struct FLandscapeLayer
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisible;                                                  // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocked;                                                   // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WPK[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HeightmapAlpha;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeightmapAlpha;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Landscape_ELandscapeBlendMode>         BlendMode;                                                 // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W1YA[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLandscapeLayerBrush>                Brushes;                                                   // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class ULandscapeLayerInfoObject*, bool>       WeightmapLayerAllocationBlend;                             // 0x0038(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
