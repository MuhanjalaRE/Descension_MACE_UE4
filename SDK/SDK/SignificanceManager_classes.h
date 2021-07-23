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

// Class SignificanceManager.SignificanceManager
// 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
class USignificanceManager : public UObject
{
public:
	unsigned char                                      UnknownData_XB69[0xD8];                                    // 0x0028(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              SignificanceManagerClassName;                              // 0x0100(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SignificanceManager.SignificanceManager");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
