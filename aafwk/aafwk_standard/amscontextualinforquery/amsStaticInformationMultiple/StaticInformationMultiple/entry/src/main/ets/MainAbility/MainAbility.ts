import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

//var onForegroundTime = 0;

export default class MainAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("queryAbilityTest onCreate")
        globalThis.abilityWant = want;
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("queryAbilityTest onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("queryAbilityTest onWindowStageCreate")
        globalThis.abilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null)
        console.log("queryAbilityTest onWindowStageCreate finish")
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("queryAbilityTest onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("queryAbilityTest onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log("queryAbilityTest onBackground")
    }
};
