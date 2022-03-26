import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class Entry2MainAbility extends Ability {

  onCreate(want, launchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("Entry2MainAbility onCreate");
    globalThis.abilityWant = want;
    commonEvent.publish("Entry2MainAbility_onCreate", () => {
      console.log("Entry2MainAbility Publish CallBack Entry2MainAbility_onCreate")
    });
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("Entry2MainAbility onDestroy");
    commonEvent.publish("Entry2MainAbility_onDestroy", () => {
      console.log("Entry2MainAbility Publish CallBack Entry2MainAbility_onDestroy")
    });
  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("Entry2MainAbility onWindowStageCreate");
    globalThis.abilityContext = this.context;
    windowStage.setUIContent(this.context, "pages/index", null);
    commonEvent.publish("Entry2MainAbility_onWindowStageCreate", () => {
      console.log("Entry2MainAbility Publish CallBack Entry2MainAbility_onWindowStageCreate")
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("Entry2MainAbility onWindowStageDestroy") ;
    commonEvent.publish("Entry2MainAbility_onWindowStageDestroy", () => {
      console.log("Entry2MainAbility Publish CallBack Entry2MainAbility_onWindowStageDestroy")
    });
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("Entry2MainAbility onForeground");
    commonEvent.publish("Entry2MainAbility_onForeground", () => {
      console.log("Entry2MainAbility Publish CallBack Entry2MainAbility_onForeground")
    });
  }

  onBackground() {
    // Ability has back to background
    console.log("Entry2MainAbility onBackground");
    commonEvent.publish("Entry2MainAbility_onBackground", () => {
      console.log("Entry2MainAbility Publish CallBack Entry2MainAbility_onBackground")
    });
  }
};
