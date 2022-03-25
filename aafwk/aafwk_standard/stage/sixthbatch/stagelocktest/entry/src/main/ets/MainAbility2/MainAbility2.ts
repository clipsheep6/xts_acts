import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility2 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility2 onCreate");
        //    globalThis.abilityWant = want;
        commonEvent.publish("mainAbility2_onCreate", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onCreate")
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility2 onDestroy");
        commonEvent.publish("mainAbility2_onDestroy", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility2 onWindowStageCreate");
        commonEvent.publish("mainAbility2_onWindowStageCreate", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility2 onWindowStageDestroy") ;
        commonEvent.publish("mainAbility2_onWindowStageDestroy", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility2 onForeground");
        commonEvent.publish("mainAbility2_onForeground", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility2 onBackground");
        commonEvent.publish("mainAbility2_onBackground", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onBackground")
        });
    }
};
