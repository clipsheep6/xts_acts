/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import Ability from '@ohos.app.ability.UIAbility'

export default class MainAbility8 extends Ability {
  onCreate(want, launchParam) {
    console.log("[Demo] MainAbility8 onCreate")
    globalThis.abilityWant8 = want;
  }

  onDestroy() {
    console.log("[Demo] MainAbility8 onDestroy")
  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("[Demo] MainAbility8 onWindowStageCreate")
    globalThis.ability8 = this.context;
    windowStage.setUIContent(this.context, "MainAbility/pages/index8", null)
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("[Demo] MainAbility8 onWindowStageDestroy")
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("[Demo] MainAbility8 onForeground")
    let AbilityLifecycleCallback = {
      onAbilityCreate(ability) {
        console.log("[Demo] AbilityLifecycleCallback8 onAbilityCreate ability:"
        + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback8 onAbilityCreate abilityname:"
        + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onAbilityCreate");
      },
      onWindowStageCreate(ability, windowStage) {
        console.log("[Demo] AbilityLifecycleCallback8 onWindowStageCreate ability:"
        + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback8 onWindowStageCreate abilityname:"
        + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onWindowStageCreate");
      },
      onWindowStageActive(ability, windowStage) {
        let abilityname = ability.context.abilityInfo.name;
        console.log(abilityname + " onWindowStageActive")
      },
      onWindowStageInactive(ability, windowStage) {
        let abilityname = ability.context.abilityInfo.name;
        console.log(abilityname + " onWindowStageInactive")
      },
      onWindowStageDestroy(ability, windowStage) {
        console.log("[Demo] AbilityLifecycleCallback8 onWindowStageDestroy ability:"
        + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback8 onWindowStageDestroy abilityname:"
        + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onWindowStageDestroy");
      },
      onAbilityDestroy(ability) {
        console.log("[Demo] AbilityLifecycleCallback8 onAbilityDestroy ability:"
        + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback8 onAbilityDestroy abilityname:"
        + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onAbilityDestroy");
      },
      onAbilityForeground(ability) {
        console.log("[Demo] AbilityLifecycleCallback8 onAbilityForeground ability:"
        + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback8 onAbilityForeground abilityname:"
        + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onAbilityForeground");
      },
      onAbilityBackground(ability) {
        console.log("[Demo] AbilityLifecycleCallback8 onAbilityBackground ability:"
        + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback8 onAbilityBackground abilityname:"
        + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onAbilityBackground");
      },
      onAbilityContinue(ability) {
        console.log("[Demo] AbilityLifecycleCallback8 onAbilityContinue ability:"
        + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback8 onAbilityContinue abilityname:"
        + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onAbilityContinue");
      }
    }
    globalThis.applicationContext8 = this.context.getApplicationContext();
    let lifecycleid = globalThis.applicationContext8.registerAbilityLifecycleCallback(AbilityLifecycleCallback);
    console.log("[Demo] AbilityLifecycleCallback8 number: " + JSON.stringify(lifecycleid));
    globalThis.callbackid8 = lifecycleid;
    globalThis.applicationContext8.unregisterAbilityLifecycleCallback(lifecycleid, ()=>{
      console.log("[Demo]-----------unregisterAbilityLifecycleCallback success --------------" + lifecycleid);
    })
    setTimeout(()=>{
      this.context.terminateSelf();
    }, 1500)
  }

  onBackground() {
    // Ability has back to background
    console.log("[Demo] MainAbility8 onBackground")
  }
};
