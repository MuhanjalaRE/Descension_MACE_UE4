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

// WidgetBlueprintGeneratedClass WBP_PlayerExpressionEntry.WBP_PlayerExpressionEntry_C
// 0x0060 (FullSize[0x0298] - InheritedSize[0x0238])
class UWBP_PlayerExpressionEntry_C : public UUserWidget
{
public:
	class UTextBlock*                                  ChatTextBox;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  KeyBox;                                                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       DisplayText;                                               // 0x0248(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       KeyText;                                                   // 0x0260(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	int                                                ExpressionIndex;                                           // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsCategory;                                                // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_HYKE[0x3];                                     // 0x027D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Category;                                                  // 0x0280(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerExpressionEntry.WBP_PlayerExpressionEntry_C");
		}
		return ptr;
	}



	struct FText Get_ChatTextBox_Text_1();
	struct FText Get_KeyBox_Text_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
