import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class Entry2MainAbility extends Ability {

  onCreate(want, launchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("Entry2MainAbility onCreate");
    //    globalThis.entry2AbilityWant = want;
    commonEvent.publish("entry2MainAbility_onCreate", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility_onCreate")
    });
    setTimeout(()=>{
      this.context.terminateSelfWithResult({
        resultCode: 1,
        want:
        {
          abilityName : "com.example.entry2.Entry2MainAbility",
          bundleName : "com.example.etsmyapplication"
        },}).then((data) => {
        console.log("Entry2MainAbilityEventTest terminateSelf onCreate data: " + JSON.stringify(data))
      }).catch((error) => {
        console.log("Entry2MainAbilityEventTest terminateSelf onCreate error: " + JSON.stringify(error))
      })
    }, 5000)
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("Entry2MainAbility onDestroy");
    commonEvent.publish("entry2MainAbility_onDestroy", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility_onDestroy")
    });

  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("Entry2MainAbility onWindowStageCreate");
    globalThis.entry2AbilityContext = this.context;
    windowStage.setUIContent(this.context, "pages/index", null);
    commonEvent.publish("entry2MainAbility_onWindowStageCreate",
      {
        parameters: {
          entry2AbilityContext:
          globalThis.entry2AbilityContext,
          entry2stageContext:
          globalThis.entry2stageContext
        }
      },() => {
      console.log("MainAbility Publish CallBack entry2MainAbility_onWindowStageCreate")
    });
    setTimeout(()=>{
      this.context.terminateSelf().then((data) => {
        console.log("EntryAbilityEventTest terminateSelf windowStage data: " + JSON.stringify(data))
      }).catch((error) => {
        console.log("EntryAbilityEventTest terminateSelf windowStage error: " + JSON.stringify(error))
      })
    }, 500)
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("Entry2MainAbility onWindowStageDestroy") ;
    commonEvent.publish("entry2MainAbility_onWindowStageDestroy", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility_onWindowStageDestroy")
    });
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("Entry2MainAbility onForeground");
    commonEvent.publish("entry2MainAbility_onForeground", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility_onForeground")
    });
    setTimeout(()=>{
      this.context.terminateSelf().then((data) => {
        console.log("Entry2MainAbilityEventTest terminateSelf windowStage data: " + JSON.stringify(data))
      }).catch((error) => {
        console.log("Entry2MainAbilityEventTest terminateSelf windowStage error: " + JSON.stringify(error))
      })
    }, 5000)
  }

  onBackground() {
    // Ability has back to background
    console.log("Entry2MainAbility onBackground");
    commonEvent.publish("entry2MainAbility_onBackground", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility_onBackground")
    });
  }
};
