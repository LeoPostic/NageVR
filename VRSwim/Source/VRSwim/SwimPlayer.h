// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "VRSwim.h"
#include "GameFramework/Character.h"
#include "SwimPlayer.generated.h"

class AControllerHand;


UCLASS()
class VRSWIM_API ASwimPlayer : public ACharacter
{
public :
	GENERATED_BODY()

	// Sets default values for this character's properties
	ASwimPlayer();

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AControllerHand> controllerBP;

	UPROPERTY(EditAnywhere, Category = "Scene")
	class USceneComponent* VROrigin;

	UPROPERTY(EditAnywhere, Category = "Camera")
	class UCameraComponent* camera;

	UPROPERTY(EditAnywhere, Category = "SwimPlayer")
	float swimSpeed = 50;

	UPROPERTY(EditAnywhere, Category = "SwimPlayer")
	float fRadialSpeed;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void UpdateMovementFromController(AControllerHand* controller);
	virtual void ComputeControllerRotation(AControllerHand* controller);
	virtual void ResetForces();
	virtual void ApplyMovement();
	virtual void GripRight();
	virtual void GripLeft();
	virtual void UnGripRight();
	virtual void UnGripLeft();	

	UFUNCTION(BlueprintCallable, Category = "VR Setups")
	virtual void SetupPlayerVRHeight();

	UFUNCTION(BlueprintCallable, Category = "VR Setup")
	virtual void SetupGamePads();

protected:
	FVector MovementInput;		// Vecteur de mouvement final
	FVector RightForce;
	FVector LeftForce;
	AControllerHand* rightController;
	AControllerHand* leftController;
	bool isGrippingRight;
	bool isGrippingLeft;
		
};
