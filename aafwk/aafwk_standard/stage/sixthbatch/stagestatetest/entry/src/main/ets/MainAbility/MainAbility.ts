import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility extends Ability {

  onCreate(want, launchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("MainAbility onCreate");
    globalThis.abilityWant = want;
    commonEvent.publish("mainAbility_onCreate", () => {
      console.log("MainAbility Publish CallBack mainAbility_onCreate")
    });
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("MainAbility onDestroy");
    commonEvent.publish("mainAbility_onDestroy", () => {
      console.log("MainAbility Publish CallBack mainAbility_onDestroy")
    });
  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("MainAbility onWindowStageCreate");
    globalThis.abilityContext = this.context;
    windowStage.setUIContent(this.context, "pages/index", null);
    commonEvent.publish("mainAbility_onWindowStageCreate", () => {
      console.log("MainAbility Publish CallBack mainAbility_onWindowStageCreate")
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("MainAbility onWindowStageDestroy") ;
    commonEvent.publish("mainAbility_onWindowStageDestroy", () => {
      console.log("MainAbility Publish CallBack mainAbility_onWindowStageDestroy")
    });
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("MainAbility onForeground");
    commonEvent.publish("mainAbility_onForeground", () => {
      console.log("MainAbility Publish CallBack mainAbility_onForeground")
    });
  }

  onBackground() {
    // Ability has back to background
    console.log("MainAbility onBackground");
    commonEvent.publish("mainAbility_onBackground", () => {
      console.log("MainAbility Publish CallBack mainAbility_onBackground")
    });
  }
};
