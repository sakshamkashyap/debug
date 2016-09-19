// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "SubEarth.h"
#include "SubEarth.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1SubEarth() {}
	void AInteractable::StaticRegisterNativesAInteractable()
	{
		FNativeFunctionRegistrar::RegisterFunction(AInteractable::StaticClass(), "OnPlayerHandOverlap",(Native)&AInteractable::execOnPlayerHandOverlap);
	}
	IMPLEMENT_CLASS(AInteractable, 2122081446);
	void APickup::StaticRegisterNativesAPickup()
	{
	}
	IMPLEMENT_CLASS(APickup, 325429469);
	void UHand::StaticRegisterNativesUHand()
	{
	}
	IMPLEMENT_CLASS(UHand, 1250220714);
	void AColorChangingOrb::StaticRegisterNativesAColorChangingOrb()
	{
	}
	IMPLEMENT_CLASS(AColorChangingOrb, 2692036096);
	void ASubEarthCharacter::StaticRegisterNativesASubEarthCharacter()
	{
	}
	IMPLEMENT_CLASS(ASubEarthCharacter, 2217200594);
	void ASubEarthGameMode::StaticRegisterNativesASubEarthGameMode()
	{
	}
	IMPLEMENT_CLASS(ASubEarthGameMode, 1247865613);
	void ASubEarthHUD::StaticRegisterNativesASubEarthHUD()
	{
	}
	IMPLEMENT_CLASS(ASubEarthHUD, 3713241919);
	void ASubEarthProjectile::StaticRegisterNativesASubEarthProjectile()
	{
		FNativeFunctionRegistrar::RegisterFunction(ASubEarthProjectile::StaticClass(), "OnHit",(Native)&ASubEarthProjectile::execOnHit);
	}
	IMPLEMENT_CLASS(ASubEarthProjectile, 1543833722);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	HEADMOUNTEDDISPLAY_API class UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();

	SUBEARTH_API class UFunction* Z_Construct_UFunction_AInteractable_OnPlayerHandOverlap();
	SUBEARTH_API class UClass* Z_Construct_UClass_AInteractable_NoRegister();
	SUBEARTH_API class UClass* Z_Construct_UClass_AInteractable();
	SUBEARTH_API class UClass* Z_Construct_UClass_APickup_NoRegister();
	SUBEARTH_API class UClass* Z_Construct_UClass_APickup();
	SUBEARTH_API class UClass* Z_Construct_UClass_UHand_NoRegister();
	SUBEARTH_API class UClass* Z_Construct_UClass_UHand();
	SUBEARTH_API class UClass* Z_Construct_UClass_AColorChangingOrb_NoRegister();
	SUBEARTH_API class UClass* Z_Construct_UClass_AColorChangingOrb();
	SUBEARTH_API class UClass* Z_Construct_UClass_ASubEarthCharacter_NoRegister();
	SUBEARTH_API class UClass* Z_Construct_UClass_ASubEarthCharacter();
	SUBEARTH_API class UClass* Z_Construct_UClass_ASubEarthGameMode_NoRegister();
	SUBEARTH_API class UClass* Z_Construct_UClass_ASubEarthGameMode();
	SUBEARTH_API class UClass* Z_Construct_UClass_ASubEarthHUD_NoRegister();
	SUBEARTH_API class UClass* Z_Construct_UClass_ASubEarthHUD();
	SUBEARTH_API class UFunction* Z_Construct_UFunction_ASubEarthProjectile_OnHit();
	SUBEARTH_API class UClass* Z_Construct_UClass_ASubEarthProjectile_NoRegister();
	SUBEARTH_API class UClass* Z_Construct_UClass_ASubEarthProjectile();
	SUBEARTH_API class UPackage* Z_Construct_UPackage__Script_SubEarth();
	UFunction* Z_Construct_UFunction_AInteractable_OnPlayerHandOverlap()
	{
		struct Interactable_eventOnPlayerHandOverlap_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* otherActor;
			UPrimitiveComponent* otherComponent;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_AInteractable();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnPlayerHandOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00480401, 65535, sizeof(Interactable_eventOnPlayerHandOverlap_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, Interactable_eventOnPlayerHandOverlap_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, Interactable_eventOnPlayerHandOverlap_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, Interactable_eventOnPlayerHandOverlap_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, Interactable_eventOnPlayerHandOverlap_Parms), sizeof(bool), true);
			UProperty* NewProp_otherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(otherBodyIndex, Interactable_eventOnPlayerHandOverlap_Parms), 0x0010000000000080);
			UProperty* NewProp_otherComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(otherComponent, Interactable_eventOnPlayerHandOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_otherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(otherActor, Interactable_eventOnPlayerHandOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_overlappedComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("overlappedComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(overlappedComponent, Interactable_eventOnPlayerHandOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Interactable.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_otherComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_overlappedComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractable_NoRegister()
	{
		return AInteractable::StaticClass();
	}
	UClass* Z_Construct_UClass_AInteractable()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SubEarth();
			OuterClass = AInteractable::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900081;

				OuterClass->LinkChild(Z_Construct_UFunction_AInteractable_OnPlayerHandOverlap());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_objectCollider = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("objectCollider"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(objectCollider, AInteractable), 0x0020080000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_objectMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("objectMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(objectMesh, AInteractable), 0x0020080000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_objectRoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("objectRoot"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(objectRoot, AInteractable), 0x0020080000080009, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractable_OnPlayerHandOverlap(), "OnPlayerHandOverlap"); // 728062582
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Interactable.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Interactable.h"));
				MetaData->SetValue(NewProp_objectCollider, TEXT("Category"), TEXT("Interactable"));
				MetaData->SetValue(NewProp_objectCollider, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_objectCollider, TEXT("ModuleRelativePath"), TEXT("Interactable.h"));
				MetaData->SetValue(NewProp_objectMesh, TEXT("Category"), TEXT("Interactable"));
				MetaData->SetValue(NewProp_objectMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_objectMesh, TEXT("ModuleRelativePath"), TEXT("Interactable.h"));
				MetaData->SetValue(NewProp_objectMesh, TEXT("ToolTip"), TEXT("Static mesh for the object being picked up"));
				MetaData->SetValue(NewProp_objectRoot, TEXT("Category"), TEXT("Interactable"));
				MetaData->SetValue(NewProp_objectRoot, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_objectRoot, TEXT("ModuleRelativePath"), TEXT("Interactable.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractable(Z_Construct_UClass_AInteractable, &AInteractable::StaticClass, TEXT("AInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractable);
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	UClass* Z_Construct_UClass_APickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AInteractable();
			Z_Construct_UPackage__Script_SubEarth();
			OuterClass = APickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900081;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Pickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup(Z_Construct_UClass_APickup, &APickup::StaticClass, TEXT("APickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
	UClass* Z_Construct_UClass_UHand_NoRegister()
	{
		return UHand::StaticClass();
	}
	UClass* Z_Construct_UClass_UHand()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_SubEarth();
			OuterClass = UHand::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_handCollider = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("handCollider"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(handCollider, UHand), 0x001000000008000d, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_handMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("handMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(handMesh, UHand), 0x001000000008000d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_handSceneComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("handSceneComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(handSceneComponent, UHand), 0x001000000008000d, Z_Construct_UClass_USceneComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("ComponentReplication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Hand.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Hand.h"));
				MetaData->SetValue(NewProp_handCollider, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_handCollider, TEXT("Category"), TEXT("Hand"));
				MetaData->SetValue(NewProp_handCollider, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_handCollider, TEXT("ModuleRelativePath"), TEXT("Hand.h"));
				MetaData->SetValue(NewProp_handMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_handMesh, TEXT("Category"), TEXT("Hand"));
				MetaData->SetValue(NewProp_handMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_handMesh, TEXT("ModuleRelativePath"), TEXT("Hand.h"));
				MetaData->SetValue(NewProp_handSceneComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_handSceneComponent, TEXT("Category"), TEXT("Hand"));
				MetaData->SetValue(NewProp_handSceneComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_handSceneComponent, TEXT("ModuleRelativePath"), TEXT("Hand.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHand(Z_Construct_UClass_UHand, &UHand::StaticClass, TEXT("UHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHand);
	UClass* Z_Construct_UClass_AColorChangingOrb_NoRegister()
	{
		return AColorChangingOrb::StaticClass();
	}
	UClass* Z_Construct_UClass_AColorChangingOrb()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APickup();
			Z_Construct_UPackage__Script_SubEarth();
			OuterClass = AColorChangingOrb::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ColorChangingOrb.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ColorChangingOrb.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AColorChangingOrb(Z_Construct_UClass_AColorChangingOrb, &AColorChangingOrb::StaticClass, TEXT("AColorChangingOrb"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AColorChangingOrb);
	UClass* Z_Construct_UClass_ASubEarthCharacter_NoRegister()
	{
		return ASubEarthCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ASubEarthCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_SubEarth();
			OuterClass = ASubEarthCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_L_MotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("L_MotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(L_MotionController, ASubEarthCharacter), 0x00400000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_R_MotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("R_MotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(R_MotionController, ASubEarthCharacter), 0x00400000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_FirstPersonCameraComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstPersonCameraComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FirstPersonCameraComponent, ASubEarthCharacter), 0x004000000008000d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_Mesh1P = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh1P"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh1P, ASubEarthCharacter), 0x00400000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_rightHand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("rightHand"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(rightHand, ASubEarthCharacter), 0x001000000008000d, Z_Construct_UClass_UHand_NoRegister());
				UProperty* NewProp_leftHand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("leftHand"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(leftHand, ASubEarthCharacter), 0x001000000008000d, Z_Construct_UClass_UHand_NoRegister());
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, ASubEarthCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, ASubEarthCharacter), 0x0010000000020015);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SubEarthCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SubEarthCharacter.h"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("Category"), TEXT("SubEarthCharacter"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("ModuleRelativePath"), TEXT("SubEarthCharacter.h"));
				MetaData->SetValue(NewProp_L_MotionController, TEXT("ToolTip"), TEXT("Motion controller (left hand)"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("Category"), TEXT("SubEarthCharacter"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("ModuleRelativePath"), TEXT("SubEarthCharacter.h"));
				MetaData->SetValue(NewProp_R_MotionController, TEXT("ToolTip"), TEXT("Motion controller (right hand)"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ModuleRelativePath"), TEXT("SubEarthCharacter.h"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ToolTip"), TEXT("First person camera"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ModuleRelativePath"), TEXT("SubEarthCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ToolTip"), TEXT("Pawn mesh: 1st person view (arms; seen only by self)"));
				MetaData->SetValue(NewProp_rightHand, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_rightHand, TEXT("Category"), TEXT("rightHand"));
				MetaData->SetValue(NewProp_rightHand, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_rightHand, TEXT("ModuleRelativePath"), TEXT("SubEarthCharacter.h"));
				MetaData->SetValue(NewProp_leftHand, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_leftHand, TEXT("Category"), TEXT("leftHand"));
				MetaData->SetValue(NewProp_leftHand, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_leftHand, TEXT("ModuleRelativePath"), TEXT("SubEarthCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("SubEarthCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("SubEarthCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASubEarthCharacter(Z_Construct_UClass_ASubEarthCharacter, &ASubEarthCharacter::StaticClass, TEXT("ASubEarthCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASubEarthCharacter);
	UClass* Z_Construct_UClass_ASubEarthGameMode_NoRegister()
	{
		return ASubEarthGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ASubEarthGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage__Script_SubEarth();
			OuterClass = ASubEarthGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2088028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SubEarthGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SubEarthGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASubEarthGameMode(Z_Construct_UClass_ASubEarthGameMode, &ASubEarthGameMode::StaticClass, TEXT("ASubEarthGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASubEarthGameMode);
	UClass* Z_Construct_UClass_ASubEarthHUD_NoRegister()
	{
		return ASubEarthHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ASubEarthHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_SubEarth();
			OuterClass = ASubEarthHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2080028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SubEarthHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SubEarthHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASubEarthHUD(Z_Construct_UClass_ASubEarthHUD, &ASubEarthHUD::StaticClass, TEXT("ASubEarthHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASubEarthHUD);
	UFunction* Z_Construct_UFunction_ASubEarthProjectile_OnHit()
	{
		struct SubEarthProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_ASubEarthProjectile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(SubEarthProjectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, SubEarthProjectile_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, SubEarthProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, SubEarthProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, SubEarthProjectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComp, SubEarthProjectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SubEarthProjectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("called when projectile hits something"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASubEarthProjectile_NoRegister()
	{
		return ASubEarthProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_ASubEarthProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SubEarth();
			OuterClass = ASubEarthProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_ASubEarthProjectile_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ProjectileMovement = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovement, ASubEarthProjectile), 0x00400000000a001d, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComp, ASubEarthProjectile), 0x00400000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASubEarthProjectile_OnHit(), "OnHit"); // 2635910303
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SubEarthProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SubEarthProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ModuleRelativePath"), TEXT("SubEarthProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ToolTip"), TEXT("Projectile movement component"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ModuleRelativePath"), TEXT("SubEarthProjectile.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ToolTip"), TEXT("Sphere collision component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASubEarthProjectile(Z_Construct_UClass_ASubEarthProjectile, &ASubEarthProjectile::StaticClass, TEXT("ASubEarthProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASubEarthProjectile);
	UPackage* Z_Construct_UPackage__Script_SubEarth()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/SubEarth")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xECF3255C;
			Guid.B = 0x9D136BA6;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
