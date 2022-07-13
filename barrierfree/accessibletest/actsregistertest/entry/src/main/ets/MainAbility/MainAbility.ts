import Ability from '@ohos.application.Ability'

export default class MainAbility extends Ability {
    onCreate(want, launchParam) {
        console.log("[RegisterStateTest] MainAbility onCreate")
        globalThis.abilityWant = want;
    }

    onDestroy() {
        console.log("[RegisterStateTest] MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("[RegisterStateTest] MainAbility onWindowStageCreate")
        globalThis.abilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("[RegisterStateTest] MainAbility onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("[RegisterStateTest] MainAbility onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log("[RegisterStateTest] MainAbility onBackground")
    }
};
