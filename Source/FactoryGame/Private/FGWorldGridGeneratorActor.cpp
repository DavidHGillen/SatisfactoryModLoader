// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWorldGridGeneratorActor.h"

#if WITH_EDITOR
void AFGWorldGridGeneratorActor::UpdateWorldGrid(){ }
#endif 
AFGWorldGridGeneratorActor::AFGWorldGridGeneratorActor() : Super() {
	this->mNumGridDivisions = 64;
	this->mWorldGridMin = FVector2D::ZeroVector;
	this->mWorldGridMax = FVector2D::ZeroVector;
}
void AFGWorldGridGeneratorActor::BeginPlay(){ Super::BeginPlay(); }
void AFGWorldGridGeneratorActor::GenerateWorldGrid(TArray< FFGWorldGridCellData >& CellData, FVector2D& GridMin, FVector2D& GridMax) const{ }
