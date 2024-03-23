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

export default class MainAbility9 extends Ability {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam) {
    console.log("[Demo] MainAbility9 onCreate");
    globalThis.abilityWant = want;
    AppStorage.setOrCreate<common.UIAbilityContext>("context9", this.context);
    AppStorage.setOrCreate<number>("mainAbility9CallBackId", -1);
    AppStorage.setOrCreate<string[]>("mainAbility9ListKey", []);
  }

  onDestroy() {
    console.log("[Demo] MainAbility9 onDestroy");
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log("[Demo] MainAbility9 onWindowStageCreate");

    windowStage.loadContent("MainAbility/pages/index9", null);
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("[Demo] MainAbility9 onWindowStageDestroy");
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("[Demo] MainAbility9 onForeground");
    let abilityName = "";
    let AbilityLifecycleCallback = {
      onAbilityCreate(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityCreate");
      },
      onWindowStageCreate(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageCreate");
        AppStorage.get<string[]>("mainAbility9ListKey")!.push(abilityName + " onWindowStageCreate");
      },
      onAbilityForeground(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityForeground");
      },
      onAbilityBackground(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityBackground");
      },
      onWindowStageDestroy(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageDestroy");
        AppStorage.get<string[]>("mainAbility9ListKey")!.push(abilityName + " onWindowStageDestroy");
      },
      onAbilityDestroy(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityDestroy");
      },
      onAbilityContinue(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityContinue");
      },
      onWindowStageActive(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageActive");
        AppStorage.get<string[]>("mainAbility9ListKey")!.push(abilityName + " onWindowStageActive");
      },
      onWindowStageInactive(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageInactive");
        AppStorage.get<string[]>("mainAbility9ListKey")!.push(abilityName + " onWindowStageInactive");
      }
    }
    AppStorage.setOrCreate<common.ApplicationContext>("applicationContext9", this.context.getApplicationContext());
    if (AppStorage.get<number>("mainAbility9CallBackId")! == -1) {
      let callBackId = AppStorage.get<common.ApplicationContext>("applicationContext9")!.on("abilityLifecycle", AbilityLifecycleCallback);
      console.log("callBackId is aaa :" + callBackId);
      AppStorage.setOrCreate<number>("mainAbility9CallBackId", callBackId);
    }
    setTimeout(() => {
      commonEvent.publish("com.example.windowstagelifecycle_xts.MainAbility9.onForeground", () => {
        console.log("[Demo] MainAbility9 onForeground");
      });
    }, 1500)
  }

  onBackground() {
    // Ability has back to background
    console.log("[Demo] MainAbility9 onBackground");
  }
};
