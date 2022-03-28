import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("entry2 MainAbility onCreate");
        globalThis.abilityWant = want;
        commonEvent.publish("entry2_mainAbility_onCreate", () => {
            console.log("entry2 MainAbility Publish CallBack mainAbility_onCreate")
        });

        setTimeout(()=>{
            this.context.terminateSelfWithResult({
                resultCode: 1,
                want:
                {
                    abilityName : "com.example.entry2.MainAbility",
                    bundleName : "com.example.etsmyapplication"
                },}).then((data) => {
                console.log("SingletonAbilityEventTest terminateSelf onCreate data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("SingletonAbilityEventTest terminateSelf onCreate error: " + JSON.stringify(error))
            })
        }, 1000)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("entry2 MainAbility onDestroy");
        commonEvent.publish("entry2_mainAbility_onDestroy", () => {
            console.log("entry2 MainAbility Publish CallBack mainAbility_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("entry2 MainAbility onWindowStageCreate");
        globalThis.abilityContext = this.context;
        windowStage.setUIContent(this.context, "pages/index", null);
        commonEvent.publish("entry2_mainAbility_onWindowStageCreate", () => {
            console.log("entry2 MainAbility Publish CallBack mainAbility_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("entry2 MainAbility onWindowStageDestroy") ;
        commonEvent.publish("entry2_mainAbility_onWindowStageDestroy", () => {
            console.log("entry2 MainAbility Publish CallBack mainAbility_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("entry2 MainAbility onForeground");
        commonEvent.publish("entry2_mainAbility_onForeground", () => {
            console.log("entry2 MainAbility Publish CallBack mainAbility_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("entry2 MainAbility onBackground");
        commonEvent.publish("entry2_mainAbility_onBackground", () => {
            console.log("entry2 MainAbility Publish CallBack mainAbility_onBackground")
        });
    }
};
