// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterStats.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SWCARIBBEAN_API UCharacterStats : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterStats();
	
	UPROPERTY(BlueprintReadWrite, Category = "Player Stats")
		int CurrentSessionID;

	UPROPERTY(BlueprintReadWrite, Category = "Player Stats")
		FString CharacterName;

	UPROPERTY(BlueprintReadWrite, Category = "PlayerStats")
		bool IsPlayer;

	UPROPERTY(BlueprintReadWrite, Category = "Settings")
		bool NewCharacter = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
		float MaxHealth;

	UPROPERTY(BlueprintReadWrite, Category = "PlayerStats")
		float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
		float MaxStamina;

	UPROPERTY(BlueprintReadWrite, Category = "PlayerStats")
		float CurrentStamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
		float MaxMana;

	UPROPERTY(BlueprintReadWrite, Category = "PlayerStats")
		float CurrentMana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
		float NextLevelXP;

	UPROPERTY(BlueprintReadWrite, Category = "PlayerStats")
		float CurrentXP;

	UPROPERTY(BlueprintReadWrite, Category = "PlayerStats")
		int CurrentLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStats")
		int LevelCap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerAtributes")
		int Constitution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerAtributes")
		int Dexterity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerAtributes")
		int Inteligence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerAtributes")
		int Wisdom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerAtributes")
		int Charisma;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerAtributesValues")
		float FAddbyDex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerAtributesValues")
		float FAddByConst;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerAtributesValues")
		float FFinalAdd;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "PlayerInit")
		void StatsInit();

	UFUNCTION(BlueprintCallable, Category = "PlayerInit")
		void UpdatePlayerMainStatsData(float VMaxHealth, float VCurrentHealth, float VMaxStamina, float VCurrentStamina, float VMaxMana, float VCurrentMana);

	UFUNCTION(BlueprintCallable, Category = "PlayerInit")
		void UpdatePlayerSecondaryStatsData(int Cons, int Dex, int Intel, int Wis, int Char);

	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
