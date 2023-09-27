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
import commonEvent from '@ohos.commonEventManager';
import queryExtension from '@ohos.bundle.bundleManager';

const ERROR_NOT_SYSTEM_APP = 202;
const GET_EXTENSION_ABILITY_INFO_WITH_METADATA = 4;

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
    console.info("====> entryAbility onCreate")

    try {
      console.info("====> entryAbility ok");
      let want = {
        bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
        abilityName: 'ActsShareExtensionAbility',
        moduleName: 'entry'
      };
      let data = queryExtension.queryExtensionAbilityInfoSync(want, 'share', 0, 100);
      console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
    } catch (err) {
      console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
      let commonEventData = {
        parameters: {
          num: err.code
        }
      };
      commonEvent.publish('ACTS_CALL_EVENT', commonEventData, (err) => {
        console.debug('====>queryExtensionAbilityInfo with normal sign request 202 ok: ' + JSON.stringify(err));
      });
    }
  }

  onNewWant(want, launchParam) {
    console.info("====> entryAbility onNewWant");

    try {
      console.info("====> entryAbility ok")
      let want = {
        bundleName: 'com.example.queryextensionabilityinfowithtypenamerely',
        abilityName: 'ActsShareExtensionAbility',
        moduleName: 'entry'
      }
      let data = queryExtension.queryExtensionAbilityInfoSync(want, 'share', 0, 100);
      console.info("====> queryExtensionAbilityInfo ok" + JSON.stringify(data));
    } catch (err) {
      console.info("catch queryExtensionAbilityInfo ng" + JSON.stringify(err));
      let commonEventData = {
        parameters: {
          num: err.code
        }
      };
      commonEvent.publish('ACTS_CALL_EVENT', commonEventData, (err) => {
        console.debug('====>queryExtensionAbilityInfo with normal sign request 202 ok: ' + JSON.stringify(err));
      });
    }
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
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
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
  }

  onBackground() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
