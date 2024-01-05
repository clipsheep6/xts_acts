/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import commonEventManager from '@ohos.commonEventManager';
import base from '@ohos.base';
import formHost from '@ohos.app.form.formHost';

let commonEvent: commonEventManager.CommonEventSubscribeInfo = {
  events: ['FormUpdateDurationTest_DeleteForm']
};
let subscribe: commonEventManager.CommonEventSubscriber;
let testTag = 'CloudUpdateDurationTest'

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');

    commonEventManager.createSubscriber(commonEvent).then(data => {
      subscribe = data;
      commonEventManager.subscribe(subscribe, async (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
        if (data.parameters['formId']) {
          let formId: string = data.parameters['formId'].toString();
          formHost.deleteForm(formId);
        }
      });
    })

    if (want.parameters && want.parameters["testcase"]) {
      let testcase = want.parameters["testcase"].toString();
      hilog.info(0x0000, testTag, 'onCreate testcase is %{public}s', testcase);
      AppStorage.setOrCreate<string>('testcase', testcase);
    }
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
    commonEventManager.unsubscribe(subscribe, () => {
    });
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
