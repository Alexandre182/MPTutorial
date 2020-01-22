// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NMPTutorial/NMPTutorialGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNMPTutorialGameMode() {}
// Cross Module References
	NMPTUTORIAL_API UClass* Z_Construct_UClass_ANMPTutorialGameMode_NoRegister();
	NMPTUTORIAL_API UClass* Z_Construct_UClass_ANMPTutorialGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NMPTutorial();
// End Cross Module References
	void ANMPTutorialGameMode::StaticRegisterNativesANMPTutorialGameMode()
	{
	}
	UClass* Z_Construct_UClass_ANMPTutorialGameMode_NoRegister()
	{
		return ANMPTutorialGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANMPTutorialGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANMPTutorialGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NMPTutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NMPTutorialGameMode.h" },
		{ "ModuleRelativePath", "NMPTutorialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANMPTutorialGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANMPTutorialGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANMPTutorialGameMode_Statics::ClassParams = {
		&ANMPTutorialGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANMPTutorialGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANMPTutorialGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANMPTutorialGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANMPTutorialGameMode, 3970337901);
	template<> NMPTUTORIAL_API UClass* StaticClass<ANMPTutorialGameMode>()
	{
		return ANMPTutorialGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANMPTutorialGameMode(Z_Construct_UClass_ANMPTutorialGameMode, &ANMPTutorialGameMode::StaticClass, TEXT("/Script/NMPTutorial"), TEXT("ANMPTutorialGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANMPTutorialGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
