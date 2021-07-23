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

// Class MRMesh.MeshReconstructorBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMeshReconstructorBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		}
		return ptr;
	}



	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMeshComponent* Mesh);
};

// Class MRMesh.MockDataMeshTrackerComponent
// 0x0078 (FullSize[0x0290] - InheritedSize[0x0218])
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnMeshTrackerUpdated;                                      // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               ScanWorld;                                                 // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequestNormals;                                            // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequestVertexConfidence;                                   // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MRMesh_EMeshTrackerVertexColorMode                 VertexColorMode;                                           // 0x022B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H6HO[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FColor>                              BlockVertexColors;                                         // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                VertexColorFromConfidenceZero;                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                VertexColorFromConfidenceOne;                              // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpdateInterval;                                            // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MCXS[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMRMeshComponent*                            MRMesh;                                                    // 0x0268(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4NWK[0x20];                                    // 0x0270(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MRMesh.MockDataMeshTrackerComponent");
		}
		return ptr;
	}



	void OnMockDataMeshTrackerUpdated__DelegateSignature(int Index, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);
	void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};

// Class MRMesh.MRMeshComponent
// 0x0080 (FullSize[0x0490] - InheritedSize[0x0410])
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_8AWI[0x8];                                     // 0x0410(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          Material;                                                  // 0x0418(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCreateMeshProxySections;                                  // 0x0420(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUpdateNavMeshOnMeshUpdate;                                // 0x0421(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bNeverCreateCollisionMesh;                                 // 0x0422(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SGEU[0x5];                                     // 0x0423(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  CachedBodySetup;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UBodySetup*>                          BodySetups;                                                // 0x0430(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          WireframeMaterial;                                         // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BDOQ[0x48];                                    // 0x0448(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		}
		return ptr;
	}



	bool IsConnected();
	void ForceNavMeshUpdate();
	void Clear();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
