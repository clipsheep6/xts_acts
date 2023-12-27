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
import abilityManager from '@ohos.app.ability.abilityManager';
import commonEventManager from '@ohos.commonEventManager';

let TIMEOUTFIVE = 500;
let actionStr;
let message;
let commonEventData = {
  parameters: {
    message: message,
  }
}

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    console.log('=====> AppNoPermission EntryAbility onCreate =====>');
    actionStr = want.action;
  }

  onDestroy() {
    console.log('=====> AppNoPermission EntryAbility onDestroy =====>');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log('=====> AppNoPermission EntryAbility onWindowStageCreate =====>');
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
    console.log('=====> AppNoPermission EntryAbility onWindowStageDestroy =====>');
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('=====> AppNoPermission EntryAbility onForeground =====>');
    if (actionStr === 'Acts_ForegroundApp_0300') {
      abilityManager.getForegroundUIAbilities((err, data) => {
        console.log('=====> AppNoPermission EntryAbility onForeground =====>');
        commonEventData.parameters.message = err;
        commonEventManager.publish('Acts_MonitorApp_Second', commonEventData, (err) => {
          console.info('====>AppNoPermission publish err: ' + JSON.stringify(err));
          setTimeout(() => {
            this.context.terminateSelf();
          }, TIMEOUTFIVE);
        });
      });
    }
  }


  onBackground() {
    // Ability has back to background
    console.log('=====> AppNoPermission EntryAbility onBackground =====>');
  }
}
