// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef NMPTUTORIAL_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define NMPTUTORIAL_Pickup_generated_h

#define NMPTutorial_Source_NMPTutorial_Pickup_h_15_SPARSE_DATA
#define NMPTutorial_Source_NMPTutorial_Pickup_h_15_RPC_WRAPPERS \
	virtual void ClientOnPickedUpBy_Implementation(APawn* Pawn); \
	virtual void WasCollected_Implementation(); \
 \
	DECLARE_FUNCTION(execClientOnPickedUpBy) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientOnPickedUpBy_Implementation(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickedUpby) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickedUpby(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasCollected_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_NewPickupState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_NewPickupState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define NMPTutorial_Source_NMPTutorial_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientOnPickedUpBy_Implementation(APawn* Pawn); \
 \
	DECLARE_FUNCTION(execClientOnPickedUpBy) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientOnPickedUpBy_Implementation(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickedUpby) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickedUpby(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WasCollected_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_NewPickupState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_NewPickupState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define NMPTutorial_Source_NMPTutorial_Pickup_h_15_EVENT_PARMS \
	struct Pickup_eventClientOnPickedUpBy_Parms \
	{ \
		APawn* Pawn; \
	};


#define NMPTutorial_Source_NMPTutorial_Pickup_h_15_CALLBACK_WRAPPERS
#define NMPTutorial_Source_NMPTutorial_Pickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NMPTutorial"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define NMPTutorial_Source_NMPTutorial_Pickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NMPTutorial"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define NMPTutorial_Source_NMPTutorial_Pickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define NMPTutorial_Source_NMPTutorial_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define NMPTutorial_Source_NMPTutorial_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(APickup, bIsActive); } \
	FORCEINLINE static uint32 __PPO__PickupInstigator() { return STRUCT_OFFSET(APickup, PickupInstigator); }


#define NMPTutorial_Source_NMPTutorial_Pickup_h_12_PROLOG \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_EVENT_PARMS


#define NMPTutorial_Source_NMPTutorial_Pickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_SPARSE_DATA \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_RPC_WRAPPERS \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_CALLBACK_WRAPPERS \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_INCLASS \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NMPTutorial_Source_NMPTutorial_Pickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_SPARSE_DATA \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_CALLBACK_WRAPPERS \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_INCLASS_NO_PURE_DECLS \
	NMPTutorial_Source_NMPTutorial_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NMPTUTORIAL_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NMPTutorial_Source_NMPTutorial_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
