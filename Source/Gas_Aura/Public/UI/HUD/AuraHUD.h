// Copyright Daisy

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AuraHUD.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;
struct FWidgetControllerParams;
class UOverlayWidgetController;
class UAuraUserWidget;
/**
 * 
 */
UCLASS()
class GAS_AURA_API AAuraHUD : public AHUD
{
	GENERATED_BODY()
public:

	UPROPERTY()
	TObjectPtr<UAuraUserWidget> OverlayWidget;

	UOverlayWidgetController* GetOverlayWidgetController(const FWidgetControllerParams& WCParams);

	void InitOverlay(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS);
protected:

	
private:
	//HUD 看到 OverlayWidgetClass，于是克隆出一个实例，这就是你在屏幕上看到的 UI
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAuraUserWidget> OverlayWidgetClass;

	//HUD 把这个控制器实例存入 OverlayWidgetController 变量中，以便以后重复使用
	UPROPERTY()
	TObjectPtr<UOverlayWidgetController> OverlayWidgetController;

	//HUD 看到 OverlayWidgetControllerClass，于是克隆出一个控制器实例
	UPROPERTY(EditAnywhere)
	TSubclassOf<UOverlayWidgetController> OverlayWidgetControllerClass;
};
