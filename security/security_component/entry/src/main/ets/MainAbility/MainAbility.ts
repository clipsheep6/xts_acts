import Ability from '@ohos.app.ability.UIAbility'
import Want from '@ohos.app.ability.Want'
import AbilityConstant from '@ohos.app.ability.AbilityConstant'
import GlobalContext from '../test/GlobalContext'

export default class MainAbility extends Ability {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("[Demo] MainAbility onCreate")
    GlobalContext.getContext().setObject('abilityWant', want);
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("[Demo] MainAbility onDestroy")
  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("[Demo] MainAbility onWindowStageCreate windowStage=" + windowStage)
    GlobalContext.getContext().setObject('abilityContext', this.context);
    GlobalContext.getContext().setObject('windowStage', windowStage);
    windowStage.setUIContent(this.context, "MainAbility/pages/index/index", null)
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