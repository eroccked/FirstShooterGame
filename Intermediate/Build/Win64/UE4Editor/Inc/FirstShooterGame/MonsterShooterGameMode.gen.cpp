// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstShooterGame/MonsterShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterShooterGameMode() {}
// Cross Module References
	FIRSTSHOOTERGAME_API UClass* Z_Construct_UClass_AMonsterShooterGameMode_NoRegister();
	FIRSTSHOOTERGAME_API UClass* Z_Construct_UClass_AMonsterShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_FirstShooterGame();
// End Cross Module References
	void AMonsterShooterGameMode::StaticRegisterNativesAMonsterShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMonsterShooterGameMode_NoRegister()
	{
		return AMonsterShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TimerCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MonsterShooterGameMode.h" },
		{ "ModuleRelativePath", "MonsterShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterShooterGameMode_Statics::NewProp_TimerCount_MetaData[] = {
		{ "Category", "MonsterShooterGameMode" },
		{ "ModuleRelativePath", "MonsterShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMonsterShooterGameMode_Statics::NewProp_TimerCount = { "TimerCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterShooterGameMode, TimerCount), METADATA_PARAMS(Z_Construct_UClass_AMonsterShooterGameMode_Statics::NewProp_TimerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterShooterGameMode_Statics::NewProp_TimerCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterShooterGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterShooterGameMode_Statics::NewProp_TimerCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterShooterGameMode_Statics::ClassParams = {
		&AMonsterShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMonsterShooterGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterShooterGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterShooterGameMode, 1206147845);
	template<> FIRSTSHOOTERGAME_API UClass* StaticClass<AMonsterShooterGameMode>()
	{
		return AMonsterShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterShooterGameMode(Z_Construct_UClass_AMonsterShooterGameMode, &AMonsterShooterGameMode::StaticClass, TEXT("/Script/FirstShooterGame"), TEXT("AMonsterShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
