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

import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { Component, Driver, UiWindow, ON } from '@ohos.UiTest';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import autoFillManager from '@ohos.app.ability.autoFillManager';
import commonEventManager from '@ohos.commonEventManager';

let driver = Driver.create();
let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
let subscribeList = {
  events: [
    'AutoFillExtensionTest0100',
    'AutoFillExtensionTest0200'
  ]
};

function sleep(ms): Promise<any> {
  return new Promise(resolve => setTimeout(resolve, ms));
}

export default function abilityTest() {
  describe('ActsAutoFillTest', function () {
    afterEach(async function (done) {
      await abilityDelegator.executeShellCommand('aa force-stop com.ohos.textautofill');
      done();
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_AutoFill_0100
     * @tc.name: RequestAutoFill Interface : RequestAutoFill
     * @tc.desc: Implicitly call the RequestAutoFill interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level1
     */
    it('SUB_Ability_AbilityRuntime_AutoFill_0100', 0, async function (done) {
      await sleep(1000);
      const TAG = 'SUB_Ability_AbilityRuntime_AutoFill_0100_TAG';
      console.log(TAG, ' start');
      
      let fillCallback: autoFillManager.FillRequestCallback = {
        onSuccess: () => {
          console.log('fill request on success');
        },
        onFailure: () => {
          console.log('fill request on failure');
        },
        onCancel: () => {
          console.log('fill request on cancel');
        }
      }
      console.log('callback: ', JSON.stringify(fillCallback));

      let subscriber;

      let subscribeCallBack = (err, data) => {
        console.info(TAG, 'enter subscribe callback' + JSON.stringify(data));
        if (data.event == 'AutoFillExtensionTest0100') {
          expect(data.parameters.onCreate).assertEqual(1);
          expect(data.parameters.onFillRequest).assertEqual(1);
          expect(data.parameters.onForeground).assertEqual(1);
        }
        if (data.event == 'AutoFillExtensionTest0200') {
          expect(data.parameters.onBackground).assertEqual(1);
          expect(data.parameters.onSessionDestroy).assertEqual(1);
          expect(data.parameters.onDestroy).assertEqual(1);
          commonEventManager.unsubscribe(subscriber, () => {
            console.info(TAG, 'enter unsubscribe callback ');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(subscribeList).then(async (data) => {
        console.info(TAG, 'create subscriber success');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
        let name_input = await driver.waitForComponent(ON.id('personFullName'), 2000);
        await sleep(100);
        expect(name_input != null).assertTrue();
        await name_input.click();
        await sleep(3000);
        let item_name = await driver.waitForComponent(ON.id('item_0'), 2000);
        await sleep(100);
        expect(item_name != null).assertTrue();
        await item_name.click();
      })
    })
  })
}
