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

// Class EditorStyle.EditorStyleSettings
// 0x0238 (FullSize[0x0260] - InheritedSize[0x0028])
class UEditorStyleSettings : public UObject
{
public:
	bool                                               bEnableHighDPIAwareness;                                   // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EColorVisionDeficiency                   ColorVisionDeficiencyPreviewType;                          // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PDCS[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ColorVisionDeficiencySeverity;                             // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bColorVisionDeficiencyCorrection;                          // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bColorVisionDeficiencyCorrectionPreviewWithDeficiency;     // 0x0031(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KY8P[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                SelectionColor;                                            // 0x0034(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PressedSelectionColor;                                     // 0x0044(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                InactiveSelectionColor;                                    // 0x0054(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                KeyboardFocusColor;                                        // 0x0064(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                EditorWindowBackgroundColor;                               // 0x0074(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9IFA[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 EditorMainWindowBackgroundOverride;                        // 0x0088(0x0088) (Edit, Config, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 EditorChildWindowBackgroundOverride;                       // 0x0110(0x0088) (Edit, Config, NativeAccessSpecifierPublic)
	bool                                               bResetEditorWindowBackgroundSettings;                      // 0x0198(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ASE5[0x3];                                     // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseSmallToolBarIcons : 1;                                 // 0x019C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseGrid : 1;                                              // 0x019C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K0JQ[0x3];                                     // 0x019D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                RegularColor;                                              // 0x01A0(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                RuleColor;                                                 // 0x01B0(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                CenterColor;                                               // 0x01C0(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           GridSnapSize;                                              // 0x01D0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableWindowAnimations : 1;                               // 0x01D4(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowFriendlyNames : 1;                                    // 0x01D4(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bExpandConfigurationMenus : 1;                             // 0x01D4(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowProjectMenus : 1;                                     // 0x01D4(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowLaunchMenus : 1;                                      // 0x01D4(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1YTV[0x3];                                     // 0x01D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                LogBackgroundColor;                                        // 0x01D8(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LogSelectionBackgroundColor;                               // 0x01E8(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LogNormalColor;                                            // 0x01F8(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LogCommandColor;                                           // 0x0208(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LogWarningColor;                                           // 0x0218(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LogErrorColor;                                             // 0x0228(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowAllAdvancedDetails : 1;                               // 0x0238(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowHiddenPropertiesWhilePlaying : 1;                     // 0x0238(0x0001) BIT_FIELD (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5SYX[0x3];                                     // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LogFontSize;                                               // 0x023C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CoreUObject_ELogTimes>                 LogTimestampMode;                                          // 0x0240(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPromoteOutputLogWarningsDuringPIE;                        // 0x0241(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EditorStyle_EAssetEditorOpenLocation               AssetEditorOpenLocation;                                   // 0x0242(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N2D6[0x1];                                     // 0x0243(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bEnableColorizedEditorTabs : 1;                            // 0x0244(0x0001) BIT_FIELD (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4V1V[0x1B];                                    // 0x0245(0x001B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class EditorStyle.EditorStyleSettings");
		}
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
