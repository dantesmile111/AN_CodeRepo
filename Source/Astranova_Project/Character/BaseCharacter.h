

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Astranova_Project/Interface/HitInterface.h"
#include "BaseCharacter.generated.h"

UCLASS()
class ASTRANOVA_PROJECT_API ABaseCharacter : public ACharacter, public IHitInterface
{
	GENERATED_BODY()

public:
	ABaseCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter) override;

	/** Attributes Properties */
	virtual void HandleDamage(float DamageAmount);

	void PlayMontageSection(UAnimMontage* Montage, const FName& SectionName);
	int32 PlayRandomMontageSections(UAnimMontage* Montage, const TArray<FName>& SectionNames);
	int32 PlayAttackMontage();

	void Die();
	void PlayDeathMontage();
	/** Attributes Properties */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UAttributeComponent* Attributes;

	UPROPERTY(EditDefaultsOnly, Category = Montage)
	class UAnimMontage* HitReactMontage;
protected:
	virtual void BeginPlay() override;

	/** Combat Maintenance */
	virtual void Attack();
	/*virtual void Die();*/
	void DirectionalHitReact(const FVector& Impactpoint);
	/*virtual void HandleDamage(float DamageAmount);

	*/
	virtual bool CanAttack();
	void PlayHitSound(const FVector& ImpactPoint);
	void SpawnHitParticles(const FVector& ImpactPoint);
	/*virtual void DisableMeshCollision();


	UFUNCTION(BlueprintCallable)
	virtual	void DodgeEnd();
	*/


	UFUNCTION(BlueprintCallable)
	virtual	void AttackEnd();


	
	

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class AWeapon* EquippedWeapon;

	/** Montages */
	//void PlayHitReactMontage(const FName& SectionName);
	/*virtual int32 PlayAttackMontage();
	virtual int32 PlayDeathMontage();
	void StopAttackMontage();
	virtual void PlayDodgeMontage();*/

	UPROPERTY(BlueprintReadOnly, Category = Combat)
	AActor* CombatTarget;

	UPROPERTY(EditAnywhere, Category = Combat)
	double WarpTargetDistance = 75.f;

	/*UFUNCTION(BlueprintCallable)
	FVector GetTranslationWarpTarget();

	UFUNCTION(BlueprintCallable)
	FVector GetRotationWarpTarget();*/

	void DisableCapsule();

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* AttackMontage;

	UPROPERTY(EditAnywhere, Category = Montages)
	TArray<FName> AttackMontageSections;

	UPROPERTY(EditDefaultsOnly, Category = Montages)
	UAnimMontage* DeathMontage;

	UPROPERTY(EditAnywhere, Category = Montages)
	TArray<FName> DeathMontageSections;
private:

	UPROPERTY(EditAnywhere, Category = Sound)
	class USoundBase* HitSound;

	UPROPERTY(EditAnywhere, Category = VisualEffects)
	class UNiagaraSystem* HitParticles;

	UPROPERTY(EditAnywhere, Category = VisualEffects)
	class UNiagaraSystem* HitEffect;

	UPROPERTY(EditAnywhere, Category = VisualEffects)
	FVector HitEffectScale;

};
