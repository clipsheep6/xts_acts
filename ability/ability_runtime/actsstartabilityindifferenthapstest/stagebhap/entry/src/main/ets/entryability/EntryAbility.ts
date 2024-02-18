/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';
import commonEvent from '@ohos.commonEvent';
import Want from '@ohos.app.ability.Want';

const EVENT_HAP2_900 = 'EVENT_HAP2_222_900'
const EVENT_HAP2_600 = 'EVENT_HAP2_222_600'
const EVENT_HAP2_800 = 'EVENT_HAP2_222_800'
let arr = []
let globalWant: Want

export default class EntryAbility extends UIAbility {

  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', `Ability onCreate , want: ${JSON.stringify(want)}`);
    globalWant = want
    arr[0] = 'onCreate'
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }


  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');
    arr[1] = 'onWindowStageCreate'
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

  onForeground() {
    // Ability has brought to foreground
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
    arr[2] = 'onForeground'
    let publishEvent: string
    if (globalWant.parameters.data == 999) {
      publishEvent = EVENT_HAP2_900
      commonEvent.publish(publishEvent, {
        parameters:
        {
          'data': arr
        }
      }, (err, data) => {
        hilog.info(0x0000, 'testTag', '%{public}s', `hap2---Ability--onForeground--publish event: ${publishEvent}`);
        this.context.terminateSelf();

      })
    } else if (globalWant.parameters.data == 600) {
      publishEvent = EVENT_HAP2_600
      commonEvent.publish(publishEvent, {
        parameters:
        {
          'data': arr
        }
      }, (err, data) => {
        hilog.info(0x0000, 'testTag', '%{public}s', `hap2---Ability--onForeground--publish event: ${publishEvent}`);
        this.context.terminateSelf();
      })
    } else if (globalWant.parameters.data == 700) {
      this.startHap3Ability()
    }
  }

  startHap3Ability() {

    let want: Want = {
      bundleName: 'com.ohos.stagehap3',
      abilityName: 'EntryAbility',
    }
    this.context.startAbility(want, err => {
      hilog.info(0x0000, 'testTag', '%{public}s', 'start hap3 Ability');
      this.context.terminateSelf();
    })

  }

  onBackground() {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
