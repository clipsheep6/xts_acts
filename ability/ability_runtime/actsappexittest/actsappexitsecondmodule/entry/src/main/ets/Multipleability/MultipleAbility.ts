/*
* Copyright (c) 2024 Huawei Device Co., Ltd.
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

import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';
import { BusinessError, Callback } from '@ohos.base';
import Want from '@ohos.app.ability.Want';

let abilityWant: Want;

export default class MultipleAbility extends UIAbility {
  onCreate(want, launchParam) {
    console.info('====> [RelySecondMultipleAbility] MultipleAbility start');
    abilityWant = want;

    let applicationContext = this.context.getApplicationContext();
    globalThis.terminateprocess = () => {
      try {
        applicationContext.terminateProcess().catch((err: BusinessError) => {
          console.info('====> [RelySecondMultipleAbility] 0400 terminateApplication err: ' + JSON.stringify(err));
        });
      } catch (err) {
        console.info('====> [RelySecondMultipleAbility] 0400 terminateApplication throw err: ' + JSON.stringify(err));
      }
    }
    if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_0400') {
      try {
        applicationContext.terminateProcess().catch((err: BusinessError) => {
          console.info('====> [RelySecondMultipleAbility] 0400 terminateApplication err: ' + JSON.stringify(err));
        });
      } catch (err) {
        console.info('====> [RelySecondMultipleAbility] 0400 terminateApplication throw err: ' + JSON.stringify(err));
      }
    } else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_1000') {
      try {
        applicationContext.terminateApplication().catch((err: BusinessError) => {
          console.info('====> [RelySecondMultipleAbility] 1000 terminateApplication err: ' + JSON.stringify(err));
        });
      } catch (err) {
        console.info('====> [RelySecondMultipleAbility] 1000 terminateApplication throw err: ' + JSON.stringify(err));
      }
    }
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');

    windowStage.loadContent('pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  async onForeground() {
    // Ability has brought to foreground
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
  }

  onBackground() {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
