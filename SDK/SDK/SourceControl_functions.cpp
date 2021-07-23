// Name: mace, Version: 1.9.1.12285

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function SourceControl.SourceControlHelpers.RevertUnchangedFiles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFiles                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_RevertUnchangedFiles(TArray<struct FString> InFiles, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.RevertUnchangedFiles");
	}

	USourceControlHelpers_RevertUnchangedFiles_Params params;
	params.InFiles = InFiles;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.RevertUnchangedFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFile                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_RevertUnchangedFile(const struct FString& InFile, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.RevertUnchangedFile");
	}

	USourceControlHelpers_RevertUnchangedFile_Params params;
	params.InFile = InFile;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.RevertFiles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFiles                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_RevertFiles(TArray<struct FString> InFiles, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.RevertFiles");
	}

	USourceControlHelpers_RevertFiles_Params params;
	params.InFiles = InFiles;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.RevertFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFile                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_RevertFile(const struct FString& InFile, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.RevertFile");
	}

	USourceControlHelpers_RevertFile_Params params;
	params.InFile = InFile;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.QueryFileState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFile                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSourceControlState     ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSourceControlState USourceControlHelpers::STATIC_QueryFileState(const struct FString& InFile, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.QueryFileState");
	}

	USourceControlHelpers_QueryFileState_Params params;
	params.InFile = InFile;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.MarkFilesForAdd
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFiles                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_MarkFilesForAdd(TArray<struct FString> InFiles, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.MarkFilesForAdd");
	}

	USourceControlHelpers_MarkFilesForAdd_Params params;
	params.InFiles = InFiles;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.MarkFileForDelete
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFile                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_MarkFileForDelete(const struct FString& InFile, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.MarkFileForDelete");
	}

	USourceControlHelpers_MarkFileForDelete_Params params;
	params.InFile = InFile;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.MarkFileForAdd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFile                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_MarkFileForAdd(const struct FString& InFile, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.MarkFileForAdd");
	}

	USourceControlHelpers_MarkFileForAdd_Params params;
	params.InFile = InFile;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.LastErrorMsg
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText USourceControlHelpers::STATIC_LastErrorMsg()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.LastErrorMsg");
	}

	USourceControlHelpers_LastErrorMsg_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.IsEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_IsEnabled()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.IsEnabled");
	}

	USourceControlHelpers_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.IsAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_IsAvailable()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.IsAvailable");
	}

	USourceControlHelpers_IsAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.CurrentProvider
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USourceControlHelpers::STATIC_CurrentProvider()
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.CurrentProvider");
	}

	USourceControlHelpers_CurrentProvider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.CopyFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InSourceFile                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InDestFile                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_CopyFile(const struct FString& InSourceFile, const struct FString& InDestFile, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.CopyFile");
	}

	USourceControlHelpers_CopyFile_Params params;
	params.InSourceFile = InSourceFile;
	params.InDestFile = InDestFile;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.CheckOutOrAddFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFile                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_CheckOutOrAddFile(const struct FString& InFile, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.CheckOutOrAddFile");
	}

	USourceControlHelpers_CheckOutOrAddFile_Params params;
	params.InFile = InFile;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.CheckOutFiles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFiles                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_CheckOutFiles(TArray<struct FString> InFiles, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.CheckOutFiles");
	}

	USourceControlHelpers_CheckOutFiles_Params params;
	params.InFiles = InFiles;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.CheckOutFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFile                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_CheckOutFile(const struct FString& InFile, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.CheckOutFile");
	}

	USourceControlHelpers_CheckOutFile_Params params;
	params.InFile = InFile;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.CheckInFiles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         InFiles                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FString                 InDescription                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_CheckInFiles(TArray<struct FString> InFiles, const struct FString& InDescription, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.CheckInFiles");
	}

	USourceControlHelpers_CheckInFiles_Params params;
	params.InFiles = InFiles;
	params.InDescription = InDescription;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SourceControl.SourceControlHelpers.CheckInFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFile                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InDescription                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSilent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USourceControlHelpers::STATIC_CheckInFile(const struct FString& InFile, const struct FString& InDescription, bool bSilent)
{
	static UFunction* fn = nullptr;
	if(!fn){
		fn = UObject::FindObject<UFunction>("Function SourceControl.SourceControlHelpers.CheckInFile");
	}

	USourceControlHelpers_CheckInFile_Params params;
	params.InFile = InFile;
	params.InDescription = InDescription;
	params.bSilent = bSilent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
