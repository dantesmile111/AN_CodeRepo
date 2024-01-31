// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterTypes.h"
#include "MyCharacterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ASTRANOVA_PROJECT_API UMyCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UMyCharacterAnimInstance();
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	void StopCameraShake();

	void StartCameraShake();

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	class AMyCharacter* MyCharacter;



	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	APlayerController* PlayerController;


	UPROPERTY(BlueprintReadOnly, Category = Movement)
	class UCharacterMovementComponent* CharacterMovement;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	float GroundSpeed;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	float Yaw;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	float Pitch;

	FRotator DeltaRotation;



	UPROPERTY(BlueprintReadOnly, Category = Movement)
	float MovementOffset;

	// the speed and angle that allows crouched animation blendspace 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Motion")
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Motion")
	float Angle;


	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool isFalling = false;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool bIsCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LockTarget)
	bool bIsEquipped;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool bCanRun;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool bIsAttacking;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool bTurnLeft;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool bTurnRight;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	ECharacterState CharacterState;

	UPROPERTY(BlueprintReadOnly, Category = Movement)
	EActionState ActionState;

	/** Camera Zoom*/

	float CameraDefaultFOV;

	float CameraZoomWalkFOV = 50.f;

	float CameraZoomRunFOV = 80.f;

	float CameraCurrentFOV;

	/** Turn In Place*/

	//float CharacterYaw;

	//float CharacterYawLastFrame;

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement | TurnInPlace")
	//float RootYawOffset;

	//float RotationCurve;

	//float RotationCurveLastFrame;

protected:
	//void TurnInPlace();
public:
};
