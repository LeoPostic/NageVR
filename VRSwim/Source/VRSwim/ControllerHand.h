// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VRSwim.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "SteamVRChaperoneComponent.h"
#include "GameFramework/Actor.h"
#include "ControllerHand.generated.h"

class ASwimPlayer;

UCLASS()
class VRSWIM_API AControllerHand : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VR")
	USteamVRChaperoneComponent* VRChaperoneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controller")
	UMotionControllerComponent* MotionController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh")
	USkeletalMeshComponent* skeletalMesh;

	

	// Sets default values for this actor's properties
	AControllerHand();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void SetIsRightHand(bool value) { isRightHand = value; SetupMotionSource(); }
	virtual void SetPlayer(ASwimPlayer* p) { player = p; }
	virtual void SetupMotionSource();
	virtual void RecordLasTransform();

	UPROPERTY(BlueprintReadOnly)
	bool isRightHand;			// Determine which hand holds the controller


	FTransform currentTransform;
	FTransform lastTransform;	// The transform of the controller on the last frame
	ASwimPlayer* player;

};
