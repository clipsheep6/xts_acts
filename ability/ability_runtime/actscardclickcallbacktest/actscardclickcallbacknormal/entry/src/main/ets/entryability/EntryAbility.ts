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
import formObserver from '@ohos.app.form.formObserver';
import formInfo from '@ohos.app.form.formInfo';
import commonEventManager from '@ohos.commonEventManager';

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');

    function callBack(data: formInfo.RunningFormInfo): void {
      console.log('====> callback: ' + JSON.stringify(data));
    }

    let errString = "";
    let hostBundleName = 'com.acts.cardclickcallback';
    try {
      formObserver.on("router", callBack);
    } catch (err) {
      console.info('===> normal1 err: ' + JSON.stringify(err));
      errString += err.code;
    }
    try {
      formObserver.on("router", hostBundleName, callBack);
    } catch (err) {
      console.info('===> normal2 err: ' + JSON.stringify(err));
      errString += err.code;
    }
    try {
      formObserver.off("router", hostBundleName, callBack);
    } catch (err) {
      console.info('===> normal3 err: ' + JSON.stringify(err));
      errString += err.code;
    }

    try {
      formObserver.on("message", callBack);
    } catch (err) {
      console.info('===> normal4 err: ' + JSON.stringify(err));
      errString += err.code;
    }
    try {
      formObserver.on("message", hostBundleName, callBack);
    } catch (err) {
      console.info('===> normal5 err: ' + JSON.stringify(err));
      errString += err.code;
    }
    try {
      formObserver.off("message", hostBundleName, callBack);
    } catch (err) {
      console.info('===> normal6 err: ' + JSON.stringify(err));
      errString += err.code;
    }

    try {
      formObserver.on("call", callBack);
    } catch (err) {
      console.info('===> normal7 err: ' + JSON.stringify(err));
      errString += err.code;
    }
    try {
      formObserver.on("call", hostBundleName, callBack);
    } catch (err) {
      console.info('===> normal8 err: ' + JSON.stringify(err));
      errString += err.code;
    }
    try {
      formObserver.off("call", hostBundleName, callBack);
    } catch (err) {
      console.info('===> normal9 err: ' + JSON.stringify(err));
      errString += err.code;
      let commonEventData = {
        parameters: {
          str: errString
        }
      };
      console.info('===> normal9 err: ' + errString);
      commonEventManager.publish('ACTS_CALL', commonEventData, (err) => {
        console.info('====> normal ACTS_CALL publish: ' + JSON.stringify(err));
      });
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
