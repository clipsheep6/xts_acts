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
let result;
let commonEventData = {
  parameters: {
    result: result,
  }
}
let actionStr;

function sleep(time) {
  return new Promise<void>((resolve: Function) => setTimeout(resolve, time));
}

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    console.log('=====> GetForegroundModule EntryAbility onCreate =====>');
    actionStr = want.action;
  }

  onDestroy() {
    console.log('=====> GetForegroundModule EntryAbility onDestroy =====>');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log('=====> GetForegroundModule EntryAbility onWindowStageCreate =====>');
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
    console.log('=====> GetForegroundModule EntryAbility onWindowStageDestroy =====>');
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('=====> GetForegroundModule EntryAbility onForeground =====>');
    if (actionStr === 'Acts_ForegroundApp0600') {
      console.log('=====>  GetForegroundModule Acts_GetForegroundUiAbilityTest0600 want.action =====>' + actionStr);
      abilityManager.getForegroundUIAbilities((err, data) => {
        console.log('=====> GetForegroundModule onForeground data =====>' + JSON.stringify(data));
        commonEventData.parameters.result = data;
        commonEventManager.publish('Acts_MonitorApp_First', commonEventData, (err) => {
          console.info('====>Acts_GetForegroundUiAbilityTest0600 publish err: ' + JSON.stringify(err));
          setTimeout(() => {
            this.context.terminateSelf();
          }, TIMEOUTFIVE);
        });
      });
    }
  }

  onBackground() {
    // Ability has back to background
    console.log('=====> GetForegroundModule EntryAbility onBackground =====>');
  }
}
