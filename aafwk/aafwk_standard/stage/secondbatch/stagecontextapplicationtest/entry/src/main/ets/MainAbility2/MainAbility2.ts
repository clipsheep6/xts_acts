import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility2 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility2 onCreate")
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility2 onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility2 onWindowStageCreate")
        windowStage.setUIContent(this.context, "pages/index", null)
        globalThis.ability2Context = this.context;
        commonEvent.publish("MainAbility2_Start_CommonEvent", () => {
            console.log("MainAbility2 Publish CallBack MainAbility2_Start_CommonEvent")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("MainAbility2 terminateSelf data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("MainAbility2 terminateSelf error: " + JSON.stringify(error))
            })
        }, 500)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility2 onWindowStageDestroy")
        commonEvent.publish("MainAbility2_Destroy_CommonEvent", () => {
            console.log("MainAbility2 Publish CallBack MainAbility2_Destroy_CommonEvent")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility2 onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility2 onBackground")
    }
};
