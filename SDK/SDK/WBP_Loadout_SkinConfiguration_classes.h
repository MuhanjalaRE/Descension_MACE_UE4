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

// WidgetBlueprintGeneratedClass WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C
// 0x0070 (FullSize[0x02A8] - InheritedSize[0x0238])
class UWBP_Loadout_SkinConfiguration_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                FXBOX;                                                     // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                FXSlots;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                SkinSlots;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Skin_Equipped;                                             // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    Skin_Selected;                                             // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_Loadouts_SkinListItem_C*                Last_Selected_Skin_Button;                                 // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Current_Object_Info;                                       // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Save_On_Equip;                                             // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RY1Z[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LastSelectedSkin;                                          // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      LastSelectedEffects;                                       // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Loadouts_SkinListItem_C*                Last_Selected_Jets_Button;                                 // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Loadout_SkinConfiguration.WBP_Loadout_SkinConfiguration_C");
		}
		return ptr;
	}



	void Get_Steam_Locked_Class(class UClass** Locked);
	void Set_Selected_Effects_Button(class UWBP_Loadouts_SkinListItem_C* Jet_Button);
	void Set_Selected_Skin_Button(class UWBP_Loadouts_SkinListItem_C* Skin_Button);
	void Update_Skin_List(class UClass* Current_Cosmetic, class UClass* Current_Object);
	void CosmeticSelected(class UClass* Cosmetic);
	void Character_Skin_Selected(class UWBP_SelectableButton_C* Button);
	void Confirm_Selection();
	void Jump_to_Skin_on_Store(class UClass* Skin_Class);
	void Jet_Selected(class UWBP_SelectableButton_C* Button);
	void ExecuteUbergraph_WBP_Loadout_SkinConfiguration(int EntryPoint);
	void Skin_Selected__DelegateSignature(class UClass* Skin_Configuration);
	void Skin_Equipped__DelegateSignature(class UClass* Skin_Configuration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
