// Fill out your copyright notice in the Description page of Project Settings.

#include "SwimPlayer.h"
#include "HeadMountedDisplay.h"
#include "MotionControllerComponent.h"
#include "Engine.h"
#include "IXRTrackingSystem.h"




// Sets default values
ASwimPlayer::ASwimPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
	VROrigin = CreateDefaultSubobject<USceneComponent>(TEXT("VR Origin"));
	VROrigin->SetupAttachment(RootComponent);
	camera->SetupAttachment(VROrigin);

}

// Called when the game starts or when spawned
void ASwimPlayer::BeginPlay()
{
	Super::BeginPlay();

	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Swimming);
	SetupPlayerVRHeight();
	SetupGamePads();
}

// Called every frame
void ASwimPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ResetForces();
	UpdateMovementFromController(leftController);
	UpdateMovementFromController(rightController);
	ComputeControllerRotation(leftController);
	ComputeControllerRotation(rightController);
	ApplyMovement();
}

// Called to bind functionality to input
void ASwimPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAction("GrabRight", IE_Pressed, this, &ASwimPlayer::GripRight);
	InputComponent->BindAction("GrabRight", IE_Released, this, &ASwimPlayer::UnGripRight);
	InputComponent->BindAction("GrabLeft", IE_Pressed, this, &ASwimPlayer::GripLeft);
	InputComponent->BindAction("GrabLeft", IE_Released, this, &ASwimPlayer::UnGripLeft);
}


void ASwimPlayer::GripRight()
{
	isGrippingRight = true;
}

void ASwimPlayer::GripLeft()
{
	isGrippingLeft = true;
}

void ASwimPlayer::UnGripRight()
{
	isGrippingRight = false;
}

void ASwimPlayer::UnGripLeft()
{
	isGrippingLeft = false;
}

/**
* Compare the position of the controller with its transform on the last frame
* If the controller made a valid move we apply a force to our character
*/
void ASwimPlayer::UpdateMovementFromController(AControllerHand * controller)
{
	if ((controller->isRightHand && !isGrippingRight)
		|| (!controller->isRightHand && !isGrippingLeft))
		return;

	FRotator controllerRotator = controller->MotionController->GetComponentRotation();
	FVector controllerMovement = controller->lastTransform.GetLocation() - controller->MotionController->GetComponentLocation();
	FVector downVector = FRotationMatrix(controllerRotator).GetScaledAxis(EAxis::X);
	float dot;


	if (controller->isRightHand) {
		downVector = downVector.RotateAngleAxis(yRight, FRotationMatrix(controllerRotator).GetScaledAxis(EAxis::Y));
		downVector = downVector.RotateAngleAxis(xRight, FRotationMatrix(controllerRotator).GetScaledAxis(EAxis::X));
		downVector = downVector.RotateAngleAxis(zRight, FRotationMatrix(controllerRotator).GetScaledAxis(EAxis::Z));
	}
	else
	{
		downVector = downVector.RotateAngleAxis(yLeft, FRotationMatrix(controllerRotator).GetScaledAxis(EAxis::Y));
		downVector = downVector.RotateAngleAxis(xLeft, FRotationMatrix(controllerRotator).GetScaledAxis(EAxis::X));
		downVector = downVector.RotateAngleAxis(zLeft, FRotationMatrix(controllerRotator).GetScaledAxis(EAxis::Z));
	}
;	


	dot = FVector::DotProduct(controllerMovement, downVector);

	if (FMath::RadiansToDegrees(FMath::Acos(dot)) >= 180 - swimAngle) {
		if (controller->isRightHand)
			RightForce = controllerMovement * dot * swimSpeed * (-1);
		else
			LeftForce = controllerMovement * dot * swimSpeed * (-1);
	}
}

void ASwimPlayer::ComputeControllerRotation(AControllerHand* controller)
{
	if ((controller->isRightHand && !isGrippingRight)
		|| (!controller->isRightHand && !isGrippingLeft))
		return;
	   
	if (isGrippingLeft && isGrippingRight || !isGrippingLeft && !isGrippingRight)
		return;

	if (!ApplyRotation)
		return;

	FVector controllerLocation = (controller->GetActorLocation() - GetActorLocation());
	FVector controllerForce = controller->isRightHand ? RightForce: LeftForce;
	FVector projectedControllerLocation = FVector::VectorPlaneProject(controllerLocation, FVector(0, 0, 1));
	FVector projectedControllerForce = FVector::VectorPlaneProject(controllerForce, FVector(0, 0, 1));

	FVector rotatedForce = controllerForce.RotateAngleAxis(90, FVector(0, 0, 1));



	float orientation = FVector::DotProduct(controllerLocation.GetSafeNormal(), rotatedForce.GetSafeNormal());
	
	float hand = controller->isRightHand ? -1 : 1;

	if(orientation != 0)
		orientation = (orientation < 0) ? -1 : 1;


	if(orientation!=0)
		currentRotation += (1 - FVector::DotProduct(projectedControllerLocation.GetSafeNormal(), projectedControllerForce.GetSafeNormal()))	// initial value based on the controller force and its angle with the player
			* projectedControllerForce.Size()	// scaled with the controller force magnitude
			* fRotationSpeed					// scaled with the rotation speed
			* orientation
			* hand
			* (controller->isRightHand?1:(-1));	// adapted to the correct hand
	else
		currentRotation += (1 - FVector::DotProduct(projectedControllerLocation.GetSafeNormal(), projectedControllerForce.GetSafeNormal()))	// initial value based on the controller force and its angle with the player
		* projectedControllerForce.Size()	// scaled with the controller force magnitude
		* fRotationSpeed					// scaled with the rotation speed
		* hand
		* (controller->isRightHand ? 1 : (-1));	// adapted to the correct hand

}

void ASwimPlayer::ResetForces()
{
	RightForce = FVector::ZeroVector;
	LeftForce = FVector::ZeroVector;
	MovementInput = FVector::ZeroVector;
}

void ASwimPlayer::ApplyMovement()
{
	MovementInput = LeftForce + RightForce;
	currentRotation = FMath::Clamp( FMath::Lerp(currentRotation, (float)0, fRotationDecrease), -fMaxRotationSpeed, fMaxRotationSpeed);

	if(isGrippingLeft && isGrippingRight)
		AddMovementInput(MovementInput, GetWorld()->GetDeltaSeconds());

	AddControllerYawInput(currentRotation * GetWorld()->GetDeltaSeconds());
}


void ASwimPlayer::SetupPlayerVRHeight()
{
	FName DeviceName(NAME_None);
	
	if (GEngine->XRSystem.IsValid())
	{
		DeviceName = GEngine->XRSystem->GetSystemName();
		/*
		* Detect the right device
		*/
		GEngine->XRSystem->SetTrackingOrigin(EHMDTrackingOrigin::Floor);
	}
}

//Spawn and initialize both controller for VR use
void ASwimPlayer::SetupGamePads()
{
	UWorld* world = GetWorld();

	if (world) {
		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;

		// Spawn right controller
		rightController = world->SpawnActor<AControllerHand>(controllerBP, spawnParams);
		rightController->SetIsRightHand(true);
		rightController->AttachToComponent(GetCapsuleComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		rightController->SetPlayer(this);		

		// Spawn left controller	
		leftController = world->SpawnActor<AControllerHand>(controllerBP, spawnParams);
		leftController->SetIsRightHand(false);
		leftController->AttachToComponent(GetCapsuleComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		leftController->SetPlayer(this);
	}
}

