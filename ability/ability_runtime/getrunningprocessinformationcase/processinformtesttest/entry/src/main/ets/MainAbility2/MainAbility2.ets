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
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import hilog from '@ohos.hilog';
import { Hypium } from '@ohos/hypium';
import testsuite from '../test/List.test';
import window from '@ohos.window';

const TAG = "app_test_MainAbility2"

export default class MainAbility2 extends UIAbility {
  listKey = [];

  applicationStateChangeCallback = {
    onApplicationForeground() {
      console.log(TAG, 'applicationStateChangeCallback onApplicationForeground');
      this.listKey.push("MainAbility2_onApplicationForeground")
    },
    onApplicationBackground() {
      console.log(TAG, 'applicationStateChangeCallback onApplicationBackground');
      this.listKey.push("MainAbility2_onApplicationBackground")
    }
  };


  onCreate(want, launchParam) {
    hilog.info(0x0000, TAG, '%{public}s', 'Ability onCreate');

   // globalThis.application2Context = this.context.getApplicationContext();
  //  globalThis.application2Context.on('applicationStateChange', this.applicationStateChangeCallback);
  //  globalThis.MainAbility2_listKey = this.listKey
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'TestAbility onWindowStageCreate');
    windowStage.loadContent('MainAbility2/pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s',
        JSON.stringify(data) ?? '');
    });
    globalThis.MainAbility2Context = this.context
  }

  onWindowStageDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'TestAbility onWindowStageDestroy');
  }

  onForeground() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'TestAbility onForeground');
  }

  onBackground() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'TestAbility onBackground');
  }
}