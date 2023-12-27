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
import appManager from '@ohos.app.ability.abilityManager';
import commonEventManager from '@ohos.commonEventManager';

let message;
let result;
let commonEventData = {
  parameters: {
    message: message,
    result: result
  }
}
let AbilityForegroundStateObserver = {
  onAbilityStateChanged(AbilityStateData) {
    console.info('onAppStateChanged: ' + JSON.stringify(AbilityStateData));
  }
}

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    console.log('=====> MonitorAppNotSystem EntryAbility onCreate =====>');
    if (want.action === 'Acts_MonitorApp_0200') {
      try {
        appManager.on('abilityForegroundState', AbilityForegroundStateObserver);
      } catch (err) {
        commonEventData.parameters.message = err.code;
        try {
          appManager.off('abilityForegroundState', AbilityForegroundStateObserver);
        } catch (error) {
          commonEventData.parameters.result = error.code;
        }
        commonEventManager.publish('Acts_MonitorApp_First', commonEventData, async (err) => {
          console.info('====>MonitorAppNotSystem publish err: ' + JSON.stringify(err));
          this.context.terminateSelf();
        });
      }
    }
  }

  onDestroy() {
    console.log('=====> MonitorAppNotSystem EntryAbility onDestroy =====>');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log('=====> MonitorAppNotSystem EntryAbility onWindowStageCreate =====>');
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
    console.log('=====> MonitorAppNotSystem EntryAbility onWindowStageDestroy =====>');
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('=====> MonitorAppNotSystem EntryAbility onForeground =====>');
  }

  onBackground() {
    // Ability has back to background
    console.log('=====> MonitorAppNotSystem EntryAbility onBackground =====>');
  }
}
