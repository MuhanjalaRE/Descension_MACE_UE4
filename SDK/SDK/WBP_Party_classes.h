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

// WidgetBlueprintGeneratedClass WBP_Party.WBP_Party_C
// 0x0030 (FullSize[0x0268] - InheritedSize[0x0238])
class UWBP_Party_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PartyPlayerSlot_C*                      LocalPlayer;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyPlayerSlot_C*                      PartyPlayer1;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyPlayerSlot_C*                      PartyPlayer2;                                              // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyPlayerSlot_C*                      PartyPlayer3;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LocalPlayerDetails_C*                   PlayerDetails;                                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Party.WBP_Party_C");
		}
		return ptr;
	}



	UMG_ESlateVisibility Get_PartyPlayer1_Visibility_1();
	UMG_ESlateVisibility Get_PartyPlayer2_Visibility_1();
	UMG_ESlateVisibility Get_PartyPlayer3_Visibility_1();
	void Construct();
	void ExecuteUbergraph_WBP_Party(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
