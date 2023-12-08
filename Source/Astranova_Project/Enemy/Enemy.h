// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Astranova_Project/Character/BaseCharacter.h"
#include "Astranova_Project/Character/CharacterTypes.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class ASTRANOVA_PROJECT_API AEnemy : public ABaseCharacter
{
	GENERATED_BODY()
public:
	AEnemy();
	virtual void Tick(float DeltaTime) override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	virtual void GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attack)
	bool IsBackAttack;


	/*  UPROPERTY(BlueprintReadWrite, Category = Stats)
	  float Health;

	  UPROPERTY(BlueprintReadWrite, Category = Stats)
	  float HealthMax;*/


protected:
	virtual void BeginPlay() override;

	/** Health Management **/
	virtual void HandleDamage(float DamageAmount) override;



	void StopAttackMontage();

	virtual void AttackEnd() override;


private:

	UPROPERTY(EditAnywhere, Category = Weapon)
	TSubclassOf<class AWeapon> WeaponClass;

	

	UPROPERTY(BlueprintReadWrite,Category = Player, meta = (AllowPrivateAccess = "True"))
	class AMyCharacter* Player;

	UPROPERTY(BlueprintReadWrite, Category = Self, meta = (AllowPrivateAccess = "True"))
	class AEnemyController* EnemyController;

	// Behavior Tree Variables 
	UPROPERTY(EditAnywhere, Category = " behavior Tree", meta = (AllowPrivateAccess = "true"))
	class UBehaviorTree* BehaviorTree;

	UFUNCTION(BlueprintCallable)
	void GiveDamage(AActor* DamagedActor, float DamageAmount, AController* EventInstigator, AActor* DamageCauser);

	void PlayHitReactMontage(const FName& SectionName);

public:
	/////Variable

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	EEnemyState CurrentState;


public:

	//////////////// PUBLIC GETTERS


	FORCEINLINE UBehaviorTree* GetBehaviorTree() { return BehaviorTree; }















	//// Patrol Target
	//UPROPERTY(EditInstanceOnly, Category = "AI Navigation")
	//AActor* PatrolTarget;

	//UPROPERTY(EditInstanceOnly, Category = "AI Navigation") /** Patrol points manginng in array's */
	//TArray<AActor*> PatrolTargets;

	//UPROPERTY(EditAnywhere)
	//double PatrolRadius = 200.f;

	//FTimerHandle PatrolTimer;

	//UPROPERTY(EditAnywhere, Category = Combat)
	//float PatrollingSpeed = 125.f;

	//UPROPERTY(EditAnywhere, Category = "AI Navigaion")
	//float PatrolWaitMin = 1.f;

	//UPROPERTY(EditAnywhere, Category = "AI Navigaion")
	//float PatrolWaitMax = 2.f;

	//UPROPERTY(EditDefaultsOnly, Category = Combat)
	//float AcceptanceRadius = 90.f; // 50

	//UPROPERTY(EditAnywhere, Category = Combat)
	//double CombatRadius = 1000.f;

	//FTimerHandle AttackTimer;

	//UPROPERTY(EditAnywhere, Category = Combat)
	//float AttackMin = 0.2f;

	//UPROPERTY(EditAnywhere, Category = Combat)
	//float AttackMax = 0.5f;

	//UPROPERTY(EditAnywhere, Category = Combat)
	//double AttackRadius = 200.f; // 100

	//UPROPERTY(EditAnywhere, Category = Combat)
	//float ChasingSpeed = 300.f;


};
