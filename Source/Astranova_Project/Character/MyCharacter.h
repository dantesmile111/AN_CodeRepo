// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "CharacterTypes.h"
#include "InputActionValue.h"
#include "MyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class ASTRANOVA_PROJECT_API AMyCharacter : public ABaseCharacter
{
	GENERATED_BODY()
public:
	AMyCharacter();
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	void ReceiveDamage(float Damage);

	UFUNCTION(BlueprintCallable)
	void CombatMode();

	UFUNCTION(BlueprintCallable)
	void AfterEquippingSword();

	UFUNCTION(BlueprintCallable)
	void GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter);

	void PlayHitReactMontage(const FName& SectionName);

	void StopAttackMontage();
	
	// UFUNCTION(BlueprintCallable)
	// virtual void HandleDamage(float DamageAmount) override;


	//UPROPERTY()
	class UMyLegacyCameraShake* CameraShake;


	// CustomEvent
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Animation)
	class UMyCharacterAnimInstance* MainAnimInstance;


//	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = UI)
	//TSubclassOf<UPlayerAttributesWidget> WidgetTemplate;
	///////IMPORtant Booleans for checks

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Weapon)
	bool bHasPrimaryWeapon;

	/*</SetTarget>*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LockTarget)
	bool bIsLockOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LockTarget)
	bool bIsEquipped;

	float TargetingHeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = LockTarget)
	class AActor* LockedOnActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = LockTarget)
	TArray<AActor*> LockOnCandidates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attack)
	bool bIsAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attack)
	float DeltaYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attack)
	float DeltaPitch;

	UPROPERTY(BlueprintReadOnly, Category = Montages)
	bool bTurnRight;

	UPROPERTY(BlueprintReadOnly, Category = Montages)
	bool bTurnLeft;

	void ToggleLockOn();
	/*</SetTarget>*/

	
protected:
	virtual void BeginPlay() override;


	//virtual void GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter) override;



	// Player Movement EnhancedInput;
	void Move(const FInputActionValue& Value);
	void Stop(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	virtual void Jump() override;

	void Death();

	UFUNCTION(BlueprintCallable)

	void Dodge();
	void EKey();
	void ShiftKeyDown();
	void ShiftKeyUp();

	UFUNCTION()
	void CrouchToggle();
	/*void DashAbilityButtonPressed();
	void GameSlowAbility();*/
	void PrimaryWeaponKey();



	////Equpiment Functions
	void PlayEquipMontage(FName SectionName);

	UFUNCTION(BlueprintCallable)
	void AttachWeapon();

	UFUNCTION(BlueprintCallable)
	void SwitchHands();
	

	/** Attacks */
	void PlayAttackMontage(class UAnimMontage* MontageName);


	void Attack();

	





	// Player Enhanced Input
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	class UInputMappingContext* CharacterContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	class UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* EKeyAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* PrimaryWEaponKeyAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* AttackAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* CrouchAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* ShiftKeyAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* DashAbilityAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* TargetLockOn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* DodgeAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* SlowAbilityAction;
private:

	/***/
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* Cloth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* CharacterHead;

	UPROPERTY(VisibleAnywhere)
	class UGroomComponent* EyeBrows;

	UPROPERTY(VisibleAnywhere)
	UGroomComponent* Hair;

	UPROPERTY(VisibleAnywhere)
	UGroomComponent* Beard;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	APlayerController* PlayerController;

	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UPlayerAttributesWidget* AttributesWidget;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	ECharacterState CharacterState = ECharacterState::ECS_Unequipped;

	UPROPERTY(BlueprintReadWrite, meta = (AllowprivateAccess = "true"))
	EActionState ActionState = EActionState::EAS_Unoccupied;

	UPROPERTY(BlueprintReadWrite, meta = (AllowprivateAccess = "true"))
	EWeaponHand PrimaryHand = EWeaponHand::EWH_RightHand;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowprivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowprivateAccess = "true"))
	class USpringArmComponent* CombatSpringCameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraView;

	UPROPERTY(VisibleInstanceOnly)
	class AWeapon* OverlappingItem;

   // IMPORTANT VARIABLES 

	// UFUNCTION()
	// void ReceiveDamage(float Damage);
	
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Equipments, meta = (AllowPrivateAccess = "true"))
	//AWeapon* EquippedWeapon;

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* EquipMontage;

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* DodgeMontage;

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* DirectionalJumpMontage;

	//UPROPERTY(EditDefaultsOnly, Category = Montages)
	//UAnimMontage* DeathMontage;

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	bool bCanRun = false;

	

	UPROPERTY(EditAnywhere, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float CameraInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnEnemy, meta = (AllowPrivateAccess = "true"))
	bool SpawnOverlapped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MovementValue, meta = (AllowPrivateAccess = "true"))
	FVector MovementValue;

	// UFUNCTION()
	// void ReceiveDamage(float Damage);

public:
	
	FORCEINLINE void SetOverlapingItem(AWeapon* Item) { OverlappingItem = Item; }
	FORCEINLINE ECharacterState GetCharacterState() { return CharacterState; }

	FORCEINLINE APlayerController* GetPlayerController() { return PlayerController; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE AWeapon* GetEquippedWeapon() { return EquippedWeapon; }

	FORCEINLINE EActionState GetActionState() const { return ActionState; }
	FORCEINLINE bool GetbCanRun() { return bCanRun; }
	FORCEINLINE UCameraComponent* GetCameraView() { return CameraView; }
	FORCEINLINE float GetCameraInterpSpeed() { return CameraInterpSpeed; }

	//UFUNCTION(BlueprintCallable)
	//FORCEINLINE float GetHealth() {return (Attributes->Health);}
	//UFUNCTION(BlueprintCallable)
	//FORCEINLINE float GetHealthMax() { return Attributes->HealthMax); }
	
	
};
