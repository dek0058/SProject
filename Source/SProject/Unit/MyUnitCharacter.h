// Copyright (c) 2025 cannot206.

#pragma once

#include "PaperZDCharacter.h"
#include "Team/Interface/IGTeamAgent.h"
#include "AbilitySystemInterface.h"

#include "MyUnitCharacter.generated.h"

UCLASS(Abstract, Config = Game, BlueprintType, Blueprintable)
class SPROJECT_API AMyUnitCharacter : public APaperZDCharacter, public IGTeamAgent, public IAbilitySystemInterface
{
    GENERATED_BODY()

public:
    AMyUnitCharacter();
	virtual void PostInitializeComponents() override;

    // IGTeamAgent
    virtual void SetGenericTeamId(const FGenericTeamId &InTeamID) override;
    virtual FGenericTeamId GetGenericTeamId() const override;
    // ~IGTeamAgent

    // IAbilitySystemInterface
    virtual class UAbilitySystemComponent *GetAbilitySystemComponent() const override;
    // ~IAbilitySystemInterface

public:
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Unit")
	FGuid UnitId;

	UPROPERTY(EditInstanceOnly, Category = "Team")
	uint8 TeamID = 255;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gameplay")
	TObjectPtr<class UGAbilitySystemComponent> AbilitySystemComponent;

};
