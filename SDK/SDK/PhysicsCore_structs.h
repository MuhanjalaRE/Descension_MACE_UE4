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

// Enum PhysicsCore.EChaosThreadingMode
enum class PhysicsCore_EChaosThreadingMode : uint8_t
{
	EChaosThreadingMode__DedicatedThread = 0,
	EChaosThreadingMode__TaskGraph = 1,
	EChaosThreadingMode__SingleThread = 2,
	EChaosThreadingMode__Num       = 3,
	EChaosThreadingMode__Invalid   = 4,
	EChaosThreadingMode__EChaosThreadingMode_MAX = 5,

};

// Enum PhysicsCore.EChaosBufferMode
enum class PhysicsCore_EChaosBufferMode : uint8_t
{
	EChaosBufferMode__Double       = 0,
	EChaosBufferMode__Triple       = 1,
	EChaosBufferMode__Num          = 2,
	EChaosBufferMode__Invalid      = 3,
	EChaosBufferMode__EChaosBufferMode_MAX = 4,

};

// Enum PhysicsCore.EChaosSolverTickMode
enum class PhysicsCore_EChaosSolverTickMode : uint8_t
{
	EChaosSolverTickMode__Fixed    = 0,
	EChaosSolverTickMode__Variable = 1,
	EChaosSolverTickMode__VariableCapped = 2,
	EChaosSolverTickMode__VariableCappedWithTarget = 3,
	EChaosSolverTickMode__EChaosSolverTickMode_MAX = 4,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
