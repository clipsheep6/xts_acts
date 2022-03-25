import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility21 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility21 onCreate")
        commonEvent.publish("mainAbility21_onCreate", () => {
            console.log("MainAbility21 Publish CallBack mainAbility21_onCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("MainAbility21EventTest terminateSelf data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("MainAbility21EventTest terminateSelf error: " + JSON.stringify(error))
            })
        }, 2900)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility21 onDestroy")
        commonEvent.publish("mainAbility21_onDestroy", () => {
            console.log("MainAbility21 Publish CallBack mainAbility2_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility21 onWindowStageCreate")
        windowStage.setUIContent(this.context, "pages/index", null)
        globalThis.ability21Context = this.context;
        commonEvent.publish("mainAbility21_onWindowStageCreate", () => {
            console.log("MainAbility21 Publish CallBack onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility21 onWindowStageDestroy")
        commonEvent.publish("mainAbility21_onWindowStageDestroy", () => {
            console.log("MainAbility21 Publish CallBack onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility21 onForeground")
        commonEvent.publish("mainAbility21_onForeground", () => {
            console.log("MainAbility21 Publish CallBack onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility21 onBackground")
        commonEvent.publish("mainAbility21_onBackground", () => {
            console.log("MainAbility21 Publish CallBack onBackground")
        });
    }
};
