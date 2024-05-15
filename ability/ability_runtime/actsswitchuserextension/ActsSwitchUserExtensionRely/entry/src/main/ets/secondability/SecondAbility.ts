/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';

const TAG = '[SecondAbility]';

export default class SecondAbility extends UIAbility {
  onCreate(want, launchParam) {
    console.info(TAG, 'SecondAbility onCreate')
    let atManager = abilityAccessCtrl.createAtManager()
    try {
      this.context.startAbility(
        {
          bundleName: "com.acts.switchuserextensionrely",
          abilityName: "SecondServiceExtensionAbility",
        }, (err) => {
        console.debug(TAG, "startAbility err:" + JSON.stringify(err));
        atManager.requestPermissionsFromUser(this.context, ['ohos.permission.READ_MEDIA']).then((data) => {
          console.info(TAG, `data: ${JSON.stringify(data)}`)
        }).catch((err) => {
          console.error(TAG, `err: ${JSON.stringify(err)}`)
        })
      })
    } catch (err) {
      console.info(TAG, `catch err->${JSON.stringify(err)}`);
    }
    globalThis.AbilityCancel = () => {
      console.info(TAG, 'AbilityCancel called');
      this.context.terminateSelf().then(() => {
        console.info(TAG, 'terminateSelf ok');
      }).catch((err) => {
        console.error(TAG, 'terminateSelf err is ' + JSON.stringify(err));
      })
    }
  }

  onDestroy() {
    hilog.info(0x0000, TAG, 'testTag', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    hilog.info(0x0000, TAG, 'testTag', '%{public}s', 'Ability onWindowStageCreate');

    windowStage.loadContent('pages/SecondPage', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, TAG, 'testTag', 'Failed to load content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, TAG, 'testTag', 'Succeeded in loading content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
  }

  onWindowStageDestroy() {
    hilog.info(0x0000, TAG, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground() {
    hilog.info(0x0000, TAG, 'testTag', '%{public}s', 'Ability onForeground');
  }

  onBackground() {
    hilog.info(0x0000, TAG, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
