// Copyright Daisy


#include "Input/AuraInputConfig.h"

const UInputAction* UAuraInputConfig::FindAbilityInputActionForTag(const FGameplayTag& InputTag,
	bool bLogNotFound) const
{
	for (const FAuraInputAction& Action : AbilityInputActions)
	{
		if (Action.InputAction && Action.InputTag == InputTag)
		{
			return Action.InputAction;
			
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogTemp, Warning, TEXT("Can't find AbilityInputAction for InputTag [%s]. Ability Input Action not found for tag: [%s]"),
			*InputTag.ToString(), *GetName());
	}
	return nullptr;
}
