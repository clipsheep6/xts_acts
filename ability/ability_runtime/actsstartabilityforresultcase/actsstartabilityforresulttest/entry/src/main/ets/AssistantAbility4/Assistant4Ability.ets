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

const TAG = "launchRule:Assistant4Tag"

export default class Assistant4Ability extends UIAbility {
  onCreate(want, launchParam) {
    console.log(TAG, 'AssistantAbility onCreate');
    console.log(TAG, 'want param:' + JSON.stringify(want) ?? '');
    console.log(TAG, 'launchParam:' + JSON.stringify(launchParam) ?? '');
    globalThis.lifeCycle4="_onCreate_"
    // globalThis.lifeCycle4 += "_onCreate_"
  }
  onDestroy() {
    globalThis.lifeCycle4 += "onDestroy_"
    console.log(TAG, 'AssistantAbility onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    globalThis.lifeCycle4 += "onWindowStageCreate_"

    console.log(TAG, 'AssistantAbility onWindowStageCreate');
    windowStage.loadContent('AssistantAbility4/pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, TAG, 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, TAG, 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
    globalThis.context4 = this.context
  }

  onWindowStageDestroy() {
    globalThis.lifeCycle4 += "onWindowStageDestroy_"
    console.log(TAG, 'AssistantAbility onWindowStageDestroy');
  }

  onForeground() {
    globalThis.lifeCycle4 += "onForeground_"
    console.log(TAG, 'AssistantAbility onForeground');
  }

  onBackground() {
    globalThis.lifeCycle4 += "onBackground_"
    console.log(TAG, 'AssistantAbility onBackground');
  }
}