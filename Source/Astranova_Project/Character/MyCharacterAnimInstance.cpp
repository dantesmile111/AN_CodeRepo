// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterAnimInstance.h"

#include "Astranova_Project/Character/MyCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "CharacterTypes.h"
#include "Camera/CameraComponent.h"
#include "Astranova_Project/CameraShake/MyLegacyCameraShake.h"
#include "Kismet/GameplayStatics.h"

UMyCharacterAnimInstance::UMyCharacterAnimInstance() :
	GroundSpeed(0.f),
	MovementOffset(0.f)
	
{



}

void UMyCharacterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	MyCharacter = Cast<AMyCharacter>(TryGetPawnOwner());
	//PlayerController = MyCharacter->GetPlayerController();

	if (MyCharacter && MyCharacter->GetCameraView())
	{
		CharacterMovement = MyCharacter->GetCharacterMovement();
		MyCharacter->GetCameraView()->SetFieldOfView(60.f);
		CameraDefaultFOV = MyCharacter->GetCameraView()->FieldOfView;
		CameraCurrentFOV = CameraDefaultFOV;
	}
}

void UMyCharacterAnimInstance::NativeUpdateAnimation(float DeltaTime)
{
	Super::NativeUpdateAnimation(DeltaTime);

	if (CharacterMovement)
	{
		GroundSpeed = UKismetMathLibrary::VSizeXY(CharacterMovement->Velocity);
		isFalling = CharacterMovement->IsFalling();
		//CharacterState = MyCharacter->GetCharacterState();
		ActionState = MyCharacter->GetActionState();
		bIsCrouched = MyCharacter->bIsCrouched;
		bIsEquipped = MyCharacter->bIsEquipped;
		bIsAttacking = MyCharacter->bIsAttacking;
		Yaw = MyCharacter->DeltaYaw;
		Pitch = MyCharacter->DeltaPitch;
		bTurnLeft = MyCharacter->bTurnLeft;
		bTurnRight = MyCharacter->bTurnRight;

		Speed = CharacterMovement->Velocity.Size2D();
		Angle = FRotationMatrix::MakeFromX(TryGetPawnOwner()->GetActorTransform().InverseTransformVectorNoScale(CharacterMovement->Velocity)).Rotator().Yaw;
		
		
		
		CharacterRotationLastFrame = CharacterRotation;
		CharacterRotation = MyCharacter->GetActorRotation();
		const FRotator Delta = UKismetMathLibrary::NormalizedDeltaRotator(CharacterRotation, CharacterRotationLastFrame);
		const float Target = Delta.Yaw / DeltaTime;
		const float Interp = FMath::FInterpTo(Lean, Target, DeltaTime, 1.5f);
		Lean = FMath::Clamp(Interp, -90.f, 90.f);
		
		
		
		if (bIsCrouched)
		{
			MyCharacter->GetCharacterMovement()->MaxWalkSpeed = 200.f;
		}

		bCanRun = MyCharacter->GetbCanRun(); /***/
		if (bCanRun)
		{
			CharacterMovement->MaxWalkSpeed = MaxRunningSpeed;
			//float RunningSpeed = CharacterMovement->Velocity.Length() + 5.f;
			//if (RunningSpeed <= MaxRunningSpeed)
			//{
			//	CharacterMovement->MaxWalkSpeed = RunningSpeed;
			//}
			//else
			//{
			//	CharacterMovement->MaxWalkSpeed = MaxRunningSpeed;
			//}
		}
		else
		{
			CharacterMovement->MaxWalkSpeed = MaxWalkingSpeed;
			//float WalkSpeed = CharacterMovement->Velocity.Length() + 5.f;
			//if (WalkSpeed <= MaxWalkingSpeed)
			//{
			//	CharacterMovement->MaxWalkSpeed = WalkSpeed;
			//}
			//else
			//{
			//	CharacterMovement->MaxWalkSpeed = MaxWalkingSpeed;
			//}
		}

		//if (CharacterState == ECharacterState::ECS_Equipped/* || bIsCrouched*/)
		//{
		//	MyCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
		//	MyCharacter->bUseControllerRotationYaw = true;
		//}

		//if (/*!bIsCrouched && */CharacterState == ECharacterState::ECS_Unequipped)
		//{
		//	MyCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;
		//	MyCharacter->bUseControllerRotationYaw = false;
		//}

		FRotator AimRotation = MyCharacter->GetBaseAimRotation();
		FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(MyCharacter->GetVelocity());
		//MovementOffset = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation).Yaw;
		FRotator DeltaRot = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, AimRotation);
		DeltaRotation = FMath::RInterpTo(DeltaRotation, DeltaRot, DeltaTime, 5.f);
		MovementOffset = DeltaRotation.Yaw;

		// todo Lean
		// 

		
		/** Camera Zoom and CameraShake*/
		if (GroundSpeed > 300.f)
		{
			CameraCurrentFOV = FMath::FInterpTo(CameraCurrentFOV, CameraZoomRunFOV, DeltaTime, 1.f);
			StartCameraShake();
		}
		else if (GroundSpeed > 0.f)
		{
			CameraCurrentFOV = FMath::FInterpTo(CameraCurrentFOV, CameraZoomWalkFOV, DeltaTime, 1.f);
			StartCameraShake();
		}
		else
		{
			CameraCurrentFOV = FMath::FInterpTo(CameraCurrentFOV, CameraDefaultFOV, DeltaTime, 1.f);
			StopCameraShake();
		}
		/** Camera */
		//
		//// Debug information.
		//if (GEngine)
		//{
		//	//GEngine->AddOnScreenDebugMessage(2, 1.f, FColor::Blue, FString::Printf(TEXT("CameraCurrentFOV:%f"), CameraCurrentFOV));
		//	if (MyCharacter->CameraShake)
		//	{
		//		//GEngine->AddOnScreenDebugMessage(3, 1.f, FColor::Red, FString::Printf(TEXT("Speed:%f"), GroundSpeed));
		//	}
		//}
		MyCharacter->GetCameraView()->SetFieldOfView(CameraCurrentFOV);

		//****** Turn in place
		//TurnInPlace();
	}
}

