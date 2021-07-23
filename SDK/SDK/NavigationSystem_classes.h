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

// Class NavigationSystem.NavModifierVolume
// 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData_3V8P[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AreaClass;                                                 // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		}
		return ptr;
	}



	void SetAreaClass(class UClass* NewAreaClass);
};

// Class NavigationSystem.NavNodeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNavNodeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavSystemConfigOverride
// 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                    // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bLoadOnClient : 1;                                         // 0x0248(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AEQR[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavSystemConfigOverride");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavTestRenderingComponent
// 0x0000 (FullSize[0x0410] - InheritedSize[0x0410])
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavigationQueryFilter
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>               Areas;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                      IncludeFlags;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                      ExcludeFlags;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E6MN[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		}
		return ptr;
	}



};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavigationData
// 0x01C0 (FullSize[0x0400] - InheritedSize[0x0240])
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData_W28E[0x8];                                     // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         RenderingComp;                                             // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavDataConfig                              NavDataConfig;                                             // 0x0250(0x0068) (Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bEnableDrawing : 1;                                        // 0x02B8(0x0001) BIT_FIELD (Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bForceRebuildOnLoad : 1;                                   // 0x02B8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCanBeMainNavData : 1;                                     // 0x02B8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCanSpawnOnRebuild : 1;                                    // 0x02B8(0x0001) BIT_FIELD (Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bRebuildAtRuntime : 1;                                     // 0x02B8(0x0001) BIT_FIELD (Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GXVQ[0x3];                                     // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	NavigationSystem_ERuntimeGenerationType            RuntimeGeneration;                                         // 0x02BC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EETU[0x3];                                     // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ObservedPathsTickInterval;                                 // 0x02C0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32_t                                           DataVersion;                                               // 0x02C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VUZN[0xD0];                                    // 0x02C8(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSupportedAreaData>                  SupportedAreas;                                            // 0x0398(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I2V4[0x58];                                    // 0x03A8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		}
		return ptr;
	}



};

// Class NavigationSystem.RecastNavMesh
// 0x00B8 (FullSize[0x04B8] - InheritedSize[0x0400])
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      bDrawTriangleEdges : 1;                                    // 0x0400(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawPolyEdges : 1;                                        // 0x0400(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFilledPolys : 1;                                      // 0x0400(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawNavMeshEdges : 1;                                     // 0x0400(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawTileBounds : 1;                                       // 0x0400(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawPathCollidingGeometry : 1;                            // 0x0400(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawTileLabels : 1;                                       // 0x0400(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawPolygonLabels : 1;                                    // 0x0400(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDefaultPolygonCost : 1;                               // 0x0401(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawLabelsOnPathNodes : 1;                                // 0x0401(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawNavLinks : 1;                                         // 0x0401(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFailedNavLinks : 1;                                   // 0x0401(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawClusters : 1;                                         // 0x0401(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawOctree : 1;                                           // 0x0401(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawOctreeDetails : 1;                                    // 0x0401(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawMarkedForbiddenPolys : 1;                             // 0x0401(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDistinctlyDrawTilesBeingBuilt : 1;                        // 0x0402(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawNavMesh : 1;                                          // 0x0402(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FCA3[0x1];                                     // 0x0403(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DrawOffset;                                                // 0x0404(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFixedTilePoolSize : 1;                                    // 0x0408(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SSDV[0x3];                                     // 0x0409(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TilePoolSize;                                              // 0x040C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TileSizeUU;                                                // 0x0410(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellSize;                                                  // 0x0414(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellHeight;                                                // 0x0418(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentRadius;                                               // 0x041C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentHeight;                                               // 0x0420(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxHeight;                                            // 0x0424(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxSlope;                                             // 0x0428(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxStepHeight;                                        // 0x042C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRegionArea;                                             // 0x0430(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MergeRegionSize;                                           // 0x0434(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSimplificationError;                                    // 0x0438(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSimultaneousTileGenerationJobsCount;                    // 0x043C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileNumberHardLimit;                                       // 0x0440(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyRefTileBits;                                           // 0x0444(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyRefNavPolyBits;                                        // 0x0448(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyRefSaltBits;                                           // 0x044C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NavMeshOriginOffset;                                       // 0x0450(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultDrawDistance;                                       // 0x045C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultMaxSearchNodes;                                     // 0x0460(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultMaxHierarchicalSearchNodes;                         // 0x0464(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<NavigationSystem_ERecastPartitioning>  RegionPartitioning;                                        // 0x0468(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<NavigationSystem_ERecastPartitioning>  LayerPartitioning;                                         // 0x0469(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FVDH[0x2];                                     // 0x046A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RegionChunkSplits;                                         // 0x046C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerChunkSplits;                                          // 0x0470(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortNavigationAreasByCost : 1;                            // 0x0474(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPerformVoxelFiltering : 1;                                // 0x0474(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMarkLowHeightAreas : 1;                                   // 0x0474(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFilterLowSpanSequences : 1;                               // 0x0474(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                           // 0x0474(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDoFullyAsyncNavDataGathering : 1;                         // 0x0474(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseBetterOffsetsFromCorners : 1;                          // 0x0474(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStoreEmptyTileLayers : 1;                                 // 0x0474(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseVirtualFilters : 1;                                    // 0x0475(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowNavLinkAsPathEnd : 1;                                // 0x0475(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseVoxelCache : 1;                                        // 0x0475(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3FOP[0x2];                                     // 0x0476(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TileSetUpdateInterval;                                     // 0x0478(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              HeuristicScale;                                            // 0x047C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VerticalDeviationFromGroundCompensation;                   // 0x0480(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PSMK[0x34];                                    // 0x0484(0x0034) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		}
		return ptr;
	}



	bool K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);
};

// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData_SMTQ[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		}
		return ptr;
	}



};

// Class NavigationSystem.AbstractNavData
// 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
class AAbstractNavData : public ANavigationData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		}
		return ptr;
	}



};

// Class NavigationSystem.CrowdManagerBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCrowdManagerBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavArea
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UNavArea : public UNavAreaBase
{
public:
	float                                              DefaultCost;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FixedAreaEnteringCost;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                      DrawColor;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                           SupportedAgents;                                           // 0x003C(0x0004) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent0 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent1 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent2 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent3 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent4 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent5 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent6 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent7 : 1;                                       // 0x0040(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent8 : 1;                                       // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent9 : 1;                                       // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent10 : 1;                                      // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent11 : 1;                                      // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent12 : 1;                                      // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent13 : 1;                                      // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent14 : 1;                                      // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent15 : 1;                                      // 0x0041(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ITX6[0x6];                                     // 0x0042(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavArea_Default
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_Default : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavArea_LowHeight
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_LowHeight : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavArea_Null
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_Null : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavArea_Obstacle
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_Obstacle : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavAreaMeta
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavAreaMeta : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (FullSize[0x00C8] - InheritedSize[0x0048])
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	class UClass*                                      Agent0Area;                                                // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent1Area;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent2Area;                                                // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent3Area;                                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent4Area;                                                // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent5Area;                                                // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent6Area;                                                // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent7Area;                                                // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent8Area;                                                // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent9Area;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent10Area;                                               // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent11Area;                                               // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent12Area;                                               // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent13Area;                                               // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent14Area;                                               // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent15Area;                                               // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavCollision
// 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
class UNavCollision : public UNavCollisionBase
{
public:
	unsigned char                                      UnknownData_D51I[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNavCollisionCylinder>               CylinderCollision;                                         // 0x0080(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNavCollisionBox>                    BoxCollision;                                              // 0x0090(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      AreaClass;                                                 // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGatherConvexGeometry : 1;                                 // 0x00A8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCreateOnClient : 1;                                       // 0x00A8(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CT7S[0x2F];                                    // 0x00A9(0x002F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavigationGraph
// 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
class ANavigationGraph : public ANavigationData
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavigationGraphNode
// 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
class ANavigationGraphNode : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavigationGraphNodeComponent
// 0x0028 (FullSize[0x0240] - InheritedSize[0x0218])
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	struct FNavGraphNode                               Node;                                                      // 0x0218(0x0018) (NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                         // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                         // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavigationInvokerComponent
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                              TileGenerationRadius;                                      // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TileRemovalRadius;                                         // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavigationPath
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UNavigationPath : public UObject
{
public:
	struct FScriptMulticastDelegate                    PathUpdatedNotifier;                                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             PathPoints;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ENavigationOptionFlag>          RecalculateOnInvalidation;                                 // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H4CV[0x3F];                                    // 0x0049(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		}
		return ptr;
	}



	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	struct FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<Engine_ENavigationOptionFlag> DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
};

// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNavigationPathGenerator : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavigationSystemV1
// 0x0418 (FullSize[0x0440] - InheritedSize[0x0028])
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                             MainNavData;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                             AbstractNavData;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CrowdManagerClass[0x28];                                   // 0x0038(0x0028) UNKNOWN PROPERTY: SoftClassProperty NavigationSystem.NavigationSystemV1.CrowdManagerClass
	unsigned char                                      bAutoCreateNavigationData : 1;                             // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                         // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowClientSideNavigation : 1;                            // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShouldDiscardSubLevelNavData : 1;                         // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bTickWhilePaused : 1;                                      // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSupportRebuilding : 1;                                    // 0x0060(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bInitialBuildingLocked : 1;                                // 0x0060(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LHYI : 1;                                      // 0x0060(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bSkipAgentHeightCheckWhenPickingNavData : 1;               // 0x0061(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SBK8[0x2];                                     // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Engine_ENavDataGatheringModeConfig                 DataGatheringMode;                                         // 0x0064(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ML9P[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bGenerateNavigationOnlyAroundNavigationInvokers : 1;       // 0x0068(0x0001) BIT_FIELD (Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JUIP[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ActiveTilesUpdateInterval;                                 // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNavDataConfig>                      SupportedAgents;                                           // 0x0070(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	float                                              DirtyAreasUpdateFreq;                                      // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AWC7[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ANavigationData*>                     NavDataSet;                                                // 0x0088(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                  // 0x0098(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XNSV[0x60];                                    // 0x00A8(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnNavDataRegisteredEvent;                                  // 0x0108(0x0010) (ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNavigationGenerationFinishedDelegate;                    // 0x0118(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_998K[0xDC];                                    // 0x0128(0x00DC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Engine_EFNavigationSystemRunMode                   OperationMode;                                             // 0x0204(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4YYN[0x23B];                                   // 0x0205(0x023B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		}
		return ptr;
	}



	void UnregisterNavigationInvoker(class AActor* Invoker);
	void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs);
	void SetGeometryGatheringMode(Engine_ENavDataGatheringModeConfig NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	struct FVector STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	bool STATIC_NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, class UClass* FilterClass, class AController* Querier);
	bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);
	bool STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
	bool STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	bool STATIC_K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	bool STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
	bool STATIC_IsNavigationBeingBuilt(class UObject* WorldContextObject);
	struct FVector STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	TEnumAsByte<Engine_ENavigationQueryResult> STATIC_GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, class UClass* FilterClass);
	TEnumAsByte<Engine_ENavigationQueryResult> STATIC_GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, class UClass* FilterClass);
	class UNavigationSystemV1* STATIC_GetNavigationSystem(class UObject* WorldContextObject);
	class UNavigationPath* STATIC_FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass);
	class UNavigationPath* STATIC_FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass);
};

// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	unsigned char                                      bStrictlyStatic : 1;                                       // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCreateOnClient : 1;                                       // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAutoSpawnMissingNavData : 1;                              // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                         // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FGDZ[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavigationTestingActor
// 0x00E8 (FullSize[0x0328] - InheritedSize[0x0240])
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData_GNM0[0x10];                                    // 0x0240(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavigationInvokerComponent*                 InvokerComponent;                                          // 0x0258(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bActAsNavigationInvoker : 1;                               // 0x0260(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XNM6[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNavAgentProperties                         NavAgentProps;                                             // 0x0268(0x0030) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     QueryingExtent;                                            // 0x0298(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PV9S[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ANavigationData*                             MyNavData;                                                 // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ProjectedLocation;                                         // 0x02B0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bProjectedLocationValid : 1;                               // 0x02BC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSearchStart : 1;                                          // 0x02BC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBacktracking : 1;                                         // 0x02BC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseHierarchicalPathfinding : 1;                           // 0x02BC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGatherDetailedInfo : 1;                                   // 0x02BC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDistanceToWall : 1;                                   // 0x02BC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowNodePool : 1;                                         // 0x02BC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowBestPath : 1;                                         // 0x02BC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowDiffWithPreviousStep : 1;                             // 0x02BD(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeVisibleInGame : 1;                                // 0x02BD(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TB7Z[0x2];                                     // 0x02BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<NavigationSystem_ENavCostDisplay>      CostDisplayMode;                                           // 0x02C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1CZM[0x3];                                     // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   TextCanvasOffset;                                          // 0x02C4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathExist : 1;                                            // 0x02CC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathIsPartial : 1;                                        // 0x02CC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathSearchOutOfNodes : 1;                                 // 0x02CC(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XEF4[0x3];                                     // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PathfindingTime;                                           // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathCost;                                                  // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PathfindingSteps;                                          // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_998K[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ANavigationTestingActor*                     OtherActor;                                                // 0x02E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FilterClass;                                               // 0x02E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShowStepIndex;                                             // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetFromCornersDistance;                                 // 0x02F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MI77[0x30];                                    // 0x02F8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavLinkComponent
// 0x0020 (FullSize[0x0430] - InheritedSize[0x0410])
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_VGYU[0x8];                                     // 0x0410(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNavigationLink>                     Links;                                                     // 0x0418(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_REJK[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavRelevantComponent
// 0x0030 (FullSize[0x0108] - InheritedSize[0x00D8])
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_Y34T[0x24];                                    // 0x00D8(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAttachToOwnersRoot : 1;                                   // 0x00FC(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z2KX[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     CachedNavParent;                                           // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		}
		return ptr;
	}



	void SetNavigationRelevancy(bool bRelevant);
};

