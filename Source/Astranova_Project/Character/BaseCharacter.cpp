


#include "BaseCharacter.h"

#include "Components/CapsuleComponent.h"
#include "Astranova_Project/Weapon/Weapon.h"
#include "Components/BoxComponent.h"
#include "Astranova_Project/Component/AttributeComponent.h"
#include "Kismet/GamePlayStatics.h"
#include "NiagaraFunctionLibrary.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);

	Attributes = CreateDefaultSubobject<UAttributeComponent>(FName("Attribute Component"));
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

}

void ABaseCharacter::DisableCapsule()
{
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ABaseCharacter::HandleDamage(float DamageAmount)
{
	if (Attributes)
	{
		Attributes->ReceiveDamage(DamageAmount);
	}
}

void ABaseCharacter::GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter)
{
	//if (Attributes && Attributes->IsAlive() && Hitter)
	//{
	//	//DirectionalHitReact(Hitter->GetActorLocation());
	//	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	//	if (AnimInstance)
	//	{
	//		AnimInstance->Montage_Play(HitReactMontage);
	//	}
	//}
	//else
	//{
	//	Die();
	//}
	//EquippedWeapon->SetWeaponCollision(ECollisionEnabled::NoCollision);
	PlayHitSound(ImpactPoint);
	SpawnHitParticles(ImpactPoint);
}

void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseCharacter::Attack()
{
}

// void ABaseCharacter::DirectionalHitReact(const FVector& Impactpoint)
// {

// 	const FVector Forward = GetActorForwardVector();
// 	const FVector ImpactLowerd(Impactpoint.X, Impactpoint.Y, GetActorLocation().Z);
// 	const FVector ToHit = (ImpactLowerd - GetActorLocation()).GetSafeNormal();
// 	const double CosTheta = FVector::DotProduct(Forward, ToHit);
// 	double Theta = FMath::Acos(CosTheta);
// 	Theta = FMath::RadiansToDegrees(Theta);

// 	const FVector CrossProduct = FVector::CrossProduct(Forward, ToHit);
// 	if (CrossProduct.Z < 0)
// 	{
// 		Theta *= -1;
// 	}

// 	FName SectionName("ReactFromBack");
// 	if (Theta >= -45.f && Theta < 45.f)
// 	{
// 		SectionName = FName("ReactFromFront");
// 	}
// 	else if (Theta >= -135.f && Theta < -45.f)
// 	{
// 		SectionName = FName("ReactFromLeft");
// 	}
// 	else if (Theta >= 45.f && Theta < 135.f)
// 	{
// 		SectionName = FName("ReactFromRight");
// 	}
// 	PlayHitReactMontage(SectionName);
// }

bool ABaseCharacter::CanAttack()
{
	return false;
}

void ABaseCharacter::PlayHitSound(const FVector& ImpactPoint)
{
	if (HitSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, HitSound, ImpactPoint);
	}
}

void ABaseCharacter::SpawnHitParticles(const FVector& ImpactPoint)
{
	if (HitParticles && HitEffect)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, HitParticles, ImpactPoint);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, HitEffect, GetActorLocation(), GetActorRotation(), HitEffectScale);
	}
}

void ABaseCharacter::AttackEnd()
{

}

// void ABaseCharacter::PlayHitReactMontage(const FName& SectionName)
// {
// 	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
// 	if (AnimInstance)
// 	{
// 		AnimInstance->Montage_Play(HitReactMontage);
// 		AnimInstance->Montage_JumpToSection(SectionName, HitReactMontage);
// 	}
// }
void ABaseCharacter::PlayMontageSection(UAnimMontage* Montage, const FName& SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance && Montage)
	{
		AnimInstance->Montage_Play(Montage);
		AnimInstance->Montage_JumpToSection(SectionName, Montage);
	}
}

int32 ABaseCharacter::PlayRandomMontageSections(UAnimMontage* Montage, const TArray<FName>& SectionNames)
{
	if (SectionNames.Num() <= 0) return -1;
	const int32 MaxSelectionIndex = SectionNames.Num() - 1;
	const int32 Selection = FMath::RandRange(0, MaxSelectionIndex);
	PlayMontageSection(Montage, SectionNames[Selection]);
	return Selection;
}

int32 ABaseCharacter::PlayAttackMontage()
{
	return PlayRandomMontageSections(AttackMontage, AttackMontageSections);
}

void ABaseCharacter::Die()
{
	PlayDeathMontage();
	Tags.Add(FName("Dead"));
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ABaseCharacter::PlayDeathMontage()
{
	PlayRandomMontageSections(DeathMontage, DeathMontageSections);
}
