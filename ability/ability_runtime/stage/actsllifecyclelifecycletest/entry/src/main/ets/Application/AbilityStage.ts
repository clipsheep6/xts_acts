/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import AbilityStage from "@ohos.app.ability.AbilityStage";
import hilog from '@ohos.hilog';
import AbilityLifecycleCallback from '@ohos.app.ability.AbilityLifecycleCallback';
import common from '@ohos.app.ability.common';

const TEST_TAG = "TAG_MyAbilityStage";

export default class MyAbilityStage extends AbilityStage {
  onCreate() {
    console.log("[Demo] MyAbilityStage onCreate");
    globalThis.stageOnCreateRun = 1;
    globalThis.stageContext = this.context;

    AppStorage.setOrCreate<string[]>("mainAbilityStageListKey", []);
    let abilityName = "";
    let AbilityLifecycleCallback: AbilityLifecycleCallback = {
      onAbilityCreate(ability) {
        abilityName = ability.context.abilityInfo.name;
        AppStorage.get<string[]>("mainAbilityStageListKey")!.push(abilityName + " onAbilityCreate");
        hilog.info(0x0000, TEST_TAG, `AbilityLifecycleCallback ${abilityName} onAbilityCreate`);
      },
      onWindowStageCreate(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        AppStorage.get<string[]>("mainAbilityStageListKey")!.push(abilityName + " onWindowStageCreate");
        hilog.info(0x0000, TEST_TAG, `AbilityLifecycleCallback ${abilityName} onWindowStageCreate`);
      },
      onWindowStageActive(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        hilog.info(0x0000, TEST_TAG, `AbilityLifecycleCallback ${abilityName} onWindowStageActive`);
      },
      onWindowStageInactive(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        hilog.info(0x0000, TEST_TAG, `AbilityLifecycleCallback ${abilityName} onWindowStageInactive`);
      },
      onAbilityForeground(ability) {
        abilityName = ability.context.abilityInfo.name;
        AppStorage.get<string[]>("mainAbilityStageListKey")!.push(abilityName + " onAbilityForeground");
        hilog.info(0x0000, TEST_TAG, `AbilityLifecycleCallback ${abilityName} onAbilityForeground`);
      },
      onAbilityBackground(ability) {
        abilityName = ability.context.abilityInfo.name;
        AppStorage.get<string[]>("mainAbilityStageListKey")!.push(abilityName + " onAbilityBackground");
        hilog.info(0x0000, TEST_TAG, `AbilityLifecycleCallback ${abilityName} onAbilityBackground`);
      },
      onWindowStageDestroy(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        AppStorage.get<string[]>("mainAbilityStageListKey")!.push(abilityName + " onWindowStageDestroy");
        hilog.info(0x0000, TEST_TAG, `AbilityLifecycleCallback ${abilityName} onWindowStageDestroy`);
      },
      onAbilityDestroy(ability) {
        abilityName = ability.context.abilityInfo.name;
        AppStorage.get<string[]>("mainAbilityStageListKey")!.push(abilityName + " onAbilityDestroy");
        hilog.info(0x0000, TEST_TAG, `AbilityLifecycleCallback ${abilityName} onAbilityDestroy`);
      },
      onAbilityContinue(ability) {
        abilityName = ability.context.abilityInfo.name;
        AppStorage.get<string[]>("mainAbilityStageListKey")!.push(abilityName + " onAbilityContinue");
        hilog.info(0x0000, TEST_TAG, `AbilityLifecycleCallback ${abilityName} onAbilityContinue`);
      }
    }

    AppStorage.setOrCreate<common.ApplicationContext>("ApplicationContextStage", this.context.getApplicationContext());
    let callBackId = AppStorage.get<common.ApplicationContext>("ApplicationContextStage")!.on("abilityLifecycle", AbilityLifecycleCallback);
    AppStorage.setOrCreate<number>("mainAbilityStageCallBackId", callBackId);
    hilog.info(0x0000, TEST_TAG, `callBackId :${callBackId}`);
  }
}