import AbilityStage from "@ohos.app.ability.AbilityStage"
import GlobalContext from '../test/GlobalContext'

export default class MyAbilityStage extends AbilityStage {
    onCreate() {
        console.log("[Demo] MyAbilityStage onCreate")
        GlobalContext.getContext().setObject('stageContext', this.context);
        GlobalContext.getContext().setObject('stageOnCreateRun', 1);
    }
}
