// This file has been automatically generated by the Unreal Header Implementation tool

#include "Equipment/FGWeapon.h"
#include "DamageTypes/FGDamageType.h"

void AFGWeapon::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
AFGWeapon::AFGWeapon() : Super() {
	this->mMagSize = 5;
	this->mDamageTypeClass = UFGDamageType::StaticClass();
	this->mReloadTime = 1.5;
	this->mFireRate = 0.5;
	this->mBlockSprintWhenFiring = true;
	this->mEquipmentSlot = EEquipmentSlot::ES_ARMS;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bOnlyRelevantToOwner = true;
	this->bNetUseOwnerRelevancy = true;
	this->SetReplicates(true);
}
bool AFGWeapon::ShouldSaveState() const{ return bool(); }
void AFGWeapon::UnEquip(){ }
void AFGWeapon::Equip( AFGCharacterPlayer* character){ }
void AFGWeapon::AssignHud(AFGHUD * assoiatedHud){ }
void AFGWeapon::OnPrimaryFirePressed(){ }
void AFGWeapon::Server_StartPrimaryFire_Implementation(){ }
bool AFGWeapon::Server_StartPrimaryFire_Validate(){ return bool(); }
void AFGWeapon::BeginPrimaryFire(){ }
void AFGWeapon::OnPrimaryFireReleased(){ }
void AFGWeapon::Server_EndPrimaryFire_Implementation(){ }
bool AFGWeapon::Server_EndPrimaryFire_Validate(){ return bool(); }
void AFGWeapon::EndPrimaryFire(){ }
void AFGWeapon::OnReloadPressed(){ }
void AFGWeapon::Reload(){ }
bool AFGWeapon::CanReload() const{ return bool(); }
float AFGWeapon::GetReloadTimeLeft() const{ return float(); }
bool AFGWeapon::HasAmmunition() const{ return bool(); }
int32 AFGWeapon::GetSpareAmmunition() const{ return int32(); }
void AFGWeapon::FireAmmunition_Implementation(){ }
void AFGWeapon::AddEquipmentActionBindings(){ }
void AFGWeapon::RefireCheckTimer(){ }
void AFGWeapon::PlayFireEffect_Implementation(){ }
void AFGWeapon::ConsumeAmmunition(){ }
bool AFGWeapon::CanFire() const{ return bool(); }
void AFGWeapon::ActualReload(){ }
void AFGWeapon::PlayReloadEffects_Implementation(){ }
void AFGWeapon::Server_Reload_Implementation(){ }
bool AFGWeapon::Server_Reload_Validate(){ return bool(); }
UFGInventoryComponent* AFGWeapon::GetOwnersInventoryComponent() const{ return nullptr; }
