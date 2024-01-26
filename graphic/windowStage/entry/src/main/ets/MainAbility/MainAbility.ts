import Ability from '@ohos.app.ability.UIAbility'
import Want from '@ohos.app.ability.Want';
import GlobalContext from '../test/GlobalContext'
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import window from '@ohos.window';

export default class MainAbility extends Ability {
    onCreate(want:Want,launchParam: AbilityConstant.LaunchParam){
        // Ability is creating, initialize resources for this ability
        console.log("[Demo] MainAbility onCreate")
        GlobalContext.getContext().setObject("abilityWant",want)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("[Demo] MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage:window.WindowStage) {
        // Main window is created, set main page for this ability
        console.log("[Demo] MainAbility onWindowStageCreate windowStage="+ windowStage)
        GlobalContext.getContext().setObject("windowStage",windowStage)
        GlobalContext.getContext().setObject("abilityContext",this.context)

        let wStage:window.WindowStage =  GlobalContext.getContext().getObject("windowStage") as window.WindowStage
        console.log('WindowStage setObject: ' + JSON.stringify(wStage));

        windowStage.loadContent("MainAbility/pages/index/index", ()=>{})
    }

    onWindowStageDestroy() {
        //Main window is destroyed, release UI related resources
        console.log("[Demo] MainAbility onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("[Demo] MainAbility onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log("[Demo] MainAbility onBackground")
    }
};