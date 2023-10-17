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

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');

    globalThis.setApplicationAutoStartup_UI_Callback = () => {
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.autostartupapp',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> setApplicationAutoStartup UI OK + err: ' + JSON.stringify(err) + ' data: ' +
        JSON.stringify(data));
      });
    }

    globalThis.setApplicationAutoStartup_UI_Promise = () => {
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.autostartupapp',
        abilityName: 'EntryAbility'
      }).then((data) => {
        console.info('====> setApplicationAutoStartup UI OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> setApplicationAutoStartup UI ERR + ' + JSON.stringify(err));
      });
    }

    globalThis.cancelApplicationAutoStartup_UI_Callback = () => {
      AutoStartUpManager.cancelApplicationAutoStartup({
        bundleName: 'com.acts.autostartupapp',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> cancelApplicationAutoStartup UI OK + err: ' + JSON.stringify(err) +
        ' data: ' + JSON.stringify(data));
      });
    }

    globalThis.cancelApplicationAutoStartup_UI_Promise = () => {
      AutoStartUpManager.cancelApplicationAutoStartup({
        bundleName: 'com.acts.autostartupapp',
        abilityName: 'EntryAbility'
      }).then((data) => {
        console.info('====> cancelApplicationAutoStartup UI OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> cancelApplicationAutoStartup UI ERR + ' + JSON.stringify(err));
      });
    }

    globalThis.setApplicationAutoStartup_Service_Callback = () => {
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.autostartupapp',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> setApplicationAutoStartup ServiceAbility OK + err: ' + JSON.stringify(err) +
        ' data: ' + JSON.stringify(data));
      });
    }

    globalThis.setApplicationAutoStartup_Service_Promise = () => {
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.autostartupapp',
        abilityName: 'ServiceAbility'
      }).then((data) => {
        console.info('====> setApplicationAutoStartup ServiceAbility OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> setApplicationAutoStartup ServiceAbility ERR + ' + JSON.stringify(err));
      });
    }

    globalThis.cancelApplicationAutoStartup_Service_Callback = () => {
      AutoStartUpManager.cancelApplicationAutoStartup({
        bundleName: 'com.acts.autostartupapp',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> cancelApplicationAutoStartup ServiceAbility OK + err: ' + JSON.stringify(err) +
        ' data: ' + JSON.stringify(data));
      });
    }

    globalThis.cancelApplicationAutoStartup_Service_Promise = () => {
      AutoStartUpManager.cancelApplicationAutoStartup({
        bundleName: 'com.acts.autostartupapp',
        abilityName: 'ServiceAbility'
      }).then((data) => {
        console.info('====> cancelApplicationAutoStartup ServiceAbility OK + ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> cancelApplicationAutoStartup ServiceAbility ERR + ' + JSON.stringify(err));
      });
    }

    globalThis.setApplicationAutoStartup_UI_Callback2 = () => {
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.selfautostartup',
        abilityName: 'EntryAbility'
      }, (err, data) => {
        console.info('====> setApplicationAutoStartup UI OK + err: ' + JSON.stringify(err) +
        ' data: ' + JSON.stringify(data));
      });
    }

    globalThis.setApplicationAutoStartup_Service_Callback2 = () => {
      AutoStartUpManager.setApplicationAutoStartup({
        bundleName: 'com.acts.selfautostartup',
        abilityName: 'ServiceAbility'
      }, (err, data) => {
        console.info('====> setApplicationAutoStartup ServiceAbility OK + err: ' + JSON.stringify(err) +
        ' data: ' + JSON.stringify(data));
      });
    }

    globalThis.setApplicationAutoStartup_Service_Callback2 = () => {
      AutoStartUpManager.queryAllAutoStartupApplications().then((data) => {
        console.info('====> Acts_AutoStartup_2100 queryAllAutoStartupApplications OK data: ' + JSON.stringify(data));
      }).catch((err) => {
        console.info('====> Acts_AutoStartup_2100 queryAllAutoStartupApplications ERR err: ' + JSON.stringify(err));
      })
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
