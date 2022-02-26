import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("ACTS_Process_MultiInstance_HapAA MainAbility onCreate")
        globalThis.abilityWant = want;
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("ACTS_Process_MultiInstance_HapAA MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("ACTS_Process_MultiInstance_HapAA MainAbility onWindowStageCreate")
        globalThis.abilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null)

//        if (globalThis.abilityWant.action == 'HapAAStartHapAF') {
//            globalThis.abilityContext.startAbility({
//                bundleName: "com.example.multiinstancehapa",
//                abilityName: "com.example.multiinstancehapaf.MainAbility"
//            }, (error, data) => {
//                console.log('ACTS_NewWant MainAbility onForeground - startAbility start HapAF: '
//                + JSON.stringify(error) + ", " + JSON.stringify(data))
//            })
//        }
            commonEvent.publish("HapAA_To_Test_CommonEvent", () => {
                console.log("ACTS_Process_MultiInstance_HapAA Publish CallBack HapAA_To_Test_CommonEvent")
            });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("ACTS_Process_MultiInstance_HapAA MainAbility onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("ACTS_Process_MultiInstance_HapAA MainAbility onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log("ACTS_Process_MultiInstance_HapAA MainAbility onBackground")
    }
};
