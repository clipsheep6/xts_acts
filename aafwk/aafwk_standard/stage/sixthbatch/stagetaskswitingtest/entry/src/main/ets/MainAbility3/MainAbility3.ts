import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility3 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility3 onCreate");
        //    globalThis.abilityWant = want;
        commonEvent.publish("mainAbility3_onCreate", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onCreate")
        });

        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("MainAbility3EventTest terminateSelf windowStage data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("MainAbility3EventTest terminateSelf windowStage error: " + JSON.stringify(error))
            })
        }, 2500)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility3 onDestroy");
        commonEvent.publish("mainAbility3_onDestroy", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility3 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.ability2Context = this.context;
        commonEvent.publish("mainAbility3_onWindowStageCreate", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onWindowStageCreate")
        });

    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility3 onWindowStageDestroy") ;
        commonEvent.publish("mainAbility3_onWindowStageDestroy", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility3 onForeground");
        commonEvent.publish("mainAbility3_onForeground", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onForeground")
        });
//        setTimeout(()=>{
//            this.context.terminateSelf().then((data) => {
//                console.log("MainAbility3EventTest terminateSelf windowStage data: " + JSON.stringify(data))
//            }).catch((error) => {
//                console.log("MainAbility3EventTest terminateSelf windowStage error: " + JSON.stringify(error))
//            })
//        }, 5000)
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility3 onBackground");
        commonEvent.publish("mainAbility3_onBackground", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onBackground")
        });
    }
};
