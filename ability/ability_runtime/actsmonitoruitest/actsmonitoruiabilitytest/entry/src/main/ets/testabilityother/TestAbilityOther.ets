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

let TIMEOUTFIVE = 500;
let TIMEOUTONES = 1000;
let TIMEOUTTWOS = 2000;
let abilityContext;
let actionStr;
let message;
let message1;
let message2;
let message3;
let message4;
let result;
let commonEventData = {
  parameters: {
    message: message,
    result: result,
  }
}

let commonEventDataMessage = {
  parameters: {
    message1: message1,
    message2: message2,
    message3: message3,
    message4: message4,
  }
}

function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}


let AbilityForegroundStateObserver0400 = {
  async onAbilityStateChanged(AbilityStateData) {
    console.info('AbilityStateData' + JSON.stringify(AbilityStateData));
    if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 2) {
      commonEventData.parameters.message = AbilityStateData;
      let want = {
        "bundleName": "com.example.monitorappsecondrely",
        "abilityName": "EntryAbility",
      }
      await sleep(TIMEOUTONES);
      await abilityContext.startAbility(want);
    } else if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 4) {
      commonEventData.parameters.result = AbilityStateData;
      await sleep(TIMEOUTTWOS);
      commonEventManager.publish('Acts_MonitorApp_First', commonEventData, async (err) => {
        console.info('OtherAbility0400 publish error' + JSON.stringify(err));
        abilityManager.off("abilityForegroundState", AbilityForegroundStateObserver0400);
        abilityContext.terminateSelf();
      });
    }
  }
}

let AbilityForegroundStateObserver2 = {
  async onAbilityStateChanged(AbilityStateData) {
    if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 2) {
      commonEventData.parameters.message = AbilityStateData;
      let want = {
        "bundleName": "com.example.monitorappsecondrely",
        "abilityName": "EntryAbility",
      }
      await sleep(TIMEOUTFIVE);
      abilityContext.startAbility(want, (error) => {
        console.info("startAbility0500 error.code = " + error.code);
      });
      await sleep(TIMEOUTFIVE);
    } else if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 4) {
      commonEventData.parameters.result = AbilityStateData;
      await sleep(TIMEOUTONES);
      commonEventManager.publish('Acts_MonitorApp_Second', commonEventData, async (err) => {
        console.info('OtherAbility0500 publish error' + JSON.stringify(err));
        abilityManager.off("abilityForegroundState", AbilityForegroundStateObserver2);
        await sleep(TIMEOUTFIVE);
        abilityContext.terminateSelf().then((data)=>{
          console.info("startAbility0500 terminateSelf.code = ");
        });
      });
    }
  }
}

let AbilityForegroundStateObserver3 = {
  async onAbilityStateChanged(AbilityStateData) {
    if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 2) {
      commonEventDataMessage.parameters.message1 = AbilityStateData;
      await sleep(TIMEOUTFIVE);
      let want = {
        "bundleName": "com.example.monitorappsecondrely",
        "abilityName": "EntryAbility",
      }
      abilityContext.startAbility(want, (error) => {
        console.info("startAbility0600 error.code = " + error.code);
      });
    } else if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 4) {
      commonEventDataMessage.parameters.message2 = AbilityStateData;
    }
  }
}

let AbilityForegroundStateObserver4 = {
  async onAbilityStateChanged(AbilityStateData) {
    if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 2) {
      commonEventDataMessage.parameters.message3 = AbilityStateData;
    } else if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 4) {
      commonEventDataMessage.parameters.message4 = AbilityStateData;
      await sleep(TIMEOUTONES);
      commonEventManager.publish('Acts_MonitorApp_First', commonEventDataMessage, async (err) => {
        console.info('OtherAbility0600 publish error44' + JSON.stringify(err));
        abilityManager.off("abilityForegroundState", AbilityForegroundStateObserver3);
        abilityManager.off("abilityForegroundState", AbilityForegroundStateObserver4);
        await sleep(TIMEOUTFIVE);
        abilityContext.terminateSelf();
      });
    }
  }
}

let AbilityForegroundStateObserver5 = {
  onAbilityStateChanged(AbilityStateData) {
    if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 2) {
      commonEventData.parameters.message = AbilityStateData;
      commonEventManager.publish('Acts_MonitorApp_Third', commonEventData, (err) => {
        console.info('OtherAbility0700 publish error5' + JSON.stringify(err));
        abilityContext.terminateSelf();
      });
    } else if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 4) {
      commonEventData.parameters.result = AbilityStateData;
      commonEventManager.publish('Acts_MonitorApp_Fourth', commonEventData, (err) => {
        console.info('OtherAbility0700 publish error55' + JSON.stringify(err));
      });
    }
  }
}

