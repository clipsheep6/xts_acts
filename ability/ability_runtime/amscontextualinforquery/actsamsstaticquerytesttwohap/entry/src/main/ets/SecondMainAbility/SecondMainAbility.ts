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
import common from '@ohos.app.ability.common';
import Want from '@ohos.app.ability.Want';
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import window from '@ohos.window';

export default class SecondAbility extends Ability {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("SecondAbility onCreate");
    AppStorage.setOrCreate<Want>("abilityWant", want);
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("SecondAbility onDestroy");
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log("SecondAbility onWindowStageCreate");
    windowStage.loadContent("pages/index", null);
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("SecondAbility onWindowStageDestroy");
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("SecondAbility onForeground");
    if (AppStorage.get<Want>("abilityWant")!.action == 'getAbilityContext2') {
      commonEvent.publish("SecondAbility_Start_CommonEvent_ability", {
        parameters: {
          hapModuleInfo: JSON.stringify(AppStorage.get<common.UIAbilityContext>("abilityContext")!.currentHapModuleInfo),
          applicationInfo: JSON.stringify(AppStorage.get<common.UIAbilityContext>("abilityContext")!.applicationInfo),
          abilityInfo: JSON.stringify(AppStorage.get<common.UIAbilityContext>("abilityContext")!.abilityInfo)
        }
      }, (err) => {
        console.log("MainAbility Publish CallBack MainAbility_Start_CommonEvent");
      });
      console.log('stub SerivceAbilityServer OnConnect start 2');
    }
  }

  onBackground() {
    // Ability has back to background
    console.log("SecondAbility onBackground");
  }
}
