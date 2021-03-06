// This file has been automatically generated by the Unreal Header Implementation tool

#include "Resources/FGResourceNodeFrackingSatellite.h"
#include "Resources/FGResourceNodeFrackingCore.h"

AFGResourceNodeFrackingSatellite::AFGResourceNodeFrackingSatellite() : Super() {
	this->mPurity = RP_Normal;
	this->mAmount = RA_Infinite;
	this->mCanPlaceResourceExtractor = true;
	this->mExtractMultiplier = 1;
	this->mAllowDecal = true;
	this->SetReplicates(true);
	this->NetDormancy = DORM_Awake;
}
void AFGResourceNodeFrackingSatellite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGResourceNodeFrackingSatellite::OnConstruction(const FTransform& Transform){ }
void AFGResourceNodeFrackingSatellite::BeginPlay(){ }
void AFGResourceNodeFrackingSatellite::SetIsOccupied(bool occupied){ }
bool AFGResourceNodeFrackingSatellite::CanPlaceResourceExtractor() const{ return bool(); }
void AFGResourceNodeFrackingSatellite::Factory_SetActive(bool isActive){ }
void AFGResourceNodeFrackingSatellite::SetActive(bool isActive){ }
void AFGResourceNodeFrackingSatellite::SetExtractor(TWeakObjectPtr<  AFGBuildableFrackingExtractor > extractor){ }
void AFGResourceNodeFrackingSatellite::OnRep_State(){ }
void AFGResourceNodeFrackingSatellite::OnStateChanged_Native(EFrackingSatelliteState state, bool isFirstTimeActivated){ }
