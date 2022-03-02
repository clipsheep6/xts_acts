import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

//var onForegroundTime = 0;

export default class MainAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("AbilityMultiInstanceTest onCreate")
        globalThis.abilityWant = want;
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("AbilityMultiInstanceTest onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("AbilityMultiInstanceTest onWindowStageCreate")
        globalThis.abilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null)
        console.log("AbilityMultiInstanceTest onWindowStageCreate finish")
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("AbilityMultiInstanceTest onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("AbilityMultiInstanceTest onForeground")
//        if (onForegroundTime > 0) {
//            commonEvent.publish("TestAppOnForeground", () => {
//                console.log("AbilityMultiInstanceTest TestAppOnForeground event published")
//            });
//        }
//        onForegroundTime++;
//        console.log("AbilityMultiInstanceTest onForeground Time:" + onForegroundTime)
    }

    onBackground() {
        // Ability has back to background
        console.log("AbilityMultiInstanceTest onBackground")
    }
};
