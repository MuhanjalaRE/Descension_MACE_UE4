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

// WidgetBlueprintGeneratedClass WBP_ConfirmWithMatchTimer.WBP_ConfirmWithMatchTimer_C
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
class UWBP_ConfirmWithMatchTimer_C : public UWBP_ConfirmAction_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ConfirmWithMatchTimer.WBP_ConfirmWithMatchTimer_C");
		}
		return ptr;
	}



	void GetDynamicText(struct FText* PromptText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
