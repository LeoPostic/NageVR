// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRSWIM_SwimPlayer_generated_h
#error "SwimPlayer.generated.h already included, missing '#pragma once' in SwimPlayer.h"
#endif
#define VRSWIM_SwimPlayer_generated_h

#define VRSwim_Source_VRSwim_SwimPlayer_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupGamePads) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupGamePads(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupPlayerVRHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupPlayerVRHeight(); \
		P_NATIVE_END; \
	}


#define VRSwim_Source_VRSwim_SwimPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupGamePads) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupGamePads(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupPlayerVRHeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupPlayerVRHeight(); \
		P_NATIVE_END; \
	}


#define VRSwim_Source_VRSwim_SwimPlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwimPlayer(); \
	friend VRSWIM_API class UClass* Z_Construct_UClass_ASwimPlayer(); \
public: \
	DECLARE_CLASS(ASwimPlayer, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRSwim"), NO_API) \
	DECLARE_SERIALIZER(ASwimPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VRSwim_Source_VRSwim_SwimPlayer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASwimPlayer(); \
	friend VRSWIM_API class UClass* Z_Construct_UClass_ASwimPlayer(); \
public: \
	DECLARE_CLASS(ASwimPlayer, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRSwim"), NO_API) \
	DECLARE_SERIALIZER(ASwimPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VRSwim_Source_VRSwim_SwimPlayer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwimPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwimPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwimPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwimPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwimPlayer(ASwimPlayer&&); \
	NO_API ASwimPlayer(const ASwimPlayer&); \
public:


#define VRSwim_Source_VRSwim_SwimPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwimPlayer(ASwimPlayer&&); \
	NO_API ASwimPlayer(const ASwimPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwimPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwimPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwimPlayer)


#define VRSwim_Source_VRSwim_SwimPlayer_h_18_PRIVATE_PROPERTY_OFFSET
#define VRSwim_Source_VRSwim_SwimPlayer_h_14_PROLOG
#define VRSwim_Source_VRSwim_SwimPlayer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRSwim_Source_VRSwim_SwimPlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	VRSwim_Source_VRSwim_SwimPlayer_h_18_RPC_WRAPPERS \
	VRSwim_Source_VRSwim_SwimPlayer_h_18_INCLASS \
	VRSwim_Source_VRSwim_SwimPlayer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRSwim_Source_VRSwim_SwimPlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRSwim_Source_VRSwim_SwimPlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	VRSwim_Source_VRSwim_SwimPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	VRSwim_Source_VRSwim_SwimPlayer_h_18_INCLASS_NO_PURE_DECLS \
	VRSwim_Source_VRSwim_SwimPlayer_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRSwim_Source_VRSwim_SwimPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
