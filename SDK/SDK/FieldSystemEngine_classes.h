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

// Class FieldSystemEngine.FieldNodeBase
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UFieldNodeBase : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeBase");
		}
		return ptr;
	}



};

// Class FieldSystemEngine.FieldNodeFloat
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UFieldNodeFloat : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeFloat");
		}
		return ptr;
	}



};

// Class FieldSystemEngine.RadialFalloff
// 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
class URadialFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRange;                                                  // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRange;                                                  // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Default;                                                   // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x00EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FieldSystemCore_EFieldFalloffType>     Falloff;                                                   // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4PVW[0x7];                                     // 0x00F9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.RadialFalloff");
		}
		return ptr;
	}



	class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, TEnumAsByte<FieldSystemCore_EFieldFalloffType> Falloff);
};

// Class FieldSystemEngine.PlaneFalloff
// 0x0030 (FullSize[0x0108] - InheritedSize[0x00D8])
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRange;                                                  // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRange;                                                  // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Default;                                                   // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Distance;                                                  // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x00EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                    // 0x00F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FieldSystemCore_EFieldFalloffType>     Falloff;                                                   // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5LDQ[0x3];                                     // 0x0105(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.PlaneFalloff");
		}
		return ptr;
	}



	class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, TEnumAsByte<FieldSystemCore_EFieldFalloffType> Falloff);
};

// Class FieldSystemEngine.BoxFalloff
// 0x0058 (FullSize[0x0130] - InheritedSize[0x00D8])
class UBoxFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRange;                                                  // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRange;                                                  // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Default;                                                   // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RPZA[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x00F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FieldSystemCore_EFieldFalloffType>     Falloff;                                                   // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AHOQ[0xF];                                     // 0x0121(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.BoxFalloff");
		}
		return ptr;
	}



	class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, TEnumAsByte<FieldSystemCore_EFieldFalloffType> Falloff);
};

// Class FieldSystemEngine.NoiseField
// 0x0038 (FullSize[0x0110] - InheritedSize[0x00D8])
class UNoiseField : public UFieldNodeFloat
{
public:
	float                                              MinRange;                                                  // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRange;                                                  // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x00E0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.NoiseField");
		}
		return ptr;
	}



	class UNoiseField* SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform);
};

// Class FieldSystemEngine.FieldNodeVector
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UFieldNodeVector : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeVector");
		}
		return ptr;
	}



};

// Class FieldSystemEngine.UniformVector
// 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
class UUniformVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                 // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.UniformVector");
		}
		return ptr;
	}



	class UUniformVector* SetUniformVector(float Magnitude, const struct FVector& Direction);
};

// Class FieldSystemEngine.RadialVector
// 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
class URadialVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.RadialVector");
		}
		return ptr;
	}



	class URadialVector* SetRadialVector(float Magnitude, const struct FVector& Position);
};

// Class FieldSystemEngine.RandomVector
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class URandomVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R9TC[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.RandomVector");
		}
		return ptr;
	}



	class URandomVector* SetRandomVector(float Magnitude);
};

// Class FieldSystemEngine.OperatorField
// 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
class UOperatorField : public UFieldNodeBase
{
public:
	float                                              Magnitude;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6UYG[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFieldNodeBase*                              RightField;                                                // 0x00E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFieldNodeBase*                              LeftField;                                                 // 0x00E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FieldSystemCore_EFieldOperationType>   Operation;                                                 // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G28M[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.OperatorField");
		}
		return ptr;
	}



	class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* RightField, class UFieldNodeBase* LeftField, TEnumAsByte<FieldSystemCore_EFieldOperationType> Operation);
};

// Class FieldSystemEngine.FieldNodeInt
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UFieldNodeInt : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeInt");
		}
		return ptr;
	}



};

// Class FieldSystemEngine.ToIntegerField
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UToIntegerField : public UFieldNodeInt
{
public:
	class UFieldNodeFloat*                             FloatField;                                                // 0x00D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.ToIntegerField");
		}
		return ptr;
	}



	class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField);
};

