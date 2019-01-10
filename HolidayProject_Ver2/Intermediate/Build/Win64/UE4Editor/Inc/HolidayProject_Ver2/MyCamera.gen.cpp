// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HolidayProject_Ver2/MyCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCamera() {}
// Cross Module References
	HOLIDAYPROJECT_VER2_API UClass* Z_Construct_UClass_AMyCamera_NoRegister();
	HOLIDAYPROJECT_VER2_API UClass* Z_Construct_UClass_AMyCamera();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor();
	UPackage* Z_Construct_UPackage__Script_HolidayProject_Ver2();
// End Cross Module References
	void AMyCamera::StaticRegisterNativesAMyCamera()
	{
	}
	UClass* Z_Construct_UClass_AMyCamera_NoRegister()
	{
		return AMyCamera::StaticClass();
	}
	struct Z_Construct_UClass_AMyCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HolidayProject_Ver2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "MyCamera.h" },
		{ "ModuleRelativePath", "MyCamera.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCamera_Statics::ClassParams = {
		&AMyCamera::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyCamera_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCamera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCamera, 2365065123);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCamera(Z_Construct_UClass_AMyCamera, &AMyCamera::StaticClass, TEXT("/Script/HolidayProject_Ver2"), TEXT("AMyCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
