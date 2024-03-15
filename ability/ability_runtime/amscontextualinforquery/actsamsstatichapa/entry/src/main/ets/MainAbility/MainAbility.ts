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
import Want from '@ohos.app.ability.Want';
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import window from '@ohos.window';

export default class MainAbility extends Ability {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("ACTS_getAbilityInfo_0400 MainAbility onCreate");
    AppStorage.setOrCreate<Want>("abilityWant", want);
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("ACTS_getAbilityInfo_0400 MainAbility onDestroy");
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log("ACTS_getAbilityInfo_0400 MainAbility onWindowStageCreate");
    windowStage.loadContent("pages/index", null);
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("ACTS_getAbilityInfo_0400 MainAbility onWindowStageDestroy");
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("ACTS_getAbilityInfo_0400 MainAbility onForeground");
    if (AppStorage.get<Want>("abilityWant")!.action == 'startHapA') {
      this.context.startAbility({
        bundleName: "com.acts.stinformationmulapp",
        abilityName: "com.example.feature.MainAbility",
        action: "startHapB"
      }, (error, data) => {
        console.log('ACTS_getAbilityInfo_0400 MainAbility onForeground - startAbility restart singleton: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      })
      commonEvent.publish("MainAbility_Start_CommonEvent_multi_hap_entry", {
        parameters: {
          hapModuleInfo: JSON.stringify(this.context.currentHapModuleInfo),
          applicationInfo: JSON.stringify(this.context.applicationInfo),
          abilityInfo: JSON.stringify(this.context.abilityInfo)
        }
      }, (err) => {
        console.log("ACTS_getAbilityInfo_0400 MainAbility Publish CallBack onForeground");
      });
    }
    console.log("ACTS_getAbilityInfo_0400 MainAbility onForeground");

    if (AppStorage.get<Want>("abilityWant")!.action == 'multiple') {
      commonEvent.publish("MainAbility_Start_CommonEvent_multiple_hap_entry", {
        parameters: {
          hapModuleInfo: JSON.stringify(this.context.currentHapModuleInfo),
          applicationInfo: JSON.stringify(this.context.applicationInfo),
          abilityInfo: JSON.stringify(this.context.abilityInfo)
        }
      }, (err) => {
        console.log("ACTS_getAbilityInfo_0400 MainAbility Publish CallBack onForeground");
      });
    }
  }

  onBackground() {
    // Ability has back to background
    console.log("ACTS_getAbilityInfo_0400 MainAbility onBackground");
  }
}
