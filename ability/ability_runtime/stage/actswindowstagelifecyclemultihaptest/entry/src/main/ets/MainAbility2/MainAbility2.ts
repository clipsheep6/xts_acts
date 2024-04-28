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
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import Want from '@ohos.app.ability.Want';
import window from '@ohos.window';
import common from '@ohos.app.ability.common';

export default class MainAbility2 extends Ability {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam) {
    console.log('[Demo] MainAbility2 onCreate');
    globalThis.abilityWant = want;

    AppStorage.setOrCreate<string[]>("mainAbility2ListKey", []);
    let abilityName = "";
    let AbilityLifecycleCallback = {
      onAbilityCreate(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + ' onAbilityCreate');
      },
      onWindowStageCreate(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + ' onWindowStageCreate');
        AppStorage.get<string[]>("mainAbility2ListKey")!.push(abilityName + ' onWindowStageCreate');
        console.log("listKey is :" + AppStorage.get<string[]>("mainAbility2ListKey")!);
      },
      onWindowStageActive(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + ' onWindowStageActive');
        AppStorage.get<string[]>("mainAbility2ListKey")!.push(abilityName + ' onWindowStageActive');
        console.log("listKey is :" + AppStorage.get<string[]>("mainAbility2ListKey")!);
      },
      onWindowStageInactive(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + ' onWindowStageInactive');
        AppStorage.get<string[]>("mainAbility2ListKey")!.push(abilityName + ' onWindowStageInactive');
        console.log("listKey is :" + AppStorage.get<string[]>("mainAbility2ListKey")!);
      },
      onWindowStageDestroy(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + ' onWindowStageDestroy');
        AppStorage.get<string[]>("mainAbility2ListKey")!.push(abilityName + ' onWindowStageDestroy');
        console.log("listKey is :" + AppStorage.get<string[]>("mainAbility2ListKey")!);
      },
      onAbilityForeground(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + ' onAbilityForeground');
      },
      onAbilityBackground(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + ' onAbilityBackground');
      },
      onAbilityDestroy(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + ' onAbilityDestroy');
      },
      onAbilityContinue(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + ' onAbilityContinue');
      }
    }

    AppStorage.setOrCreate<common.ApplicationContext>("ApplicationContext2", this.context.getApplicationContext());
    let callBackId = AppStorage.get<common.ApplicationContext>("ApplicationContext2")!.on("abilityLifecycle", AbilityLifecycleCallback);
    AppStorage.setOrCreate<number>("mainAbility2CallBackId", callBackId);
  }

  onDestroy() {
    console.log('[Demo] MainAbility2 onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log("[Demo] MainAbility2 onWindowStageCreate");
    globalThis.ability3Context = this.context;
    windowStage.loadContent("MainAbility/pages/MainAbility2_pages", null);
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log('[Demo] MainAbility2 onWindowStageDestroy');
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('[Demo] MainAbility2 onForeground');
    setTimeout(() => {
      AppStorage.get<string[]>("testEvent")!.push('MainAbility2onForeground');
    }, 1500);
  }

  onBackground() {
    // Ability has back to background
    console.log('[Demo] MainAbility onBackground');
  }
};
