/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';

const TAG = "app_getrunningprocessinformation1_EntryAbility"
import commonEvent from '@ohos.commonEvent';
import AbilityConstant from '@ohos.app.ability.AbilityConstant';

let sequence = 0;

let commonStateArr: number[] = [-1, -1, -1, -1];
let commonEventData = {
  parameters: {
    commonStateArr: commonStateArr
  }
};
globalThis.StartFloatingAbility = () => {
  let want = {
    'deviceId': '',
    'bundleName': 'com.example.applicationstatechange1',
    'abilityName': 'EntryAbility'
  };
  let options = {
    // @ts-ignore
    windowMode: AbilityConstant.WindowMode.WINDOW_MODE_FLOATING,
  };
  globalThis.abilityContext.startAbility(want, options, (error) => {
    console.log(TAG, 'start floating ability error.code = ' + error.code);
  });
};

globalThis.StartNormalAbility = () => {
  let want = {
    'deviceId': '',
    'bundleName': 'com.example.applicationstatechange1',
    'abilityName': 'EntryAbility'
  };
  globalThis.abilityContext.startAbility(want, (error) => {
    console.log(TAG, 'start normal ability error.code = ' + error.code);
  });
};

globalThis.GetRunningProcessInfoCallback = () => {
  globalThis.applicationContext.getRunningProcessInformation((err, data) => {
    if (err) {
      console.log(TAG, 'getRunningProcessInformation err: ' + JSON.stringify(err));
    }
    else {
      console.log(TAG, 'Oncreate Callback State: ' + JSON.stringify(data[0].state));
      commonStateArr[sequence++] = data[0].state;
    }
  });
};

globalThis.GetRunningProcessInfoPromise = () => {
  globalThis.applicationContext.getRunningProcessInformation().then((data) => {
    console.log(TAG, 'Oncreate Promise State: ' + JSON.stringify(data[0].state));
    commonStateArr[sequence++] = data[0].state;
  }).catch((err) => {
    console.log(TAG, 'getRunningProcessInformation err: ' + JSON.stringify(err));
  });
};

globalThis.PublishStateArray = () => {
  commonEvent.publish('processState', commonEventData, (err) => {
    console.info(TAG, '====>processState publish err: ' + JSON.stringify(err));
  });
};

globalThis.terminateSelf = () => {
  globalThis.abilityContext.terminateSelf(() => {
    console.info(TAG, '====>terminateSelf: ');
  })
};

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    sequence = 0;
    hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
    hilog.info(0x0000, 'testTag', '%{public}s', 'want param:' + JSON.stringify(want) ?? '');
    hilog.info(0x0000, 'testTag', '%{public}s', 'launchParam:' + JSON.stringify(launchParam) ?? '');

    globalThis.want = want;
    globalThis.abilityContext = this.context;

    globalThis.applicationContext = this.context.getApplicationContext();

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
