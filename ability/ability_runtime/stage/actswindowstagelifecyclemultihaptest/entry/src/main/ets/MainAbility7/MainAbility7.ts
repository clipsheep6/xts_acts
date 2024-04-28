/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import Want from '@ohos.app.ability.Want';
import window from '@ohos.window';
import common from '@ohos.app.ability.common';

export default class MainAbility7 extends Ability {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam) {
    console.log("[Demo] MainAbility7 onCreate");
    globalThis.abilityWant = want;
  }

  onDestroy() {
    console.log("[Demo] MainAbility7 onDestroy");
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log("[Demo] MainAbility7 onWindowStageCreate");
    AppStorage.setOrCreate<common.UIAbilityContext>("ability7context", this.context);
    windowStage.loadContent("MainAbility/pages/MainAbility7_pages", null);
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("[Demo] MainAbility7 onWindowStageDestroy");
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("[Demo] MainAbility7 onForeground");

    let listKey = [];
    let abilityName = "";
    let AbilityLifecycleCallback = {
      onAbilityCreate(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityCreate");
      },
      onWindowStageCreate(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageCreate");
        listKey.push(abilityName + " onWindowStageCreate");
        console.log("listKey is :" + listKey);
      },
      onWindowStageActive(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageActive");
        listKey.push(abilityName + " onWindowStageActive");
        console.log("listKey is :" + listKey);
      },
      onWindowStageInactive(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageInactive");
        listKey.push(abilityName + " onWindowStageInactive");
        console.log("listKey is :" + listKey);
      },
      onWindowStageDestroy(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageDestroy");
        listKey.push(abilityName + " onWindowStageDestroy");
        console.log("listKey is :" + listKey);
      },
      onAbilityForeground(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityForeground");
      },
      onAbilityBackground(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityBackground");
      },
      onAbilityDestroy(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityDestroy");
      },
      onAbilityContinue(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityContinue");
      }
    }
    AppStorage.setOrCreate<common.ApplicationContext>("ApplicationContext7", AppStorage.get<common.UIAbilityContext>("ability7context")!.getApplicationContext());
    let callBackId = AppStorage.get<common.ApplicationContext>("ApplicationContext7")!.on("abilityLifecycle", AbilityLifecycleCallback);
    AppStorage.setOrCreate<number>("mainAbility7CallBackId", callBackId);
    setTimeout(() => {
      AppStorage.get<string[]>("testEvent")!.push('MainAbility7onForeground');
    }, 1500);
  }

  onBackground() {
    // Ability has back to background
    console.log("[Demo] MainAbility7 onBackground");
  }
};