// Class NavigationSystem.NavLinkCustomComponent
// 0x00B0 (FullSize[0x01B8] - InheritedSize[0x0108])
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData_LOVL[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           NavLinkUserId;                                             // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_05OR[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      EnabledAreaClass;                                          // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DisabledAreaClass;                                         // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNavAgentSelector                           SupportedAgents;                                           // 0x0128(0x0004) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector                                     LinkRelativeStart;                                         // 0x012C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     LinkRelativeEnd;                                           // 0x0138(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_ENavLinkDirection>              LinkDirection;                                             // 0x0144(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z5I8[0x3];                                     // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bLinkEnabled : 1;                                          // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bNotifyWhenEnabled : 1;                                    // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bNotifyWhenDisabled : 1;                                   // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCreateBoxObstacle : 1;                                    // 0x0148(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_47TO[0x3];                                     // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ObstacleOffset;                                            // 0x014C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     ObstacleExtent;                                            // 0x0158(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EBOI[0x4];                                     // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ObstacleAreaClass;                                         // 0x0168(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BroadcastRadius;                                           // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BroadcastInterval;                                         // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_ECollisionChannel>              BroadcastChannel;                                          // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KFF9[0x3F];                                    // 0x0179(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNavLinkCustomInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNavLinkHostInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavLinkRenderingComponent
// 0x0000 (FullSize[0x0410] - InheritedSize[0x0410])
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavLinkTrivial
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UNavLinkTrivial : public UNavLinkDefinition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavMeshBoundsVolume
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                           SupportedAgents;                                           // 0x0278(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O4AP[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavMeshRenderingComponent
// 0x0010 (FullSize[0x0420] - InheritedSize[0x0410])
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_BVSA[0x10];                                    // 0x0410(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		}
		return ptr;
	}



};

// Class NavigationSystem.NavModifierComponent
// 0x0068 (FullSize[0x0170] - InheritedSize[0x0108])
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	class UClass*                                      AreaClass;                                                 // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FailsafeExtent;                                            // 0x0110(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIncludeAgentHeight : 1;                                   // 0x011C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JW76[0x53];                                    // 0x011D(0x0053) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		}
		return ptr;
	}



	void SetAreaClass(class UClass* NewAreaClass);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
