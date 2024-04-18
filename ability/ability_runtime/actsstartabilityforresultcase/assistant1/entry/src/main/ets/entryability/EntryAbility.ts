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

const TAG = "aa_assistant1"
let startInfo = "";
let endInfo = "";

export default class EntryAbility extends UIAbility {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam): void {
    console.info(`${TAG} onCreate!`)
    startInfo = startInfo + "onCreate"
    commonEventManager.publish(TAG + "_onCreate", (err) => {
      console.log(TAG + "onCreate publish");
    });
  }

  onDestroy(): void {
    endInfo = endInfo + "onDestroy"

    console.info(`${TAG} onDestroy!`)
    commonEventManager.publish(TAG + "_onDestroy", (err) => {
      console.log(TAG + "onDestroy publish");
    });
  }

  onWindowStageCreate(windowStage: window.WindowStage): void {
    // Main window is created, set main page for this ability
    startInfo = startInfo + "onWindowStageCreate"
    console.info(`${TAG} onWindowStageCreate!`)

    windowStage.loadContent('pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
  }

  onWindowStageDestroy(): void {
    endInfo = endInfo + "onWindowStageDestroy"
    commonEventManager.publish(TAG + "_onWindowStageDestroy", (err) => {
      console.log(TAG + "onWindowStageDestroy publish");

    });
    // Main window is destroyed, release UI related resources
    console.info(`${TAG} onWindowStageDestroy!`)

    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground(): void {
    startInfo = startInfo + "onForeground"
    // Ability has brought to foreground
    console.info(`${TAG} onForeground!`)
    commonEventManager.publish(TAG + "_onForeground", (err) => {
    });
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
    let want: Want = {
      bundleName: 'com.example.aa_assistant1',
      abilityName: 'EntryAbility',
      parameters: {
        info: startInfo,
      },
    };
    let resultCode = 100;
    let abilityResult: common.AbilityResult = {
      want,
      resultCode
    };
    console.info(`${TAG} abilityResult:${JSON.stringify(abilityResult)}`)
    this.context.terminateSelfWithResult(abilityResult, () => {
      hilog.info(0x0000, 'testTag', '%{public}s', 'terminateSelfWithResult   1');
      commonEventManager.publish(TAG + "_result", { data: JSON.stringify(abilityResult) }, (err) => {
      });
    })
  }

  onBackground(): void {
    endInfo = endInfo + "onBackground"
    console.info(`${TAG} onBackground!`)
    commonEventManager.publish(TAG + "_onBackground", (err) => {
    });
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
