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
import type window from '@ohos.window';

const TAG = '[ActsNotifyAppFault_Rely]';
const DOMAIN = 0xF811;
const ABILITY = 'EntryAbilitySec';
const APP_FREEZE_TIME_OUT = 300;

export default class EntryAbilitySec extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(DOMAIN, TAG, ABILITY + ` Ability onCreate want: ${JSON.stringify(want)}`);
  }

  onDestroy() {
    hilog.info(DOMAIN, TAG, ABILITY + ' Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    hilog.info(DOMAIN, TAG, ABILITY + ' Ability onWindowStageCreate');

    windowStage.loadContent('pages/Index', (err, data) => {
      if (err.code) {
        hilog.info(DOMAIN, TAG, ABILITY + ` Failed to load the content. Cause: ${JSON.stringify(err)}`);
        return;
      }
      hilog.info(DOMAIN, TAG, ABILITY + ` Succeeded in loading the content. Data: ${JSON.stringify(data)}`);
    });
  }

  onWindowStageDestroy() {
    hilog.info(DOMAIN, TAG, ABILITY + ' Ability onWindowStageDestroy');
  }

  onForeground() {
    hilog.info(DOMAIN, TAG, ABILITY + ' Ability foreground');
    setTimeout(() => {
      while (true) {
      }
    }, APP_FREEZE_TIME_OUT);
  }

  onBackground() {
    hilog.info(DOMAIN, TAG, ABILITY + ' Ability onBackground');
  }
}
