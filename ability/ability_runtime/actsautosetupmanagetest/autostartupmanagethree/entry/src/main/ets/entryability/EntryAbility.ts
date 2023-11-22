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
import window from '@ohos.window';
import AutoStartUpManager from '@ohos.app.ability.autoStartupManager';
import commonEvent from '@ohos.commonEventManager';

function autoStartup1600() {
  console.info('====>   Three  Acts_AutoStartup_1600');
  try {
    AutoStartUpManager.setApplicationAutoStartup({
      bundleName: 'com.acts.autostartupapp',
      abilityName: 'EntryAbility'
    }, (err, data) => {
      console.info('====> autostartupmanagetwo Acts_AutoStartup_1600 setApplicationAutoStartup OK + err: ' +
      JSON.stringify(err) + ' data: ' + JSON.stringify(data));
    });
  } catch (err) {
    console.info('====> autostartupmanagetwo Acts_AutoStartup_1600 setApplicationAutoStartup OK + err: ' +
    JSON.stringify(err));
    let commonEventData = {
      parameters: {
        str: err.code
      }
    };
    commonEvent.publish('ACTS_CALL_EVENT_UI_SET', commonEventData, (err) => {
      console.info('====> autostartupmanagethree ACTS_CALL_EVENT_UI_SET publish: ' + JSON.stringify(err));
    });
  }

  try {
    AutoStartUpManager.cancelApplicationAutoStartup({
      bundleName: 'com.acts.autostartupapp',
      abilityName: 'EntryAbility'
    }, (err, data) => {
      console.info('====> autostartupmanagetwo Acts_AutoStartup_1600 cancelApplicationAutoStartup OK + err: ' +
      JSON.stringify(err) + ' data: ' + JSON.stringify(data));
    });
  } catch (err) {
    console.info('====> autostartupmanagetwo Acts_AutoStartup_1600 cancelApplicationAutoStartup OK + err: ' +
    JSON.stringify(err));
    let commonEventData = {
      parameters: {
        str: err.code
      }
    };
    commonEvent.publish('ACTS_CALL_EVENT_UI_CANCEL', commonEventData, (err) => {
      console.info('====> autostartupmanagetwo ACTS_CALL_EVENT_OFF publish: ' + JSON.stringify(err));
    });
  }
}

function autoStartup1700() {
  try {
    AutoStartUpManager.setApplicationAutoStartup({
      bundleName: 'com.acts.autostartupapp',
      abilityName: 'EntryAbility'
    }).then((data) => {
      console.info('====> autostartupmanagethree Acts_AutoStartup_1700 setApplicationAutoStartup OK + ' +
      JSON.stringify(data));
    }).catch((err) => {
      console.info('====> autostartupmanagethree Acts_AutoStartup_1700 setApplicationAutoStartup ERR + ' +
      JSON.stringify(err));
    });
  } catch (err) {
    let commonEventData = {
      parameters: {
        str: err.code
      }
    };
    commonEvent.publish('ACTS_CALL_EVENT_UI_SET', commonEventData, (err) => {
      console.info('====> autostartupmanagethree Acts_AutoStartup_1700 ACTS_CALL_EVENT_UI_SET publish: ' +
      JSON.stringify(err));
    });
  }

  try {
    AutoStartUpManager.cancelApplicationAutoStartup({
      bundleName: 'com.acts.autostartupapp',
      abilityName: 'EntryAbility'
    }).then((data) => {
      console.info('====> autostartupmanagethree Acts_AutoStartup_1700 cancelApplicationAutoStartup OK + ' +
      JSON.stringify(data));
    }).catch((err) => {
      console.info('====> autostartupmanagethree Acts_AutoStartup_1700 cancelApplicationAutoStartup ERR + ' +
      JSON.stringify(err));
    });
  } catch (err) {
    let commonEventData = {
      parameters: {
        str: err.code
      }
    };
    commonEvent.publish('ACTS_CALL_EVENT_UI_CANCEL', commonEventData, (err) => {
      console.info('====> autostartupmanagethree Acts_AutoStartup_1700 ACTS_CALL_EVENT_UI_CANCEL publish: ' +
      JSON.stringify(err));
    });
  }
}

