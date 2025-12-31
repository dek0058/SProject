// Copyright (c) 2025 cannot206.

#pragma once

#include "UI/MyActivatableWidget.h"

#include "StageBuildHUDWidget.generated.h"

class AStageBuildZone;

UCLASS(Abstract, editinlinenew, BlueprintType, Blueprintable, ClassGroup = "UI", meta = (Category = "My UI", DisableNativeTick, DontUseGenericSpawnObject = "true"), MinimalAPI)
class UStageBuildHUDWidget : public UMyActivatableWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void Setup(AStageBuildZone* OwnerBuildZone);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnSetup();

public:
	UPROPERTY(BlueprintReadOnly)
	TWeakObjectPtr<AStageBuildZone> Owner;

};
