// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "FactoryGame.h"
#include "CoreMinimal.h"
#include "FGBuildableControlPanelHost.h"
#include "FGBuildableLightSource.h"
#include "FGBuildableLightsControlPanel.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam( FLightControlPanelStateChanged, bool, isEnabled );

/**
 * Native implementation for the lights control panel.
 */
UCLASS()
class FACTORYGAME_API AFGBuildableLightsControlPanel : public AFGBuildableControlPanelHost
{
	GENERATED_BODY()
public:
	// Begin Actor Interface
	virtual void GetLifetimeReplicatedProps( TArray< FLifetimeProperty >& OutLifetimeProps ) const override;
	// End Actor Interface

	//~ Begin IFGFactoryClipboardInterface
	bool CanUseFactoryClipboard_Implementation() override { return true; }
	UFGFactoryClipboardSettings* CopySettings_Implementation() override;
	bool PasteSettings_Implementation( UFGFactoryClipboardSettings* settings ) override;
	TSubclassOf<UObject> GetClipboardMappingClass_Implementation() override;
	//~ End IFGFactoryClipboardInterface
	
	/** Turn the lights on or off */
	UFUNCTION( BlueprintCallable, BlueprintAuthorityOnly, Category = "FactoryGame|Buildable|Light" )
    void SetLightEnabled( bool isEnabled );
	
	/** Set the control data for this light in one go, prefer this to multiple call to the specific parameters. */
	UFUNCTION( BlueprintCallable, BlueprintAuthorityOnly, Category = "FactoryGame|Buildable|Light" )
    void SetLightControlData( FLightSourceControlData data );

	/** Set the control data for this light and all it's controlled lights */
	void SetLightDataOnControlledLights( FLightSourceControlData data );

	/** Are the lights on or off, valid on client. */
	UFUNCTION( BlueprintPure, Category = "FactoryGame|Buildable|Light" )
    bool IsLightEnabled() const;
	
	/** Get the control data of this light, valid on client. */
	UFUNCTION( BlueprintPure, Category = "FactoryGame|Buildable|Light" )
    FLightSourceControlData GetLightControlData() const;

	UFUNCTION()
	virtual void OnRep_IsEnabled();

	UPROPERTY( BlueprintAssignable )
	FLightControlPanelStateChanged OnLightControlPanelStateChanged;
	
private:
	/** The parameters for the light output. */
	UPROPERTY( SaveGame, Replicated )
	FLightSourceControlData mLightControlData;

	/** Are the lights on or off. */
	UPROPERTY( SaveGame, ReplicatedUsing=OnRep_IsEnabled )
	bool mIsEnabled = true;
	
};