let AbilityForegroundStateObserver6 = {
  async onAbilityStateChanged(AbilityStateData) {
    if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 2) {
      commonEventDataMessage.parameters.message1 = AbilityStateData;
      let want = {
        "bundleName": "com.example.monitorappsecondrely",
        "abilityName": "EntryAbility",
      }
      await sleep(TIMEOUTFIVE);
      abilityContext.startAbility(want, (error) => {
        console.info("Acts_MonitorUIAbilityTest_0500 error.code = " + error.code);
      });
    } else if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 4) {
      commonEventDataMessage.parameters.message2 = AbilityStateData;
      commonEventManager.publish('Acts_MonitorApp_Second', commonEventDataMessage, async (err) => {
        console.info('OtherAbility0800 Acts_MonitorApp_0800 publish err' + JSON.stringify(err));
        abilityManager.off("abilityForegroundState", AbilityForegroundStateObserver6);
        await sleep(800);
        abilityContext.terminateSelf();
      });
    }
  }
}

let AbilityForegroundStateObserver7 = {
  async onAbilityStateChanged(AbilityStateData) {
    if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 2) {
      commonEventDataMessage.parameters.message3 = AbilityStateData;
    } else if (AbilityStateData.bundleName == 'com.example.monitorapptest' && AbilityStateData.state == 4) {
      commonEventDataMessage.parameters.message4 = AbilityStateData;
      commonEventManager.publish('Acts_MonitorApp_First', commonEventDataMessage, (err) => {
        console.info('OtherAbility0800 Acts_MonitorApp_0800  publish error' + JSON.stringify(err));
      });
    }
  }
}

export default class TestAbilityOther extends UIAbility {
  onCreate(want, launchParam) {
    console.log('=====> OtherAbility onCreate =====>');
    abilityContext = this.context;
    actionStr = want.action;
    if (actionStr == "Acts_MonitorApp_0400") {
      console.log('=====>  OtherAbility Acts_MonitorApp_0400 want.action =====>' + actionStr);
      abilityManager.on("abilityForegroundState", AbilityForegroundStateObserver0400);
    }

    if (actionStr == "Acts_MonitorApp_0500") {
      console.log('=====>  OtherAbility Acts_MonitorApp_0500 want.action =====>' + actionStr);
      abilityManager.on("abilityForegroundState", AbilityForegroundStateObserver2);
      abilityManager.on("abilityForegroundState", AbilityForegroundStateObserver2);
    }

    if (actionStr == "Acts_MonitorApp_0600") {
      console.log('=====>  OtherAbility Acts_MonitorApp_0600 want.action =====>' + actionStr);
      abilityManager.on("abilityForegroundState", AbilityForegroundStateObserver3);
      abilityManager.on("abilityForegroundState", AbilityForegroundStateObserver4);
    }

    if (actionStr == "Acts_MonitorApp_0700") {
      console.log('=====>  OtherAbility Acts_MonitorApp_0700 want.action =====>' + actionStr);
      abilityManager.on("abilityForegroundState", AbilityForegroundStateObserver5);
      abilityManager.off("abilityForegroundState", AbilityForegroundStateObserver5);
      commonEventManager.publish('Acts_MonitorApp_Fifth', async (err) => {
        console.info('OtherAbility0700 Acts_MonitorApp_Fifth error' + JSON.stringify(err));
        abilityContext.terminateSelf();
      });
    }

    if (actionStr == "Acts_MonitorApp_0800") {
      console.log('=====>  OtherAbility Acts_MonitorApp_0800 want.action =====>' + actionStr);
      abilityManager.on("abilityForegroundState", AbilityForegroundStateObserver6);
      abilityManager.on("abilityForegroundState", AbilityForegroundStateObserver7);
      abilityManager.off("abilityForegroundState", AbilityForegroundStateObserver7);
    }
  }

  onDestroy() {
    console.log('=====> OtherAbility onDestroy =====>');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log('=====>  OtherAbility onWindowStageCreate =====>');
    windowStage.loadContent('testabilityother/pages/Index', (err, data) => {
      if (err.code) {
        console.log('loadContent error');
        return;
      }
      console.log('loadContent');
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log('=====> OtherAbility onWindowStageDestroy =====>');
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('=====> OtherAbility onForeground =====>');
  }

  onBackground() {
    // Ability has back to background
    console.log('=====> OtherAbility onBackground =====>');
  }
}
