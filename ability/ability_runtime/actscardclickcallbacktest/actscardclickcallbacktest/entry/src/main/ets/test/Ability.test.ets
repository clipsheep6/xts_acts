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
import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { Driver, ON } from '@ohos.UiTest';
import formObserver from '@ohos.app.form.formObserver';
import type formInfo from '@ohos.app.form.formInfo';
import commonEventManager from '@ohos.commonEventManager';
import { BusinessError, Callback } from '@ohos.base';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';

let ACTS_CallFunction = {
  events: ['ACTS_CALL']
};

let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();

let driver = Driver.create();

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(function () {
    })
    beforeEach(function () {
    })
    afterEach(function () {
    })
    afterAll(function () {
    })

    /*
     * @tc.number:Acts_CardClickCallback_0100
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_0100', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_0100] start!');
      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_0100] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on(null, callback);
        console.info('====>[Acts_CardClickCallback_0100] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_0100] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_0200
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1 
     */
    it('Acts_CardClickCallback_0200', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_0200] start!');
      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_0200] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on(undefined, callback);
        console.info('====>[Acts_CardClickCallback_0200] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_0200] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_1500
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is null and there is a bundleName parameter).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_1500', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_1500] start!');
      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_1500] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on(null, 'com.acts.cardclickcallback', callback);
        console.info('====>[Acts_CardClickCallback_1500] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_1500] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_1600
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is undefined and there is a bundleName parameter).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_1600', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_1600] start!');
      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_1600] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on(undefined, 'com.acts.cardclickcallback', callback);
        console.info('====>[Acts_CardClickCallback_1600] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_1600] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_3500
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (off: type is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_3500', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_3500] start!');
      try {
        formObserver.off(null);
        console.info('====>[Acts_CardClickCallback_3500] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_3500] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_3600
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (off: type is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_3600', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_3600] start!');
      try {
        formObserver.off(undefined);
        console.info('====>[Acts_CardClickCallback_3600] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_3600] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_6500
     * @tc.name:Support card click callback
     * @tc.desc:Used by normal hap.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_Ability_AbilityForm_EventManager_ClickCallback_6500', 0, async (done: Function) => {
      console.info('====>SUB_Ability_AbilityForm_EventManager_ClickCallback_6500 start');
      try {
        let subscriber: commonEventManager.CommonEventSubscriber;
        let unSubscribeCallback = () => {
          console.info(`====>SUB_Ability_AbilityForm_EventManager_ClickCallback_6500 unSubscribeCallback`);
          done();
        }
        let subscribeCallBack = (err: BusinessError, data: commonEventManager.CommonEventData) => {
          console.info("====> data" + JSON.stringify(data));
          if (data.event === 'ACTS_CALL') {
            expect(data.parameters.str).assertEqual('202202202202202202202202202');
            commonEventManager.unsubscribe(subscriber, unSubscribeCallback);
          } else {
            expect().assertFail();
            commonEventManager.unsubscribe(subscriber, unSubscribeCallback);
          }
        }
        commonEventManager.createSubscriber(ACTS_CallFunction).then(async (data) => {
          subscriber = data;

          commonEventManager.subscribe(subscriber, subscribeCallBack);

          abilityDelegator.startAbility({
            'bundleName': 'com.acts.cardclickcallbacknormal',
            'abilityName': 'EntryAbility'
          }).catch((err: BusinessError) => {
            console.info('====> startAbiltiy err:' + JSON.stringify(err));
          })
        })
      } catch (err) {
        console.info('====>[SUB_Ability_AbilityForm_EventManager_ClickCallback_6500] err: ' + JSON.stringify(err));
        done();
      }
    })
  })
}