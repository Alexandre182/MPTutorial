// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef NMPTUTORIAL_SpawnVolume_generated_h
#error "SpawnVolume.generated.h already included, missing '#pragma once' in SpawnVolume.h"
#endif
#define NMPTUTORIAL_SpawnVolume_generated_h

#define NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_SPARSE_DATA
#define NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSpawningActive) \
	{ \
		P_GET_UBOOL(Z_Param_bShouldSpawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpawningActive(Z_Param_bShouldSpawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomPointVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRandomPointVolume(); \
		P_NATIVE_END; \
	}


#define NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSpawningActive) \
	{ \
		P_GET_UBOOL(Z_Param_bShouldSpawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpawningActive(Z_Param_bShouldSpawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomPointVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRandomPointVolume(); \
		P_NATIVE_END; \
	}


#define NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnVolume(); \
	friend struct Z_Construct_UClass_ASpawnVolume_Statics; \
public: \
	DECLARE_CLASS(ASpawnVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NMPTutorial"), NO_API) \
	DECLARE_SERIALIZER(ASpawnVolume)


#define NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpawnVolume(); \
	friend struct Z_Construct_UClass_ASpawnVolume_Statics; \
public: \
	DECLARE_CLASS(ASpawnVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NMPTutorial"), NO_API) \
	DECLARE_SERIALIZER(ASpawnVolume)


#define NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnVolume(ASpawnVolume&&); \
	NO_API ASpawnVolume(const ASpawnVolume&); \
public:


#define NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnVolume(ASpawnVolume&&); \
	NO_API ASpawnVolume(const ASpawnVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnVolume)


#define NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WhatToSpawn() { return STRUCT_OFFSET(ASpawnVolume, WhatToSpawn); } \
	FORCEINLINE static uint32 __PPO__SpawnDelayRangeLow() { return STRUCT_OFFSET(ASpawnVolume, SpawnDelayRangeLow); } \
	FORCEINLINE static uint32 __PPO__SpawnDelayRangeHigh() { return STRUCT_OFFSET(ASpawnVolume, SpawnDelayRangeHigh); } \
	FORCEINLINE static uint32 __PPO__WhereToSpawn() { return STRUCT_OFFSET(ASpawnVolume, WhereToSpawn); }


#define NMPTutorial_Source_NMPTutorial_SpawnVolume_h_9_PROLOG
#define NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_SPARSE_DATA \
	NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_RPC_WRAPPERS \
	NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_INCLASS \
	NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_SPARSE_DATA \
	NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_INCLASS_NO_PURE_DECLS \
	NMPTutorial_Source_NMPTutorial_SpawnVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NMPTUTORIAL_API UClass* StaticClass<class ASpawnVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NMPTutorial_Source_NMPTutorial_SpawnVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
