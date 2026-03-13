// Copyright Daisy


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	UGameplayTagsManager& TagsManager = UGameplayTagsManager::Get();

    GameplayTags.Attributes_Primary_Strength = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Primary.Strength"),
        FString("Increases Physical damage")
    );

    GameplayTags.Attributes_Primary_Intelligence = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Primary.Intelligence"),
        FString("Increases Mana and Magic damage")
    );

    GameplayTags.Attributes_Primary_Resilience = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Primary.Resilience"),
        FString("Increases Armor and Block chance")
    );

    GameplayTags.Attributes_Primary_Vigor = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Primary.Vigor"),
        FString("Increases Health and Health regeneration")
    );

    GameplayTags.Attributes_Secondary_Armor = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Secondary.Armor"),
        FString("Reduces incoming physical damage")
    );

    GameplayTags.Attributes_Secondary_ArmorPenetration = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Secondary.ArmorPenetration"),
        FString("Ignores a percentage of enemy Armor")
    );

    GameplayTags.Attributes_Secondary_BlockChance = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Secondary.BlockChance"),
        FString("Chance to block incoming attacks")
    );

    GameplayTags.Attributes_Secondary_CriticalHitChance = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Secondary.CriticalHitChance"),
        FString("Chance to deal critical damage")
    );

    GameplayTags.Attributes_Secondary_CriticalHitDamage = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Secondary.CriticalHitDamage"),
        FString("Multiplier for critical hit damage")
    );

    GameplayTags.Attributes_Secondary_CriticalHitResistance = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Secondary.CriticalHitResistance"),
        FString("Reduces enemy critical hit chance against you")
    );

    GameplayTags.Attributes_Secondary_HealthRegeneration = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Secondary.HealthRegeneration"),
        FString("Health recovered per second")
    );

    GameplayTags.Attributes_Secondary_ManaRegeneration = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Secondary.ManaRegeneration"),
        FString("Mana recovered per second")
    );

    GameplayTags.Attributes_Secondary_MaxHealth = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Secondary.MaxHealth"),
        FString("Maximum Health")
    );

    GameplayTags.Attributes_Secondary_MaxMana = TagsManager.AddNativeGameplayTag(
        FName("Attributes.Secondary.MaxMana"),
        FString("Maximum Mana")
    );
	
    GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
        FName("InputTag.LMB"),
        FString("Input Tag for Left Mouse Button")
        );

    GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("InputTag.RMB"),
    FString("Input Tag for Right Mouse Button")
    );

    GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("InputTag.1"),
    FString("Input Tag for 1 Button")
    );

    GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("InputTag.2"),
    FString("Input Tag for 2 Button")
    );

    GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("InputTag.3"),
    FString("Input Tag for 3 Button")
    );

    GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("InputTag.4"),
    FString("Input Tag for 4 Button")
    );

    GameplayTags.Damage = UGameplayTagsManager::Get().AddNativeGameplayTag(
   FName("Damage"),
   FString("Damage")
   );


    /*
     * Damage Types 
     */
    GameplayTags.Damage_Fire = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Damage_Fire"),
    FString("Damage Fire Type")
    );

    GameplayTags.Damage_Lightning = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Damage_Lightning"),
    FString("Damage Lightning Type")
    );
    GameplayTags.Damage_Arcane = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Damage_Arcane"),
    FString("Damage Arcane Type")
    );
    GameplayTags.Damage_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Damage_Physical"),
    FString("Damage Physical Type")
    );
    
    /*
     * Resistance
     */

    GameplayTags.Attributes_Resistance_Arcane = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Resistance.Arcane"),
    FString("Resistance to Arcane damage")
    );
    GameplayTags.Attributes_Resistance_Fire = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Resistance.Fire"),
    FString("Resistance to Fire damage")
    );
    GameplayTags.Attributes_Resistance_Lightning = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Resistance.Lightning"),
    FString("Resistance to Lightning damage")
    );
    GameplayTags.Attributes_Resistance_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(
    FName("Attributes.Resistance.Physical"),
    FString("Resistance to Physical damage")
    );

    /*
     * Map of Damage Types to Resistance
     */
    
    GameplayTags.DamageTypesToResistance.Add(GameplayTags.Damage_Arcane, GameplayTags.Attributes_Resistance_Arcane);
    GameplayTags.DamageTypesToResistance.Add(GameplayTags.Damage_Fire, GameplayTags.Attributes_Resistance_Fire);
    GameplayTags.DamageTypesToResistance.Add(GameplayTags.Damage_Lightning, GameplayTags.Attributes_Resistance_Lightning);
    GameplayTags.DamageTypesToResistance.Add(GameplayTags.Damage_Physical, GameplayTags.Attributes_Resistance_Physical);

    /*
     * Effects
     */
    
    GameplayTags.Effects_HitReact = UGameplayTagsManager::Get().AddNativeGameplayTag(
   FName("Effects.HitReact"),
   FString("Tag granted when Hit Reacting")
   );

    
}
