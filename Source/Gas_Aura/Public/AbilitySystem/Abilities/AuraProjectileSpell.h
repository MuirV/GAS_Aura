// Copyright Daisy

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/AuraDamageGameplayAbility.h"
#include "AuraProjectileSpell.generated.h"

class AAuraProjectile;
class UGameplayEffect;
/**
 * 
 */
UCLASS()
class GAS_AURA_API UAuraProjectileSpell : public UAuraDamageGameplayAbility
{
	GENERATED_BODY()

protected:
	
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UFUNCTION(BlueprintCallable, Category = "Projectile")
	void SpawnProjectile(const FVector& ProjectileTargetLocation);
	//DamageEffectClass 作为配置项，让策划在蓝图里配置：“当这个技能激活时，去生成 BP_FireBolt 这个类，并附带 GE_FireDamage 这个效果”。
	//P156 DamageEffectClass被移动到AuraDamageGameplayAbility（继承自AuraGameplayAbility）中进一步解耦，ProjectileSpell只负责生成Projectile，DamageGameplayAbility负责生成DamageEffect并附加到Projectile上。
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AAuraProjectile> ProjectileClass;

	
	
};
