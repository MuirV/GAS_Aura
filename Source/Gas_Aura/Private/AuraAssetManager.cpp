// Copyright Daisy


#include "AuraAssetManager.h"

#include "AbilitySystemGlobals.h"
#include "AuraGameplayTags.h"

UAuraAssetManager& UAuraAssetManager::Get()
{
	check(GEngine);

	UAuraAssetManager* AuraAssetManager = Cast<UAuraAssetManager>(GEngine->AssetManager);

	return *AuraAssetManager;
	
}

void UAuraAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();


	FAuraGameplayTags::InitializeNativeGameplayTags();

	//5.3以下版本需要手动调用InitGlobalData来初始化全局数据，5.3版本之后会自动调用
	UAbilitySystemGlobals::Get().InitGlobalData();
}
