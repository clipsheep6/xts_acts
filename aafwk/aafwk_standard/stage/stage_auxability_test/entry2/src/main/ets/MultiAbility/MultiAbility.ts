import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MultiAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MultiAbility onCreate");
        //    globalThis.abilityWant = want;
        commonEvent.publish("multiAbility_onCreate", () => {
            console.log("SingletonAbility Publish CallBack multiAbility_onCreate")
        });

         setTimeout(()=>{
              this.context.terminateSelfWithResult({
                resultCode: 1,
                want:
                {
                  abilityName : "com.example.entry2.MultiAbility",
                  bundleName : "com.example.etsmyapplication"
                },}).then((data) => {
                console.log("MultiAbilityEventTest terminateSelf onCreate data: " + JSON.stringify(data))
              }).catch((error) => {
                console.log("MultiAbilityEventTest terminateSelf onCreate error: " + JSON.stringify(error))
              })
            }, 5000)
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
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.multiAbilityContext = this.context;
        commonEvent.publish("multiAbility_onWindowStageCreate", () => {
            console.log("MultiAbility Publish CallBack multiAbility_onWindowStageCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("MultiAbilityEventTest terminateSelf windowStage data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("MultiAbilityEventTest terminateSelf windowStage error: " + JSON.stringify(error))
            })
        }, 500)
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
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("MultiAbilityEventTest terminateSelf onForeground data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("MultiAbilityEventTest terminateSelf onForeground error: " + JSON.stringify(error))
            })
        }, 2000)
    }

    onBackground() {
        // Ability has back to background
        console.log("MultiAbility onBackground");
        commonEvent.publish("multiAbility_onBackground", () => {
            console.log("MultiAbility Publish CallBack multiAbility_onBackground")
        });
    }
};
