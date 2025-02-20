// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/NightCharacterDataAsset.h"



float UNightCharacterDataAsset::GetHealth() const
{
  return Health;
}

void UNightCharacterDataAsset::SetHealth(float value)
{
  Health = FMath::Clamp(value, 0.f, MaxHealth);
}

float UNightCharacterDataAsset::GetMaxHealth() const
{
  return MaxHealth;
}

void UNightCharacterDataAsset::SetMaxHealth(float value)
{
  MaxHealth = value;
}

float UNightCharacterDataAsset::GetDefence() const
{
  return Defence;
}

void UNightCharacterDataAsset::SetDefence(float value)
{
  Defence = value;
}
