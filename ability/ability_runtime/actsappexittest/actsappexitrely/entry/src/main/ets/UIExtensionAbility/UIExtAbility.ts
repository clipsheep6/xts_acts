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

import commonEvent from '@ohos.commonEventManager';
import hilog from '@ohos.hilog';
import ShareExtensionAbility from '@ohos.app.ability.ShareExtensionAbility';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import type UIExtensionContentSession from '@ohos.app.ability.UIExtensionContentSession';
import UIExtensionAbility from '@ohos.app.ability.UIExtensionAbility';
import { BusinessError, Callback } from '@ohos.base';
import process from '@ohos.process';

let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();

function sleep(time: number): Promise<number> {
  return new Promise((resolve) => setTimeout(resolve, time));
}

let ACTS_CallFunction: commonEvent.CommonEventSubscribeInfo = {
  events: ['RelySecondUIExtAbilityOnDestroy']
};

let sessionCode: UIExtensionContentSession;

export default class UiExtAbility extends UIExtensionAbility {
  onCreate() {
    hilog.info(0x0000, 'testTag', 'UIExtAbility onCreate  want: %{public}s');
    console.info('=======>UIExtAbility onCreate======> pid: ' + JSON.stringify(process.pid));

    let subscriber: commonEvent.CommonEventSubscriber;
    commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
      console.info(`====>RelyUIextensionAbility createSubscriber  ${data}`);
      subscriber = data;
      commonEvent.subscribe(data, subscribeCallBack);
    })

    let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
      console.info(`====>[RelyUIextensionAbility] subscribeCallBack ACTS_CallFunction  ${data}`);
      if (data.event === 'RelySecondUIExtAbilityOnDestroy') {
        commonEvent.publish('RelyUIextensionAbilityAlive', (err) => {
          console.info('====> [RelyUIextensionAbility] publish err: ' + JSON.stringify(err));
        });
      }
      commonEvent.unsubscribe(subscriber, unSubscribeCallback);
    };

    let unSubscribeCallback = () => {
      console.info(`====>[RelyEntryAbility] unSubscribeCallback`);
    };
  }

  async onSessionCreate(want, session) {
    sessionCode = session;
    console.log(`want: ${JSON.stringify(want)}}`);
    let storage: LocalStorage = new LocalStorage({
      'session': session
    });

    session.loadContent('pages/Page', storage);
    console.info('=======>UIExtAbility onSessionCreate======> pid: ' + JSON.stringify(process.pid));

    let applicationContext = this.context.getApplicationContext();

    if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_0300') {
      console.info('====>[RelyEntryAbility] want.action === SUB_Ability_AbilityRuntime_terminateProcess_0300.');
      try {
        console.info('====>[RelyEntryAbility] SUB_Ability_AbilityRuntime_terminateProcess_0300 try.');
        applicationContext.terminateProcess().catch((err: BusinessError) => {
          console.info('====> [RelyUIExtAbility] 0300 terminateApplication err: ' + JSON.stringify(err));
        });
      } catch (err) {
        console.info('====> [RelyUIExtAbility] 0300 terminateApplication throw err: ' + JSON.stringify(err));
      }
    } else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_0600') {
      this.context.startAbility({
        bundleName: 'com.acts.processexitrely',
        abilityName: 'SecondmoduleAbility',
        moduleName: 'secondmodule',
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_0600ui'
      }, (err: BusinessError) => {
        console.info('====>[RelyEntryAbility] 0600 startAbility err:' + JSON.stringify(err));
      })
    } else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_0900') {
      try {
        applicationContext.terminateProcess().catch((err: BusinessError) => {
          console.info('====> [RelyUIExtAbility] 0900 terminateApplication err: ' + JSON.stringify(err));
        });
      } catch (err) {
        console.info('====> [RelyUIExtAbility] 0900 terminateApplication throw err: ' + JSON.stringify(err));
      }
    } else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_1200') {
      this.context.startAbility({
        bundleName: 'com.acts.processexitrely',
        abilityName: 'SecondmoduleAbility',
        moduleName: 'secondmodule',
        action: 'SUB_Ability_AbilityRuntime_terminateProcess_1200ui'
      }, (err: BusinessError) => {
        console.info('====>[RelyEntryAbility] 1200 startAbility err:' + JSON.stringify(err));
      })
    }
  }

  onSessionDestroy(session) {
    console.log('onSessionDestroy pid: ' + JSON.stringify(process.pid));
  }

  onDestroy() {
    console.info('=======>UIExtensionAbility onDestroy ======> pid: ' + JSON.stringify(process.pid));
    commonEvent.publish('RelyUIExtAbilityOnDestroy', (err) => {
      console.info('====> [RelyUIExtAbility] 0300 publish err: ' + JSON.stringify(err));
    });
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('=====> UIExtAbility onForeground =====>  pid: ' + JSON.stringify(process.pid));
  }
};
