import Ability from '@ohos.application.Ability'

export default class MainAbility extends Ability {
    onCreate(want, launchParam) {
        console.info("[Demo] MainAbility onCreate")
        globalThis.abilityWant = want;
    }

    onDestroy() {
        console.info("[Demo] MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.info("[Demo] MainAbility onWindowStageCreate")
        globalThis.abilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.info("[Demo] MainAbility onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.info("[Demo] MainAbility onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.info("[Demo] MainAbility onBackground")
    }
};
