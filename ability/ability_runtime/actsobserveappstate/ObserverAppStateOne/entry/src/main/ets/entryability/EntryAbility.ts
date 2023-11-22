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

import appManager from '@ohos.app.ability.appManager';
import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import type window from '@ohos.window';
import commonEventManager from '@ohos.commonEventManager';

let observerNull = null;
let observerUndefined = undefined;
let TAG = 'Observe Error';
let applicationState = -1;
let bundlename = '';
let commonEventData = {
  parameters: {
    applicationState: applicationState,
    bundlename: bundlename
  }
}

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate' + TAG);
    try {
      appManager.on('appForegroundState', observerNull);
    } catch (error) {
      console.error(TAG, 'on error' + JSON.stringify(error));
      commonEventData.parameters.applicationState = error.code;
      commonEventManager.publish('stateEvent', commonEventData, (err) => {
        console.info(TAG + 'publish error' + JSON.stringify(err));
      })
    }
    try {
      appManager.on('appForegroundState', observerUndefined);
    } catch (error) {
      console.error(TAG, 'on error' + JSON.stringify(error));
      commonEventData.parameters.applicationState = error.code;
      commonEventManager.publish('stateEvent', commonEventData, (err) => {
        console.info('publish error' + JSON.stringify(err));
      })
    }
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
    appManager.off('appForegroundState', observerNull);
    appManager.off('appForegroundState', observerUndefined);
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

  onForeground() {
    // Ability has brought to foreground
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
  }

  onBackground() {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
