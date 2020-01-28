// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NMPTutorial/NMPGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNMPGameState() {}
// Cross Module References
	NMPTUTORIAL_API UClass* Z_Construct_UClass_ANMPGameState_NoRegister();
	NMPTUTORIAL_API UClass* Z_Construct_UClass_ANMPGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_NMPTutorial();
// End Cross Module References
	void ANMPGameState::StaticRegisterNativesANMPGameState()
	{
	}
	UClass* Z_Construct_UClass_ANMPGameState_NoRegister()
	{
		return ANMPGameState::StaticClass();
	}
	struct Z_Construct_UClass_ANMPGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerToWin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANMPGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NMPTutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NMPGameState.h" },
		{ "ModuleRelativePath", "NMPGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPGameState_Statics::NewProp_PowerToWin_MetaData[] = {
		{ "Category", "Power" },
		{ "Comment", "// Track the power level required to win the game\n" },
		{ "ModuleRelativePath", "NMPGameState.h" },
		{ "ToolTip", "Track the power level required to win the game" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANMPGameState_Statics::NewProp_PowerToWin = { "PowerToWin", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPGameState, PowerToWin), METADATA_PARAMS(Z_Construct_UClass_ANMPGameState_Statics::NewProp_PowerToWin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPGameState_Statics::NewProp_PowerToWin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANMPGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPGameState_Statics::NewProp_PowerToWin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANMPGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANMPGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANMPGameState_Statics::ClassParams = {
		&ANMPGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANMPGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANMPGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANMPGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANMPGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANMPGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANMPGameState, 1993819761);
	template<> NMPTUTORIAL_API UClass* StaticClass<ANMPGameState>()
	{
		return ANMPGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANMPGameState(Z_Construct_UClass_ANMPGameState, &ANMPGameState::StaticClass, TEXT("/Script/NMPTutorial"), TEXT("ANMPGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANMPGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
