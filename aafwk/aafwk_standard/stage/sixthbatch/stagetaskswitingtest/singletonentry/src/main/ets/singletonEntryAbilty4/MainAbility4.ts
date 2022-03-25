import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility4 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility4 onCreate");
        //    globalThis.abilityWant = want;
        commonEvent.publish("mainAbility4_onCreate", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onCreate")
        });

//        setTimeout(()=>{
//            this.context.terminateSelfWithResult({
//                resultCode: 1,
//                want:
//                {
//                    abilityName : "com.example.singletonentry.MainAbility4",
//                    bundleName : "com.example.etsmyapplication"
//                },}).then((data) => {
//                console.log("MainAbility4EventTest terminateSelf onCreate data: " + JSON.stringify(data))
//            }).catch((error) => {
//                console.log("MainAbility4EventTest terminateSelf onCreate error: " + JSON.stringify(error))
//            })
//        }, 5000)
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
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.ability2Context = this.context;
        commonEvent.publish("mainAbility4_onWindowStageCreate", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onWindowStageCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("MainAbilityEventTest terminateSelf windowStage data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("MainAbilityEventTest terminateSelf windowStage error: " + JSON.stringify(error))
            })
        }, 500)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility4 onWindowStageDestroy") ;
        commonEvent.publish("mainAbility4_onWindowStageDestroy", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility4 onForeground");
        commonEvent.publish("mainAbility4_onForeground", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onForeground")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("MainAbility4EventTest terminateSelf windowStage data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("MainAbility4EventTest terminateSelf windowStage error: " + JSON.stringify(error))
            })
        }, 5000)
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility4 onBackground");
        commonEvent.publish("mainAbility4_onBackground", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onBackground")
        });
    }
};
