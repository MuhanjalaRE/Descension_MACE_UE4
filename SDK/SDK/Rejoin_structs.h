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

// Enum Rejoin.ERejoinStatus
enum class Rejoin_ERejoinStatus : uint8_t
{
	ERejoinStatus__NoMatchToRejoin = 0,
	ERejoinStatus__RejoinAvailable = 1,
	ERejoinStatus__UpdatingStatus  = 2,
	ERejoinStatus__NeedsRecheck    = 3,
	ERejoinStatus__NoMatchToRejoin_MatchEnded = 4,
	ERejoinStatus__ERejoinStatus_MAX = 5,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
