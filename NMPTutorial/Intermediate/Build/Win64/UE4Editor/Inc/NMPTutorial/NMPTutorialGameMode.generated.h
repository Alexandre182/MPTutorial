// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NMPTUTORIAL_NMPTutorialGameMode_generated_h
#error "NMPTutorialGameMode.generated.h already included, missing '#pragma once' in NMPTutorialGameMode.h"
#endif
#define NMPTUTORIAL_NMPTutorialGameMode_generated_h

#define NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_SPARSE_DATA
#define NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPowerToWinMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPowerToWinMultiplier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDecayRate(); \
		P_NATIVE_END; \
	}


#define NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPowerToWinMultiplier) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPowerToWinMultiplier(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDecayRate(); \
		P_NATIVE_END; \
	}


#define NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANMPTutorialGameMode(); \
	friend struct Z_Construct_UClass_ANMPTutorialGameMode_Statics; \
public: \
	DECLARE_CLASS(ANMPTutorialGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NMPTutorial"), NMPTUTORIAL_API) \
	DECLARE_SERIALIZER(ANMPTutorialGameMode)


#define NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesANMPTutorialGameMode(); \
	friend struct Z_Construct_UClass_ANMPTutorialGameMode_Statics; \
public: \
	DECLARE_CLASS(ANMPTutorialGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/NMPTutorial"), NMPTUTORIAL_API) \
	DECLARE_SERIALIZER(ANMPTutorialGameMode)


#define NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NMPTUTORIAL_API ANMPTutorialGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANMPTutorialGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NMPTUTORIAL_API, ANMPTutorialGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANMPTutorialGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NMPTUTORIAL_API ANMPTutorialGameMode(ANMPTutorialGameMode&&); \
	NMPTUTORIAL_API ANMPTutorialGameMode(const ANMPTutorialGameMode&); \
public:


#define NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NMPTUTORIAL_API ANMPTutorialGameMode(ANMPTutorialGameMode&&); \
	NMPTUTORIAL_API ANMPTutorialGameMode(const ANMPTutorialGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NMPTUTORIAL_API, ANMPTutorialGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANMPTutorialGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANMPTutorialGameMode)


#define NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PowerDrainDelay() { return STRUCT_OFFSET(ANMPTutorialGameMode, PowerDrainDelay); } \
	FORCEINLINE static uint32 __PPO__DecayRate() { return STRUCT_OFFSET(ANMPTutorialGameMode, DecayRate); } \
	FORCEINLINE static uint32 __PPO__PowerToWinMultiplier() { return STRUCT_OFFSET(ANMPTutorialGameMode, PowerToWinMultiplier); }


#define NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_10_PROLOG
#define NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_SPARSE_DATA \
	NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_RPC_WRAPPERS \
	NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_INCLASS \
	NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_SPARSE_DATA \
	NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_INCLASS_NO_PURE_DECLS \
	NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NMPTUTORIAL_API UClass* StaticClass<class ANMPTutorialGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NMPTutorial_Source_NMPTutorial_NMPTutorialGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
