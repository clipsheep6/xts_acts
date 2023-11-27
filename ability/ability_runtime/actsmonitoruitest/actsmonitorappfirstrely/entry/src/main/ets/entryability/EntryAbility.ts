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
let delayTime = 500;

function sleep(time) {
  return new Promise<void>((resolve: Function) => setTimeout(resolve, time));
}

let AbilityForegroundStateObserver1200 = {
  async onAbilityStateChanged(AbilityStateData) {
    if (AbilityStateData.bundleName ==='com.example.monitorappfirstrely' && AbilityStateData.state === 2) {
      commonEventData.parameters.message = AbilityStateData;
      await sleep(delayTime);
      let want = {
        'bundleName': 'com.example.monitorappsecondrely',
        'abilityName': 'EntryAbility',
      }
      abilityContext.startAbility(want, (error) => {
        console.info('startAbility1200 error.code = ' + error.code);
      });
    } else if (AbilityStateData.bundleName === 'com.example.monitorappfirstrely' && AbilityStateData.state === 4) {
      commonEventData.parameters.result = AbilityStateData;
      commonEventManager.publish('Acts_MonitorApp_Third', commonEventData, async (err) => {
        console.info('OtherAbility Acts_MonitorApp_1200  publish error' + JSON.stringify(err));
        abilityManager.off('abilityForegroundState', AbilityForegroundStateObserver1200);
        await sleep(delayTime);
        abilityContext.terminateSelf();
      });
    }
  }
};

let AbilityForegroundStateObserver1300 = {
  onAbilityStateChanged(AbilityStateData) {
    if (AbilityStateData.bundleName === 'com.example.monitorappfirstrely' && AbilityStateData.state === 2) {
      commonEventData.parameters.message = AbilityStateData;
      commonEventManager.publish('Acts_MonitorApp_Third', commonEventData, (err) => {
        console.info('OtherAbility1300 publish err' + JSON.stringify(err));
      });
    } else if (AbilityStateData.bundleName === 'com.example.monitorappfirstrely' && AbilityStateData.state === 4) {
      commonEventData.parameters.result = AbilityStateData;
      commonEventManager.publish('Acts_MonitorApp_Fourth', commonEventData, (err) => {
        console.info('OtherAbility1300 publish error' + JSON.stringify(err));
        abilityContext.terminateSelf();
      });
    }
  }
};

let AbilityForegroundStateObserver14001 = {
  onAbilityStateChanged(AbilityStateData) {
    if (AbilityStateData.bundleName === 'com.example.monitorappfirstrely' && AbilityStateData.state === 2) {
      commonEventData.parameters.message = AbilityStateData;
      commonEventManager.publish('Acts_MonitorApp_Third', commonEventData, (err) => {
        console.info('OtherAbility1300 publish err' + JSON.stringify(err));
      });
    } else if (AbilityStateData.bundleName === 'com.example.monitorappfirstrely' && AbilityStateData.state === 4) {
      commonEventManager.publish('Acts_MonitorApp_Third', commonEventData, (err) => {
        console.info('OtherAbility1300 publish err' + JSON.stringify(err));
      });
        abilityContext.terminateSelf();
    }
  }
};

let AbilityForegroundStateObserver14002 = {
  onAbilityStateChanged(AbilityStateData) {
    if (AbilityStateData.bundleName === 'com.example.monitorappfirstrely' && AbilityStateData.state === 2) {
      commonEventData.parameters.message = AbilityStateData;
      commonEventManager.publish('Acts_MonitorApp_Fourth', commonEventData, (err) => {
        console.info('OtherAbility1300 publish err' + JSON.stringify(err));
      });
    } else if (AbilityStateData.bundleName === 'com.example.monitorappfirstrely' && AbilityStateData.state === 4) {
      commonEventManager.publish('Acts_MonitorApp_Fourth', commonEventData, (err) => {
        console.info('OtherAbility1300 publish err' + JSON.stringify(err));
      });
        abilityContext.terminateSelf();
    }
  }
};
export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    console.log('=====> MonitorAppFirstRely EntryAbility onCreate =====>');
    abilityContext = this.context;
    actionStr = want.action;
    if (actionStr === 'Acts_MonitorApp_1200') {
      console.log('=====>  OtherAbility Acts_MonitorApp_1200 want.action =====>' + actionStr);
      abilityManager.on('abilityForegroundState', AbilityForegroundStateObserver1200);
    }

    if (actionStr === 'Acts_MonitorApp_1300') {
      console.log('=====>  OtherAbility Acts_MonitorApp_1300 want.action =====>' + actionStr);
      abilityManager.on('abilityForegroundState', AbilityForegroundStateObserver1300);
      abilityManager.off('abilityForegroundState', AbilityForegroundStateObserver1300);
      commonEventManager.publish('Acts_MonitorApp_Fifth', (err) => {
        console.info('OtherAbility1300 Acts_MonitorApp_Fifth error' + JSON.stringify(err));
        abilityContext.terminateSelf();
      });
    }

    if (actionStr === 'Acts_MonitorApp_1400') {
      console.log('=====>  OtherAbility Acts_MonitorApp_1300 want.action =====>' + actionStr);
      abilityManager.on('abilityForegroundState', AbilityForegroundStateObserver14001);
      abilityManager.on('abilityForegroundState', AbilityForegroundStateObserver14002);
      abilityManager.off('abilityForegroundState');
      commonEventManager.publish('Acts_MonitorApp_Fifth', (err) => {
        console.info('OtherAbility1300 Acts_MonitorApp_Fifth error' + JSON.stringify(err));
        abilityContext.terminateSelf();
      });
    }
  }

  onDestroy() {
    console.log('=====> MonitorAppFirstRely EntryAbility onDestroy =====>');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log('=====> MonitorAppFirstRely EntryAbility onWindowStageCreate =====>');
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
    console.log('=====> MonitorAppFirstRely EntryAbility onWindowStageDestroy =====>');
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('=====> MonitorAppFirstRely EntryAbility onForeground =====>');
  }

  onBackground() {
    // Ability has back to background
    console.log('=====> MonitorAppFirstRely EntryAbility onBackground =====>');
  }
}
