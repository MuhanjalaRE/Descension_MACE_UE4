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

// Class SourceControl.SourceControlHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USourceControlHelpers : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if(!ptr){
			ptr = UObject::FindClass("Class SourceControl.SourceControlHelpers");
		}
		return ptr;
	}



	bool STATIC_RevertUnchangedFiles(TArray<struct FString> InFiles, bool bSilent);
	bool STATIC_RevertUnchangedFile(const struct FString& InFile, bool bSilent);
	bool STATIC_RevertFiles(TArray<struct FString> InFiles, bool bSilent);
	bool STATIC_RevertFile(const struct FString& InFile, bool bSilent);
	struct FSourceControlState STATIC_QueryFileState(const struct FString& InFile, bool bSilent);
	bool STATIC_MarkFilesForAdd(TArray<struct FString> InFiles, bool bSilent);
	bool STATIC_MarkFileForDelete(const struct FString& InFile, bool bSilent);
	bool STATIC_MarkFileForAdd(const struct FString& InFile, bool bSilent);
	struct FText STATIC_LastErrorMsg();
	bool STATIC_IsEnabled();
	bool STATIC_IsAvailable();
	struct FString STATIC_CurrentProvider();
	bool STATIC_CopyFile(const struct FString& InSourceFile, const struct FString& InDestFile, bool bSilent);
	bool STATIC_CheckOutOrAddFile(const struct FString& InFile, bool bSilent);
	bool STATIC_CheckOutFiles(TArray<struct FString> InFiles, bool bSilent);
	bool STATIC_CheckOutFile(const struct FString& InFile, bool bSilent);
	bool STATIC_CheckInFiles(TArray<struct FString> InFiles, const struct FString& InDescription, bool bSilent);
	bool STATIC_CheckInFile(const struct FString& InFile, const struct FString& InDescription, bool bSilent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
