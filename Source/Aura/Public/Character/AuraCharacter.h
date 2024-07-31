// Copyright Sirapob Phasut

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AAuraCharacter();
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

private:
	void InitAbilityActorInfo();

public:
	UPROPERTY(BlueprintReadWrite, Category="Movement")
	FRotator RotationRate = FRotator(0.f, 400.f, 0.f);
	
};
