// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGGamePhaseManager.h"
#include "Net/UnrealNetwork.h"

AFGGamePhaseManager* AFGGamePhaseManager::Get(UWorld* world){ return nullptr; }
AFGGamePhaseManager* AFGGamePhaseManager::Get(UObject* worldContext){ return nullptr; }
AFGGamePhaseManager::AFGGamePhaseManager() : Super() {
	this->mGamePhase = EGamePhase::EGP_NA;
	this->mCurrentGamePhase = nullptr;
	this->mTargetGamePhase = nullptr;
	this->mIsGameCompleted = false;
}
void AFGGamePhaseManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFGGamePhaseManager, mCurrentGamePhase);
	DOREPLIFETIME(AFGGamePhaseManager, mTargetGamePhase);
	DOREPLIFETIME(AFGGamePhaseManager, mTargetGamePhasePaidOffCosts);
	DOREPLIFETIME(AFGGamePhaseManager, mPALaunchSequenceValues);
	DOREPLIFETIME(AFGGamePhaseManager, mIsGameCompleted);
}
void AFGGamePhaseManager::PostInitializeComponents(){ Super::PostInitializeComponents(); }
void AFGGamePhaseManager::BeginPlay(){ Super::BeginPlay(); }
void AFGGamePhaseManager::EndPlay(const EEndPlayReason::Type endPlayReason){ Super::EndPlay(endPlayReason); }
void AFGGamePhaseManager::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGamePhaseManager::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGamePhaseManager::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGamePhaseManager::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGGamePhaseManager::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGGamePhaseManager::NeedTransform_Implementation(){ return bool(); }
bool AFGGamePhaseManager::ShouldSave_Implementation() const{ return bool(); }
bool AFGGamePhaseManager::SetGamePhaseFromGamePhaseIndex(int32 inGamePhaseIndex){ return bool(); }
int32 AFGGamePhaseManager::GetGamePhaseIndexFromGamePhase( UFGGamePhase* inPhase) const{ return int32(); }
void AFGGamePhaseManager::GoToNextGamePhase(){ }
bool AFGGamePhaseManager::UpdateCurrentGamePhase( UFGGamePhase* inPhase){ return bool(); }
bool AFGGamePhaseManager::IsLastGamePhaseReached() const{ return bool(); }
bool AFGGamePhaseManager::ReadyToGoToNextGamePhase() const{ return bool(); }
void AFGGamePhaseManager::SetGamePhaseForTier(int32 tier){ }
void AFGGamePhaseManager::UnlockAllGamePhases(){ }
EGamePhase AFGGamePhaseManager::GetGamePhase() const{ return EGamePhase(); }
UFGGamePhase* AFGGamePhaseManager::GetGamePhaseFromGamePhaseEnum(EGamePhase gamePhase) const{ return nullptr; }
FText AFGGamePhaseManager::GetGamePhaseName(EGamePhase gamePhase) const{ return FText(); }
EGamePhase AFGGamePhaseManager::GetGamePhaseForSchematic(TSubclassOf< UFGSchematic > inSchematic){ return EGamePhase(); }
UFGGamePhase* AFGGamePhaseManager::GetGamePhaseFromSchematic(TSubclassOf< UFGSchematic > inSchematic){ return nullptr; }
UFGGamePhase* AFGGamePhaseManager::GetGamePhaseFromTechTier(int32 techTier) const{ return nullptr; }
EGamePhase AFGGamePhaseManager::GetGamePhaseForTechTier(int32 techTier) const{ return EGamePhase(); }
void AFGGamePhaseManager::GetBaseCostForGamePhase(EGamePhase gamePhase, TArray< FItemAmount >& out_cost){ }
void AFGGamePhaseManager::GetCostForGamePhase(EGamePhase gamePhase, TArray< FItemAmount >& out_cost){ }
int32 AFGGamePhaseManager::PayOffOnTargetGamePhase(FItemAmount payOff){ return int32(); }
TArray<UFGGamePhase*> AFGGamePhaseManager::GetCurrentAndRemainingGamePhases(UObject* worldContext){ return TArray<UFGGamePhase*>(); }
int32 AFGGamePhaseManager::GetLastTechTierForGamePhase(EGamePhase phase) const{ return int32(); }
void AFGGamePhaseManager::GetRemainingPhaseCosts(TArray<FRemainingPhaseCost>& out_remainingPhaseCosts){ }
void AFGGamePhaseManager::StoreProjectAssemblyLaunchSequenceValue(const FProjectAssemblyLaunchSequenceValue& ValueToStore){ }
bool AFGGamePhaseManager::GetProjectAssemblyLaunchSequenceValue(uint8 Key, FProjectAssemblyLaunchSequenceValue& PAValue) const{ return bool(); }
void AFGGamePhaseManager::OnRep_CurrentGamePhase(){ }
void AFGGamePhaseManager::OnRep_TargetGamePhase(){ }
void AFGGamePhaseManager::OnRep_TargetGamePhasePaidOffCosts(TArray<FItemAmount>& previousTargetGamePhasePaidOffCosts){ }
void AFGGamePhaseManager::OnRep_IsGameCompleted(){ }
void AFGGamePhaseManager::OnRep_ProjectAssemblyLaunchSequenceValues(){ }
void AFGGamePhaseManager::Debug_DumpStateToLog(){ }
void AFGGamePhaseManager::ResetGamePhase(){ }
void AFGGamePhaseManager::SetGameIsCompleted(){ }
void AFGGamePhaseManager::SubmitGamePhaseTelemetry(UFGGamePhase* currentGamePhase){ }
