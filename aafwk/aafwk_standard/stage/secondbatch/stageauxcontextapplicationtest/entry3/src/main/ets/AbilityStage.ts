import AbilityStage from "@ohos.application.AbilityStage"
import commonEvent from '@ohos.commonevent'

export default class MyAbilityStage extends AbilityStage {
    onCreate() {
        console.log("assist_MyAbilityStage onCreate")
        globalThis.stageOnCreateRun = 1;
        globalThis.assistAppStageContext = this.context;
    }
}