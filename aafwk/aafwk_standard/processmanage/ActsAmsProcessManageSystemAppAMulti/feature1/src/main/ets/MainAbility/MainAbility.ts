import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

var publishEventName = "event_SystemAppAMultiToSystemAppA";

function onReceivedPublishCallBack() {
    console.log("ACTS_ProcessManage SystemAppAMulti onReceivedPublishCallBack");
}

export default class MainAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("ACTS_ProcessManage SystemAppAMulti MainAbility onCreate")
        globalThis.abilityWant = want;
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("ACTS_ProcessManage SystemAppAMulti MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("ACTS_ProcessManage SystemAppAMulti MainAbility onWindowStageCreate")
        globalThis.abilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null)

    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("ACTS_ProcessManage SystemAppAMulti MainAbility onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("ACTS_ProcessManage SystemAppAMulti MainAbility onForeground")
        commonEvent.publish(publishEventName,onReceivedPublishCallBack);
    }

    onBackground() {
        // Ability has back to background
        console.log("ACTS_ProcessManage SystemAppAMulti MainAbility onBackground")
    }
};
