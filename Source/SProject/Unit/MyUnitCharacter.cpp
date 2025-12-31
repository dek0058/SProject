// Copyright (c) 2025 cannot206.

#include "MyUnitCharacter.h"
#include "AbilitySystem/GAbilitySystemComponent.h"
#include "Paper2D/Classes/PaperFlipbookComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(MyUnitCharacter)

AMyUnitCharacter::AMyUnitCharacter()
{
	static FName AbilitySystemComponentName = TEXT("AbilitySystemComponent");
	AbilitySystemComponent = CreateDefaultSubobject<UGAbilitySystemComponent>(AbilitySystemComponentName);

	if (auto SpriteCom = GetSprite())
	{
		SpriteCom->CastShadow = true;
	}
}

void AMyUnitCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (!IsValid(this))
	{
		return;
	}

	check(AbilitySystemComponent);
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

void AMyUnitCharacter::SetGenericTeamId(const FGenericTeamId& InTeamID)
{
	TeamID = InTeamID.GetId();
}

FGenericTeamId AMyUnitCharacter::GetGenericTeamId() const
{
	return FGenericTeamId(TeamID);
}

UAbilitySystemComponent* AMyUnitCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
