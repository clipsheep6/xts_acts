import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility41 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility41 onCreate");
        //    globalThis.abilityWant = want;
        commonEvent.publish("mainAbility4_onCreate", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("SUB_AA_OpenHarmony_Lock_0600 terminateSelf onDestroy data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("SUB_AA_OpenHarmony_Lock_0600 terminateSelf onDestroy error: " + JSON.stringify(error))
            })
        }, 3500)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility4 onDestroy");
        commonEvent.publish("mainAbility4_onDestroy", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility4 onWindowStageCreate");
        commonEvent.publish("MainAbility4_onWindowStageCreate", () => {
            console.log("MainAbility4 Publish CallBack MainAbility4_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility4 onWindowStageDestroy") ;
        commonEvent.publish("MainAbility4_onWindowStageDestroy", () => {
            console.log("MainAbility4 Publish CallBack MainAbility4_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility4 onForeground");
        commonEvent.publish("mainAbility4_onForeground", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility4 onBackground");
        commonEvent.publish("mainAbility4_onBackground", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onBackground")
        });
    }
};
