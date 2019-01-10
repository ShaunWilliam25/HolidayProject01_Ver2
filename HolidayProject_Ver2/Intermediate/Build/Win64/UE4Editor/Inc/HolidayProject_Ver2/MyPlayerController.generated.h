// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOLIDAYPROJECT_VER2_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define HOLIDAYPROJECT_VER2_MyPlayerController_generated_h

#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShootBullet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShootBullet(); \
		P_NATIVE_END; \
	}


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShootBullet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShootBullet(); \
		P_NATIVE_END; \
	}


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HolidayProject_Ver2"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HolidayProject_Ver2"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public:


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController)


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bullet() { return STRUCT_OFFSET(AMyPlayerController, bullet); } \
	FORCEINLINE static uint32 __PPO__bulletOffset() { return STRUCT_OFFSET(AMyPlayerController, bulletOffset); }


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_17_PROLOG
#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_PRIVATE_PROPERTY_OFFSET \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_RPC_WRAPPERS \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_INCLASS \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_PRIVATE_PROPERTY_OFFSET \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HolidayProject_Ver2_Source_HolidayProject_Ver2_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
