// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTSHOOTERGAME_FirstShooterGameCharacter_generated_h
#error "FirstShooterGameCharacter.generated.h already included, missing '#pragma once' in FirstShooterGameCharacter.h"
#endif
#define FIRSTSHOOTERGAME_FirstShooterGameCharacter_generated_h

#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_SPARSE_DATA
#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_RPC_WRAPPERS
#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstShooterGameCharacter(); \
	friend struct Z_Construct_UClass_AFirstShooterGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstShooterGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstShooterGameCharacter)


#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFirstShooterGameCharacter(); \
	friend struct Z_Construct_UClass_AFirstShooterGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstShooterGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstShooterGameCharacter)


#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstShooterGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstShooterGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstShooterGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstShooterGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstShooterGameCharacter(AFirstShooterGameCharacter&&); \
	NO_API AFirstShooterGameCharacter(const AFirstShooterGameCharacter&); \
public:


#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstShooterGameCharacter(AFirstShooterGameCharacter&&); \
	NO_API AFirstShooterGameCharacter(const AFirstShooterGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstShooterGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstShooterGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstShooterGameCharacter)


#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFirstShooterGameCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFirstShooterGameCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFirstShooterGameCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFirstShooterGameCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFirstShooterGameCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFirstShooterGameCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFirstShooterGameCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFirstShooterGameCharacter, L_MotionController); }


#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_17_PROLOG
#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_SPARSE_DATA \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_RPC_WRAPPERS \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_INCLASS \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_SPARSE_DATA \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTSHOOTERGAME_API UClass* StaticClass<class AFirstShooterGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstShooterGame_Source_FirstShooterGame_FirstShooterGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
