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
import window from '@ohos.window';
import commonEvent from '@ohos.commonEvent'
import CommonEventManager from '@ohos.commonEventManager';
import Want from '@ohos.app.ability.Want';
import common from '@ohos.app.ability.common';

const TAG = "launchRule:Assistant5Tag"

export default class Assistant5Ability extends UIAbility {

  onCreate(want, launchParam) {
    globalThis.lifeCycle5=""
    console.log(TAG, 'AssistantAbility onCreate');
    console.log(TAG, 'want param:' + JSON.stringify(want) ?? '');
    console.log(TAG, 'launchParam:' + JSON.stringify(launchParam) ?? '');
    globalThis.lifeCycle5+="onCreate"
  }

  onDestroy() {
    globalThis.lifeCycle5+="onDestroy"
    console.log(TAG, 'AssistantAbility onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    globalThis.lifeCycle5+="onWindowStageCreate"
    console.log(TAG, 'AssistantAbility onWindowStageCreate');
    windowStage.loadContent('AssistantAbility5/pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, TAG, 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, TAG, 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
    globalThis.context5 = this.context
  }

  onWindowStageDestroy() {
    globalThis.lifeCycle5+="onWindowStageDestroy"
    console.log(TAG, 'AssistantAbility onWindowStageDestroy');
  }

  async onForeground() {
    globalThis.lifeCycle5+="onForeground"
  }
  sleep(time) {
    return new Promise((resolve) => setTimeout(resolve, time));
  }
  onBackground() {
    globalThis.lifeCycle5+="onBackground"
    console.log(TAG, 'AssistantAbility onBackground');
  }
}