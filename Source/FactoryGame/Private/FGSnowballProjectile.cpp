// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSnowballProjectile.h"
#include "GameFramework/RotatingMovementComponent.h"

AFGSnowballProjectile::AFGSnowballProjectile() : Super() {
	this->mRotatingMovementComp = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovementComponent"));
	this->mThrowRotation.Pitch = -360; this->mThrowRotation.Yaw = -35; this->mThrowRotation.Roll = -180;
	this->mDestroysRelevantActors = true;
	this->mDestroysFoliage = true;
	this->mMaxParticleSpawnsPerDetonation = 30;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = true; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->SetReplicatingMovement(true);
	this->SetReplicates(true);
	this->InitialLifeSpan = 3;
}
void AFGSnowballProjectile::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGSnowballProjectile::OnImpact(const FHitResult& hitResult){ }
float AFGSnowballProjectile::TakeDamage(float DamageAmount,  FDamageEvent const& DamageEvent,  AController* EventInstigator, AActor* DamageCauser){ return float(); }
bool AFGSnowballProjectile::ShouldSave_Implementation() const{ return bool(); }
bool AFGSnowballProjectile::NeedTransform_Implementation(){ return bool(); }
void AFGSnowballProjectile::SetToDetonate(float timeUntilDetonate){ }
void AFGSnowballProjectile::OnRep_DetonateIn(){ }
void AFGSnowballProjectile::SetAndEnableRotation(float scale){ }
