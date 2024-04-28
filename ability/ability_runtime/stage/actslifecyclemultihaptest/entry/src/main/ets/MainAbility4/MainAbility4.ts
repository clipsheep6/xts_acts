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
import Want from '@ohos.app.ability.Want';
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import common from '@ohos.app.ability.common';
import window from '@ohos.window';

export default class MainAbility4 extends Ability {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam) {
    console.log("[Demo] MainAbility4 onCreate");
    globalThis.abilityWant = want;

    AppStorage.setOrCreate<string[]>("mainAbility4ListKey", []);
    let abilityName = "";
    let AbilityLifecycleCallback = {
      onAbilityCreate(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityCreate");
        AppStorage.get<string[]>("mainAbility4ListKey")!.push(abilityName + " onAbilityCreate");
      },
      onWindowStageCreate(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageCreate");
        AppStorage.get<string[]>("mainAbility4ListKey")!.push(abilityName + " onWindowStageCreate");
      },
      onWindowStageActive(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageActive");
      },
      onWindowStageInactive(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageInactive");
      },
      onAbilityForeground(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityForeground");
        AppStorage.get<string[]>("mainAbility4ListKey")!.push(abilityName + " onAbilityForeground");
      },
      onAbilityBackground(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityBackground");
        AppStorage.get<string[]>("mainAbility4ListKey")!.push(abilityName + " onAbilityBackground");
      },
      onWindowStageDestroy(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageDestroy");
        AppStorage.get<string[]>("mainAbility4ListKey")!.push(abilityName + " onWindowStageDestroy");
      },
      onAbilityDestroy(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityDestroy");
        AppStorage.get<string[]>("mainAbility4ListKey")!.push(abilityName + " onAbilityDestroy");
      },
      onAbilityContinue(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityContinue");
        AppStorage.get<string[]>("mainAbility4ListKey")!.push(abilityName + " onAbilityContinue");
      }
    }
    AppStorage.setOrCreate<common.ApplicationContext>("ApplicationContext4", this.context.getApplicationContext());
    AppStorage.setOrCreate<number>("mainAbility4CallBackId", AppStorage.get<common.ApplicationContext>("ApplicationContext4")!.on("abilityLifecycle", AbilityLifecycleCallback));
  }

  onDestroy() {
    console.log("[Demo] MainAbility4 onDestroy");
    setTimeout(() => {
      AppStorage.get<string[]>("testEvent")!.push('MainAbility4onDestroy');
    }, 1500);
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log("[Demo] MainAbility4 onWindowStageCreate");
    AppStorage.setOrCreate<common.UIAbilityContext>("ability4context", this.context);
    windowStage.loadContent("MainAbility/pages/MainAbility4_pages", null);
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("[Demo] MainAbility4 onWindowStageDestroy");
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("[Demo] MainAbility4 onForeground");
    setTimeout(() => {
      AppStorage.get<string[]>("testEvent")!.push('MainAbility4onForeground');
    }, 1500);
  }

  onBackground() {
    // Ability has back to background
    console.log("[Demo] MainAbility4 onBackground");
  }
};
