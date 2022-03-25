import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility3 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility3 onCreate")
        commonEvent.publish("mainAbility3_onCreate", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onCreate")
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility3 onDestroy")
        commonEvent.publish("mainAbility3_onDestroy", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility3 onWindowStageCreate")
        windowStage.setUIContent(this.context, "pages/index", null)
        globalThis.ability3Context = this.context;
        commonEvent.publish("mainAbility3_onWindowStageCreate", () => {
            console.log("MainAbility3 Publish CallBack onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility3 onWindowStageDestroy")
        commonEvent.publish("mainAbility3_onWindowStageDestroy", () => {
            console.log("MainAbility3 Publish CallBack onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility3 onForeground")
        commonEvent.publish("mainAbility3_onForeground", () => {
            console.log("MainAbility3 Publish CallBack onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility3 onBackground")
        commonEvent.publish("mainAbility3_onBackground", () => {
            console.log("MainAbility3 Publish CallBack onBackground")
        });
    }
};
