// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ControllerHand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControllerHand() {}
// Cross Module References
	VRSWIM_API UClass* Z_Construct_UClass_AControllerHand_NoRegister();
	VRSWIM_API UClass* Z_Construct_UClass_AControllerHand();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VRSwim();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	STEAMVR_API UClass* Z_Construct_UClass_USteamVRChaperoneComponent_NoRegister();
// End Cross Module References
	void AControllerHand::StaticRegisterNativesAControllerHand()
	{
	}
	UClass* Z_Construct_UClass_AControllerHand_NoRegister()
	{
		return AControllerHand::StaticClass();
	}
	UClass* Z_Construct_UClass_AControllerHand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_VRSwim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ControllerHand.h" },
				{ "ModuleRelativePath", "ControllerHand.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isRightHand_MetaData[] = {
				{ "Category", "ControllerHand" },
				{ "ModuleRelativePath", "ControllerHand.h" },
			};
#endif
			auto NewProp_isRightHand_SetBit = [](void* Obj){ ((AControllerHand*)Obj)->isRightHand = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRightHand = { UE4CodeGen_Private::EPropertyClass::Bool, "isRightHand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AControllerHand), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isRightHand_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isRightHand_MetaData, ARRAY_COUNT(NewProp_isRightHand_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeletalMesh_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ControllerHand.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeletalMesh = { UE4CodeGen_Private::EPropertyClass::Object, "skeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AControllerHand, skeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_skeletalMesh_MetaData, ARRAY_COUNT(NewProp_skeletalMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[] = {
				{ "Category", "Controller" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ControllerHand.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "MotionController", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AControllerHand, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_MotionController_MetaData, ARRAY_COUNT(NewProp_MotionController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRChaperoneComponent_MetaData[] = {
				{ "Category", "VR" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ControllerHand.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRChaperoneComponent = { UE4CodeGen_Private::EPropertyClass::Object, "VRChaperoneComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AControllerHand, VRChaperoneComponent), Z_Construct_UClass_USteamVRChaperoneComponent_NoRegister, METADATA_PARAMS(NewProp_VRChaperoneComponent_MetaData, ARRAY_COUNT(NewProp_VRChaperoneComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isRightHand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_skeletalMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MotionController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRChaperoneComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AControllerHand>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AControllerHand::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AControllerHand, 923579198);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControllerHand(Z_Construct_UClass_AControllerHand, &AControllerHand::StaticClass, TEXT("/Script/VRSwim"), TEXT("AControllerHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControllerHand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
