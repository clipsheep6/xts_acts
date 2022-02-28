import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class AuxAPI7MainAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("AuxAPI7MainAbility onCreate");
        globalThis.auxAPI7AbilityWant = want;
        commonEvent.publish("auxAPI7MainAbility_onCreate", () => {
            console.log("MainAbility Publish CallBack auxAPI7MainAbility_onCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelfWithResult({
                resultCode: 1,
                want:
                {
                    bundleName : "com.example.auxiliaryabilitywithreturnvalue",
                    abilityName : "com.example.api7entry.AuxAPI7MainAbility"
                },}).then((data) => {
                console.log("AuxAPI7MainAbility terminateSelf onCreate data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("AuxAPI7MainAbility terminateSelf onCreate error: " + JSON.stringify(error))
            })
        }, 2000)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("AuxAPI7MainAbility onDestroy");
        commonEvent.publish("auxAPI7MainAbility_onDestroy", () => {
            console.log("MainAbility Publish CallBack auxAPI7MainAbility_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("AuxAPI7MainAbility onWindowStageCreate");
        globalThis.auxAPI7AbilityContext = this.context;
        windowStage.setUIContent(this.context, "pages/index", null);
        var bundleContext = globalThis.auxAPI7AbilityContext.createBundleContext("com.example.auxiliaryabilitywithreturnvalue");
        commonEvent.publish("auxAPI7MainAbility_onWindowStageCreate",
            {
                parameters: {
                    auxAbilityContext:
                    globalThis.auxAPI7AbilityContext,
                    auxstageContext:
                    globalThis.auxAPI7stageContext,
                }
            }
            ,() => {
            console.log("MainAbility Publish CallBack auxAPI7MainAbility_onWindowStageCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("assist_app_auxAPI7MainAbility terminateSelf data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("assist_app_auxAPI7MainAbility terminateSelf error: " + JSON.stringify(error))
            })
        }, 2000)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("AuxAPI7MainAbility onWindowStageDestroy") ;
        commonEvent.publish("auxAPI7MainAbility_onWindowStageDestroy", () => {
            console.log("MainAbility Publish CallBack auxAPI7MainAbility_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("AuxAPI7MainAbility onForeground");
        commonEvent.publish("auxAPI7MainAbility_onForeground", () => {
            console.log("MainAbility Publish CallBack auxAPI7MainAbility_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("AuxAPI7MainAbility onBackground");
        commonEvent.publish("auxAPI7MainAbility_onBackground", () => {
            console.log("MainAbility Publish CallBack auxAPI7MainAbility_onBackground")
        });
    }
};
