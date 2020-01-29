// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NMPTUTORIAL_NMPGameState_generated_h
#error "NMPGameState.generated.h already included, missing '#pragma once' in NMPGameState.h"
#endif
#define NMPTUTORIAL_NMPGameState_generated_h

#define NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_SPARSE_DATA
#define NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EBatteryPlayState>*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EBatteryPlayState>*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANMPGameState(); \
	friend struct Z_Construct_UClass_ANMPGameState_Statics; \
public: \
	DECLARE_CLASS(ANMPGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NMPTutorial"), NO_API) \
	DECLARE_SERIALIZER(ANMPGameState)


#define NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_INCLASS \
private: \
	static void StaticRegisterNativesANMPGameState(); \
	friend struct Z_Construct_UClass_ANMPGameState_Statics; \
public: \
	DECLARE_CLASS(ANMPGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NMPTutorial"), NO_API) \
	DECLARE_SERIALIZER(ANMPGameState)


#define NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANMPGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANMPGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANMPGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANMPGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANMPGameState(ANMPGameState&&); \
	NO_API ANMPGameState(const ANMPGameState&); \
public:


#define NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANMPGameState(ANMPGameState&&); \
	NO_API ANMPGameState(const ANMPGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANMPGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANMPGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANMPGameState)


#define NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(ANMPGameState, CurrentState); }


#define NMPTutorial_Source_NMPTutorial_NMPGameState_h_20_PROLOG
#define NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_PRIVATE_PROPERTY_OFFSET \
	NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_SPARSE_DATA \
	NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_RPC_WRAPPERS \
	NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_INCLASS \
	NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_PRIVATE_PROPERTY_OFFSET \
	NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_SPARSE_DATA \
	NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_INCLASS_NO_PURE_DECLS \
	NMPTutorial_Source_NMPTutorial_NMPGameState_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NMPTUTORIAL_API UClass* StaticClass<class ANMPGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NMPTutorial_Source_NMPTutorial_NMPGameState_h


#define FOREACH_ENUM_EBATTERYPLAYSTATE(op) \
	op(EPlaying) \
	op(EGameOver) \
	op(EWon) \
	op(EUnknown) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
