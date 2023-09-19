// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterStats.h"

// Sets default values for this component's properties
UCharacterStats::UCharacterStats()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCharacterStats::BeginPlay()
{
	Super::BeginPlay();

	
}

void UCharacterStats::StatsInit()
{
	UE_LOG(LogTemp, Warning, TEXT("Initializing Player"));

	if (NewCharacter)
	{
		CharacterName = "DEV Player";
		FFinalAdd = Constitution * FAddByConst;
		MaxHealth = MaxHealth + FFinalAdd;
		CurrentHealth = MaxHealth;
		CurrentLevel = 1;
		CurrentMana = MaxMana;
		CurrentStamina = MaxStamina;
		CurrentXP = 0;

		UE_LOG(LogTemp, Warning, TEXT("Player Successfully Initialized with Default Settings"));
	}
}

void UCharacterStats::UpdatePlayerMainStatsData(float VMaxHealth, float VCurrentHealth, float VMaxStamina, float VCurrentStamina, float VMaxMana, float VCurrentMana)
{
	MaxHealth = VMaxHealth;
	CurrentHealth = VCurrentHealth;
	MaxStamina = VMaxStamina;
	CurrentStamina = VCurrentStamina;
	MaxMana = VMaxMana;
	CurrentMana = VCurrentMana;

}

void UCharacterStats::UpdatePlayerSecondaryStatsData(int Cons, int Dex, int Intel, int Wis, int Char)
{
	Constitution = Cons;
	Dexterity = Dex;
	Inteligence = Intel;
	Wisdom = Wis;
	Charisma = Char;
}







// Called every frame
void UCharacterStats::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