void UMyCharacterAnimInstance::StopCameraShake()
{
	// This is for walk and idle
	if (MyCharacter->CameraShake)
	{
		UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->StopCameraShake(MyCharacter->CameraShake);
	}
}

void UMyCharacterAnimInstance::StartCameraShake()
{
	// This is for walk and idle
	MyCharacter->CameraShake = Cast<UMyLegacyCameraShake>(UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->StartCameraShake(UMyLegacyCameraShake::StaticClass()));
}


	   /*	turn in place  */


//void UMyCharacterAnimInstance::TurnInPlace()
//{
//	if (MyCharacter == nullptr) return;
//	if (GroundSpeed > 0)
//	{
//		RootYawOffset = 0;
//		CharacterYaw = MyCharacter->GetActorRotation().Yaw;
//		CharacterYawLastFrame = CharacterYaw;
//		RotationCurve = 0.f;
//		RotationCurveLastFrame = 0.f;
//	}
//	else
//	{
//		CharacterYawLastFrame = CharacterYaw;
//		CharacterYaw = MyCharacter->GetActorRotation().Yaw;
//		const float YawDelta{ CharacterYaw - CharacterYawLastFrame };
//		RootYawOffset = UKismetMathLibrary::NormalizeAxis(RootYawOffset - YawDelta);
//		const float Turning{ GetCurveValue(TEXT("Turning")) };
//		if (Turning > 0)
//		{
//			RotationCurveLastFrame = RotationCurve;
//			RotationCurve = GetCurveValue(TEXT("Rotation"));
//			const float RootDeltaRotation{ RotationCurve - RotationCurveLastFrame };
//
//			// RootYawOffset > 0 -> Turning Left. RootYawOffset < 0 -> Turning Right 
//			RootYawOffset > 0 ? RootYawOffset -= RootDeltaRotation : RootYawOffset += RootDeltaRotation;
//			const float ABSRootYawOffset{ FMath::Abs(RootYawOffset) };
//
//			if (ABSRootYawOffset > 90.f)
//			{
//				const float YawExcess{ ABSRootYawOffset - 90.f };
//				RootYawOffset > 0 ? RootYawOffset -= YawExcess : RootYawOffset += YawExcess;
//			}
//			else
//			{
//
//			}
//		}
//	}
//}			