// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NightCharacterBase.generated.h"

class UNightCharacterDataAsset;

UCLASS()
class TEAM5_PLAYER_API ANightCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UNightCharacterDataAsset* StetData;
public:
	// Sets default values for this character's properties
	ANightCharacterBase();



};
