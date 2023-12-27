// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GroomComponent.h"
#include "Astranova_Project/Weapon/Weapon.h"
#include "Animation/AnimMontage.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Astranova_Project/Component/AttributeComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "MyCharacterAnimInstance.h"
#include "Astranova_Project/Character/PlayerAttributesWidget.h"




AMyCharacter::AMyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;



	CharacterHead = CreateDefaultSubobject<USkeletalMeshComponent>(FName("Face"));
	CharacterHead->SetupAttachment(GetMesh());

	EyeBrows = CreateDefaultSubobject<UGroomComponent>(FName("EyeBrows"));
	EyeBrows->SetupAttachment(CharacterHead);

	Hair = CreateDefaultSubobject<UGroomComponent>(FName("Hair"));
	Hair->SetupAttachment(CharacterHead);

	Cloth = CreateDefaultSubobject<USkeletalMeshComponent>(FName("Cloth"));
	Cloth->SetupAttachment(GetMesh());

	Beard = CreateDefaultSubobject<UGroomComponent>(FName("Beard"));
	Beard->SetupAttachment(CharacterHead);

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 300.f;
	CameraBoom->SocketOffset = FVector(0, 40.f, 0.f);

	CameraView = CreateDefaultSubobject<UCameraComponent>(FName("CameraView"));
	CameraView->SetupAttachment(CameraBoom);
	//doesnt 
	//CameraView->bUsePawnControlRotation = false;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;

	CameraShake = nullptr;

	CombatSpringCameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName("CombatCameraBoom"));
	CombatSpringCameraBoom->SetupAttachment(GetRootComponent());

	bIsLockOn = false;
	TargetingHeightOffset = 20.f;// -10
	LockedOnActor = nullptr;

	//Health = Attributes->Health;
	//HealthMax = Attributes->HealthMax;

	MovementValue.X = 0.f;

	 


}










void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<APlayerController>(GetController());

	MainAnimInstance = Cast<UMyCharacterAnimInstance>(GetMesh()->GetAnimInstance());


	//AttributesWidget = CreateWidget<UPlayerAttributesWidget>(GetWorld(),);


	if (AttributesWidget)
	{
		//adding it to he viewport
		//AttributesWidget->AddToViewport();
		//AttributesWidget->SetHealthPercent(Attributes->Health / Attributes->HealthMax);
	}



	if (PlayerController)
	{
		if (UEnhancedInputLocalPlayerSubsystem* SubSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			SubSystem->AddMappingContext(CharacterContext, 0);
		}
	}

	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxAcceleration = 2048.f;

	Tags.Add(FName("Player"));


}




//////////////// LOCK ON 

void AMyCharacter::ToggleLockOn()
{

	if (bIsLockOn)
	{
		bIsLockOn = false;
		LockedOnActor = nullptr;
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, FString::Printf(TEXT("false")));
		}

		if (!bIsLockOn && bIsEquipped)
		{
			CharacterState = ECharacterState::ECS_Equipped;
		}

		else if (!bIsEquipped && !bIsLockOn)
		{
			CharacterState = ECharacterState::ECS_Unequipped;
		}

		if (CharacterState == ECharacterState::ECS_Equipped || CharacterState == ECharacterState::ECS_Unequipped)
		{

			GetCharacterMovement()->bOrientRotationToMovement = true;

		}
		

	}
	else
	{
		if (LockOnCandidates.Num() > 0)
		{
			LockedOnActor = LockOnCandidates[0];
			if (LockedOnActor)
			{
				bIsLockOn = true;
				if (bIsLockOn)
				{
					CharacterState = ECharacterState::ECS_Combat;
				}

				if (CharacterState == ECharacterState::ECS_Combat)
				{
					

					SetActorRotation(GetCameraView()->GetForwardVector().Rotation());
					GetCharacterMovement()->bOrientRotationToMovement = false;

				}
				



				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, FString::Printf(TEXT("true")));
				}
				
				
			}
		}
	}
}









void AMyCharacter::Move(const FInputActionValue& Value)
{
	if (ActionState != EActionState::EAS_Unoccupied) return;
	FVector2D MoveDirection = Value.Get<FVector2D>();

	FRotator Rotation = GetControlRotation();
	FRotator YawRotation(0, Rotation.Yaw, 0);

	FVector MoveForward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(MoveForward, MoveDirection.Y);

	FVector MoveRight = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(MoveRight, MoveDirection.X);

	MovementValue.X = MoveDirection.X;
}

void AMyCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxis = Value.Get<FVector2D>();

	
	AddControllerYawInput(LookAxis.X);
	AddControllerPitchInput(LookAxis.Y);
}



void AMyCharacter::Jump()
{
	Super::Jump();
	DisableInput(PlayerController);

	if (CharacterState == ECharacterState::ECS_Combat && GetCharacterMovement()->Velocity.Size2D() != 0.f)
	{
		FName SectionName = ""; 

		MainAnimInstance->Montage_Play(DirectionalJumpMontage);
		float Angle = MainAnimInstance->Angle + 180.f;

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString::Printf(TEXT("Angle : %f"), Angle));
		}

		if (FMath::Abs(Angle - 0.f) < 15.f || FMath::Abs(Angle - 360.f) < 15.f)
		{
			SectionName = "Jump_B";

			MainAnimInstance->Montage_JumpToSection(SectionName);
		}

		else if (FMath::Abs(Angle - 90.f) < 15.f)
		{

			SectionName = "Jump_L";
			
			MainAnimInstance->Montage_JumpToSection(SectionName);
		}

		else if (FMath::Abs(Angle - 180.f) < 15.f)
		{


			SectionName = "Jump_F";
			MainAnimInstance->Montage_JumpToSection(SectionName);
		}

		else if ( FMath::Abs(Angle - 270.f) < 15.f )
		{

			SectionName = "Jump_R";
			
			MainAnimInstance->Montage_JumpToSection(SectionName);
		}

		
	}


}

void AMyCharacter::Death()
{


	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString::Printf(TEXT("Character Died")));
	}


	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	
	if (AnimInstance && DeathMontage)
	{

	AnimInstance->Montage_Play(DeathMontage);

	if (EquippedWeapon)
	{
	EquippedWeapon->SetLifeSpan(3.f);

		}
	}
	
	GetMesh()->SetCollisionProfileName(TEXT("Ragdoll2"));
	GetMesh()->SetSimulatePhysics(true);
	



}



void AMyCharacter::Dodge()
{
	if (ActionState != EActionState::EAS_Unoccupied) return;
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && DodgeMontage)
	{
		AnimInstance->Montage_Play(DodgeMontage);
		ActionState = EActionState::EAS_Dodge;
	}
}

void AMyCharacter::EKey()
{
	AWeapon* OverlappedWeapon = Cast<AWeapon>(OverlappingItem);
	if (OverlappedWeapon)
	{
		FAttachmentTransformRules TransformRules(EAttachmentRule::SnapToTarget, true);
		OverlappedWeapon->AttachToComponent(this->GetMesh(), TransformRules, FName("RighthandSocket"));
		OverlappedWeapon->SetInstigator(this);
		OverlappedWeapon->SetOwner(this);
		OverlappedWeapon->DisableSphereCollision();
		CharacterState = ECharacterState::ECS_Equipped;

		bIsEquipped = true;
		OverlappingItem = nullptr;
		EquippedWeapon = OverlappedWeapon;

		CombatMode();

		
	}

}


void AMyCharacter::CrouchToggle()
{
	
	if (bIsCrouched)
	{
		UnCrouch();
		GetCharacterMovement()->MaxWalkSpeed = 300.f;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = 200.f;
		Crouch();
	}
}




void AMyCharacter::ShiftKeyDown()
{
	bCanRun = true;
}

void AMyCharacter::ShiftKeyUp()
{
	bCanRun = false;
}


void AMyCharacter::PrimaryWeaponKey()
{
	if (GEngine)
	{
		const FString Message = UEnum::GetValueAsString(ActionState);
		const FString Message2 = UEnum::GetValueAsString(CharacterState);

		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, Message );

		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, Message2);
		
	}
	

	if( EquippedWeapon == nullptr || ActionState != EActionState::EAS_Unoccupied) return;

	

	switch (CharacterState)
	{
	case ECharacterState::ECS_Equipped:
		PlayEquipMontage("Unequip");
		bIsEquipped = false;
		

		break;


	case ECharacterState::ECS_Unequipped:
		PlayEquipMontage("Equip");
		
		bIsEquipped = true;
		break;


	}
	
	CombatMode();

}


void AMyCharacter::PlayEquipMontage(FName SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();

	
	if (AnimInstance && EquipMontage)
	{

		

		AnimInstance->Montage_Play(EquipMontage);
		AnimInstance->Montage_JumpToSection(SectionName, EquipMontage);
		
		ActionState = EActionState::EAS_EquippingWeapon;
	}
	
}

