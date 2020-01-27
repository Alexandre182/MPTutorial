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
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate();
// End Cross Module References
	void ANMPTutorialGameMode::StaticRegisterNativesANMPTutorialGameMode()
	{
		UClass* Class = ANMPTutorialGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDecayRate", &ANMPTutorialGameMode::execGetDecayRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate_Statics
	{
		struct NMPTutorialGameMode_eventGetDecayRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NMPTutorialGameMode_eventGetDecayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "// Get the current Rate of decay (% of InitialPower per sec)\n" },
		{ "ModuleRelativePath", "NMPTutorialGameMode.h" },
		{ "ToolTip", "Get the current Rate of decay (% of InitialPower per sec)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANMPTutorialGameMode, nullptr, "GetDecayRate", nullptr, nullptr, sizeof(NMPTutorialGameMode_eventGetDecayRate_Parms), Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANMPTutorialGameMode_NoRegister()
	{
		return ANMPTutorialGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANMPTutorialGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerDrainDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerDrainDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANMPTutorialGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NMPTutorial,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANMPTutorialGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANMPTutorialGameMode_GetDecayRate, "GetDecayRate" }, // 3192279133
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NMPTutorialGameMode.h" },
		{ "ModuleRelativePath", "NMPTutorialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialGameMode_Statics::NewProp_DecayRate_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "// The rate at which characters lose power (% of InitialPower per second)\n" },
		{ "ModuleRelativePath", "NMPTutorialGameMode.h" },
		{ "ToolTip", "The rate at which characters lose power (% of InitialPower per second)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANMPTutorialGameMode_Statics::NewProp_DecayRate = { "DecayRate", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPTutorialGameMode, DecayRate), METADATA_PARAMS(Z_Construct_UClass_ANMPTutorialGameMode_Statics::NewProp_DecayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialGameMode_Statics::NewProp_DecayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialGameMode_Statics::NewProp_PowerDrainDelay_MetaData[] = {
		{ "Category", "Power" },
		{ "Comment", "// How many times per second to update characters power and check game rules\n" },
		{ "ModuleRelativePath", "NMPTutorialGameMode.h" },
		{ "ToolTip", "How many times per second to update characters power and check game rules" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANMPTutorialGameMode_Statics::NewProp_PowerDrainDelay = { "PowerDrainDelay", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPTutorialGameMode, PowerDrainDelay), METADATA_PARAMS(Z_Construct_UClass_ANMPTutorialGameMode_Statics::NewProp_PowerDrainDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialGameMode_Statics::NewProp_PowerDrainDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANMPTutorialGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPTutorialGameMode_Statics::NewProp_DecayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPTutorialGameMode_Statics::NewProp_PowerDrainDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANMPTutorialGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANMPTutorialGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANMPTutorialGameMode_Statics::ClassParams = {
		&ANMPTutorialGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANMPTutorialGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialGameMode_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ANMPTutorialGameMode, 1960280881);
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
