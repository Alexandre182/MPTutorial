// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NMPTutorial/NMPGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNMPGameHUD() {}
// Cross Module References
	NMPTUTORIAL_API UClass* Z_Construct_UClass_ANMPGameHUD_NoRegister();
	NMPTUTORIAL_API UClass* Z_Construct_UClass_ANMPGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_NMPTutorial();
// End Cross Module References
	void ANMPGameHUD::StaticRegisterNativesANMPGameHUD()
	{
	}
	UClass* Z_Construct_UClass_ANMPGameHUD_NoRegister()
	{
		return ANMPGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_ANMPGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANMPGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_NMPTutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "NMPGameHUD.h" },
		{ "ModuleRelativePath", "NMPGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANMPGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANMPGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANMPGameHUD_Statics::ClassParams = {
		&ANMPGameHUD::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANMPGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANMPGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANMPGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANMPGameHUD, 271546244);
	template<> NMPTUTORIAL_API UClass* StaticClass<ANMPGameHUD>()
	{
		return ANMPGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANMPGameHUD(Z_Construct_UClass_ANMPGameHUD, &ANMPGameHUD::StaticClass, TEXT("/Script/NMPTutorial"), TEXT("ANMPGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANMPGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
