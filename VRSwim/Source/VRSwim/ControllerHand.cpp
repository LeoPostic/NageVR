// Fill out your copyright notice in the Description page of Project Settings.

#include "ControllerHand.h"
#include "Engine.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"


// Sets default values
AControllerHand::AControllerHand()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VRChaperoneComponent = CreateDefaultSubobject<USteamVRChaperoneComponent>(TEXT("VRChaperone"));
	MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
	skeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));

	MotionController->SetupAttachment(RootComponent);
	skeletalMesh->SetupAttachment(MotionController);
}

// Called when the game starts or when spawned
void AControllerHand::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AControllerHand::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RecordLasTransform();
}

void AControllerHand::SetupMotionSource()
{
	if (isRightHand) {
		MotionController->SetTrackingMotionSource("Right");
		skeletalMesh->SetWorldScale3D(FVector(1, 1, 1));
	}
	else {
		MotionController->SetTrackingMotionSource("Left");
		skeletalMesh->SetWorldScale3D(FVector(1, 1, -1));
	}
}

void AControllerHand::RecordLasTransform()
{
	
	lastTransform = currentTransform;
	currentTransform = MotionController->GetComponentTransform();
}