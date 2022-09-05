// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstShooterGame/FirstShooterGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstShooterGameGameMode() {}
// Cross Module References
	FIRSTSHOOTERGAME_API UClass* Z_Construct_UClass_AFirstShooterGameGameMode_NoRegister();
	FIRSTSHOOTERGAME_API UClass* Z_Construct_UClass_AFirstShooterGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstShooterGame();
// End Cross Module References
	void AFirstShooterGameGameMode::StaticRegisterNativesAFirstShooterGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFirstShooterGameGameMode_NoRegister()
	{
		return AFirstShooterGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFirstShooterGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstShooterGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstShooterGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstShooterGameGameMode.h" },
		{ "ModuleRelativePath", "FirstShooterGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstShooterGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstShooterGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstShooterGameGameMode_Statics::ClassParams = {
		&AFirstShooterGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstShooterGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstShooterGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstShooterGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstShooterGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstShooterGameGameMode, 142664459);
	template<> FIRSTSHOOTERGAME_API UClass* StaticClass<AFirstShooterGameGameMode>()
	{
		return AFirstShooterGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstShooterGameGameMode(Z_Construct_UClass_AFirstShooterGameGameMode, &AFirstShooterGameGameMode::StaticClass, TEXT("/Script/FirstShooterGame"), TEXT("AFirstShooterGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstShooterGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
