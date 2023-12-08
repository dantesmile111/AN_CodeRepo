


#include "Weapon.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GamePlayStatics.h"
#include "Components/SphereComponent.h"
#include "Astranova_Project/Character/MyCharacter.h"
#include  "Astranova_Project\Enemy\Enemy.h"

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


	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::OnSphereOverlap);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &AWeapon::OnSphereEndOverlap);
	
	WeaponBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
	//WeaponBox->OnComponentBeginOverlap.AddDynamic(this, &AWeapon::OnBoxOverlap);
	// When Game starts 
	
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



void AWeapon::ExecuetGetHit(FHitResult& BoxHit)
{
	IHitInterface* HitInterface = Cast<IHitInterface>(BoxHit.GetActor());
	if (HitInterface)
	{
		HitInterface->Execute_GetHit(BoxHit.GetActor(), BoxHit.ImpactPoint, GetOwner());
	}
}


void AWeapon::SphereTrace(FHitResult& BoxHit)
{
	const FVector Start = BoxTraceStart->GetComponentLocation();
	const FVector End = BoxTraceEnd->GetComponentLocation();

	//FHitResult BoxHit;

	TArray <AActor*> ActorToIgnore;


	ActorToIgnore.Add(this);
	//IgnoreActors.AddUnique(BoxHit.GetActor());
	ActorToIgnore.AddUnique(GetOwner());

	for (AActor* Actor : IgnoreActors)
	{
		ActorToIgnore.AddUnique(Actor);
	}


	UKismetSystemLibrary::SphereTraceSingle
	(this,
			Start,
			End,
		BoxTraceExtent,	
		UEngineTypes::ConvertToTraceType(ECC_Visibility),
		true,
		ActorToIgnore,
		  EDrawDebugTrace::None, BoxHit,true, FLinearColor::Green
		);

	


	AEnemy* Enemy = Cast<AEnemy>(BoxHit.GetActor());

	if(BoxHit.GetActor())
	{

		//DrawDebugSphere(GetWorld(), BoxHit.ImpactPoint, 12.f, 5, FColor::Blue, false, 5.f);

		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Blue, FString::Printf(TEXT("DamageActor:%s"), *BoxHit.GetActor()->GetName()));
		}

		HitEventOccur();
		//UGameplayStatics::ApplyDamage(BoxHit.GetActor(), Damage, GetInstigator()->GetController(), GetOwner(), UDamageType::StaticClass());
		ExecuetGetHit(BoxHit);
	}


}


void AWeapon::SetWeaponCollision(ECollisionEnabled::Type CollisionEnabled)
{
	
	
	WeaponBox->SetCollisionEnabled(CollisionEnabled);
	IgnoreActors.Empty();
	
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



