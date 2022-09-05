// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FIRSTSHOOTERGAME_FirstShooterGameProjectile_generated_h
#error "FirstShooterGameProjectile.generated.h already included, missing '#pragma once' in FirstShooterGameProjectile.h"
#endif
#define FIRSTSHOOTERGAME_FirstShooterGameProjectile_generated_h

#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_SPARSE_DATA
#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstShooterGameProjectile(); \
	friend struct Z_Construct_UClass_AFirstShooterGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstShooterGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstShooterGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFirstShooterGameProjectile(); \
	friend struct Z_Construct_UClass_AFirstShooterGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AFirstShooterGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AFirstShooterGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstShooterGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstShooterGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstShooterGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstShooterGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstShooterGameProjectile(AFirstShooterGameProjectile&&); \
	NO_API AFirstShooterGameProjectile(const AFirstShooterGameProjectile&); \
public:


#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstShooterGameProjectile(AFirstShooterGameProjectile&&); \
	NO_API AFirstShooterGameProjectile(const AFirstShooterGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstShooterGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstShooterGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstShooterGameProjectile)


#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFirstShooterGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFirstShooterGameProjectile, ProjectileMovement); }


#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_12_PROLOG
#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_SPARSE_DATA \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_RPC_WRAPPERS \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_INCLASS \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_SPARSE_DATA \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTSHOOTERGAME_API UClass* StaticClass<class AFirstShooterGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstShooterGame_Source_FirstShooterGame_FirstShooterGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
