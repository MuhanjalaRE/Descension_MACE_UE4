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
// Parameters
//---------------------------------------------------------------------------

// Function SourceControl.SourceControlHelpers.RevertUnchangedFiles
struct USourceControlHelpers_RevertUnchangedFiles_Params
{
	TArray<struct FString>                             InFiles;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.RevertUnchangedFile
struct USourceControlHelpers_RevertUnchangedFile_Params
{
	struct FString                                     InFile;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.RevertFiles
struct USourceControlHelpers_RevertFiles_Params
{
	TArray<struct FString>                             InFiles;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.RevertFile
struct USourceControlHelpers_RevertFile_Params
{
	struct FString                                     InFile;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.QueryFileState
struct USourceControlHelpers_QueryFileState_Params
{
	struct FString                                     InFile;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSourceControlState                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.MarkFilesForAdd
struct USourceControlHelpers_MarkFilesForAdd_Params
{
	TArray<struct FString>                             InFiles;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.MarkFileForDelete
struct USourceControlHelpers_MarkFileForDelete_Params
{
	struct FString                                     InFile;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.MarkFileForAdd
struct USourceControlHelpers_MarkFileForAdd_Params
{
	struct FString                                     InFile;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.LastErrorMsg
struct USourceControlHelpers_LastErrorMsg_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.IsEnabled
struct USourceControlHelpers_IsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.IsAvailable
struct USourceControlHelpers_IsAvailable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.CurrentProvider
struct USourceControlHelpers_CurrentProvider_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.CopyFile
struct USourceControlHelpers_CopyFile_Params
{
	struct FString                                     InSourceFile;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InDestFile;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.CheckOutOrAddFile
struct USourceControlHelpers_CheckOutOrAddFile_Params
{
	struct FString                                     InFile;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.CheckOutFiles
struct USourceControlHelpers_CheckOutFiles_Params
{
	TArray<struct FString>                             InFiles;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.CheckOutFile
struct USourceControlHelpers_CheckOutFile_Params
{
	struct FString                                     InFile;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.CheckInFiles
struct USourceControlHelpers_CheckInFiles_Params
{
	TArray<struct FString>                             InFiles;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     InDescription;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SourceControl.SourceControlHelpers.CheckInFile
struct USourceControlHelpers_CheckInFile_Params
{
	struct FString                                     InFile;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InDescription;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSilent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
