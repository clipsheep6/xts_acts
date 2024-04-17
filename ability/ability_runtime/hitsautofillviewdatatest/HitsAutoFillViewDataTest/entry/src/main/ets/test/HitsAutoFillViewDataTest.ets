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
import { BusinessError } from '@ohos.base';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { Component, Driver, UiWindow, ON } from '@ohos.UiTest';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import commonEventManager from '@ohos.commonEventManager';
import Base from '@ohos.base';
import window from '@ohos.window';
import autoFillManager from '@ohos.app.ability.autoFillManager';

let driver = Driver.create();
let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
let commonEvent: commonEventManager.CommonEventSubscribeInfo = {
  events: ['AutoFillViewData_commonEvent']
};
let subscribe: commonEventManager.CommonEventSubscriber;

function sleep(ms): Promise<any> {
  return new Promise(resolve => setTimeout(resolve, ms));
}

async function startRelyAbility(): Promise<void> {
  await abilityDelegator.executeShellCommand('aa start -b com.huawei.hms.textautofill -a EntryAbility').then(data => {
    hilog.info(0x0000, 'HitsAutoFillTest', '%{public}s', 'beforeEach aa start data is: ' + data.stdResult);
  }).catch(err => {
    hilog.info(0x0000, 'HitsAutoFillTest', '%{public}s', 'beforeEach err is: ' + JSON.stringify(err));
  })
}

