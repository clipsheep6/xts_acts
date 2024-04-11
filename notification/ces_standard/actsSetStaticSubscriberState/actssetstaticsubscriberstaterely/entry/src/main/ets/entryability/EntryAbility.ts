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
import type window from '@ohos.window';
import commonEventManager from '@ohos.commonEventManager';
import { BusinessError } from '@ohos.base';

let actionStr;

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    console.log('=====> CommonEventFirstRely EntryAbility onCreate =====>');
    actionStr = want.parameters.key;
    console.log('=====> CommonEventFirstRely EntryAbility onCreate actionStr =====>' + actionStr);
  }

  onDestroy() {
    console.log('=====> CommonEventFirstRely EntryAbility onDestroy =====>');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log('=====> CommonEventFirstRely EntryAbility onWindowStageCreate =====>');
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
    console.log('=====> CommonEventFirstRely EntryAbility onWindowStageDestroy =====>');
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('=====> CommonEventFirstRely EntryAbility onForeground =====>');
    if (actionStr === 'Acts_SetStaticSubscriberStateTest_0100') {
      commonEventManager.setStaticSubscriberState(true, ["usual.event.StaticCommonEventB"]).then(() => {
        console.info(`Acts_SetStaticSubscriberStateTest_0100 state `);
      }).catch((err: BusinessError) => {
        console.log(`Acts_SetStaticSubscriberStateTest_0100 state, errCode: ${err.code}`,
          `errMes: ${err.message}`);
        this.context.terminateSelfWithResult({
          resultCode: 1,
          want: {
            parameters: {
              resultStr: err.code,
            }
          }
        }, (err) => {
          console.log('=====> terminateSelfWithResultCallback =====>' + err.code);
        });
      });
    }
  }

  onBackground() {
    // Ability has back to background
    console.log('=====> CommonEventFirstRely EntryAbility onBackground =====>');
  }
}
