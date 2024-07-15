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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { Driver, ON } from '@ohos.UiTest';
import commonEvent from '@ohos.commonEventManager';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { BusinessError, Callback } from '@ohos.base';
import Want from '@ohos.app.ability.Want';


let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
let ACTS_CallFunction: commonEvent.CommonEventSubscribeInfo = {
  events: ['0100']
};
function sleep(time: number): Promise<number> {
  return new Promise((resolve) => setTimeout(resolve, time));
}

const TAG = 'Sample_AutoFillTest';

async function startAbility() {
  console.log(TAG, 'StartAbility start');
  let want: Want = {
    bundleName: 'com.huawei.hmos.passwordvault',
    abilityName: 'EntryAbility'
  };
  console.log(TAG, 'getAbilityDelegator end');
  await abilityDelegator.startAbility(want).then(() => {
    console.log(TAG, 'StartAbility successfully.');
  }).catch((err: BusinessError) => {
    console.error(TAG, 'StartAbility err: ' + err.code);
  })
}

export default function abilityTest() {
  describe('AutoFillBox', () => {
    /**
     * @tc.number : SUB_Ability_AbilityRuntime_AutoFill_0100
     * @tc.name   : Reload in modal
     * @tc.desc   : Manually call the ReloadInModal interface and trigger success callback.
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : Level 3
     */
    it('SUB_Ability_AbilityRuntime_AutoFill_0100', 0, async (done: Function) => {
      await startAbility();
      await sleep(1000);
      let driver = Driver.create();
      try {
        console.log(TAG, 'SUB_Ability_AbilityRuntime_AutoFill_0100 start!!! driver = ', driver)
        await driver.delayMs(500);
        let name = await driver.findComponent(ON.id('autofill'));
        await driver.delayMs(500);
        await name.click();
        let subscriber: commonEvent.CommonEventSubscriber;
        commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
          console.info(TAG, 'SUB_Ability_AbilityRuntime_AutoFill_0100 createSubscriber data')
          subscriber = data
          commonEvent.subscribe(subscriber, (err: BusinessError, data: commonEvent.CommonEventData) => {
            if (data.event == '0100') {
              console.info(TAG, 'SUB_Ability_AbilityRuntime_AutoFill_0100 success ')
              done();
            }
          });
        });
      } catch (err) {
        console.log('SUB_Ability_AbilityRuntime_AutoFill_0100 error: ', JSON.stringify(err))
        expect().assertFail();
        done();
      }
    })
  })
}
