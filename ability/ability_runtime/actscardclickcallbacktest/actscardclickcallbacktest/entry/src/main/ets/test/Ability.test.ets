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
import formInfo from '@ohos.app.form.formInfo';
import commonEventManager from '@ohos.commonEventManager';

let ACTS_CallFunction = {
  events: ['ACTS_CALL']
};

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
     * @tc.number:Acts_CardClickCallback_0700
     * @tc.name:Support card click callback
     * @tc.desc:Click the callback when the type is null and undefined.
     */
    it('Acts_CardClickCallback_0700', 0, async function (done) {
      console.info('====>Acts_CardClickCallback_0700 start');
      let hostBundleName = 'com.acts.cardclickcallback';

      function callback(data: formInfo.RunningFormInfo): void {
        console.info('====>Acts_CardClickCallback_0700 firstCallBack: ' + JSON.stringify(data));
      }

      try {
        formObserver.on(null, callback);
        console.info('====>Acts_CardClickCallback_0700 first end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0700 first err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on(undefined, callback);
        console.info('====>Acts_CardClickCallback_0700 second end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0700 second err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on(null, hostBundleName, callback);
        console.info('====>Acts_CardClickCallback_0700 third end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0700 third err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on(undefined, hostBundleName, callback);
        console.info('====>Acts_CardClickCallback_0700 fourth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0700 fourth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }
      console.info('====>Acts_CardClickCallback_0700 end');
      done();
    })

    /*
     * @tc.number:Acts_CardClickCallback_0800
     * @tc.name:Support card click callback
     * @tc.desc:The registered listening type is router, and the remaining parameters are null and undefined.
     */
    it('Acts_CardClickCallback_0800', 0, async function (done) {
      console.info('====>Acts_CardClickCallback_0800 start');
      let hostBundleName = 'com.acts.cardclickcallback';

      function callback(data: formInfo.RunningFormInfo): void {
        console.info('====>Acts_CardClickCallback_0800 firstCallBack: ' + JSON.stringify(data));
      }

      try {
        formObserver.on("router", null);
        console.info('====>Acts_CardClickCallback_0800 first end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0800 first err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("router", undefined);
        console.info('====>Acts_CardClickCallback_0800 second end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0800 second err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("router", null, callback);
        console.info('====>Acts_CardClickCallback_0800 third end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0800 third err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("router", undefined, callback);
        console.info('====>Acts_CardClickCallback_0800 fourth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0800 fourth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("router", hostBundleName, null);
        console.info('====>Acts_CardClickCallback_0800 fifth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0800 fifth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("router", hostBundleName, undefined);
        console.info('====>Acts_CardClickCallback_0800 sixth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0800 sixth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }
      console.info('====>Acts_CardClickCallback_0800 end');
      done();
    })

    /*
     * @tc.number:Acts_CardClickCallback_0900
     * @tc.name:Support card click callback
     * @tc.desc:The registered listening type is message, and the remaining parameters are null and undefined.
     */
    it('Acts_CardClickCallback_0900', 0, async function (done) {
      console.info('====>Acts_CardClickCallback_0900 start');
      let hostBundleName = 'com.acts.cardclickcallback';

      function callback(data: formInfo.RunningFormInfo): void {
        console.info('====>Acts_CardClickCallback_0900 firstCallBack: ' + JSON.stringify(data));
      }

      try {
        formObserver.on("message", null);
        console.info('====>Acts_CardClickCallback_0900 first end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0900 first err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("message", undefined);
        console.info('====>Acts_CardClickCallback_0900 second end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0900 second err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("message", null, callback);
        console.info('====>Acts_CardClickCallback_0900 third end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0900 third err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("message", undefined, callback);
        console.info('====>Acts_CardClickCallback_0900 fourth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0900 fourth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("message", hostBundleName, null);
        console.info('====>Acts_CardClickCallback_0900 fifth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0900 fifth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("message", hostBundleName, undefined);
        console.info('====>Acts_CardClickCallback_0900 sixth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_0900  sixth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }
      console.info('====>Acts_CardClickCallback_0900 end');
      done();
    })

    /*
     * @tc.number:Acts_CardClickCallback_1000
     * @tc.name:Support card click callback
     * @tc.desc:The registered listening type is call, and the remaining parameters are null and undefined.
     */
    it('Acts_CardClickCallback_1000', 0, async function (done) {
      console.info('====>Acts_CardClickCallback_1000 start');
      let hostBundleName = 'com.acts.cardclickcallback';

      function callback(data: formInfo.RunningFormInfo): void {
        console.info('====>Acts_CardClickCallback_1000 firstCallBack: ' + JSON.stringify(data));
      }

      try {
        formObserver.on("call", null);
        console.info('====>Acts_CardClickCallback_1000 first end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1000 first err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("call", undefined);
        console.info('====>Acts_CardClickCallback_1000 second end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1000 second err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("call", null, callback);
        console.info('====>Acts_CardClickCallback_1000 third end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1000 third err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("call", undefined, callback);
        console.info('====>Acts_CardClickCallback_1000 fourth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1000 fourth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("call", hostBundleName, null);
        console.info('====>Acts_CardClickCallback_1000 fifth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1000 fifth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.on("call", hostBundleName, undefined);
        console.info('====>Acts_CardClickCallback_1000 sixth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1000 sixth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }
      console.info('====>Acts_CardClickCallback_1000 end');
      done();
    })

    /*
     * @tc.number:Acts_CardClickCallback_1100
     * @tc.name:Support card click callback
     * @tc.desc:Type is null and undefined when unregistering listening.
     */
    it('Acts_CardClickCallback_1100', 0, async function (done) {
      console.info('====>Acts_CardClickCallback_1100 start');
      let hostBundleName = 'com.acts.cardclickcallback';

      function callback(data: formInfo.RunningFormInfo): void {
        console.info('====>Acts_CardClickCallback_1100 firstCallBack: ' + JSON.stringify(data));
      }

      try {
        formObserver.off(null, hostBundleName, callback);
        console.info('====>Acts_CardClickCallback_1100 third end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1100 third err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off(undefined, hostBundleName, callback);
        console.info('====>Acts_CardClickCallback_1100 fourth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1100 fourth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }
      console.info('====>Acts_CardClickCallback_1100 end');
      done();
    })

    /*
     * @tc.number:Acts_CardClickCallback_1200
     * @tc.name:Support card click callback
     * @tc.desc:Unregister the listening type as router, and the remaining parameters are null and undefined.
     */
    it('Acts_CardClickCallback_1200', 0, async function (done) {
      console.info('====>Acts_CardClickCallback_1200 start');
      let hostBundleName = 'com.acts.cardclickcallback';

      function callback(data: formInfo.RunningFormInfo): void {
        console.info('====>Acts_CardClickCallback_1200 firstCallBack: ' + JSON.stringify(data));
      }

      console.info('====>Acts_CardClickCallback_1200  1');
      try {
        formObserver.off("router", null);
        console.info('====>Acts_CardClickCallback_1300 first end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1300 first err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("router", undefined);
        console.info('====>Acts_CardClickCallback_1300 second end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1300 second err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("router", null, callback);
        console.info('====>Acts_CardClickCallback_1200 third end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1200 third err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }
      console.info('====>Acts_CardClickCallback_1200  2');
      try {
        formObserver.off("router", undefined, callback);
        console.info('====>Acts_CardClickCallback_1200 fourth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1200 fourth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("router", hostBundleName, null);
        console.info('====>Acts_CardClickCallback_1200 fifth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1200 fifth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("router", hostBundleName, undefined);
        console.info('====>Acts_CardClickCallback_1200 sixth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1200 sixth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }
      console.info('====>Acts_CardClickCallback_1200 end');
      done();
    })

    /*
     * @tc.number:Acts_CardClickCallback_1300
     * @tc.name:Support card click callback
     * @tc.desc:Unregister the listening type as message, and the remaining parameters are null and undefined.
     */
    it('Acts_CardClickCallback_1300', 0, async function (done) {
      console.info('====>Acts_CardClickCallback_1300 start');
      let hostBundleName = 'com.acts.cardclickcallback';

      function callback(data: formInfo.RunningFormInfo): void {
        console.info('====>Acts_CardClickCallback_1300 firstCallBack: ' + JSON.stringify(data));
      }

      try {
        formObserver.off("message", null);
        console.info('====>Acts_CardClickCallback_1300 first end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1300 first err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("message", undefined);
        console.info('====>Acts_CardClickCallback_1300 second end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1300 second err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("message", null, callback);
        console.info('====>Acts_CardClickCallback_1300 third end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1300 third err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("message", undefined, callback);
        console.info('====>Acts_CardClickCallback_1300 fourth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1300 fourth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("message", hostBundleName, null);
        console.info('====>Acts_CardClickCallback_1300 fifth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1300 fifth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("message", hostBundleName, undefined);
        console.info('====>Acts_CardClickCallback_1300 sixth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1300  sixth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }
      console.info('====>Acts_CardClickCallback_1300 end');
      done();
    })

    /*
     * @tc.number:Acts_CardClickCallback_1400
     * @tc.name:Support card click callback
     * @tc.desc:Unregister the listening type as call, and the remaining parameters are null and undefined.
     */
    it('Acts_CardClickCallback_1400', 0, async function (done) {
      console.info('====>Acts_CardClickCallback_1400 start');
      let hostBundleName = 'com.acts.cardclickcallback';

      function callback(data: formInfo.RunningFormInfo): void {
        console.info('====>Acts_CardClickCallback_1400 firstCallBack: ' + JSON.stringify(data));
      }

      try {
        formObserver.off("call", null);
        console.info('====>Acts_CardClickCallback_1400 first end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1400 first err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("call", undefined);
        console.info('====>Acts_CardClickCallback_1400 second end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1400 second err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("call", null, callback);
        console.info('====>Acts_CardClickCallback_1400 third end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1400 third err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("call", undefined, callback);
        console.info('====>Acts_CardClickCallback_1400 fourth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1400 fourth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("call", hostBundleName, null);
        console.info('====>Acts_CardClickCallback_1400 fifth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1400 fifth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        formObserver.off("call", hostBundleName, undefined);
        console.info('====>Acts_CardClickCallback_1400 sixth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1400 sixth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }
      console.info('====>Acts_CardClickCallback_1400 end');
      done();
    })

    it('Acts_CardClickCallback_1500', 0, async function (done) {
      console.info('====>Acts_CardClickCallback_1500 start');
      let hostBundleName = 'com.acts.cardclickcallback';

      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>Acts_CardClickCallback_1500 callback: ' + JSON.stringify(data));
      }

      function secondCallback(data: formInfo.RunningFormInfo) {
        console.info('====>Acts_CardClickCallback_1500 secondCallback: ' + JSON.stringify(data));
      }

      try {
        formObserver.on("router", hostBundleName, callback);
        console.info('====>Acts_CardClickCallback_1500 first end');
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1500 first err is' + JSON.stringify(err));
        expect().assertFail();
      }

      try {
        formObserver.off("router", hostBundleName, secondCallback);
        console.info('====>Acts_CardClickCallback_1500 second end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1500 second err is' + JSON.stringify(err));
        expect(err.code).assertEqual(16500100);
      }

      try {
        formObserver.off("router", '', callback);
        console.info('====>Acts_CardClickCallback_1500 third end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1500 third err is' + JSON.stringify(err));
        expect(err.code).assertEqual(16500100);
      }

      try {
        formObserver.off("router", hostBundleName, callback);
        console.info('====>Acts_CardClickCallback_1500 fourth end');
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1500 fourth err is' + JSON.stringify(err));
        expect().assertFail();
      }

      try {
        formObserver.on("router", '', callback);
        console.info('====>Acts_CardClickCallback_1500 fifth end');
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1500 fifth err is' + JSON.stringify(err));
        expect().assertFail();
      }

      try {
        formObserver.off("router", hostBundleName, callback);
        console.info('====>Acts_CardClickCallback_1500 sixth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1500 sixth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(16500100);
      }

      try {
        formObserver.off("call", hostBundleName, callback);
        console.info('====>Acts_CardClickCallback_1500 sixth end');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>Acts_CardClickCallback_1500 sixth err is' + JSON.stringify(err));
        expect(err.code).assertEqual(16500100);
      }
      console.info('====>Acts_CardClickCallback_1500 end');
      done();
    })

    /*
     * @tc.number:Acts_CardClickCallback_1600
     * @tc.name:Support card click callback
     * @tc.desc:Click callback for registering and deregistering monitoring cards in non-system applications.
     */
    it('Acts_CardClickCallback_1600', 0, async function (done) {
      console.info('====>Acts_CardClickCallback_1600 start');
      let subscriber;
      commonEventManager.createSubscriber(ACTS_CallFunction).then((data) => {
        subscriber = data;

        commonEventManager.subscribe(subscriber, subscribeCallBack);

        globalThis.context.startAbility({
          bundleName: 'com.acts.cardclickcallbacknormal',
          abilityName: 'EntryAbility'
        }, (err) => {
          console.info('====> Acts_CardClickCallback_1600 startAbility OK err: ' + JSON.stringify(err));
        })
      })

      function subscribeCallBack(err, data): void {
        if (data.event === 'ACTS_CALL') {
          expect(data.parameters.str).assertEqual('202202202202202202202202202');
          commonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        } else {
          expect().assertFail();
          commonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback(): void {
        console.info(`====>Acts_CardClickCallback_1600 unSubscribeCallback`);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_1700
     * @tc.name:Support card click callback
     * @tc.desc:Click callback of monitoring card for registration and deregistration in unauthorized system application
     */
    it('Acts_CardClickCallback_1700', 0, async function (done) {
      console.info('====>Acts_CardClickCallback_1700 start');
      let subscriber;
      commonEventManager.createSubscriber(ACTS_CallFunction).then((data) => {
        subscriber = data;

        commonEventManager.subscribe(subscriber, subscribeCallBack);

        globalThis.context.startAbility({
          bundleName: 'com.acts.cardclickcallbacknopermission',
          abilityName: 'EntryAbility',
          action: 'Acts_CardClickCallback_1700'
        }, (err) => {
          console.info('====> Acts_CardClickCallback_1700 startAbility OK err: ' + JSON.stringify(err));
        })
      })

      function subscribeCallBack(err, data) {
        if (data.event === 'ACTS_CALL') {
          expect(data.parameters.str).assertEqual('201201');
          commonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        } else {
          expect().assertFail();
          commonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        console.info(`====>Acts_CardClickCallback_1700 unSubscribeCallback`);
        done();
      }
    })
  })
}