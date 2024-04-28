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

import AbilityStage from "@ohos.app.ability.AbilityStage";
import common from '@ohos.app.ability.common';

export default class MyAbilityStage extends AbilityStage {
  onCreate() {
    console.log("[Demo] MyAbilityStage onCreate");
    console.log("[Demo] MyAbilityStage stagecontext: " + JSON.stringify(this.context));
    AppStorage.setOrCreate<string[]>("list", []);
    let AbilityLifecycleCallback = {
      onAbilityCreate(ability) {
        console.log("[Demo] AbilityLifecycleCallback onAbilityCreate ability:" + JSON.stringify(ability));
      },
      onWindowStageCreate(ability, windowStage) {
        console.log("[Demo] AbilityLifecycleCallback onWindowStageCreate ability:" + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback onWindowStageCreate abilityname:" + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onWindowStageCreate");
        AppStorage.get<string[]>("list")!.push(abilityname + " onWindowStageCreate");
      },
      onWindowStageActive(ability, windowStage) {
        console.log("[Demo] AbilityLifecycleCallback onWindowStageActive ability:" + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback onWindowStageActive abilityname:" + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onWindowStageActive");
        AppStorage.get<string[]>("list")!.push(abilityname + " onWindowStageActive");
      },
      onWindowStageInactive(ability, windowStage) {
        console.log("[Demo] AbilityLifecycleCallback onWindowStageInactive ability:" + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback onWindowStageInactive abilityname:" + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onWindowStageInactive");
        AppStorage.get<string[]>("list")!.push(abilityname + " onWindowStageInactive");
      },
      onWindowStageDestroy(ability, windowStage) {
        console.log("[Demo] AbilityLifecycleCallback onWindowStageDestroy ability:" + JSON.stringify(ability));
        let abilityname = ability.context.abilityInfo.name;
        console.log("[Demo] AbilityLifecycleCallback onWindowStageDestroy abilityname:" + JSON.stringify(abilityname));
        console.log("[Demo] " + abilityname + " onWindowStageDestroy");
        AppStorage.get<string[]>("list")!.push(abilityname + " onWindowStageDestroy");
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
    AppStorage.setOrCreate<common.ApplicationContext>("applicationContext", this.context.getApplicationContext());
    console.log("[Demo] stage applicationContext: " + JSON.stringify(AppStorage.get<common.ApplicationContext>("applicationContext")!));
    let lifecycleid = AppStorage.get<common.ApplicationContext>("applicationContext")!.on("abilityLifecycle", AbilityLifecycleCallback);
    console.log("[Demo] registerAbilityLifecycleCallback number: " + JSON.stringify(lifecycleid));
    AppStorage.setOrCreate<number>("callbackid", lifecycleid);
  }
}