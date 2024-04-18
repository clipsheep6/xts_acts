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
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import hilog from '@ohos.hilog';
import UIAbility from '@ohos.app.ability.UIAbility';
import Want from '@ohos.app.ability.Want';
import window from '@ohos.window';
import common from '@ohos.app.ability.common';
import commonEventManager from '@ohos.commonEventManager';

export default class EntryAbility extends UIAbility {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam): void {
    hilog.info(0x0000, 'testTag5000', '%{public}s', 'Ability onCreate');
    globalThis.context = this.context
    commonEventManager.publish("AbilityOncreate", (err) => {
      console.log("AbilityOncreate publish");
    });
  }

  onDestroy(): void {
    hilog.info(0x0000, 'testTag5000', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage): void {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag5000', '%{public}s', 'Ability onWindowStageCreate');
    commonEventManager.publish("AbilityOnWindowStageCreate", (err) => {
      console.log("AbilityStageOncreate publish");
    });
    windowStage.loadContent('pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag5000', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag5000', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
  }

  onWindowStageDestroy(): void {
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, 'testTag5000', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground(): void {
    // Ability has brought to foreground
    hilog.info(0x0000, 'testTag5000', '%{public}s', 'Ability onForeground');
    commonEventManager.publish("AbilityOnForeground", (err) => {
      console.log("AbilityStageOncreate publish");
    });
    globalThis.context.startAbilityForResult({
      bundleName: "com.acts.startabilityforresult",
      abilityName: 'Assistant3Ability'
    }, async (err: any, result: common.AbilityResult) => {

    });
  }

  onBackground(): void {
    // Ability has back to background
    hilog.info(0x0000, 'testTag5000', '%{public}s', 'Ability onBackground');
  }
}
