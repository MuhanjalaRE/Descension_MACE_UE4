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

// Enum LiveCoding.ELiveCodingStartupMode
enum class LiveCoding_ELiveCodingStartupMode : uint8_t
{
	ELiveCodingStartupMode__Automatic = 0,
	ELiveCodingStartupMode__AutomaticButHidden = 1,
	ELiveCodingStartupMode__Manual = 2,
	ELiveCodingStartupMode__ELiveCodingStartupMode_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
