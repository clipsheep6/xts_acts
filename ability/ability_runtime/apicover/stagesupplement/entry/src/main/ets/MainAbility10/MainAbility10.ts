import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonEvent';

var printLog10 = "Stage:MainAbility10:";
var listPush10 = "Stage_MainAbility10_";
export default class MainAbility10 extends Ability {
    onCreate(want, launchParam) {
        console.info(printLog10 + "onCreate")

        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.info(printLog10 + "terminateSelf data = " + JSON.stringify(data));
            }).catch((err) => {
                console.info(printLog10 + "terminateSelf err = " + JSON.stringify(err));
            });
        }, 3000)
    }

    onDestroy() {
        console.info(printLog10 + "onDestroy")

        commonEvent.publish(listPush10 + "onDestroy", (err) => {
            console.info(printLog10 + listPush10 + "onDestroy");
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.info(printLog10 + "onWindowStageCreate")

        windowStage.setUIContent(this.context, "pages/index", null)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.info(printLog10 + "onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.info(printLog10 + "onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.info(printLog10 + "onBackground")
    }
};
