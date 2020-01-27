// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NMPTUTORIAL_NMPTutorialCharacter_generated_h
#error "NMPTutorialCharacter.generated.h already included, missing '#pragma once' in NMPTutorialCharacter.h"
#endif
#define NMPTUTORIAL_NMPTutorialCharacter_generated_h

#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_SPARSE_DATA
#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_RPC_WRAPPERS \
	virtual bool ServerCollectPickups_Validate(); \
	virtual void ServerCollectPickups_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_CurrentPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerCollectPickups_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCollectPickups_Validate")); \
			return; \
		} \
		P_THIS->ServerCollectPickups_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectPickups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaPower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePower(Z_Param_DeltaPower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitialPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInitialPower(); \
		P_NATIVE_END; \
	}


#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerCollectPickups_Validate(); \
	virtual void ServerCollectPickups_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_CurrentPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_CurrentPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerCollectPickups_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerCollectPickups_Validate")); \
			return; \
		} \
		P_THIS->ServerCollectPickups_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectPickups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaPower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePower(Z_Param_DeltaPower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitialPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInitialPower(); \
		P_NATIVE_END; \
	}


#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_EVENT_PARMS
#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_CALLBACK_WRAPPERS
#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANMPTutorialCharacter(); \
	friend struct Z_Construct_UClass_ANMPTutorialCharacter_Statics; \
public: \
	DECLARE_CLASS(ANMPTutorialCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NMPTutorial"), NO_API) \
	DECLARE_SERIALIZER(ANMPTutorialCharacter)


#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANMPTutorialCharacter(); \
	friend struct Z_Construct_UClass_ANMPTutorialCharacter_Statics; \
public: \
	DECLARE_CLASS(ANMPTutorialCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NMPTutorial"), NO_API) \
	DECLARE_SERIALIZER(ANMPTutorialCharacter)


#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANMPTutorialCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANMPTutorialCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANMPTutorialCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANMPTutorialCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANMPTutorialCharacter(ANMPTutorialCharacter&&); \
	NO_API ANMPTutorialCharacter(const ANMPTutorialCharacter&); \
public:


#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANMPTutorialCharacter(ANMPTutorialCharacter&&); \
	NO_API ANMPTutorialCharacter(const ANMPTutorialCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANMPTutorialCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANMPTutorialCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANMPTutorialCharacter)


#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ANMPTutorialCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ANMPTutorialCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__CollectionSphere() { return STRUCT_OFFSET(ANMPTutorialCharacter, CollectionSphere); } \
	FORCEINLINE static uint32 __PPO__InitialPower() { return STRUCT_OFFSET(ANMPTutorialCharacter, InitialPower); } \
	FORCEINLINE static uint32 __PPO__BaseSpeed() { return STRUCT_OFFSET(ANMPTutorialCharacter, BaseSpeed); } \
	FORCEINLINE static uint32 __PPO__SpeedFactor() { return STRUCT_OFFSET(ANMPTutorialCharacter, SpeedFactor); } \
	FORCEINLINE static uint32 __PPO__CollectionSphereRadius() { return STRUCT_OFFSET(ANMPTutorialCharacter, CollectionSphereRadius); } \
	FORCEINLINE static uint32 __PPO__CurrentPower() { return STRUCT_OFFSET(ANMPTutorialCharacter, CurrentPower); }


#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_9_PROLOG \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_EVENT_PARMS


#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_SPARSE_DATA \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_RPC_WRAPPERS \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_CALLBACK_WRAPPERS \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_INCLASS \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_SPARSE_DATA \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_CALLBACK_WRAPPERS \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_INCLASS_NO_PURE_DECLS \
	NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NMPTUTORIAL_API UClass* StaticClass<class ANMPTutorialCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NMPTutorial_Source_NMPTutorial_NMPTutorialCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
