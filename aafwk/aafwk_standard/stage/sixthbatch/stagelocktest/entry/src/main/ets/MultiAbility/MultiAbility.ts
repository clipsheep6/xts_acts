import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MultiAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MultiAbility onCreate");
        //    globalThis.abilityWant = want;
        commonEvent.publish("multiAbility_onCreate", () => {
            console.log("MultiAbility Publish CallBack MultiAbility_onCreate")
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MultiAbility onDestroy");
        commonEvent.publish("multiAbility_onDestroy", () => {
            console.log("MultiAbility Publish CallBack multiAbility_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MultiAbility onWindowStageCreate");
        commonEvent.publish("multiAbility_onWindowStageCreate", () => {
            console.log("MultiAbility Publish CallBack multiAbility_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MultiAbility onWindowStageDestroy") ;
        commonEvent.publish("multiAbility_onWindowStageDestroy", () => {
            console.log("MultiAbility Publish CallBack multiAbility_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MultiAbility onForeground");
        commonEvent.publish("multiAbility_onForeground", () => {
            console.log("MultiAbility Publish CallBack multiAbility_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MultiAbility onBackground");
        commonEvent.publish("multiAbility_onBackground", () => {
            console.log("MultiAbility Publish CallBack multiAbility_onBackground")
        });
    }
};
