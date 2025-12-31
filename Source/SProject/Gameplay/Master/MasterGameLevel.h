// Copyright (c) 2025 cannot206.

#pragma once

#include "Gameplay/GameplayLevel.h"

#include "MasterGameLevel.generated.h"

UCLASS()
class MY_API AMasterGameLevel : public AGameplayLevel
{
	GENERATED_BODY()

public:
	// IGLoadingProcess
	virtual bool ShouldShowLoadingScreen(FString& OutReason) const override;
	// ~IGLoadingProcess
};
