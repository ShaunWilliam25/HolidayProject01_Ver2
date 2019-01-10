// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMyPlayerCharacter;
#ifdef HOLIDAYPROJECT_VER2_MyCamera_generated_h
#error "MyCamera.generated.h already included, missing '#pragma once' in MyCamera.h"
#endif
#define HOLIDAYPROJECT_VER2_MyCamera_generated_h

#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdjustCamera) \
	{ \
		P_GET_OBJECT(AMyPlayerCharacter,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AdjustCamera(Z_Param_player); \
		P_NATIVE_END; \
	}


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdjustCamera) \
	{ \
		P_GET_OBJECT(AMyPlayerCharacter,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AdjustCamera(Z_Param_player); \
		P_NATIVE_END; \
	}


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCamera(); \
	friend struct Z_Construct_UClass_AMyCamera_Statics; \
public: \
	DECLARE_CLASS(AMyCamera, ACameraActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HolidayProject_Ver2"), NO_API) \
	DECLARE_SERIALIZER(AMyCamera)


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyCamera(); \
	friend struct Z_Construct_UClass_AMyCamera_Statics; \
public: \
	DECLARE_CLASS(AMyCamera, ACameraActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HolidayProject_Ver2"), NO_API) \
	DECLARE_SERIALIZER(AMyCamera)


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCamera(AMyCamera&&); \
	NO_API AMyCamera(const AMyCamera&); \
public:


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCamera(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCamera(AMyCamera&&); \
	NO_API AMyCamera(const AMyCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCamera); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCamera)


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LeftBorderLimit() { return STRUCT_OFFSET(AMyCamera, LeftBorderLimit); } \
	FORCEINLINE static uint32 __PPO__TopBorderLimit() { return STRUCT_OFFSET(AMyCamera, TopBorderLimit); } \
	FORCEINLINE static uint32 __PPO__BottomBorderLimit() { return STRUCT_OFFSET(AMyCamera, BottomBorderLimit); } \
	FORCEINLINE static uint32 __PPO__RightBorderLimit() { return STRUCT_OFFSET(AMyCamera, RightBorderLimit); } \
	FORCEINLINE static uint32 __PPO__CameraDelay() { return STRUCT_OFFSET(AMyCamera, CameraDelay); }


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_13_PROLOG
#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_PRIVATE_PROPERTY_OFFSET \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_RPC_WRAPPERS \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_INCLASS \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_PRIVATE_PROPERTY_OFFSET \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_INCLASS_NO_PURE_DECLS \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HolidayProject_Ver2_Source_HolidayProject_Ver2_MyCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
