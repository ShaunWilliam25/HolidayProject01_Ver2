// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOLIDAYPROJECT_VER2_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define HOLIDAYPROJECT_VER2_Bullet_generated_h

#define HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveBullet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveBullet(); \
		P_NATIVE_END; \
	}


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveBullet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveBullet(); \
		P_NATIVE_END; \
	}


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HolidayProject_Ver2"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HolidayProject_Ver2"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet)


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__movementSpeed() { return STRUCT_OFFSET(ABullet, movementSpeed); }


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_12_PROLOG
#define HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_PRIVATE_PROPERTY_OFFSET \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_RPC_WRAPPERS \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_INCLASS \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_PRIVATE_PROPERTY_OFFSET \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_INCLASS_NO_PURE_DECLS \
	HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HolidayProject_Ver2_Source_HolidayProject_Ver2_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
