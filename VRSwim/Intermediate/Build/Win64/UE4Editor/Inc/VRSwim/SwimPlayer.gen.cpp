// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SwimPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwimPlayer() {}
// Cross Module References
	VRSWIM_API UClass* Z_Construct_UClass_ASwimPlayer_NoRegister();
	VRSWIM_API UClass* Z_Construct_UClass_ASwimPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_VRSwim();
	VRSWIM_API UFunction* Z_Construct_UFunction_ASwimPlayer_SetupGamePads();
	VRSWIM_API UFunction* Z_Construct_UFunction_ASwimPlayer_SetupPlayerVRHeight();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VRSWIM_API UClass* Z_Construct_UClass_AControllerHand_NoRegister();
// End Cross Module References
	void ASwimPlayer::StaticRegisterNativesASwimPlayer()
	{
		UClass* Class = ASwimPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupGamePads", &ASwimPlayer::execSetupGamePads },
			{ "SetupPlayerVRHeight", &ASwimPlayer::execSetupPlayerVRHeight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASwimPlayer_SetupGamePads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VR Setup" },
				{ "ModuleRelativePath", "SwimPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwimPlayer, "SetupGamePads", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASwimPlayer_SetupPlayerVRHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VR Setups" },
				{ "ModuleRelativePath", "SwimPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwimPlayer, "SetupPlayerVRHeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwimPlayer_NoRegister()
	{
		return ASwimPlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_ASwimPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_VRSwim,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASwimPlayer_SetupGamePads, "SetupGamePads" }, // 2526987927
				{ &Z_Construct_UFunction_ASwimPlayer_SetupPlayerVRHeight, "SetupPlayerVRHeight" }, // 2233827611
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "SwimPlayer.h" },
				{ "ModuleRelativePath", "SwimPlayer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fRotationDecrease_MetaData[] = {
				{ "Category", "SwimPlayer" },
				{ "ModuleRelativePath", "SwimPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fRotationDecrease = { UE4CodeGen_Private::EPropertyClass::Float, "fRotationDecrease", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ASwimPlayer, fRotationDecrease), METADATA_PARAMS(NewProp_fRotationDecrease_MetaData, ARRAY_COUNT(NewProp_fRotationDecrease_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fRotationSpeed_MetaData[] = {
				{ "Category", "SwimPlayer" },
				{ "ModuleRelativePath", "SwimPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fRotationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "fRotationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ASwimPlayer, fRotationSpeed), METADATA_PARAMS(NewProp_fRotationSpeed_MetaData, ARRAY_COUNT(NewProp_fRotationSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyRotation_MetaData[] = {
				{ "Category", "SwimPlayer" },
				{ "ModuleRelativePath", "SwimPlayer.h" },
			};
#endif
			auto NewProp_ApplyRotation_SetBit = [](void* Obj){ ((ASwimPlayer*)Obj)->ApplyRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "ApplyRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASwimPlayer), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ApplyRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ApplyRotation_MetaData, ARRAY_COUNT(NewProp_ApplyRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_swimSpeed_MetaData[] = {
				{ "Category", "SwimPlayer" },
				{ "ModuleRelativePath", "SwimPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_swimSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "swimSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ASwimPlayer, swimSpeed), METADATA_PARAMS(NewProp_swimSpeed_MetaData, ARRAY_COUNT(NewProp_swimSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_camera_MetaData[] = {
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "SwimPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_camera = { UE4CodeGen_Private::EPropertyClass::Object, "camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ASwimPlayer, camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_camera_MetaData, ARRAY_COUNT(NewProp_camera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VROrigin_MetaData[] = {
				{ "Category", "Scene" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "SwimPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VROrigin = { UE4CodeGen_Private::EPropertyClass::Object, "VROrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ASwimPlayer, VROrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_VROrigin_MetaData, ARRAY_COUNT(NewProp_VROrigin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controllerBP_MetaData[] = {
				{ "Category", "SwimPlayer" },
				{ "ModuleRelativePath", "SwimPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_controllerBP = { UE4CodeGen_Private::EPropertyClass::Class, "controllerBP", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(ASwimPlayer, controllerBP), Z_Construct_UClass_AControllerHand_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_controllerBP_MetaData, ARRAY_COUNT(NewProp_controllerBP_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fRotationDecrease,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fRotationSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplyRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_swimSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VROrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_controllerBP,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASwimPlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASwimPlayer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwimPlayer, 293007375);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwimPlayer(Z_Construct_UClass_ASwimPlayer, &ASwimPlayer::StaticClass, TEXT("/Script/VRSwim"), TEXT("ASwimPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwimPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