export default function abilityTest() {
  describe('HitsAutoFillViewDataTest', function () {
    afterEach(async function (done) {
      await abilityDelegator.executeShellCommand('aa force-stop com.huawei.hms.textautofill');
      done();
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_0100
     * @tc.name: Test AutoFill ContentType.FULL_STREET_ADRESS type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.FULL_STREET_ADRESS.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_0100', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_0100';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      await sleep(2000);
      await startRelyAbility();

        commonEventManager.createSubscriber(commonEvent).then(data => {
          subscribe = data;
          commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            hilog.info(0x0000, 'SUB_Ability_AbilityRuntime_TextInputAutoFill_0100', 'ViewData is ' + JSON.stringify(request.viewData));
            expect(request.viewData.pageNodeInfos[0].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[5].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[6].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[7].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[8].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[9].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[0].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.FULL_STREET_ADDRESS);
            expect(request.viewData.pageNodeInfos[0].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[0].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[0].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[0].rect.width != null).assertTrue();
            expect(request.isPopup).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            await commonEventManager.unsubscribe(subscribe, () => {
            hilog.info(0x0000, 'testTag', TAG + ' END');
            done();
          })
          }
        })
    })

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('FULL_STREET_ADDRESS'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_0200
     * @tc.name: Test AutoFill ContentType.HOUSE_NUMBER type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.HOUSE_NUMBER.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_0200', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_0200';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      await sleep(2000);
      await startRelyAbility();

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[5].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[6].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[7].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[8].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[9].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.HOUSE_NUMBER);
            expect(request.viewData.pageNodeInfos[1].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[1].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[1].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[1].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('HOUSE_NUMBER'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_0300
     * @tc.name: Test AutoFill ContentType.DISTRICT_ADDRESS type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.DISTRICT_ADDRESS.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_0300', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_0300';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      await sleep(2000);
      await startRelyAbility();

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[5].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[6].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[7].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[8].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[9].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.DISTRICT_ADDRESS);
            expect(request.viewData.pageNodeInfos[2].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[2].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[2].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[2].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('DISTRICT_ADDRESS'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_0400
     * @tc.name: Test AutoFill ContentType.CITY_ADDRESS type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.CITY_ADDRESS.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_0400', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_0400';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      await sleep(2000);
      await startRelyAbility();

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[5].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[6].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[7].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[8].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[9].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.CITY_ADDRESS);
            expect(request.viewData.pageNodeInfos[3].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[3].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[3].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[3].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('CITY_ADDRESS'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_0500
     * @tc.name: Test AutoFill ContentType.PROVINCE_ADDRESS type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.PROVINCE_ADDRESS.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_0500', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_0500';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      await sleep(2000);
      await startRelyAbility();

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[5].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[6].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[7].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[8].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[9].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.PROVINCE_ADDRESS);
            expect(request.viewData.pageNodeInfos[4].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[4].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[4].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[4].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('PROVINCE_ADDRESS'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_0600
     * @tc.name: Test AutoFill ContentType.COUNTRY_ADDRESS type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.COUNTRY_ADDRESS.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_0600', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_0600';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      await sleep(2000);
      await startRelyAbility();

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[5].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[6].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[7].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[8].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[9].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[5].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.COUNTRY_ADDRESS);
            expect(request.viewData.pageNodeInfos[5].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[5].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[5].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[5].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('COUNTRY_ADDRESS'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_0700
     * @tc.name: Test AutoFill ContentType.PERSON_FULL_NAME type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.PERSON_FULL_NAME.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_0700', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_0700';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      await sleep(2000);
      await startRelyAbility();

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[5].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[6].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[7].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[8].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[9].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[6].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.PERSON_FULL_NAME);
            expect(request.viewData.pageNodeInfos[6].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[6].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[6].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[6].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('PERSON_FULL_NAME'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_0800
     * @tc.name: Test AutoFill ContentType.PERSON_LAST_NAME type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.PERSON_LAST_NAME.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_0800', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_0800';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      await sleep(2000);
      await startRelyAbility();

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[5].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[6].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[7].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[8].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[9].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[7].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.PERSON_LAST_NAME);
            expect(request.viewData.pageNodeInfos[7].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[7].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[7].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[7].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('PERSON_LAST_NAME'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_0900
     * @tc.name: Test AutoFill ContentType.PERSON_FIRST_NAME type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.PERSON_FIRST_NAME.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_0900', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_0900';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      await sleep(2000);
      await startRelyAbility();

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[5].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[6].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[7].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[8].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[9].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[8].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.PERSON_FIRST_NAME);
            expect(request.viewData.pageNodeInfos[8].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[8].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[8].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[8].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('PERSON_FIRST_NAME'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_1000
     * @tc.name: Test AutoFill ContentType.PHONE_NUMBER type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.PHONE_NUMBER.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_1000', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_1000';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      await sleep(2000);
      await startRelyAbility();

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[5].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[6].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[7].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[8].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[9].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[9].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.PHONE_NUMBER);
            expect(request.viewData.pageNodeInfos[9].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[9].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[9].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[9].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('PHONE_NUMBER'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_1100
     * @tc.name: Test AutoFill ContentType.PHONE_COUNTRY_CODE type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.PHONE_COUNTRY_CODE.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_1100', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_1100';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[0].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.PHONE_COUNTRY_CODE);
            expect(request.viewData.pageNodeInfos[0].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[0].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[0].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[0].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      await startRelyAbility();
      let button = await driver.waitForComponent(ON.id('nextPage'), 2000);
      await sleep(100);
      expect(button != null).assertTrue();
      await button.click();

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('PHONE_COUNTRY_CODE'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_1200
     * @tc.name: Test AutoFill ContentType.FULL_PHONE_NUMBER type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.FULL_PHONE_NUMBER.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_1200', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_1200';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.FULL_PHONE_NUMBER);
            expect(request.viewData.pageNodeInfos[1].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[1].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[1].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[1].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      await startRelyAbility();
      let button = await driver.waitForComponent(ON.id('nextPage'), 2000);
      await sleep(100);
      expect(button != null).assertTrue();
      await button.click();

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('FULL_PHONE_NUMBER'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_1300
     * @tc.name: Test AutoFill ContentType.EMAIL_ADDRESS type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.EMAIL_ADDRESS.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_1300', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_1300';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.EMAIL_ADDRESS);
            expect(request.viewData.pageNodeInfos[2].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[2].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[2].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[2].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      await startRelyAbility();
      let button = await driver.waitForComponent(ON.id('nextPage'), 2000);
      await sleep(100);
      expect(button != null).assertTrue();
      await button.click();

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('EMAIL_ADDRESS'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_1400
     * @tc.name: Test AutoFill ContentType.BANK_CARD_NUMBER type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.BANK_CARD_NUMBER.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_1400', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_1400';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.BANK_CARD_NUMBER);
            expect(request.viewData.pageNodeInfos[3].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[3].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[3].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[3].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      await startRelyAbility();
      await sleep(1000);
      let button = await driver.waitForComponent(ON.id('nextPage'), 2000);
      await sleep(100);
      expect(button != null).assertTrue();
      await button.click();

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('BANK_CARD_NUMBER'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
      await sleep(100);
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_TextInputAutoFill_1500
     * @tc.name: Test AutoFill ContentType.ID_CARD_NUMBER type data within ViewData.
     * @tc.desc: Set the ContentType property to ContentType.ID_CARD_NUMBER.
     * @tc.size : MediumTest
     * @tc.type : Function
     */
    it('SUB_Ability_AbilityRuntime_TextInputAutoFill_1500', 0, async function (done) {
      const TAG = 'SUB_Ability_AbilityRuntime_TextInputAutoFill_1500';
      hilog.info(0x0000, 'testTag', TAG + ' START');

      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;

        commonEventManager.subscribe(subscribe, async (error: Base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "AutoFillViewData_commonEvent" && data.parameters) {
            let request: autoFillManager.FillRequest = data.parameters['ViewData'];
            expect(request.viewData.pageNodeInfos[0].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[1].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[2].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[3].isFocus).assertFalse();
            expect(request.viewData.pageNodeInfos[4].isFocus).assertTrue();
            expect(request.viewData.pageNodeInfos[4].autoFillType)
              .assertEqual(autoFillManager.AutoFillType.ID_CARD_NUMBER);
            expect(request.viewData.pageNodeInfos[4].rect.top != null).assertTrue();
            expect(request.viewData.pageNodeInfos[4].rect.left != null).assertTrue();
            expect(request.viewData.pageNodeInfos[4].rect.height != null).assertTrue();
            expect(request.viewData.pageNodeInfos[4].rect.width != null).assertTrue();
            let windowClass = window.findWindow("hitsautofillviewdatatest0");
            let windowProperties = windowClass.getWindowProperties();
            expect(request.viewData.pageRect.top).assertEqual(windowProperties.windowRect.top);
            expect(request.viewData.pageRect.left).assertEqual(windowProperties.windowRect.left);
            expect(request.viewData.pageRect.height).assertEqual(windowProperties.windowRect.height);
            expect(request.viewData.pageRect.width).assertEqual(windowProperties.windowRect.width);
            expect(request.isPopup).assertTrue();
            await commonEventManager.unsubscribe(subscribe, () => {
              hilog.info(0x0000, 'testTag', TAG + ' END');
              done();
            })
          }
        })
      })

      await sleep(2000);
      await startRelyAbility();
      await sleep(1000);
      let button = await driver.waitForComponent(ON.id('nextPage'), 2000);
      await sleep(100);
      expect(button != null).assertTrue();
      await button.click();

      await sleep(2000);
      let pwd_input = await driver.waitForComponent(ON.id('ID_CARD_NUMBER'), 2000);
      await sleep(100);
      expect(pwd_input != null).assertTrue();
      await pwd_input.click();
    })
  })
}
