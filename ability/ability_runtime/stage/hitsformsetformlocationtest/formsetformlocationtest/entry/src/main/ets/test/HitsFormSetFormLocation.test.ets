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
import { describe, afterEach, it, expect } from '@ohos/hypium';
import commonEventManager from '@ohos.commonEventManager';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { BusinessError } from '@ohos.base';
import { Driver, ON } from '@ohos.UiTest';
import formInfo from '@ohos.app.form.formInfo';

interface FormStartData {
  name: string,
  visibility: boolean,
  temporary: boolean,
  location?: number
}

let driver: Driver = Driver.create();
let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

let sleep = async (delay: number = 1000): Promise<void> => {
  return new Promise((resolve, _) => {
    setTimeout(async () => {
      resolve();
    }, delay);
  });
};

export default function hitsFormSetFormLocationTest() {
  describe('HitsFormSetFormLocationTest', () => {
    afterEach(async () => {
      let abilityCloseComponent = await driver.findComponent(ON.id('formLocation_ability_close'));
      await sleep(100);
      await abilityCloseComponent.click();
      await sleep(1000);
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_0100
     * @tc.name     : Add card Set host value 0
     * @tc.desc     : The form want the host value inside to be the passed value 0
     * The RunningFormInfo information host value is set to 0
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_0100', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_0100'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let location = formInfo.FormLocation.DESKTOP;
      let formStartData: FormStartData = {
        name: 'widget',
        visibility: true,
        temporary: false,
        location
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = Number(data?.parameters?.formLocation) === location;
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      let formRunningText = '';
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
        let formRunningTextComponent = await driver.findComponent(ON.id('runningLocation_ability_text'));
        await sleep(100);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningTextComponent status ${!!formRunningTextComponent}`);
        await formRunningTextComponent.click();
        await sleep(100);
        formRunningText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        await sleep(100);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formRunningText).assertEqual(`RunningFormInfo FormLocation:${location}`);
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_0200
     * @tc.name     : Add card Set host value 1
     * @tc.desc     : The form want the host value inside to be the passed value 1
     * The RunningFormInfo information host value is set to 1
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_0200', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_0200'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let location = formInfo.FormLocation.FORM_CENTER;
      let formStartData: FormStartData = {
        name: 'widget',
        visibility: false,
        temporary: true,
        location
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = Number(data?.parameters?.formLocation) === location;
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_0300
     * @tc.name     : Add card Set host value 2
     * @tc.desc     : The form want the host value inside to be the passed value 2
     * The RunningFormInfo information host value is set to 2
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_0300', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_0300'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let location = formInfo.FormLocation.FORM_MANAGER;
      let formStartData: FormStartData = {
        name: 'widget1',
        visibility: true,
        temporary: false,
        location
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = Number(data?.parameters?.formLocation) === location;
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      let formRunningText = '';
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
        let formRunningTextComponent = await driver.findComponent(ON.id('runningLocation_ability_text'));
        await sleep(100);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningTextComponent status ${!!formRunningTextComponent}`);
        await formRunningTextComponent.click();
        await sleep(100);
        formRunningText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        await sleep(100);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formRunningText).assertEqual(`RunningFormInfo FormLocation:${location}`);
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_0400
     * @tc.name     : Add card Set host value 3
     * @tc.desc     : The form want the host value inside to be the passed value 3
     * The RunningFormInfo information host value is set to 3
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_0400', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_0400'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let location = formInfo.FormLocation.NEGATIVE_SCREEN;
      let formStartData: FormStartData = {
        name: 'widget1',
        visibility: false,
        temporary: true,
        location
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = Number(data?.parameters?.formLocation) === location;
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_0500
     * @tc.name     : Add card Set host value 4
     * @tc.desc     : The form want the host value inside to be the passed value 4
     * The RunningFormInfo information host value is set to 4
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_0500', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_0500'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let location = formInfo.FormLocation.FORM_CENTER_NEGATIVE_SCREEN;
      let formStartData: FormStartData = {
        name: 'widget2',
        visibility: true,
        temporary: false,
        location
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = Number(data?.parameters?.formLocation) === location;
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      let formRunningText = '';
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
        let formRunningTextComponent = await driver.findComponent(ON.id('runningLocation_ability_text'));
        await sleep(100);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningTextComponent status ${!!formRunningTextComponent}`);
        await formRunningTextComponent.click();
        await sleep(100);
        formRunningText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        await sleep(100);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formRunningText).assertEqual(`RunningFormInfo FormLocation:${location}`);
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_0600
     * @tc.name     : Add card Set host value 5
     * @tc.desc     : The form want the host value inside to be the passed value 5
     * The RunningFormInfo information host value is set to 5
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_0600', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_0600'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let location = formInfo.FormLocation.FORM_MANAGER_NEGATIVE_SCREEN;
      let formStartData: FormStartData = {
        name: 'widget2',
        visibility: false,
        temporary: true,
        location
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = Number(data?.parameters?.formLocation) === location;
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_0700
     * @tc.name     : Add card Set host value 6
     * @tc.desc     : The form want the host value inside to be the passed value 6
     * The RunningFormInfo information host value is set to 6
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_0700', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_0700'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let location = formInfo.FormLocation.SCREEN_LOCK;
      let formStartData: FormStartData = {
        name: 'widget',
        visibility: true,
        temporary: false,
        location
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = Number(data?.parameters?.formLocation) === location;
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      let formRunningText = '';
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
        let formRunningTextComponent = await driver.findComponent(ON.id('runningLocation_ability_text'));
        await sleep(100);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningTextComponent status ${!!formRunningTextComponent}`);
        await formRunningTextComponent.click();
        await sleep(100);
        formRunningText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        await sleep(100);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formRunningText).assertEqual(`RunningFormInfo FormLocation:${location}`);
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_0800
     * @tc.name     : Add card Set host value 7
     * @tc.desc     : The form want the host value inside to be the passed value 7
     * The RunningFormInfo information host value is set to 7
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_0800', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_0800'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let location = formInfo.FormLocation.AI_SUGGESTION;
      let formStartData: FormStartData = {
        name: 'widget',
        visibility: true,
        temporary: false,
        location
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = Number(data?.parameters?.formLocation) === location;
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      let formRunningText = '';
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
        let formRunningTextComponent = await driver.findComponent(ON.id('runningLocation_ability_text'));
        await sleep(100);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningTextComponent status ${!!formRunningTextComponent}`);
        await formRunningTextComponent.click();
        await sleep(100);
        formRunningText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        await sleep(100);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formRunningText).assertEqual(`RunningFormInfo FormLocation:${location}`);
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_0900
     * @tc.name     : Add card Set host value -1
     * @tc.desc     : The form want the host value inside to be the passed value -1
     * The RunningFormInfo information host value is set to -1
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_0900', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_0900'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let location = formInfo.FormLocation.OTHER;
      let formStartData: FormStartData = {
        name: 'widget',
        visibility: true,
        temporary: false,
        location
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = Number(data?.parameters?.formLocation) === location;
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      let formRunningText = '';
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
        let formRunningTextComponent = await driver.findComponent(ON.id('runningLocation_ability_text'));
        await sleep(100);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningTextComponent status ${!!formRunningTextComponent}`);
        await formRunningTextComponent.click();
        await sleep(100);
        formRunningText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        await sleep(100);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formRunningText).assertEqual(`RunningFormInfo FormLocation:${location}`);
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_1000
     * @tc.name     : Add cards without setting a host value
     * @tc.desc     : The form want no host value
     * The RunningFormInfo information host value is set to -1
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_1000', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_01000'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let formStartData: FormStartData = {
        name: 'widget',
        visibility: true,
        temporary: false,
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = data?.parameters?.formLocation === undefined
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      let formRunningText = '';
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
        let formRunningTextComponent = await driver.findComponent(ON.id('runningLocation_ability_text'));
        await sleep(100);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningTextComponent status ${!!formRunningTextComponent}`);
        formRunningTextComponent.click();
        await sleep(1000);
        formRunningText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        await sleep(1000);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formRunningText).assertEqual(`RunningFormInfo FormLocation:-1`);
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_1100
     * @tc.name     : Add card does not set host value, updated to 4
     * @tc.desc     : The form want no host value
     * The RunningFormInfo information host value is set to -1
     * The host value is updated successfully, and the host value of RunningFormInfo information is set to 4 after the update
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_1100', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_01100'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let formStartData: FormStartData = {
        name: 'widget',
        visibility: true,
        temporary: false,
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = data?.parameters?.formLocation === undefined
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      let formRunningText = '';
      let formUpdateText = '';
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
        let formRunningTextComponent = await driver.findComponent(ON.id('runningLocation_ability_text'));
        await sleep(100);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningTextComponent status ${!!formRunningTextComponent}`);
        await formRunningTextComponent.click();
        await sleep(100);
        formRunningText = await formRunningTextComponent.getText();
        let formUpdateTextComponent = await driver.findComponent(ON.id('updateLocation_ability_text'));
        await sleep(100);
        await formUpdateTextComponent.click();
        await sleep(100);
        await formRunningTextComponent.click();
        await sleep(100);
        formUpdateText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        await sleep(1000);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formRunningText).assertEqual(`RunningFormInfo FormLocation:-1`);
      expect(formUpdateText).assertEqual(`RunningFormInfo FormLocation:4`);
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_1200
     * @tc.name     : Add card Set host value 0, updated to 4
     * @tc.desc     : The form want the host value inside to be the passed value 0
     * The RunningFormInfo information host value is set to 0
     * The host value is updated successfully, and the host value of RunningFormInfo information is set to 4 after the update
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_1200', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_01200'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let location = formInfo.FormLocation.DESKTOP;
      let formStartData: FormStartData = {
        name: 'widget',
        visibility: true,
        temporary: false,
        location
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = Number(data?.parameters?.formLocation) === location
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      let formRunningText = '';
      let formUpdateText = '';
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
        let formRunningTextComponent = await driver.findComponent(ON.id('runningLocation_ability_text'));
        await sleep(100);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningTextComponent status ${!!formRunningTextComponent}`);
        await formRunningTextComponent.click();
        await sleep(100);
        formRunningText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        let formUpdateTextComponent = await driver.findComponent(ON.id('updateLocation_ability_text'));
        await sleep(100);
        await formUpdateTextComponent.click();
        await sleep(100);
        await formRunningTextComponent.click();
        await sleep(100);
        formUpdateText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formUpdateText}`);
        await sleep(100);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formRunningText).assertEqual(`RunningFormInfo FormLocation:${location}`);
      expect(formUpdateText).assertEqual(`RunningFormInfo FormLocation:4`);
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_1300
     * @tc.name     : Add card does not set host value, Update error value 9
     * @tc.desc     : The form want no host value
     * The RunningFormInfo information host value is set to -1
     * Error Host value update failed to obtain RunningFormInfo information Host value set to the original value -1
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_1300', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_01300'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let formStartData: FormStartData = {
        name: 'widget',
        visibility: true,
        temporary: false,
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = data?.parameters?.formLocation === undefined
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      let formRunningText = '';
      let formUpdateText = '';
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
        let formRunningTextComponent = await driver.findComponent(ON.id('runningLocation_ability_text'));
        await sleep(100);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningTextComponent status ${!!formRunningTextComponent}`);
        await formRunningTextComponent.click();
        await sleep(100);
        formRunningText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        let formUpdateTextComponent = await driver.findComponent(ON.id('updateLocation_ability_text_error'));
        await sleep(100);
        await formUpdateTextComponent.click();
        await sleep(100);
        await formRunningTextComponent.click();
        await sleep(100);
        formUpdateText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formUpdateText}`);
        await sleep(100);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formRunningText).assertEqual(`RunningFormInfo FormLocation:-1`);
      expect(formUpdateText).assertEqual(`RunningFormInfo FormLocation:-1`);
      expect(formWantStatue).assertTrue();
      done();
    })

    /**
     * @tc.number   : SUB_AA_Form_FormLocation_Want_RunningFormInfo_1400
     * @tc.name     : Add card Set host value 0, Update error value 9
     * @tc.desc     : The form want the host value inside to be the passed value 0
     * The RunningFormInfo information host value is set to 0
     * Error Host value update failed to obtain RunningFormInfo information Host value set to the original value 0
     */
    it('SUB_AA_Form_FormLocation_Want_RunningFormInfo_1400', 0, async (done: Function) => {
      let testTag = 'SUB_AA_Form_FormLocation_Want_RunningFormInfo_01400'
      hilog.info(0x0000, testTag, '%{public}s', 'it start');
      let location = formInfo.FormLocation.DESKTOP;
      let formStartData: FormStartData = {
        name: 'widget',
        visibility: true,
        temporary: false,
        location
      }
      let formWantStatue = false;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
        if (err) {
          return
        }
        hilog.info(0x0000, 'testTag', 'Get_Form_FormLocation_OnAddForm data:%{public}s ', `${JSON.stringify(data)}`);
        formWantStatue = Number(data?.parameters?.formLocation) === location
        commonEventManager.unsubscribe(subscriber);
      }
      commonEventManager.createSubscriber({
        events: ['Get_Form_FormLocation_OnAddForm']
      }).then(async (data) => {
        subscriber = data;
        hilog.info(0x0000, 'testTag', '%{public}s', 'create Get_Form_FormLocation_OnAddForm');
        commonEventManager.subscribe(subscriber, onCallBack);
      });
      let formRunningText = '';
      let formUpdateText = '';
      try {
        await abilityDelegator.startAbility({
          bundleName: 'com.example.hitsformsetformlocationtest',
          abilityName: 'EntryAbility',
          parameters: {
            formStartData
          }
        })
        await sleep(3000);
        let formRunningTextComponent = await driver.findComponent(ON.id('runningLocation_ability_text'));
        await sleep(100);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningTextComponent status ${!!formRunningTextComponent}`);
        await formRunningTextComponent.click();
        await sleep(100);
        formRunningText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        let formUpdateTextComponent = await driver.findComponent(ON.id('updateLocation_ability_text_error'));
        await sleep(100);
        await formUpdateTextComponent.click();
        await sleep(100);
        await formRunningTextComponent.click();
        await sleep(100);
        formUpdateText = await formRunningTextComponent.getText();
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formRunningText}`);
        hilog.info(0x0000, testTag, '%{public}s', `get formRunningText: ${formUpdateText}`);
        await sleep(100);
      } catch (e) {
        hilog.info(0x0000, testTag, '%{public}s', `start formUser ability failed ${e.message}`);
      }
      expect(formRunningText).assertEqual(`RunningFormInfo FormLocation:${location}`);
      expect(formUpdateText).assertEqual(`RunningFormInfo FormLocation:${location}`);
      expect(formWantStatue).assertTrue();
      done();
    })

  })
}