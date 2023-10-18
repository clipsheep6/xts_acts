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
import quickFixManager from '@ohos.app.ability.quickFixManager';
import commonEvent from '@ohos.commonEventManager'
const CASE_TIME_OUT = 5000
var ACTS_CallFunction = {
  events: ['ACTS_CALL_EVENT', 'ACTS_RELEASE_EVENT', 'ACTS_SECOND_CALL_EVENT']
};
export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    
    afterEach(async (done) => {
      setTimeout(function () {
        console.debug('====>afterEach called');
        done();
      }, 1000);
    })
    
    it('Acts_applyQuickFixRevoke_1300',0, function (done) {
      hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      try {
        quickFixManager.revokeQuickFix(undefined).then(() => {
          console.info("====>Acts_applyQuickFixRevoke_1300  revokeQuickFix " +" ok");
        }).catch((err) => {
          console.info("====>Acts_applyQuickFixRevoke_1300  revokeQuickFix " +" failed, error code is ", JSON.stringify((err)));
        })
      } catch (err){
        console.info("====>Acts_applyQuickFixRevoke_1300  try revokeQuickFix " +" failed, error code is ", JSON.stringify((err)));
        expect(err.code).assertEqual(401)
      }
      done()
    })

    /*
     * @tc.number: Acts_applyQuickFixRevoke_1400
     * @tc.name: Apply quick fix to support undo.
     * @tc.desc: An exception parameter null is passed in to call revokeQuickFix, 
     *           and there is an exception return value.
     */
    it('Acts_applyQuickFixRevoke_1400',0, function (done) {
      hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      try {
        quickFixManager.revokeQuickFix(null).then(() => {
          console.info("====>Acts_applyQuickFixRevoke_1400  revokeQuickFix " +" ok");
        }).catch((err) => {
          console.info("====>Acts_applyQuickFixRevoke_1400  revokeQuickFix " +" failed, error code is ", JSON.stringify((err)));
        })
      } catch (err){
        console.info("====>Acts_applyQuickFixRevoke_1400   try revokeQuickFix " +" failed, error code is ", JSON.stringify((err)));
        expect(err.code).assertEqual(401)
      }
      done()
    })

    /*
     * @tc.number: Acts_applyQuickFixRevoke_1500
     * @tc.name: Apply quick fix to support undo.
     * @tc.desc: Non-system application calls revokeQuickFix, with abnormal return value.
     */
    it('Acts_applyQuickFixRevoke_1500',0, function (done) {
      hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      try {
        quickFixManager.revokeQuickFix("com.ohos.quickfixno").then(() => {
          console.info("====>Acts_applyQuickFixRevoke_1500  revokeQuickFix " +" ok");
        }).catch((err) => {
          console.info("====>Acts_applyQuickFixRevoke_1500  revokeQuickFix " +" failed, error code is ", JSON.stringify((err)));
        })
      } catch (err) {
        console.info("====>Acts_applyQuickFixRevoke_1500  try revokeQuickFix " +" failed, error code is ", JSON.stringify((err)));
        expect(err.code).assertEqual(202)
      }
      done()
    })

    /*
     * @tc.number: Acts_applyQuickFixRevoke_1600
     * @tc.name: Apply quick fix to support undo.
     * @tc.desc: The passed-in exception parameter undefined calls revokeQuickFix, 
     * and there is an exception return value.
     */
    it('Acts_applyQuickFixRevoke_1600',0, function (done) {
      hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      try {
        quickFixManager.revokeQuickFix(undefined, (err) => {
          console.info("====>Acts_applyQuickFixRevoke_1600  revokeQuickFix " + err.code);
        })
      } catch (err) {
        console.info("====>Acts_applyQuickFixRevoke_1600  try revokeQuickFix " + err.code);
        expect(err.code).assertEqual(401)
      }
      done()
    })

    /*
     * @tc.number: Acts_applyQuickFixRevoke_1700
     * @tc.name: Apply quick fix to support undo.
     * @tc.desc: An exception parameter null is passed in to call revokeQuickFix, 
     * and there is an exception return value.
     */
    it('Acts_applyQuickFixRevoke_1700',0, function (done) {
      hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      try {
        quickFixManager.revokeQuickFix(null, (err) => {
          console.info("====>Acts_applyQuickFixRevoke_1700  revokeQuickFix " + err.code);
        })
      } catch (err) {
        console.info("====>Acts_applyQuickFixRevoke_1700  try revokeQuickFix " + err.code);
        expect(err.code).assertEqual(401)
      }
      done()
    })

    /*
     * @tc.number: Acts_applyQuickFixRevoke_1800
     * @tc.name: Apply quick fix to support undo.
     * @tc.desc: Non-system application calls revokeQuickFix, with abnormal return value.
     */
    it('Acts_applyQuickFixRevoke_1800',0, function (done) {
      hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      try {
        quickFixManager.revokeQuickFix("com.ohos.quickfixno", (err) => {
          console.info("====>Acts_applyQuickFixRevoke_1600  revokeQuickFix " + err.code);
        })
      } catch (err) {
        console.info("====>Acts_applyQuickFixRevoke_1600  try revokeQuickFix " + err.code);
        expect(err.code).assertEqual(202)
      }
      done()
    })

    /*
     * @tc.number: Acts_applyQuickFixRevoke_0900
     * @tc.name: Apply quick fix to support undo.
     * @tc.desc: Cancel the application without patch, and return the error code.(Promise interface verification)
     */
    it('Acts_applyQuickFixRevoke_0900',0, function (done) {
      hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      var subscriber;
      var flag = false;
      console.debug('====>Acts_applyQuickFixRevoke_0900 start');
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.debug('====>Acts_applyQuickFixRevoke_0900 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility({
          bundleName: 'com.acts.revokeDemo',
          abilityName: 'EntryAbility',
          action: 'Revoke_0900'
        },(err) => {
          console.debug('====>Acts_applyQuickFixRevoke_0900 startAbility err:' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      })
      function subscribeCallBack(err, data) {
        console.debug('====>Acts_applyQuickFixRevoke_0900 subscribeCallBack data:' + JSON.stringify(data));
        if (data.event === 'ACTS_CALL_EVENT') {
          flag = true;
          console.debug('====>Acts_applyQuickFixRevoke_0900 subscribeCallBack data.parameters.num:  ' + JSON.stringify(data.parameters.num));
          expect(data.parameters.num).assertEqual(18500001);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug('====>Acts_applyQuickFixRevoke_0900 unSubscribeCallback');
        done();
      }
      setTimeout(() => {
        if (flag === false){
          expect().assertFail();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })

    /*
     * @tc.number: Acts_applyQuickFixRevoke_1000
     * @tc.name: Apply quick fix to support undo.
     * @tc.desc: Cancel the application without patch, and return the error code.
     * (callback interface verification)
     */
    it('Acts_applyQuickFixRevoke_1000',0, function (done) {
      hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      var subscriber;
      var flag = false;
      console.debug('====>Acts_applyQuickFixRevoke_1000 start');
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.debug('====>Acts_applyQuickFixRevoke_1000 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility({
          bundleName: 'com.acts.revokeDemo',
          abilityName: 'EntryAbility',
          action: 'Revoke_1000'
        },(err) => {
          console.debug('====>Acts_applyQuickFixRevoke_1000 startAbility err:' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      })
      function subscribeCallBack(err, data) {
        console.debug('====>Acts_applyQuickFixRevoke_1000 subscribeCallBack data:' + JSON.stringify(data));
        if (data.event === 'ACTS_CALL_EVENT') {
          flag = true;
          expect(data.parameters.num).assertEqual(18500001);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug('====>Acts_applyQuickFixRevoke_1000 unSubscribeCallback');
        done();
      }
      setTimeout(() => {
        if (flag === false){
          expect().assertFail();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })

    /*
     * @tc.number: Acts_applyQuickFixRevoke_1100
     * @tc.name: Apply quick fix to support undo.
     * @tc.desc: An unauthorized system application calls the revokeQuickFix interface, 
     * which can return an error code.(Promise interface verification)
     */
    it('Acts_applyQuickFixRevoke_1100',0, function (done) {
      hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      var subscriber;
      var flag = false;
      console.debug('====>Acts_applyQuickFixRevoke_1100 start');
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.debug('====>Acts_applyQuickFixRevoke_1100 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility({
          bundleName: 'com.acts.revokedemonopermission',
          abilityName: 'EntryAbility',
          action: 'Revoke_1100'
        },(err) => {
          console.debug('====>Acts_applyQuickFixRevoke_1100 startAbility err:' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      })
      function subscribeCallBack(err, data) {
        console.debug('====>Acts_applyQuickFixRevoke_1100 subscribeCallBack data:' + JSON.stringify(data));
        if (data.event === 'ACTS_CALL_EVENT') {
          flag = true;
          expect(data.parameters.num).assertEqual(201);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug('====>Acts_applyQuickFixRevoke_1100 unSubscribeCallback');
        done();
      }
      setTimeout(() => {
        if (flag === false){
          expect().assertFail();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })

    /*
     * @tc.number: Acts_applyQuickFixRevoke_1200
     * @tc.name: Apply quick fix to support undo.
     * @tc.desc: An unauthorized system application calls the revokeQuickFix interface, 
     * which can return an error code.(callback interface verification)
     */
    it('Acts_applyQuickFixRevoke_1200',0, function (done) {
      hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      var subscriber;
      var flag = false;
      console.debug('====>Acts_applyQuickFixRevoke_1200 start');
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.debug('====>Acts_applyQuickFixRevoke_1200 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility({
          bundleName: 'com.acts.revokedemonopermission',
          abilityName: 'EntryAbility',
          action: 'Revoke_1200'
        },(err) => {
          console.debug('====>Acts_applyQuickFixRevoke_1200 startAbility err:' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      })
      function subscribeCallBack(err, data) {
        console.debug('====>Acts_applyQuickFixRevoke_1200 subscribeCallBack data:' + JSON.stringify(data));
        if (data.event === 'ACTS_CALL_EVENT') {
          flag = true;
          expect(data.parameters.num).assertEqual(201);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug('====>Acts_applyQuickFixRevoke_1200 unSubscribeCallback');
        done();
      }
      setTimeout(() => {
        if (flag === false){
          expect().assertFail();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })

    /*
     * @tc.number: Acts_applyQuickFixRevoke_2100
     * @tc.name: Apply quick fix to support undo.
     * @tc.desc: Uninstalling a nonexistent application patch can correctly return an exception error code.
     * (Promise interface verification) 
     */
    it('Acts_applyQuickFixRevoke_2100',0, function (done) {
      hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      var subscriber;
      var flag = false;
      console.debug('====>Acts_applyQuickFixRevoke_2100 start');
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.debug('====>Acts_applyQuickFixRevoke_2100 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility({
          bundleName: 'com.acts.revokeDemo',
          abilityName: 'EntryAbility',
          action: 'Revoke_2100'
        },(err) => {
          console.debug('====>Acts_applyQuickFixRevoke_2100 startAbility err:' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      })
      function subscribeCallBack(err, data) {
        console.debug('====>Acts_applyQuickFixRevoke_2100 subscribeCallBack data:' + JSON.stringify(data));
        if (data.event === 'ACTS_CALL_EVENT') {
          flag = true;
          expect(data.parameters.num).assertEqual(18500001);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug('====>Acts_applyQuickFixRevoke_2100 unSubscribeCallback');
        done();
      }
      setTimeout(() => {
        if (flag === false){
          expect().assertFail();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })

    /*
     * @tc.number: Acts_applyQuickFixRevoke_2100
     * @tc.name: Apply quick fix to support undo.
     * @tc.desc: Uninstalling a nonexistent application patch can correctly 
     * return an exception error code.(callback interface verification) 
     */
    it('Acts_applyQuickFixRevoke_2200',0, function (done) {
      hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      var subscriber;
      var flag = false;
      console.debug('====>Acts_applyQuickFixRevoke_2200 start');
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.debug('====>Acts_applyQuickFixRevoke_2200 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility({
          bundleName: 'com.acts.revokeDemo',
          abilityName: 'EntryAbility',
          action: 'Revoke_2200'
        },(err) => {
          console.debug('====>Acts_applyQuickFixRevoke_2200 startAbility err:' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      })
      function subscribeCallBack(err, data) {
        console.debug('====>Acts_applyQuickFixRevoke_2200 subscribeCallBack data:' + JSON.stringify(data));
        if (data.event === 'ACTS_CALL_EVENT') {
          flag = true;
          expect(data.parameters.num).assertEqual(18500001);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug('====>Acts_applyQuickFixRevoke_2200 unSubscribeCallback');
        done();
      }
      setTimeout(() => {
        if (flag === false){
          expect().assertFail();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })
  })
}