function autoStartup1800() {

  try {
    AutoStartUpManager.queryAllAutoStartupApplications((err, data) => {
      console.info('====> Acts_AutoStartup_1800 queryAllAutoStartupApplications2 OK');
    });
  } catch (err) {
    let commonEventData = {
      parameters: {
        str: err.code
      }
    };
    commonEvent.publish('ACTS_CALL_EVENT_QUERY', commonEventData, (err) => {
      console.info('====> autostartupmanagethree Acts_AutoStartup_1800 ACTS_CALL_EVENT_QUERY publish: ' +
      JSON.stringify(err));
    });
  }
}

function autoStartup1900() {

  try {
    AutoStartUpManager.queryAllAutoStartupApplications().then((data) => {
      console.info('====> autostartupmanagethree Acts_AutoStartup_1900 queryAllAutoStartupApplications1 OK');
    }).catch((err) => {
      console.info('====> autostartupmanagethree Acts_AutoStartup_1900 queryAllAutoStartupApplications1 ERR err: ' +
      JSON.stringify(err));
    });
  } catch (err) {
    let commonEventData = {
      parameters: {
        str: err.code
      }
    };
    commonEvent.publish('ACTS_CALL_EVENT_QUERY', commonEventData, (err) => {
      console.info('====> autostartupmanagethree Acts_AutoStartup_1900 ACTS_CALL_EVENT_QUERY publish: ' +
      JSON.stringify(err));
    });
  }
}

function autoStartup2000() {
  let AutoStartUpCallback = {
    onAutoStartupOn(data) {
      console.info('===> autostartupmanagethree Acts_AutoStartup_2000 onAutoStartupOn data: ' + JSON.stringify(data));
    },
    onAutoStartupOff(data) {
      console.info('===> autostartupmanagethree Acts_AutoStartup_2000 onAutoStartupOn data: ' + JSON.stringify(data));
    }
  }
  try {
    AutoStartUpManager.on('systemAutoStartup', AutoStartUpCallback);
  } catch (err) {
    console.info('====> catch autostartupmanagethree Acts_AutoStartup_2000 ACTS_CALL_EVENT_QUERY ON publish: ' +
    JSON.stringify(err));
    let commonEventData = {
      parameters: {
        str: err.code
      }
    };
    commonEvent.publish('ACTS_CALL_EVENT_REGISTER_ON', commonEventData, (err) => {
      console.info('====> autostartupmanagethree Acts_AutoStartup_2000 ACTS_CALL_EVENT_QUERY ON publish: ' +
      JSON.stringify(err));
    });
  }

  try {
    AutoStartUpManager.off('systemAutoStartup', AutoStartUpCallback);
  } catch (err) {
    console.info('====> catch autostartupmanagethree Acts_AutoStartup_2000 ACTS_CALL_EVENT_QUERY OFF publish: ' +
    JSON.stringify(err));
    let commonEventData = {
      parameters: {
        str: err.code
      }
    };
    commonEvent.publish('ACTS_CALL_EVENT_REGISTER_OFF', commonEventData, (err) => {
      console.info('====> autostartupmanagethree Acts_AutoStartup_2000 ACTS_CALL_EVENT_QUERY OFF publish: ' +
      JSON.stringify(err));
    });
  }
}

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');

    if (want.action === 'Acts_AutoStartup_1600') {
      autoStartup1600();
    } else if (want.action === 'Acts_AutoStartup_1700') {
      autoStartup1700();
    } else if (want.action === 'Acts_AutoStartup_1800') {
      autoStartup1800();
    } else if (want.action === 'Acts_AutoStartup_1900') {
      autoStartup1900();
    } else if (want.action === 'Acts_AutoStartup_2000') {
      autoStartup2000();
    }
  }

  onNewWant(want) {
    if (want.action === 'Acts_AutoStartup_1600') {
      autoStartup1600();
    } else if (want.action === 'Acts_AutoStartup_1700') {
      autoStartup1700();
    } else if (want.action === 'Acts_AutoStartup_1800') {
      autoStartup1800();
    } else if (want.action === 'Acts_AutoStartup_1900') {
      autoStartup1900();
    } else if (want.action === 'Acts_AutoStartup_2000') {
      autoStartup2000();
    }
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
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
