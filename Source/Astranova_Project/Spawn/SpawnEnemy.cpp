


#include "SpawnEnemy.h"
#include "Components/SphereComponent.h"
#include "Astranova_Project/Character/MyCharacter.h"
#include "Astranova_Project/Enemy/Enemy.h"

ASpawnEnemy::ASpawnEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	Sphere = CreateDefaultSubobject<USphereComponent>(FName("Sphere"));
	Sphere->SetupAttachment(GetRootComponent());
}

void ASpawnEnemy::BeginPlay()
{
	Super::BeginPlay();

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ASpawnEnemy::OnSphereOverlap);
	Sphere->OnComponentEndOverlap.AddDynamic(this, &ASpawnEnemy::OnSphereEndOverlap);
}


void ASpawnEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnEnemy::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMyCharacter* MyCharacter = Cast<AMyCharacter>(OtherActor);
	UWorld* World = GetWorld();
	if (MyCharacter && World && EnemyClasses)
	{
		FRotator Rotation = GetActorRotation();
		Rotation.Yaw = MyCharacter->GetActorRotation().Yaw - 180.f;
		World->SpawnActor<AEnemy>(EnemyClasses, GetActorLocation(), Rotation);
	}
}

void ASpawnEnemy::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AMyCharacter* MyCharacter = Cast<AMyCharacter>(OtherActor);
	if (MyCharacter)
	{
		Sphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

