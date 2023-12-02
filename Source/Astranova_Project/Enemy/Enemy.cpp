// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "GameFrameWork/CharacterMovementComponent.h"
#include "AIController.h"
#include "Perception/PawnSensingComponent.h"
#include "Astranova_Project/Component/AttributeComponent.h"
#include "Astranova_Project/Weapon/Weapon.h"
#include "Components/PrimitiveComponent.h"
#include "Astranova_Project/Character/MyCharacter.h" 
#include "Astranova_Project/Enemy/EnemyController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"


AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);
	GetMesh()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	GetMesh()->SetGenerateOverlapEvents(true);









	GetCharacterMovement()->bOrientRotationToMovement = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	

}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	Tags.Add(FName("Enemy"));

	EnemyController = Cast<AEnemyController>(GetController());
	Player = Cast<AMyCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AMyCharacter::StaticClass()));
	
	if (EnemyController)
	{

		EnemyController->GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), Player);
		//EnemyController->GetBlackboardComponent()->SetValueAsEnum(TEXT("State"), (uint8)EnemyState);
	}

	// Executing the behavior tree 
	EnemyController->RunBehaviorTree(BehaviorTree);



}

void AEnemy::HandleDamage(float DamageAmount)
{
	Super::HandleDamage(DamageAmount);


}

void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (EnemyController->GetBehaviorTreeComponent() && EnemyController->GetBlackboardComponent())
	{
		 uint8 State = (EnemyController->GetBlackboardComponent()->GetValueAsEnum(TEXT("CurrentState")));

		CurrentState = static_cast<EEnemyState>(State);

	}

	/*if (EnemyState > EEnemyState::EES_Patrolling) 
	{
		CheckCombatTarget();
	}
	else
	{
		CheckPatrolTarget();
	}*/
}

float AEnemy::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	HandleDamage(DamageAmount);
	CombatTarget = EventInstigator->GetPawn();

	
	return DamageAmount;
}

void AEnemy::GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter)
{
	Super::GetHit_Implementation(ImpactPoint, Hitter);

	
	SetWeaponCollision(ECollisionEnabled::NoCollision);
	StopAttackMontage();

	//debug messages 
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Enemy Health:%f"), Attributes->Health));
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

	if(CrossProduct.Z < 0) 
	{	
		Theta *= -1.f;	
	}
	FName SectionName;
	if (Theta >= -45.f && Theta < 45.f)
	{
		UE_LOG(LogTemp, Display, TEXT("front"));
		SectionName = FName("Front");
	}
	else if (Theta >= -135.f && Theta < -45.f)
	{
		UE_LOG(LogTemp, Display, TEXT("left"));
		SectionName = FName("FrontLeft");
	}
	else if (Theta >= 45.f && Theta < 135.f)
	{	
		UE_LOG(LogTemp, Display, TEXT("right"));
		SectionName = FName("FrontRight");
	}
	PlayHitReactMontage(SectionName);
	UE_LOG(LogTemp, Error, TEXT("Theta: %f"), Theta);
	// death of enemy 
	if (!Attributes->IsAlive())
	{
		//Falling on ground after death
		GetMesh()->SetCollisionProfileName(TEXT("Ragdoll2"));
		
		//CapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetMesh()->SetSimulatePhysics(true);
		SetLifeSpan(4.f);
		Player->bIsLockOn = false;
		//EquippedWeapon->Destroy(true);
	}
}

void AEnemy::StopAttackMontage()
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		AnimInstance->Montage_Stop(0.1f, AttackMontage);
	}
}

void AEnemy::AttackEnd()
{
	Super::AttackEnd();


	/*ChaseTarget();
	CheckCombatTarget();*/
}

void AEnemy::GiveDamage(AActor* DamagedActor, float DamageAmount, AController* EventInstigator, AActor* DamageCauser)
{
	UGameplayStatics::ApplyDamage(DamagedActor, DamageAmount, EventInstigator, DamageCauser, UDamageType::StaticClass());
}


void AEnemy::PlayHitReactMontage(const FName& SectionName)
{
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (AnimInstance)
	{
		AnimInstance->Montage_Play(HitReactMontage);
		AnimInstance->Montage_JumpToSection(SectionName, HitReactMontage);
	}
}



