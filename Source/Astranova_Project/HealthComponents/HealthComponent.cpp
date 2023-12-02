


#include "HealthComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Astranova_Project/Character/MyCharacter.h"
#include "Astranova_Project/HealthComponents/HealthComponent.h"
#include "Astranova_Project/Component/AttributeComponent.h"

AHealthComponent::AHealthComponent()
{
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("ItemMesh"));
	SetRootComponent(ItemMesh);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ItemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(FName("CollisionSphere"));
	CollisionSphere->SetupAttachment(GetRootComponent());
}

void AHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AHealthComponent::OnSphereOverlap);
	CollisionSphere->OnComponentEndOverlap.AddDynamic(this, &AHealthComponent::OnSphereEndOverlap);
}

void AHealthComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHealthComponent::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMyCharacter* MyCharacter = Cast<AMyCharacter>(OtherActor);
	if (MyCharacter && Attribute)
	{
		UE_LOG(LogTemp, Warning, TEXT("..........%s"), *MyCharacter->GetName());
		Attribute->Health += Health;
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("Player health:%f"), Attribute->Health));
		}
	}
}

void AHealthComponent::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	
}


