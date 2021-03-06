// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NMPTutorial/Pickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup() {}
// Cross Module References
	NMPTUTORIAL_API UClass* Z_Construct_UClass_APickup_NoRegister();
	NMPTUTORIAL_API UClass* Z_Construct_UClass_APickup();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_NMPTutorial();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_APickup_ClientOnPickedUpBy();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_APickup_IsActive();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_APickup_OnRep_IsActive();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_APickup_PickedUpby();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_APickup_SetActive();
	NMPTUTORIAL_API UFunction* Z_Construct_UFunction_APickup_WasCollected();
// End Cross Module References
	static FName NAME_APickup_ClientOnPickedUpBy = FName(TEXT("ClientOnPickedUpBy"));
	void APickup::ClientOnPickedUpBy(APawn* Pawn)
	{
		Pickup_eventClientOnPickedUpBy_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_APickup_ClientOnPickedUpBy),&Parms);
	}
	static FName NAME_APickup_WasCollected = FName(TEXT("WasCollected"));
	void APickup::WasCollected()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickup_WasCollected),NULL);
	}
	void APickup::StaticRegisterNativesAPickup()
	{
		UClass* Class = APickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientOnPickedUpBy", &APickup::execClientOnPickedUpBy },
			{ "IsActive", &APickup::execIsActive },
			{ "OnRep_IsActive", &APickup::execOnRep_IsActive },
			{ "PickedUpby", &APickup::execPickedUpby },
			{ "SetActive", &APickup::execSetActive },
			{ "WasCollected", &APickup::execWasCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickup_ClientOnPickedUpBy_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_ClientOnPickedUpBy_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pickup_eventClientOnPickedUpBy_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_ClientOnPickedUpBy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_ClientOnPickedUpBy_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_ClientOnPickedUpBy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Client-side handling of being picked up\n" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "Client-side handling of being picked up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_ClientOnPickedUpBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "ClientOnPickedUpBy", nullptr, nullptr, sizeof(Pickup_eventClientOnPickedUpBy_Parms), Z_Construct_UFunction_APickup_ClientOnPickedUpBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_ClientOnPickedUpBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_ClientOnPickedUpBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_ClientOnPickedUpBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_ClientOnPickedUpBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_ClientOnPickedUpBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_IsActive_Statics
	{
		struct Pickup_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APickup_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pickup_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickup_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pickup_eventIsActive_Parms), &Z_Construct_UFunction_APickup_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "// Returns wheter or not the pickup is active\n" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "Returns wheter or not the pickup is active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "IsActive", nullptr, nullptr, sizeof(Pickup_eventIsActive_Parms), Z_Construct_UFunction_APickup_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// This is called whenever BIsactive is uptade\n" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "This is called whenever BIsactive is uptade" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "OnRep_IsActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_OnRep_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnRep_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_PickedUpby_Statics
	{
		struct Pickup_eventPickedUpby_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_PickedUpby_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pickup_eventPickedUpby_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_PickedUpby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_PickedUpby_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_PickedUpby_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "// Server side handling of being picked up\n" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "Server side handling of being picked up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_PickedUpby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "PickedUpby", nullptr, nullptr, sizeof(Pickup_eventPickedUpby_Parms), Z_Construct_UFunction_APickup_PickedUpby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_PickedUpby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_PickedUpby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_PickedUpby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_PickedUpby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_PickedUpby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_SetActive_Statics
	{
		struct Pickup_eventSetActive_Parms
		{
			bool NewPickupState;
		};
		static void NewProp_NewPickupState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewPickupState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APickup_SetActive_Statics::NewProp_NewPickupState_SetBit(void* Obj)
	{
		((Pickup_eventSetActive_Parms*)Obj)->NewPickupState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickup_SetActive_Statics::NewProp_NewPickupState = { "NewPickupState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pickup_eventSetActive_Parms), &Z_Construct_UFunction_APickup_SetActive_Statics::NewProp_NewPickupState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_SetActive_Statics::NewProp_NewPickupState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "// Allows other classes to safely change the pickup's activation state\n" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "Allows other classes to safely change the pickup's activation state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "SetActive", nullptr, nullptr, sizeof(Pickup_eventSetActive_Parms), Z_Construct_UFunction_APickup_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_WasCollected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_WasCollected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "// Function to call when the pickup is collected\n" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "Function to call when the pickup is collected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_WasCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "WasCollected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_WasCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_WasCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_WasCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_WasCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NMPTutorial,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickup_ClientOnPickedUpBy, "ClientOnPickedUpBy" }, // 514374302
		{ &Z_Construct_UFunction_APickup_IsActive, "IsActive" }, // 2123983982
		{ &Z_Construct_UFunction_APickup_OnRep_IsActive, "OnRep_IsActive" }, // 3873655272
		{ &Z_Construct_UFunction_APickup_PickedUpby, "PickedUpby" }, // 533300073
		{ &Z_Construct_UFunction_APickup_SetActive, "SetActive" }, // 3514333118
		{ &Z_Construct_UFunction_APickup_WasCollected, "WasCollected" }, // 477860791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Pickup.h" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_PickupInstigator_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "// The Pawn who picked up the pickup\n" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "The Pawn who picked up the pickup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_PickupInstigator = { "PickupInstigator", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, PickupInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_PickupInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_PickupInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Comment", "//True when the pickup can be used, false when the pickups is desativated\n" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "True when the pickup can be used, false when the pickups is desativated" },
	};
#endif
	void Z_Construct_UClass_APickup_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((APickup*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_bIsActive = { "bIsActive", "OnRep_IsActive", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APickup), &Z_Construct_UClass_APickup_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_bIsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_PickupInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_bIsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickup_Statics::ClassParams = {
		&APickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickup, 984500424);
	template<> NMPTUTORIAL_API UClass* StaticClass<APickup>()
	{
		return APickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup(Z_Construct_UClass_APickup, &APickup::StaticClass, TEXT("/Script/NMPTutorial"), TEXT("APickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
