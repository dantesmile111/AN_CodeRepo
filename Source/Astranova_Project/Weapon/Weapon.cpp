


#include "Weapon.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GamePlayStatics.h"
#include "Components/SphereComponent.h"
#include "Astranova_Project/Character/MyCharacter.h"

AWeapon::AWeapon()
{

	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("ItemMesh"));
	RootComponent = ItemMesh;
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ItemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);

	SphereComponent = CreateDefaultSubobject<USphereComponent>(FName("SphereComponent"));
	SphereComponent->SetupAttachment(GetRootComponent());
	SphereComponent->SetSphereRadius(50);

	WeaponBox = CreateDefaultSubobject<UBoxComponent>(FName("Box"));
	WeaponBox->SetupAttachment(GetRootComponent());

	WeaponBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	WeaponBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	WeaponBox->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);

	BoxTraceStart = CreateDefaultSubobject<USceneComponent>(FName("Box Trace Start"));
	BoxTraceStart->SetupAttachment(GetRootComponent());

	BoxTraceEnd = CreateDefaultSubobject<USceneComponent>(FName("Box Trace End"));
	BoxTraceEnd->SetupAttachment(GetRootComponent());
}

void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::OnSphereOverlap);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &AWeapon::OnSphereEndOverlap);
	WeaponBox->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::OnBoxOverlap);

	// When Game starts 
	WeaponBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AWeapon::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMyCharacter* Character = Cast<AMyCharacter>(OtherActor);
	if (Character)
	{
		Character->SetOverlapingItem(this);
	}
}

void AWeapon::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AMyCharacter* Character = Cast<AMyCharacter>(OtherActor);
	if (Character)
	{
		Character->SetOverlapingItem(nullptr);
	}
}

void AWeapon::OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (GetOwner()->ActorHasTag(FName("Enemy")) && OtherActor->ActorHasTag(FName("Enemy")) ||
		GetOwner()->ActorHasTag(FName("Player")) && OtherActor->ActorHasTag(FName("Player")))
	{
		return;
	}
	FHitResult BoxHit;
	BoxTrace(BoxHit);
	UE_LOG(LogTemp, Display, TEXT("code works"));
	if (BoxHit.GetActor())
	{
		if (GetOwner()->ActorHasTag(FName("Enemy")) && OtherActor->ActorHasTag(FName("Enemy")) ||
			GetOwner()->ActorHasTag(FName("Player")) && OtherActor->ActorHasTag(FName("Player")))
		{
			return;
		}
		DrawDebugSphere(GetWorld(), BoxHit.ImpactPoint, 12.f, 5, FColor::Blue, false, 5.f);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Blue, FString::Printf(TEXT("DamageActor:%s"), *BoxHit.GetActor()->GetName()));
		}
		HitEventOccur();
		UGameplayStatics::ApplyDamage(BoxHit.GetActor(), Damage, GetInstigator()->GetController(), this, UDamageType::StaticClass());
		ExecuetGetHit(BoxHit);
	}
}

void AWeapon::ExecuetGetHit(FHitResult& BoxHit)
{
	IHitInterface* HitInterface = Cast<IHitInterface>(BoxHit.GetActor());
	if (HitInterface)
	{
		HitInterface->Execute_GetHit(BoxHit.GetActor(), BoxHit.ImpactPoint, GetOwner());
	}
}

bool AWeapon::ActorIsSameType(AActor* OtherActor)
{
	return  GetOwner()->ActorHasTag(FName("Enemy")) && OtherActor->ActorHasTag(FName("Enemy")) ||
		GetOwner()->ActorHasTag(FName("Player")) && OtherActor->ActorHasTag(FName("Player"));
}

void AWeapon::BoxTrace(FHitResult& BoxHit)
{
	const FVector Start = BoxTraceStart->GetComponentLocation();
	const FVector End = BoxTraceEnd->GetComponentLocation();

	TArray <AActor*> ActorToIgnore;
	ActorToIgnore.Add(this);

	for (AActor* Actor : IgnoreActors)
	{
		ActorToIgnore.AddUnique(Actor);
	}

	UKismetSystemLibrary::BoxTraceSingle(this,
		Start,
		End,
		BoxTraceExtent,
		BoxTraceStart->GetComponentRotation(),
		ETraceTypeQuery::TraceTypeQuery1,
		false,
		ActorToIgnore, bShowBoxDebug ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
		BoxHit,
		true);

	IgnoreActors.AddUnique(BoxHit.GetActor());
	IgnoreActors.AddUnique(GetOwner());
}

void AWeapon::DisableSphereCollsion()
{
	SphereComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeapon::AttachMeshToSocket(USceneComponent* InParant, const FName& SocketName, AActor* NewOwner, APawn* NewInstigator)
{
	SetOwner(NewOwner);	/* Setting Weapon Owner */
	SetInstigator(NewInstigator); /** AI Related */
	AttackWeapon(InParant, SocketName);

	//DisableSphereCollision();
}

void AWeapon::AttackWeapon(USceneComponent* InParant, const FName& SocketName)
{			//AttachWeapon
	FAttachmentTransformRules TransformRules(EAttachmentRule::SnapToTarget, true);
	ItemMesh->AttachToComponent(InParant, TransformRules, SocketName);
	DisableSphereCollision();
}

void AWeapon::DisableSphereCollision()// Disabling collision after equipping weapon 
{
	if (SphereComponent)
	{
		SphereComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}



