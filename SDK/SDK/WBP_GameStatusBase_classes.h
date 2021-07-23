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

// WidgetBlueprintGeneratedClass WBP_GameStatusBase.WBP_GameStatusBase_C
// 0x0011 (FullSize[0x0249] - InheritedSize[0x0238])
class UWBP_GameStatusBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AMAGameState*                                MAGameState;                                               // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      TeamId;                                                    // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_GameStatusBase.WBP_GameStatusBase_C");
		}
		return ptr;
	}



	void Get_Visibility_for_Team_ID(unsigned char TeamId, UMG_ESlateVisibility* Out_Visibility);
	void Get_View_Target_Team_ID(unsigned char* TeamId);
	void Get_Time_Remaining_Text(struct FText* Text);
	void Get_FScore_as_Text(float Score, bool Round, struct FText* Text);
	void Get_Team_B_Score_Text(struct FText* Text);
	void Get_Team_A_Score_Text(struct FText* Text);
	void Get_Team_B_Score_Pct(float* Pct);
	void Get_Team_A_Score_Pct(float* Pct);
	void Get_Score_by_TeamID(unsigned char TeamId, float* Score);
	float Get_Score_Pct_by_TeamID(unsigned char TeamId);
	void Construct();
	void CustomEvent_1();
	void ExecuteUbergraph_WBP_GameStatusBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
