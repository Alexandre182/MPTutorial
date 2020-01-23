// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NMPTutorial/NMPTutorialCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNMPTutorialCharacter() {}
// Cross Module References
	NMPTUTORIAL_API UClass* Z_Construct_UClass_ANMPTutorialCharacter_NoRegister();
	NMPTUTORIAL_API UClass* Z_Construct_UClass_ANMPTutorialCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NMPTutorial();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_ANMPTutorialCharacter_CollectPickups();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_ANMPTutorialCharacter_ServerCollectPickups();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static FName NAME_ANMPTutorialCharacter_ServerCollectPickups = FName(TEXT("ServerCollectPickups"));
	void ANMPTutorialCharacter::ServerCollectPickups()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANMPTutorialCharacter_ServerCollectPickups),NULL);
	}
	void ANMPTutorialCharacter::StaticRegisterNativesANMPTutorialCharacter()
	{
		UClass* Class = ANMPTutorialCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectPickups", &ANMPTutorialCharacter::execCollectPickups },
			{ "GetCurrentPower", &ANMPTutorialCharacter::execGetCurrentPower },
			{ "GetInitialPower", &ANMPTutorialCharacter::execGetInitialPower },
			{ "ServerCollectPickups", &ANMPTutorialCharacter::execServerCollectPickups },
			{ "UpdatePower", &ANMPTutorialCharacter::execUpdatePower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANMPTutorialCharacter_CollectPickups_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANMPTutorialCharacter_CollectPickups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickups" },
		{ "Comment", "// Entry. Called When Player presses the collect pickup key\n" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
		{ "ToolTip", "Entry. Called When Player presses the collect pickup key" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANMPTutorialCharacter_CollectPickups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANMPTutorialCharacter, nullptr, "CollectPickups", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANMPTutorialCharacter_CollectPickups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPTutorialCharacter_CollectPickups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANMPTutorialCharacter_CollectPickups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANMPTutorialCharacter_CollectPickups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower_Statics
	{
		struct NMPTutorialCharacter_eventGetCurrentPower_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NMPTutorialCharacter_eventGetCurrentPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANMPTutorialCharacter, nullptr, "GetCurrentPower", nullptr, nullptr, sizeof(NMPTutorialCharacter_eventGetCurrentPower_Parms), Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower_Statics
	{
		struct NMPTutorialCharacter_eventGetInitialPower_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NMPTutorialCharacter_eventGetInitialPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "// Access to the character's starting power\n" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
		{ "ToolTip", "Access to the character's starting power" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANMPTutorialCharacter, nullptr, "GetInitialPower", nullptr, nullptr, sizeof(NMPTutorialCharacter_eventGetInitialPower_Parms), Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANMPTutorialCharacter_ServerCollectPickups_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANMPTutorialCharacter_ServerCollectPickups_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called on server to process the collection of pickups\n" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
		{ "ToolTip", "Called on server to process the collection of pickups" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANMPTutorialCharacter_ServerCollectPickups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANMPTutorialCharacter, nullptr, "ServerCollectPickups", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANMPTutorialCharacter_ServerCollectPickups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPTutorialCharacter_ServerCollectPickups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANMPTutorialCharacter_ServerCollectPickups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANMPTutorialCharacter_ServerCollectPickups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower_Statics
	{
		struct NMPTutorialCharacter_eventUpdatePower_Parms
		{
			float DeltaPower;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower_Statics::NewProp_DeltaPower = { "DeltaPower", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NMPTutorialCharacter_eventUpdatePower_Parms, DeltaPower), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower_Statics::NewProp_DeltaPower,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "/**\n\x09* This updates the character's power level\n\x09* @Param DeltaPower - This is the amount to change power by, can be + or -\n\x09*/" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
		{ "ToolTip", "This updates the character's power level\n@Param DeltaPower - This is the amount to change power by, can be + or -" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANMPTutorialCharacter, nullptr, "UpdatePower", nullptr, nullptr, sizeof(NMPTutorialCharacter_eventUpdatePower_Parms), Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANMPTutorialCharacter_NoRegister()
	{
		return ANMPTutorialCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANMPTutorialCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionSphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollectionSphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANMPTutorialCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NMPTutorial,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANMPTutorialCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANMPTutorialCharacter_CollectPickups, "CollectPickups" }, // 3825582223
		{ &Z_Construct_UFunction_ANMPTutorialCharacter_GetCurrentPower, "GetCurrentPower" }, // 3536522533
		{ &Z_Construct_UFunction_ANMPTutorialCharacter_GetInitialPower, "GetInitialPower" }, // 3986854378
		{ &Z_Construct_UFunction_ANMPTutorialCharacter_ServerCollectPickups, "ServerCollectPickups" }, // 3381308434
		{ &Z_Construct_UFunction_ANMPTutorialCharacter_UpdatePower, "UpdatePower" }, // 13238558
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NMPTutorialCharacter.h" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CurrentPower_MetaData[] = {
		{ "Category", "Power" },
		{ "Comment", "// The character's current power level during gameplay\n" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
		{ "ToolTip", "The character's current power level during gameplay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CurrentPower = { "CurrentPower", nullptr, (EPropertyFlags)0x0040000000020021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPTutorialCharacter, CurrentPower), METADATA_PARAMS(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CurrentPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CurrentPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CollectionSphereRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NMPTutorialCharacter" },
		{ "Comment", "//Variable radius can be changed in Editor\n" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
		{ "ToolTip", "Variable radius can be changed in Editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CollectionSphereRadius = { "CollectionSphereRadius", nullptr, (EPropertyFlags)0x0040000000020035, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPTutorialCharacter, CollectionSphereRadius), METADATA_PARAMS(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CollectionSphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CollectionSphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_InitialPower_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "// The character's starting power level\n" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
		{ "ToolTip", "The character's starting power level" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_InitialPower = { "InitialPower", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPTutorialCharacter, InitialPower), METADATA_PARAMS(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_InitialPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_InitialPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPTutorialCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPTutorialCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CollectionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Battery" },
		{ "Comment", "/** Collection Sphere*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
		{ "ToolTip", "Collection Sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CollectionSphere = { "CollectionSphere", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPTutorialCharacter, CollectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CollectionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CollectionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPTutorialCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NMPTutorialCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANMPTutorialCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANMPTutorialCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CurrentPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CollectionSphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_InitialPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CollectionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANMPTutorialCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANMPTutorialCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANMPTutorialCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANMPTutorialCharacter_Statics::ClassParams = {
		&ANMPTutorialCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANMPTutorialCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANMPTutorialCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANMPTutorialCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANMPTutorialCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANMPTutorialCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANMPTutorialCharacter, 3493682313);
	template<> NMPTUTORIAL_API UClass* StaticClass<ANMPTutorialCharacter>()
	{
		return ANMPTutorialCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANMPTutorialCharacter(Z_Construct_UClass_ANMPTutorialCharacter, &ANMPTutorialCharacter::StaticClass, TEXT("/Script/NMPTutorial"), TEXT("ANMPTutorialCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANMPTutorialCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
