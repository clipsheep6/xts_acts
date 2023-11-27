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

let TIMEOUT300MS = 300;
let TIMEOUT500MS = 500;
let abilityContext;
let message;
let result;
let commonEventData = {
  parameters: {
    message: message,
    result: result,
  }
}
let actionStr;

function sleep(time) {
  return new Promise<void>((resolve: Function) => setTimeout(resolve, time));
}

let AbilityForegroundStateObserver1000 = {
  async onAbilityStateChanged(AbilityStateData) {
    if (AbilityStateData.bundleName === 'com.example.monitorapptest' && AbilityStateData.state === 2) {
      commonEventData.parameters.message = AbilityStateData;
      await sleep(TIMEOUT300MS);
      let want = {
        'bundleName': 'com.example.monitorappsecondrely',
        'abilityName': 'EntryAbility',
      }
      abilityContext.startAbility(want, (error) => {
        console.info('startAbility0600 error.code = ' + error.code);
      });
    } else if (AbilityStateData.bundleName === 'com.example.monitorapptest' && AbilityStateData.state === 4) {
      commonEventData.parameters.result = AbilityStateData;
      commonEventManager.publish('Acts_MonitorApp_Third', commonEventData, async (err) => {
        console.info('OtherAbility Acts_MonitorApp_1000  publish error' + JSON.stringify(err));
        abilityManager.off('abilityForegroundState', AbilityForegroundStateObserver1000);
        await sleep(TIMEOUT500MS);
        abilityContext.terminateSelf();
      });
    }
  }
}

let AbilityForegroundStateObserver1100 = {
  async onAbilityStateChanged(AbilityStateData) {
    if (AbilityStateData.bundleName === 'com.example.monitorapptest' && AbilityStateData.state === 2) {
      commonEventData.parameters.message = AbilityStateData;
      await sleep(TIMEOUT300MS);
      commonEventManager.publish('Acts_MonitorApp_Third', commonEventData, (err) => {
        console.info('OtherAbility0500 publish error5' + JSON.stringify(err));
        abilityContext.terminateSelf();
      });
    } else if (AbilityStateData.bundleName === 'com.example.monitorapptest' && AbilityStateData.state === 4) {
      commonEventData.parameters.result = AbilityStateData;
      commonEventManager.publish('Acts_MonitorApp_Fourth', commonEventData, (err) => {
        console.info('OtherAbility1100 publish error' + JSON.stringify(err));
      });
    }
  }
}

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    console.log('=====> ModuleLibFirst EntryAbility onCreate =====>');
    actionStr = want.action;
    abilityContext = this.context;
    if (actionStr === 'Acts_MonitorApp_1000') {
      console.log('=====>  ModuleLibFirst Acts_MonitorApp_1000 want.action =====>' + actionStr);
      abilityManager.on('abilityForegroundState', AbilityForegroundStateObserver1000);
    }

    if (actionStr === 'Acts_MonitorApp_1100') {
      console.log('=====>  OtherAbility Acts_MonitorApp_0700 want.action =====>' + actionStr);
      abilityManager.on('abilityForegroundState', AbilityForegroundStateObserver1100);
      abilityManager.off('abilityForegroundState', AbilityForegroundStateObserver1100);
      commonEventManager.publish('Acts_MonitorApp_Fifth', (err) => {
        console.info('OtherAbility1100 Acts_MonitorApp_Fifth error' + JSON.stringify(err));
        abilityContext.terminateSelf();
      });
    }
  }

  onDestroy() {
    console.log('=====> ModuleLibFirst EntryAbility onDestroy =====>');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log('=====> ModuleLibFirst EntryAbility onWindowStageCreate =====>');
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
    console.log('=====> ModuleLibFirst EntryAbility onWindowStageDestroy =====>');
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('=====> ModuleLibFirst EntryAbility onForeground =====>');
  }

  onBackground() {
    // Ability has back to background
    console.log('=====> ModuleLibFirst EntryAbility onBackground =====>');
  }
}
