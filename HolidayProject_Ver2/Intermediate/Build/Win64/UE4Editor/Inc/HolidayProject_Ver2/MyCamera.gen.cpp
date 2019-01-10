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
	HOLIDAYPROJECT_VER2_API UFunction* Z_Construct_UFunction_AMyCamera_AdjustCamera();
	HOLIDAYPROJECT_VER2_API UClass* Z_Construct_UClass_AMyPlayerCharacter_NoRegister();
// End Cross Module References
	void AMyCamera::StaticRegisterNativesAMyCamera()
	{
		UClass* Class = AMyCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustCamera", &AMyCamera::execAdjustCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCamera_AdjustCamera_Statics
	{
		struct MyCamera_eventAdjustCamera_Parms
		{
			AMyPlayerCharacter* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCamera_AdjustCamera_Statics::NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyCamera_eventAdjustCamera_Parms, player), Z_Construct_UClass_AMyPlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCamera_AdjustCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCamera_AdjustCamera_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCamera_AdjustCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraMovement" },
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCamera_AdjustCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCamera, "AdjustCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyCamera_eventAdjustCamera_Parms), Z_Construct_UFunction_AMyCamera_AdjustCamera_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_AdjustCamera_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyCamera_AdjustCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyCamera_AdjustCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyCamera_AdjustCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyCamera_AdjustCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyCamera_NoRegister()
	{
		return AMyCamera::StaticClass();
	}
	struct Z_Construct_UClass_AMyCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightBorderLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightBorderLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomBorderLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BottomBorderLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopBorderLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TopBorderLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftBorderLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftBorderLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HolidayProject_Ver2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCamera_AdjustCamera, "AdjustCamera" }, // 2171903870
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering" },
		{ "IncludePath", "MyCamera.h" },
		{ "ModuleRelativePath", "MyCamera.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::NewProp_CameraDelay_MetaData[] = {
		{ "Category", "CameraMovement" },
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCamera_Statics::NewProp_CameraDelay = { UE4CodeGen_Private::EPropertyClass::Float, "CameraDelay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AMyCamera, CameraDelay), METADATA_PARAMS(Z_Construct_UClass_AMyCamera_Statics::NewProp_CameraDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::NewProp_CameraDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::NewProp_RightBorderLimit_MetaData[] = {
		{ "Category", "CameraMovement" },
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCamera_Statics::NewProp_RightBorderLimit = { UE4CodeGen_Private::EPropertyClass::Float, "RightBorderLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AMyCamera, RightBorderLimit), METADATA_PARAMS(Z_Construct_UClass_AMyCamera_Statics::NewProp_RightBorderLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::NewProp_RightBorderLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::NewProp_BottomBorderLimit_MetaData[] = {
		{ "Category", "CameraMovement" },
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCamera_Statics::NewProp_BottomBorderLimit = { UE4CodeGen_Private::EPropertyClass::Float, "BottomBorderLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AMyCamera, BottomBorderLimit), METADATA_PARAMS(Z_Construct_UClass_AMyCamera_Statics::NewProp_BottomBorderLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::NewProp_BottomBorderLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::NewProp_TopBorderLimit_MetaData[] = {
		{ "Category", "CameraMovement" },
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCamera_Statics::NewProp_TopBorderLimit = { UE4CodeGen_Private::EPropertyClass::Float, "TopBorderLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AMyCamera, TopBorderLimit), METADATA_PARAMS(Z_Construct_UClass_AMyCamera_Statics::NewProp_TopBorderLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::NewProp_TopBorderLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCamera_Statics::NewProp_LeftBorderLimit_MetaData[] = {
		{ "Category", "CameraMovement" },
		{ "ModuleRelativePath", "MyCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCamera_Statics::NewProp_LeftBorderLimit = { UE4CodeGen_Private::EPropertyClass::Float, "LeftBorderLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AMyCamera, LeftBorderLimit), METADATA_PARAMS(Z_Construct_UClass_AMyCamera_Statics::NewProp_LeftBorderLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::NewProp_LeftBorderLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCamera_Statics::NewProp_CameraDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCamera_Statics::NewProp_RightBorderLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCamera_Statics::NewProp_BottomBorderLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCamera_Statics::NewProp_TopBorderLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCamera_Statics::NewProp_LeftBorderLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCamera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCamera_Statics::ClassParams = {
		&AMyCamera::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMyCamera_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMyCamera_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMyCamera, 3625301433);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCamera(Z_Construct_UClass_AMyCamera, &AMyCamera::StaticClass, TEXT("/Script/HolidayProject_Ver2"), TEXT("AMyCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
