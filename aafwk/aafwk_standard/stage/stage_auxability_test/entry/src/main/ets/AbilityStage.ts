import AbilityStage from "@ohos.application.AbilityStage"


export default class MyAbilityStage extends AbilityStage {

    onCreate() {
        console.log("MyAbilityStage onCreate")
        globalThis.stageOnCreateRun = 1;
        globalThis.auxstageContext = this.context;
        globalThis.eventList = [];
    }
}