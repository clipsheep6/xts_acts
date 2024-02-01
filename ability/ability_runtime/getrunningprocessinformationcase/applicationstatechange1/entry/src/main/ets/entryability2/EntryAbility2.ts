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

import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';
import CommonEvent from '@ohos.commonEvent';

const TAG = "app_test_1_EntryAbility2"

export default class EntryAbility2 extends UIAbility {
  subscriber;


  onCreate(want, launchParam) {
    hilog.info(0x0000, TAG, '%{public}s', 'Ability onCreate');

    let subscribeInfo = {
      events: ["CALL_APP1_EntryAbility2_TERMINATE_SELF"]
    };

    let taht = this
    CommonEvent.createSubscriber(subscribeInfo).then((commonEventSubscriber) => {
      this.subscriber = commonEventSubscriber;
      CommonEvent.subscribe(this.subscriber, (err, data) => {
        if (err.code) {
          hilog.info(0x0000, TAG, '%{public}s', `subscribe failed, code is ${err.code}`);
        } else {
          hilog.info(0x0000, TAG, '%{public}s', `subscribe call back event ${JSON.stringify(data)}`);
          if (data.event === "CALL_APP1_EntryAbility2_TERMINATE_SELF") {
            taht.terminateSelf()
          }
        }
      });
    }).catch((err) => {
      hilog.error(0x0000, TAG, '%{public}s', `createSubscriber failed, code is ${err.code}`);
    });

  }

  terminateSelf() {
    this.context.terminateSelf(() => {
      hilog.info(0x0000, TAG, '%{public}s', 'terminateSelf...');
    })
  }

  onDestroy() {
    hilog.info(0x0000, TAG, '%{public}s', 'Ability onDestroy');
    if (this.subscriber) {
      setTimeout(() => {
        CommonEvent.unsubscribe(this.subscriber, () => {
          hilog.info(0x0000, TAG, '%{public}s', 'unsubscribe callback...');
        })
      }, 2000)
    }
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, TAG, '%{public}s', 'Ability onWindowStageCreate');

    windowStage.loadContent('pages/Index2', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, TAG, 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, TAG, 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, TAG, '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground() {
    // Ability has brought to foreground
    hilog.info(0x0000, TAG, '%{public}s', 'Ability onForeground');
  }

  onBackground() {
    // Ability has back to background
    hilog.info(0x0000, TAG, '%{public}s', 'Ability onBackground');
  }
}