// Class FieldSystemEngine.ToFloatField
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UToFloatField : public UFieldNodeFloat
{
public:
	class UFieldNodeInt*                               IntField;                                                  // 0x00D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.ToFloatField");
		}
		return ptr;
	}



	class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField);
};

// Class FieldSystemEngine.CullingField
// 0x0018 (FullSize[0x00F0] - InheritedSize[0x00D8])
class UCullingField : public UFieldNodeBase
{
public:
	class UFieldNodeBase*                              Culling;                                                   // 0x00D8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFieldNodeBase*                              Field;                                                     // 0x00E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FieldSystemCore_EFieldCullingOperationType> Operation;                                                 // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WMA0[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.CullingField");
		}
		return ptr;
	}



	class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<FieldSystemCore_EFieldCullingOperationType> Operation);
};

// Class FieldSystemEngine.ReturnResultsTerminal
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UReturnResultsTerminal : public UFieldNodeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.ReturnResultsTerminal");
		}
		return ptr;
	}



	class UReturnResultsTerminal* SetReturnResultsTerminal();
};

// Class FieldSystemEngine.FieldSystemActor
// 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                      // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemActor");
		}
		return ptr;
	}



};

// Class FieldSystemEngine.FieldSystem
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UFieldSystem : public UObject
{
public:
	unsigned char                                      UnknownData_1Q8C[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystem");
		}
		return ptr;
	}



};

// Class FieldSystemEngine.FieldSystemComponent
// 0x0030 (FullSize[0x0440] - InheritedSize[0x0410])
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	class UFieldSystem*                                FieldSystem;                                               // 0x0410(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S9TF[0x10];                                    // 0x0418(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SupportedSolvers[0x10];                                    // 0x0418(0x0010) UNKNOWN PROPERTY: ArrayProperty FieldSystemEngine.FieldSystemComponent.SupportedSolvers
	unsigned char                                      UnknownData_ST1J[0x8];                                     // 0x0438(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemComponent");
		}
		return ptr;
	}



	void ResetFieldSystem();
	void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude);
	void ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int Iterations);
	void ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius);
	void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude);
	void ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude);
	void ApplyPhysicsField(bool Enabled, TEnumAsByte<FieldSystemCore_EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude);
	void AddFieldCommand(bool Enabled, TEnumAsByte<FieldSystemCore_EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
};

// Class FieldSystemEngine.FieldSystemMetaData
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UFieldSystemMetaData : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaData");
		}
		return ptr;
	}



};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
public:
	int                                                Iterations;                                                // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZHE7[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataIteration");
		}
		return ptr;
	}



	class UFieldSystemMetaDataIteration* SetMetaDataIteration(int Iterations);
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	TEnumAsByte<FieldSystemCore_EFieldResolutionType>  ResolutionType;                                            // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W7D1[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution");
		}
		return ptr;
	}



	class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<FieldSystemCore_EFieldResolutionType> ResolutionType);
};

// Class FieldSystemEngine.UniformInteger
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UUniformInteger : public UFieldNodeInt
{
public:
	int                                                Magnitude;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_APQT[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.UniformInteger");
		}
		return ptr;
	}



	class UUniformInteger* SetUniformInteger(int Magnitude);
};

// Class FieldSystemEngine.RadialIntMask
// 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
class URadialIntMask : public UFieldNodeInt
{
public:
	float                                              Radius;                                                    // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InteriorValue;                                             // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExteriorValue;                                             // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FieldSystemCore_ESetMaskConditionType> SetMaskCondition;                                          // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3RQE[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.RadialIntMask");
		}
		return ptr;
	}



	class URadialIntMask* SetRadialIntMask(float Radius, const struct FVector& Position, int InteriorValue, int ExteriorValue, TEnumAsByte<FieldSystemCore_ESetMaskConditionType> SetMaskConditionIn);
};

// Class FieldSystemEngine.UniformScalar
// 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
class UUniformScalar : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BNAQ[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class FieldSystemEngine.UniformScalar");
		}
		return ptr;
	}



	class UUniformScalar* SetUniformScalar(float Magnitude);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
