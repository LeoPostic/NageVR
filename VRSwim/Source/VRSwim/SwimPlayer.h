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
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Scene")
	class USceneComponent* VROrigin;

	UPROPERTY(EditAnywhere, Category = "Camera")
	class UCameraComponent* camera;

	FVector MovementInput;

public:
	// Sets default values for this character's properties
	ASwimPlayer();


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void MoveForward(float AxisValue);

	virtual void UpdateMovementFromController(AControllerHand* controller);

	UFUNCTION(BlueprintCallable, Category = "VR Setups")
	virtual void SetupPlayerVRHeight();

	UFUNCTION(BlueprintCallable, Category = "VR Setup")
	virtual void SetupGamePads();

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AControllerHand> controllerBP;

	UPROPERTY(EditAnywhere)
	float maxSpeed;

protected:
	AControllerHand* rightController;
	AControllerHand* leftController;
		
};
