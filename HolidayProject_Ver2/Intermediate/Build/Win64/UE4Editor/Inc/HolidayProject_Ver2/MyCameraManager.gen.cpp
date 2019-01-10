// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HolidayProject_Ver2/MyCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCameraManager() {}
// Cross Module References
	HOLIDAYPROJECT_VER2_API UClass* Z_Construct_UClass_AMyCameraManager_NoRegister();
	HOLIDAYPROJECT_VER2_API UClass* Z_Construct_UClass_AMyCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_HolidayProject_Ver2();
// End Cross Module References
	void AMyCameraManager::StaticRegisterNativesAMyCameraManager()
	{
	}
	UClass* Z_Construct_UClass_AMyCameraManager_NoRegister()
	{
		return AMyCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AMyCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_HolidayProject_Ver2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyCameraManager.h" },
		{ "ModuleRelativePath", "MyCameraManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCameraManager_Statics::ClassParams = {
		&AMyCameraManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyCameraManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCameraManager, 1627589877);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCameraManager(Z_Construct_UClass_AMyCameraManager, &AMyCameraManager::StaticClass, TEXT("/Script/HolidayProject_Ver2"), TEXT("AMyCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
