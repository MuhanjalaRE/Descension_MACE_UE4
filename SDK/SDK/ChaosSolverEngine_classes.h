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

// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UChaosSolver : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolver");
		}
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosSolverActor
// 0x0070 (FullSize[0x02B0] - InheritedSize[0x0240])
class AChaosSolverActor : public AActor
{
public:
	float                                              TimeStepMultiplier;                                        // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollisionIterations;                                       // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PushOutIterations;                                         // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PushOutPairIterations;                                     // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClusterConnectionFactor;                                   // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ChaosSolverEngine_EClusterConnectionTypeEnum       ClusterUnionConnectionType;                                // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DoGenerateCollisionData;                                   // 0x0255(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G9R4[0x2];                                     // 0x0256(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSolverCollisionFilterSettings              CollisionFilterSettings;                                   // 0x0258(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               DoGenerateBreakingData;                                    // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4SNZ[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSolverBreakingFilterSettings               BreakingFilterSettings;                                    // 0x026C(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               DoGenerateTrailingData;                                    // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZPH4[0x3];                                     // 0x027D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSolverTrailingFilterSettings               TrailingFilterSettings;                                    // 0x0280(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bHasFloor;                                                 // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TGUL[0x3];                                     // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FloorHeight;                                               // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MassScale;                                                 // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChaosDebugSubstepControl                   ChaosDebugSubstepControl;                                  // 0x029C(0x0003) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RPJY[0x1];                                     // 0x029F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBillboardComponent*                         SpriteComponent;                                           // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                          // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverActor");
		}
		return ptr;
	}



	void SetSolverActive(bool bActive);
	void SetAsCurrentWorldSolver();
};

// Class ChaosSolverEngine.ChaosSolverSettings
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData_VCXL[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              DefaultChaosSolverActorClass;                              // 0x0040(0x0018) (Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverSettings");
		}
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UChaosEventListenerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_4EGL[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosEventListenerComponent");
		}
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// 0x0168 (FullSize[0x0248] - InheritedSize[0x00E0])
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	unsigned char                                      UnknownData_MFJZ[0xC0];                                    // 0x00E0(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                               // 0x01A0(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                                   // 0x01F0(0x0050) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IZDY[0x8];                                     // 0x0240(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosGameplayEventDispatcher");
		}
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UChaosNotifyHandlerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosNotifyHandlerInterface");
		}
		return ptr;
	}



};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary");
		}
		return ptr;
	}



	struct FHitResult STATIC_ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
