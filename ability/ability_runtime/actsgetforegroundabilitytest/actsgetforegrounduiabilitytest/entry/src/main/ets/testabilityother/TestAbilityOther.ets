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
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
let TIMEOUTFIVE = 500;
let TIMEOUTEIGHT = 800;
let TIMEOUTTEN = 1000;
let actionStr;
let message;
let commonEventData = {
  parameters: {
    message: message,
  }
}

function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}


export default class TestAbilityOther extends UIAbility {
  onCreate(want, launchParam) {
    console.info('=====> OtherAbility onCreate =====>');
    actionStr = want.action;
  }

  onDestroy() {
    console.info('=====> OtherAbility onDestroy =====>');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.info('=====>  OtherAbility onWindowStageCreate =====>');
    windowStage.loadContent('testabilityother/pages/Index', (err, data) => {
      if (err.code) {
        console.info('loadContent error');
        return;
      }
      console.info('loadContent');
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.info('=====> OtherAbility onWindowStageDestroy =====>');
  }

  onForeground() {
    // Ability has brought to foreground
    console.info('=====> OtherAbility onForeground =====>');
    if (actionStr === "Acts_ForegroundApp_0400") {
      console.info('=====>  OtherAbility Acts_GetForegroundUiAbilityTest_0400 want.action =====>' + actionStr);
      abilityManager.getForegroundUIAbilities().then(async (data) => {
        commonEventData.parameters.message = data;
        console.info('=====> getForegroundUIAbilities onForeground =====>');
        await commonEventManager.publish('Acts_MonitorApp_First', commonEventData, (err) => {
          console.info('====>Acts_GetForegroundUiAbilityTest_0400 publish err: ' + JSON.stringify(err));
          setTimeout(() => {
            this.context.terminateSelf();
          }, TIMEOUTFIVE);
        });
      }).catch((err) => {
        console.info('====>Acts_GetForegroundUiAbilityTest_0400 err: ' + JSON.stringify(err));
      });
    }

    if (actionStr === "Acts_ForegroundApp_0500") {
      console.info('=====>  OtherAbility Acts_GetForegroundUiAbilityTest_0500 want.action =====>' + actionStr);
      let options = {
        windowMode: AbilityConstant.WindowMode.WINDOW_MODE_FLOATING
      }
      let want = {
        'bundleName': 'com.example.getforegroundtest',
        'abilityName': 'TestAbilityOtherSecond',
        'action': 'Acts_ForegroundApp0500'
      }
      globalThis.abilityContext.startAbility(want, options, (err) => {
        console.info('Acts_GetForegroundUiAbilityTest0500 err.code = ' + err.code);
      });
      setTimeout(() => {
        this.context.terminateSelf();
      }, TIMEOUTEIGHT)
    }

    if (actionStr === 'Acts_ForegroundApp_0600') {
      console.info('=====>Acts_GetForegroundUiAbilityTest_0600 want.action =====>' + actionStr);
      let options = {
        windowMode: AbilityConstant.WindowMode.WINDOW_MODE_FLOATING
      }
      let want = {
        'bundleName': 'com.example.getforegroundtest',
        'abilityName': 'EntryAbility',
        'action': 'Acts_ForegroundApp0600'
      }
      globalThis.abilityContext.startAbility(want, options, (err) => {
        console.info('Acts_GetForegroundUiAbilityTest0600 err.code = ' + err.code);
      });
      setTimeout(() => {
        this.context.terminateSelf();
      }, TIMEOUTEIGHT)
    }

    if (actionStr === 'Acts_ForegroundApp_0700') {
      console.info('=====>Acts_GetForegroundUiAbilityTest_0700 want.action =====>' + actionStr);
      let options = {
        windowMode: AbilityConstant.WindowMode.WINDOW_MODE_FLOATING
      }
      let want = {
        'bundleName': 'com.example.getforegroundfirstrely',
        'abilityName': 'EntryAbility',
        'action': 'Acts_ForegroundApp0700'
      }
      globalThis.abilityContext.startAbility(want, options, (err) => {
        console.info('Acts_GetForegroundUiAbilityTest0700 err.code = ' + err.code);
      });
      setTimeout(() => {
        this.context.terminateSelf();
      }, TIMEOUTTEN)
    }
  }

  onBackground() {
    // Ability has back to background
    console.info('=====> OtherAbility onBackground =====>');
  }
}
