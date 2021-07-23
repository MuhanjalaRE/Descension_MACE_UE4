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

// Class AutomationUtils.AutomationUtilsBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class AutomationUtils.AutomationUtilsBlueprintLibrary");
		}
		return ptr;
	}



	void STATIC_TakeGameplayAutomationScreenshot(const struct FString& ScreenShotName, float MaxGlobalError, float MaxLocalError, const struct FString& MapNameOverride);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
