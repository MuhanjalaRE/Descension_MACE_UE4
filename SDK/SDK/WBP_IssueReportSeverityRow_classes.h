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

// WidgetBlueprintGeneratedClass WBP_IssueReportSeverityRow.WBP_IssueReportSeverityRow_C
// 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
class UWBP_IssueReportSeverityRow_C : public UUserWidget
{
public:
	class UTextBlock*                                  TextBlock_2;                                               // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0240(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_IssueReportSeverityRow.WBP_IssueReportSeverityRow_C");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
