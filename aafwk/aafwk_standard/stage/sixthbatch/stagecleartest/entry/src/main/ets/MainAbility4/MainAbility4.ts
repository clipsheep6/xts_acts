import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility4 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility4 onCreate")
        commonEvent.publish("mainAbility4_onCreate", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onCreate")
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility4 onDestroy")
        commonEvent.publish("mainAbility4_onDestroy", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility4 onWindowStageCreate")
        windowStage.setUIContent(this.context, "pages/index", null)
        globalThis.ability4Context = this.context;
        commonEvent.publish("mainAbility4_onWindowStageCreate", () => {
            console.log("MainAbility4 Publish CallBack onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility4 onWindowStageDestroy")
        commonEvent.publish("mainAbility4_onWindowStageDestroy", () => {
            console.log("MainAbility4 Publish CallBack onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility4 onForeground")
        commonEvent.publish("mainAbility4_onForeground", () => {
            console.log("MainAbility4 Publish CallBack onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility4 onBackground")
        commonEvent.publish("mainAbility4_onBackground", () => {
            console.log("MainAbility4 Publish CallBack onBackground")
        });
    }
};
