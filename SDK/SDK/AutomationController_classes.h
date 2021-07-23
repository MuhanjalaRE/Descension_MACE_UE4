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

// Class AutomationController.AutomationControllerSettings
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAutomationControllerSettings : public UObject
{
public:
	TArray<struct FAutomatedTestGroup>                 Groups;                                                    // 0x0028(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                               bTreatLogErrorsAsTestErrors;                               // 0x0038(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTreatLogWarningsAsTestErrors;                             // 0x0039(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0MMN[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class AutomationController.AutomationControllerSettings");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
