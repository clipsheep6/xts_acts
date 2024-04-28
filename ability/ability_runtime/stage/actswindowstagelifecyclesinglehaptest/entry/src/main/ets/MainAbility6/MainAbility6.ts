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

import Ability from '@ohos.app.ability.UIAbility';
import commonEvent from '@ohos.commonEvent';
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import Want from '@ohos.app.ability.Want';
import window from '@ohos.window';
import common from '@ohos.app.ability.common';

export default class MainAbility6 extends Ability {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam) {
    console.log("[Demo] MainAbility6 onCreate");
    globalThis.abilityWant = want;
  }

  onDestroy() {
    console.log("[Demo] MainAbility6 onDestroy");
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log("[Demo] MainAbility6 onWindowStageCreate");
    AppStorage.setOrCreate<common.UIAbilityContext>("ability6", this.context);
    windowStage.loadContent("MainAbility/pages/index6", null);
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("[Demo] MainAbility6 onWindowStageDestroy");
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("[Demo] MainAbility6 onForeground");

    let listKey6: string[] = [];
    let AbilityLifecycleCallback = {
      onAbilityCreate(ability) {
        console.log("[Demo] AbilityLifecycleCallback onAbilityCreate ability:" + JSON.stringify(ability));
      },
      onWindowStageCreate(ability, windowStage) {
        console.log("[Demo] AbilityLifecycleCallback onWindowStageCreate ability:" + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback onWindowStageCreate abilityname:" + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onWindowStageCreate");
        listKey6.push(abilityname + " onWindowStageCreate");
        console.log("[Demo] 1listKey6:" + JSON.stringify(listKey6));
      },
      onWindowStageActive(ability, windowStage) {
        console.log("[Demo] AbilityLifecycleCallback onWindowStageActive ability:" + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback onWindowStageActive abilityname:" + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onWindowStageActive");
        listKey6.push(abilityname + " onWindowStageActive");
        console.log("[Demo] 2listKey6:" + JSON.stringify(listKey6));
      },
      onWindowStageInactive(ability, windowStage) {
        console.log("[Demo] AbilityLifecycleCallback onWindowStageInactive ability:" + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback onWindowStageInactive abilityname:" + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onWindowStageInactive");
        listKey6.push(abilityname + " onWindowStageInactive");
        console.log("[Demo] 3listKey6:" + JSON.stringify(listKey6));
      },
      onWindowStageDestroy(ability, windowStage) {
        console.log("[Demo] AbilityLifecycleCallback onWindowStageDestroy ability:" + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback onWindowStageDestroy abilityname:" + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onWindowStageDestroy");
        listKey6.push(abilityname + " onWindowStageDestroy");
        console.log("[Demo] 4listKey6:" + JSON.stringify(listKey6));
      },
      onAbilityDestroy(ability) {
        console.log("[Demo] AbilityLifecycleCallback onAbilityDestroy ability:" + JSON.stringify(ability));
      },
      onAbilityForeground(ability) {
        console.log("[Demo] AbilityLifecycleCallback onAbilityForeground ability:" + JSON.stringify(ability));
      },
      onAbilityBackground(ability) {
        console.log("[Demo] AbilityLifecycleCallback onAbilityBackground ability:" + JSON.stringify(ability));
      },
      onAbilityContinue(ability) {
        console.log("[Demo] AbilityLifecycleCallback onAbilityContinue ability:" + JSON.stringify(ability));
      }
    }
    AppStorage.setOrCreate<common.ApplicationContext>("applicationContext6", AppStorage.get<common.UIAbilityContext>("ability6")!.getApplicationContext());
    let lifecycleid = AppStorage.get<common.ApplicationContext>("applicationContext6")!.on("abilityLifecycle", AbilityLifecycleCallback);
    console.log("[Demo] registerAbilityLifecycleCallback6 number: " + JSON.stringify(lifecycleid));
    AppStorage.setOrCreate<number>("callbackid6", lifecycleid);
    setTimeout(() => {
      console.log("[Demo] registerAbilityLifecycleCallback6 listKey: " + JSON.stringify(listKey6));
      globalThis.list6 = listKey6;
    }, 1500);
    setTimeout(() => {
      commonEvent.publish("com.example.windowstagelifecycle_xts.MainAbility6.onForeground", () => {
        console.log("[Demo] MainAbility1 onDestroy");
      });
    }, 1500)
  }

  onBackground() {
    // Ability has back to background
    console.log("[Demo] MainAbility6 onBackground");
  }
};
