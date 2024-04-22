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
import { BusinessError, Callback } from '@ohos.base';
import Want from '@ohos.app.ability.Want';
import commonEvent from '@ohos.commonEventManager';
import process from '@ohos.process';

let abilityWant: Want;
let ACTS_CallFunction: commonEvent.CommonEventSubscribeInfo = {
  events: ['RelyUIExtAbilityOnDestroy']
};

function sleep(time: number): Promise<number> {
  return new Promise((resolve) => setTimeout(resolve, time));
}

export default class EntryAbility extends UIAbility {
  async onCreate(want, launchParam) {
    console.info('====> [RelyEntryAbility] EntryAbility start');
    abilityWant = want;
    let subscriber: commonEvent.CommonEventSubscriber;
    commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
      console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0300 createSubscriber  ${data}`);
      subscriber = data;
      commonEvent.subscribe(data, subscribeCallBack);
    })

    let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
      console.info(`====>[RelyEntryAbility] subscribeCallBack ACTS_CallFunction  ${data}`);
      if (data.event === 'RelyUIExtAbilityOnDestroy') {
        commonEvent.publish('RelyEntryAbilityAlive', (err) => {
          console.info('====> [RelyEntryAbility] publish err: ' + JSON.stringify(err));
        });
      }
      commonEvent.unsubscribe(subscriber, unSubscribeCallback);
    };

    let unSubscribeCallback = () => {
      console.info(`====>[RelyEntryAbility] unSubscribeCallback`);
    };

    if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_0100') {
      console.info('====> [RelyEntryAbility] EntryAbility SUB_Ability_AbilityRuntime_terminateProcess_0100');
      await sleep(2000);
      this.context.startAbility({
        bundleName: 'com.acts.processexitrely',
        abilityName: 'MultipleAbility',
        moduleName: 'entry',
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_0100'
      }, (err: BusinessError) => {
        console.info('====>[RelyEntryAbility] 0100 startAbility err:' + JSON.stringify(err));
      })
    } else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_0200') {
      console.info('====> [RelyEntryAbility] EntryAbility SUB_Ability_AbilityRuntime_terminateProcess_0200');
      this.context.startAbility({
        bundleName: 'com.acts.processexitrely',
        abilityName: 'ServiceExtAbility',
        moduleName: 'entry',
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_0200'
      }, (err: BusinessError) => {
        console.info('====>[RelyEntryAbility] 0200 startAbility err:' + JSON.stringify(err));
      })
    } else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_0400') {
      await sleep(2000);
      this.context.startAbility({
        bundleName: 'com.acts.processexitrely',
        abilityName: 'MultipleAbility',
        moduleName: 'entry',
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_0400'
      }, (err: BusinessError) => {
        console.info('====>[RelyEntryAbility] 0400 startAbility err:' + JSON.stringify(err));
      })
    } else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_0500') {
      this.context.startAbility({
        bundleName: 'com.acts.processexitrely',
        abilityName: 'ServiceExtAbility',
        moduleName: 'entry',
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_0500'
      }, (err: BusinessError) => {
        console.info('====>[RelyEntryAbility] 0500 startAbility err:' + JSON.stringify(err));
      })
    } else if (want.action.split('00')[0] === 'SUB_Ability_AbilityRuntime_terminateProcess_06') {
      AppStorage.SetOrCreate('want', {
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_0600',
        bundleName: 'com.acts.processexitrely',
        abilityName: 'UIExtAbility',
        parameters: {
          'ability.want.params.uiExtensionType': 'sys/commonUI'
        }
      });
    } else if (want.action.split('00')[0] === 'SUB_Ability_AbilityRuntime_terminateProcess_03') {
      AppStorage.SetOrCreate('want', {
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_0300',
        bundleName: 'com.acts.processexitrely',
        abilityName: 'UIExtAbility',
        moduleName: 'entry',
        parameters: {
          'ability.want.params.uiExtensionType': 'sys/commonUI'
        }
      });
    } else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_0700') {
      console.info('====> [RelyEntryAbility] EntryAbility SUB_Ability_AbilityRuntime_terminateProcess_0700');
      this.context.startAbility({
        bundleName: 'com.acts.processexitrely',
        abilityName: 'MultipleAbility',
        moduleName: 'entry',
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_0700'
      }, (err: BusinessError) => {
        console.info('====>[RelyEntryAbility] 0700 startAbility err:' + JSON.stringify(err));
      })
    } else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_0800') {
      console.info('====> [RelyEntryAbility] EntryAbility SUB_Ability_AbilityRuntime_terminateProcess_0800');
      this.context.startAbility({
        bundleName: 'com.acts.processexitrely',
        abilityName: 'ServiceExtAbility',
        moduleName: 'entry',
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_0800'
      }, (err: BusinessError) => {
        console.info('====>[RelyEntryAbility] 0800 startAbility err:' + JSON.stringify(err));
      })
    } else if (want.action.split('00')[0] === 'SUB_Ability_AbilityRuntime_terminateProcess_09') {
      AppStorage.SetOrCreate('want', {
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_0900',
        bundleName: 'com.acts.processexitrely',
        abilityName: 'UIExtAbility',
        parameters: {
          'ability.want.params.uiExtensionType': 'sys/commonUI'
        }
      });
    } else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_1000') {
      this.context.startAbility({
        bundleName: 'com.acts.processexitrely',
        abilityName: 'MultipleAbility',
        moduleName: 'entry',
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_1000'
      }, (err: BusinessError) => {
        console.info('====>[RelyEntryAbility] 1000 startAbility err:' + JSON.stringify(err));
      })
    } else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_1100') {
      this.context.startAbility({
        bundleName: 'com.acts.processexitrely',
        abilityName: 'ServiceExtAbility',
        moduleName: 'entry',
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_1100'
      }, (err: BusinessError) => {
        console.info('====>[RelyEntryAbility] 1100 startAbility err:' + JSON.stringify(err));
      })
    } else if (want.action.split('00')[0] === 'SUB_Ability_AbilityRuntime_terminateProcess_12') {
      AppStorage.SetOrCreate('want', {
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_1200',
        bundleName: 'com.acts.processexitrely',
        abilityName: 'UIExtAbility',
        parameters: {
          'ability.want.params.uiExtensionType': 'sys/commonUI'
        }
      });
    }
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
    console.info('====>[RelyEntryAbility] onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');
    let page;
    if (abilityWant.action.split('00')[1] === 'ui') {
      page = 'pages/Indexui'
    } else {
      page = 'pages/Index'
    }

    windowStage.loadContent(page, (err, data) => {
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

  async onForeground() {
    // Ability has brought to foreground
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
  }

  onBackground() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