void AMyCharacter::AttachWeapon()
{

	switch (CharacterState)
	{
	case ECharacterState::ECS_Equipped:

		EquippedWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("PrimaryWeaponPlace"));
		CharacterState = ECharacterState::ECS_Unequipped;

		break;

	case ECharacterState::ECS_Unequipped:
			EquippedWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("RighthandSocket"));
			CharacterState = ECharacterState::ECS_Equipped;

			break;

	}

	

}

void AMyCharacter::SwitchHands()
{

	switch (PrimaryHand)
	{
	case EWeaponHand::EWH_RightHand:

		EquippedWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("LeftHandSocket"));
		PrimaryHand = EWeaponHand::EWH_LeftHand;
		break;

	case EWeaponHand::EWH_LeftHand:

		EquippedWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("RighthandSocket"));
		PrimaryHand = EWeaponHand::EWH_RightHand;

		break; 

	}


}






void AMyCharacter::PlayAttackMontage(UAnimMontage* MontageName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && MontageName)
	{
		AnimInstance->Montage_Play(MontageName);
		int32 Selection = FMath::RandRange(0, 4);
		FName SectionName = FName("");
		switch (Selection)
		{
		case 0:
			SectionName = FName("Attack1");
			break;
		case 1:
			SectionName = FName("Attack2");
			break;
		case 2:
			SectionName = FName("Attack3");
			break;
		case 3:
			SectionName = FName("Attack4");
			break;
		}
		AnimInstance->Montage_JumpToSection(SectionName, MontageName);
	}
}

void AMyCharacter::Attack()
{
	if (EquippedWeapon == nullptr || CharacterState == ECharacterState::ECS_Unequipped || ActionState != EActionState::EAS_Unoccupied) return;
	
	if (bIsCrouched)
	{
		CrouchToggle();
		
	}
	PlayAttackMontage(AttackMontage);
	ActionState = EActionState::EAS_Attacking;

	
}







//////////////////// TICK 


void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Attributes)
	{
		Attributes->RegenerateStamina(DeltaTime);
		//UE_LOG(LogTemp, Warning, TEXT("DashPower: %f"), Attributes->GetStamina())
	}

	if (bIsLockOn)
	{
		FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), LockedOnActor->GetActorLocation());
		LookAtRotation.Pitch -= TargetingHeightOffset;
		GetController()->SetControlRotation(LookAtRotation);
	}

}

////






////////////////   INPUT BINDINGS


void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Ongoing, this, &AMyCharacter::Jump);
		
		EnhancedInputComponent->BindAction(ShiftKeyAction, ETriggerEvent::Triggered, this, &AMyCharacter::ShiftKeyDown);
		EnhancedInputComponent->BindAction(ShiftKeyAction, ETriggerEvent::Completed, this, &AMyCharacter::ShiftKeyUp);

		EnhancedInputComponent->BindAction(CrouchAction, ETriggerEvent::Triggered, this, &AMyCharacter::CrouchToggle);

		EnhancedInputComponent->BindAction(EKeyAction, ETriggerEvent::Triggered, this, &AMyCharacter::EKey);

		EnhancedInputComponent->BindAction(PrimaryWEaponKeyAction, ETriggerEvent::Triggered, this, &AMyCharacter::PrimaryWeaponKey);
		//EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Triggered, this, &AMyCharacter::Attack);
		
		//EnhancedInputComponent->BindAction(TargetLockOn, ETriggerEvent::Triggered, this, &AMyCharacter::ToggleLockOn);


		//EnhancedInputComponent->BindAction(DodgeAction, ETriggerEvent::Triggered, this, &AMyCharacter::Dodge);
		//EnhancedInputComponent->BindAction(SlowAbilityAction, ETriggerEvent::Triggered, this, &AMyCharacter::GameSlowAbility);
		//EnhancedInputComponent->BindAction(DashAbilityAction, ETriggerEvent::Triggered, this, &AMyCharacter::DashAbilityButtonPressed);
	}


	//PlayerInputComponent->BindAxis("TurnUP", this, &AMyCharacter::LookSideways);
	//PlayerInputComponent->BindAxis("LookSideways", this, &AMyCharacter::LookUp);


	/*PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyCharacter::MoveRight);
	

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyCharacter::Jump);
	PlayerInputComponent->BindAction("Equip", IE_Pressed, this, &AMyCharacter::EKey);

	PlayerInputComponent->BindAction("Attack1", IE_Pressed, this, &AMyCharacter::Attack);

	PlayerInputComponent->BindAction("Slide", IE_Pressed, this, &AMyCharacter::Slide);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AMyCharacter::CrouchButtonPressed);
	PlayerInputComponent->BindAction("Shift", IE_Pressed, this, &AMyCharacter::ShiftKeyDown);
	PlayerInputComponent->BindAction("Shift", IE_Released, this, &AMyCharacter::ShiftKeyUp);*/
}





float AMyCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{

	ReceiveDamage(DamageAmount);

	 if (AttributesWidget)
	 {

	 	AttributesWidget->SetHealthPercent(Attributes->Health / Attributes->HealthMax);
	 }


	 if (Attributes->Health == 0.f)
	 {
	 	//Death();

	 }
	return DamageAmount;
}

void AMyCharacter::ReceiveDamage(float Damage)
{

	Attributes->Health = FMath::Clamp(Attributes->Health - Damage, 0.f, Attributes->HealthMax);

}

void AMyCharacter::CombatMode()
{
	if (bIsEquipped)
	{
		GetCharacterMovement()->bOrientRotationToMovement = true;
		CameraView->SetupAttachment(CombatSpringCameraBoom);
		CombatSpringCameraBoom->TargetArmLength = 550.f;

	}

	if (!bIsEquipped)
	{
		CameraView->SetupAttachment(CameraBoom);
		GetCharacterMovement()->bOrientRotationToMovement = false;
	}

}



void AMyCharacter::GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter)
	{
		//Super::GetHit_Implementation(ImpactPoint, Hitter);

	if (EquippedWeapon)
	{

		//EquippedWeapon->SetWeaponCollision(ECollisionEnabled::NoCollision);

	}


		if (GetMesh()->GetAnimInstance()->Montage_IsPlaying(AttackMontage))
		{
			GetMesh()->GetAnimInstance()->Montage_Stop(0.2f, AttackMontage);

		}
		StopAttackMontage();

		//debug messages 
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Char Health:%f"), Attributes->Health));
		}



		///////////////////// hit react from different directions implimentation

		const FVector Forward = GetActorForwardVector();
		const FVector ToHit = (ImpactPoint - GetActorLocation()).GetSafeNormal();

		//Forward * ToHit = |Forward| |ToHit| * cos(Theta)
		// |Forward| = 1, |Tohit|= 1, Since they are normalized So forward * ToHit = cos(theta)
		const double CosTheta = FVector::DotProduct(Forward, ToHit);

		//take the inverse cosine (arc-cosine) of cos (theta) to just get Angle Theta 

		double Theta = FMath::Acos(CosTheta);
		//convert from radians to degrees 
		Theta = FMath::RadiansToDegrees(Theta);

		//if cross product vector is pointing down then Theta = negative; 
		const FVector CrossProduct = FVector::CrossProduct(Forward, ToHit);

		if (CrossProduct.Z < 0)
		{
			Theta *= -1.f;
		}
		FName SectionName;
		if (Theta >= -45.f && Theta < 45.f)
		{
			UE_LOG(LogTemp, Display, TEXT("front"));
			SectionName = FName("FromFront");
		}
		else if (Theta >= -135.f && Theta < -45.f)
		{
			UE_LOG(LogTemp, Display, TEXT("left"));
			SectionName = FName("FromLeft");
		}
		else if (Theta >= 45.f && Theta < 135.f)
		{
			UE_LOG(LogTemp, Display, TEXT("right"));
			SectionName = FName("FromRight");
		}
		else if (Theta >= 135.f && Theta < -135.f)
		{
			UE_LOG(LogTemp, Display, TEXT("back"));
			SectionName = FName("FromBack");
		}

		PlayHitReactMontage(SectionName);

		UE_LOG(LogTemp, Error, TEXT("Theta: %f"), Theta);



		// death of player 
		//if (!Attributes->IsAlive())
		//{
		//	//Falling on ground after death
	

		//	//CapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
		//	SetLifeSpan(4.f);
		//	bIsLockOn = false;
		//	//EquippedWeapon->Destroy(true);
		//}
	




}



void AMyCharacter::PlayHitReactMontage(const FName& SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		AnimInstance->Montage_Play(HitReactMontage);
		AnimInstance->Montage_JumpToSection(SectionName, HitReactMontage);
	}
}


void AMyCharacter::StopAttackMontage()
{

	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		AnimInstance->Montage_Stop(0.1f, AttackMontage);
	}
}


