// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HolidayProject_Ver2/HolidayProject_Ver2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHolidayProject_Ver2GameModeBase() {}
// Cross Module References
	HOLIDAYPROJECT_VER2_API UClass* Z_Construct_UClass_AHolidayProject_Ver2GameModeBase_NoRegister();
	HOLIDAYPROJECT_VER2_API UClass* Z_Construct_UClass_AHolidayProject_Ver2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HolidayProject_Ver2();
// End Cross Module References
	void AHolidayProject_Ver2GameModeBase::StaticRegisterNativesAHolidayProject_Ver2GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHolidayProject_Ver2GameModeBase_NoRegister()
	{
		return AHolidayProject_Ver2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHolidayProject_Ver2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHolidayProject_Ver2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HolidayProject_Ver2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHolidayProject_Ver2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HolidayProject_Ver2GameModeBase.h" },
		{ "ModuleRelativePath", "HolidayProject_Ver2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHolidayProject_Ver2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHolidayProject_Ver2GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHolidayProject_Ver2GameModeBase_Statics::ClassParams = {
		&AHolidayProject_Ver2GameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHolidayProject_Ver2GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHolidayProject_Ver2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHolidayProject_Ver2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHolidayProject_Ver2GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHolidayProject_Ver2GameModeBase, 957074514);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHolidayProject_Ver2GameModeBase(Z_Construct_UClass_AHolidayProject_Ver2GameModeBase, &AHolidayProject_Ver2GameModeBase::StaticClass, TEXT("/Script/HolidayProject_Ver2"), TEXT("AHolidayProject_Ver2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHolidayProject_Ver2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
