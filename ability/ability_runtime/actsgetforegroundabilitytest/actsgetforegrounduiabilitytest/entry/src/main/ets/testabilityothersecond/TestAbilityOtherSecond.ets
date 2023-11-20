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
import window from '@ohos.window';
import abilityManager from '@ohos.app.ability.abilityManager';
import commonEventManager from '@ohos.commonEventManager';

let TIMEOUTTHREE = 300;
let actionStr;
let result;
let commonEventData = {
  parameters: {
    result: result,
  }
}
export default class TestAbilityOtherSecond extends UIAbility {
  onCreate(want, launchParam) {
    console.log('=====> OtherAbilitySecond onCreate =====>');
    actionStr = want.action;
  }

  onDestroy() {
    console.log('=====> OtherAbilitySecond onDestroy =====>');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log('=====>  OtherAbilitySecond onWindowStageCreate =====>');
    windowStage.loadContent('testabilityothersecond/pages/Index', (err, data) => {
      if (err.code) {
        console.log('loadContent error');
        return;
      }
      console.log('loadContent');
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log('=====> OtherAbilitySecond onWindowStageDestroy =====>');
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('=====> OtherAbilitySecond onForeground =====>');
    if (actionStr == "Acts_ForegroundApp0500") {
      console.log('=====>  OtherAbilitySecond Acts_GetForegroundUiAbilityTest0500 want.action =====>' + actionStr);
      abilityManager.getForegroundUIAbilities().then(async (data) => {
        console.log('=====> OtherAbilitySecond onForeground data =====>' + JSON.stringify(data));
        commonEventData.parameters.result = data;
        await commonEventManager.publish('Acts_MonitorApp_Third', commonEventData, (err) => {
          console.info('====>Acts_GetForegroundUiAbilityTest0500 publish err: ' + JSON.stringify(err));
          setTimeout(() => {
            this.context.terminateSelf();
          }, TIMEOUTTHREE);
        });
      }).catch((err) => {
        console.info('====>Acts_GetForegroundUiAbilityTest0500 err: ' + JSON.stringify(err));
      })
    }
  }

  onBackground() {
    // Ability has back to background
    console.log('=====> OtherAbilitySecond onBackground =====>');
  }
}
