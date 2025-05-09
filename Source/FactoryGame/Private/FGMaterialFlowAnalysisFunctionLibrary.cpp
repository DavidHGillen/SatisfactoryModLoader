// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGMaterialFlowAnalysisFunctionLibrary.h"

int32 FMaterialFlowGraph::GetDepth() const{ return int32(); }
struct FMaterialFlowNode* FMaterialFlowGraph::CreateNodeFromRecipe(TSubclassOf<UFGRecipe> recipe, int32 depth){ return nullptr; }
TArray< struct FMaterialFlowNode* > FMaterialFlowGraph::GetNodes(int32 depth) const{ return TArray<struct FMaterialFlowNode*>(); }
struct FMaterialFlowNode* FMaterialFlowGraph::CreateNodeFromOutput(TSubclassOf<class UFGItemDescriptor> descriptor, int32 depth){ return nullptr; }
void FMaterialFlowGraph::SortNodes(){ }
void FMaterialFlowGraph::UpdateTotals(){ }
FMaterialFlowConnection::FMaterialFlowConnection(){ }
FMaterialFlowNode::FMaterialFlowNode(){ }
FMaterialFlowGraph UFGMaterialFlowAnalysisFunctionLibrary::PerformMaterialFlowAnalysis(TArray< TSubclassOf< UFGRecipe > > recipes, const TArray< TSubclassOf< UFGRecipe > >& availableRecipes){ return FMaterialFlowGraph(); }
FMaterialFlowGraph UFGMaterialFlowAnalysisFunctionLibrary::PerformMaterialFlowAnalysis(TArray< TSubclassOf< UFGRecipe > > recipes,  AFGRecipeManager* recipeManager){ return FMaterialFlowGraph(); }
TArray< FMaterialFlowNode > UFGMaterialFlowAnalysisFunctionLibrary::GetGraphNodes(const FMaterialFlowGraph& graph, int32 depth){ return TArray<FMaterialFlowNode>(); }
void UFGMaterialFlowAnalysisFunctionLibrary::MaterialFlowAnalysisToLog(const TArray< FString >& recipeNames,  AFGRecipeManager* recipeManager){ }
void UFGMaterialFlowAnalysisFunctionLibrary::MaterialLookupToLog(const FString& itemName,  AFGRecipeManager* recipeManager){ }
