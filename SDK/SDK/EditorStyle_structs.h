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
// Enums
//---------------------------------------------------------------------------

// Enum EditorStyle.EAssetEditorOpenLocation
enum class EditorStyle_EAssetEditorOpenLocation : uint8_t
{
	EAssetEditorOpenLocation__Default = 0,
	EAssetEditorOpenLocation__NewWindow = 1,
	EAssetEditorOpenLocation__MainWindow = 2,
	EAssetEditorOpenLocation__ContentBrowser = 3,
	EAssetEditorOpenLocation__LastDockedWindowOrNewWindow = 4,
	EAssetEditorOpenLocation__LastDockedWindowOrMainWindow = 5,
	EAssetEditorOpenLocation__LastDockedWindowOrContentBrowser = 6,
	EAssetEditorOpenLocation__EAssetEditorOpenLocation_MAX = 7,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
