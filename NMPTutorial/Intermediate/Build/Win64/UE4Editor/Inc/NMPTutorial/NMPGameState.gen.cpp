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
	NMPTUTORIAL_API UEnum* Z_Construct_UEnum_NMPTutorial_EBatteryPlayState();
	UPackage* Z_Construct_UPackage__Script_NMPTutorial();
	NMPTUTORIAL_API UClass* Z_Construct_UClass_ANMPGameState_NoRegister();
	NMPTUTORIAL_API UClass* Z_Construct_UClass_ANMPGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_ANMPGameState_GetCurrentState();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_ANMPGameState_OnRep_CurrentState();
// End Cross Module References
	static UEnum* EBatteryPlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NMPTutorial_EBatteryPlayState, Z_Construct_UPackage__Script_NMPTutorial(), TEXT("EBatteryPlayState"));
		}
		return Singleton;
	}
	template<> NMPTUTORIAL_API UEnum* StaticEnum<EBatteryPlayState>()
	{
		return EBatteryPlayState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBatteryPlayState(EBatteryPlayState_StaticEnum, TEXT("/Script/NMPTutorial"), TEXT("EBatteryPlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NMPTutorial_EBatteryPlayState_Hash() { return 4275993767U; }
	UEnum* Z_Construct_UEnum_NMPTutorial_EBatteryPlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NMPTutorial();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBatteryPlayState"), 0, Get_Z_Construct_UEnum_NMPTutorial_EBatteryPlayState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlaying", (int64)EPlaying },
				{ "EGameOver", (int64)EGameOver },
				{ "EWon", (int64)EWon },
				{ "EUnknown", (int64)EUnknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EGameOver.Name", "EGameOver" },
				{ "EPlaying.Name", "EPlaying" },
				{ "EUnknown.Name", "EUnknown" },
				{ "EWon.Name", "EWon" },
				{ "ModuleRelativePath", "NMPGameState.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NMPTutorial,
				nullptr,
				"EBatteryPlayState",
				"EBatteryPlayState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ANMPGameState::StaticRegisterNativesANMPGameState()
	{
		UClass* Class = ANMPGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &ANMPGameState::execGetCurrentState },
			{ "OnRep_CurrentState", &ANMPGameState::execOnRep_CurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANMPGameState_GetCurrentState_Statics
	{
		struct NMPGameState_eventGetCurrentState_Parms
		{
			TEnumAsByte<EBatteryPlayState> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANMPGameState_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NMPGameState_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_NMPTutorial_EBatteryPlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANMPGameState_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANMPGameState_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANMPGameState_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "// Returns the current state of gameplay\n" },
		{ "ModuleRelativePath", "NMPGameState.h" },
		{ "ToolTip", "Returns the current state of gameplay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANMPGameState_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANMPGameState, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(NMPGameState_eventGetCurrentState_Parms), Z_Construct_UFunction_ANMPGameState_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPGameState_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANMPGameState_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPGameState_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANMPGameState_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANMPGameState_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANMPGameState_OnRep_CurrentState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANMPGameState_OnRep_CurrentState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Rep Notify fired on clients to allow for client-side changes based on changes in gameplay state.\n" },
		{ "ModuleRelativePath", "NMPGameState.h" },
		{ "ToolTip", "Rep Notify fired on clients to allow for client-side changes based on changes in gameplay state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANMPGameState_OnRep_CurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANMPGameState, nullptr, "OnRep_CurrentState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANMPGameState_OnRep_CurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPGameState_OnRep_CurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANMPGameState_OnRep_CurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANMPGameState_OnRep_CurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANMPGameState_NoRegister()
	{
		return ANMPGameState::StaticClass();
	}
	struct Z_Construct_UClass_ANMPGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinningPlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WinningPlayerName;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ANMPGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANMPGameState_GetCurrentState, "GetCurrentState" }, // 3210008470
		{ &Z_Construct_UFunction_ANMPGameState_OnRep_CurrentState, "OnRep_CurrentState" }, // 2569072025
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPGameState_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Comment", "// Track the current playing state\n" },
		{ "ModuleRelativePath", "NMPGameState.h" },
		{ "ToolTip", "Track the current playing state" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANMPGameState_Statics::NewProp_CurrentState = { "CurrentState", "OnRep_CurrentState", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPGameState, CurrentState), Z_Construct_UEnum_NMPTutorial_EBatteryPlayState, METADATA_PARAMS(Z_Construct_UClass_ANMPGameState_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPGameState_Statics::NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPGameState_Statics::NewProp_WinningPlayerName_MetaData[] = {
		{ "Category", "Power" },
		{ "Comment", "// The name of the player who won the game\n" },
		{ "ModuleRelativePath", "NMPGameState.h" },
		{ "ToolTip", "The name of the player who won the game" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANMPGameState_Statics::NewProp_WinningPlayerName = { "WinningPlayerName", nullptr, (EPropertyFlags)0x0010000000000024, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPGameState, WinningPlayerName), METADATA_PARAMS(Z_Construct_UClass_ANMPGameState_Statics::NewProp_WinningPlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPGameState_Statics::NewProp_WinningPlayerName_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPGameState_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPGameState_Statics::NewProp_WinningPlayerName,
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
		FuncInfo,
		Z_Construct_UClass_ANMPGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ANMPGameState, 2963637510);
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
