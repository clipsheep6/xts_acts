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
import AutoStartUpManager from '@ohos.app.ability.autoStartupManager';
import commonEvent from '@ohos.commonEventManager';

let ACTS_CallFunction = {
  events: ['ACTS_CALL_EVENT_UI_SET', 'ACTS_CALL_EVENT_UI_CANCEL', 'ACTS_CALL_EVENT_SERVICE_SET', 'ACTS_CALL_EVENT_SERVICE_CANCEL', 'ACTS_CALL_EVENT_QUERY', 'ACTS_CALL_EVENT_REGISTER_ON', 'ACTS_CALL_EVENT_REGISTER_OFF']
};

const CALL_TWICE = 2;

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /*
     * @tc.number: Acts_AutoStartup_1500
     * @tc.name: Provide application self-starting management capabilities
     * @tc.desc: Call related api with invalid parameters.
     */
    it('Acts_AutoStartup_1500', 0, function (done) {

      let AutoStartUpCallback = {
        onAutoStartupOn(data) {
          console.info('===> autostartupmanageone Acts_AutoStartup_1500 onAutoStartupOn data: ' +
          JSON.stringify(data));
        },
        onAutoStartupOff(data) {
          console.info('===> autostartupmanageone Acts_AutoStartup_1500 onAutoStartupOn data: ' +
          JSON.stringify(data));
        }
      }
      try {
        AutoStartUpManager.on(null, AutoStartUpCallback)
        expect().assertFail();
      } catch (err) {
        console.info('===> autostartupmanageone Acts_AutoStartup_1500 on callback null err: ' +
        JSON.stringify(err));

        expect(err.code).assertEqual(401);
      }

      try {
        AutoStartUpManager.on(undefined, AutoStartUpCallback)
        expect().assertFail();
      } catch (err) {
        console.info('===> autostartupmanageone Acts_AutoStartup_1500 on callback undefined err: ' +
        JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        AutoStartUpManager.off(null, AutoStartUpCallback)
        expect().assertFail();
      } catch (err) {
        console.info('===> autostartupmanageone Acts_AutoStartup_1500 off callback null err: ' +
        JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        AutoStartUpManager.off(undefined, AutoStartUpCallback)
        expect().assertFail();
      } catch (err) {
        console.info('===> autostartupmanageone Acts_AutoStartup_1500 off callback undefined err: ' +
        JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        AutoStartUpManager.setApplicationAutoStartup(null, (err, data) => {
          console.info('====> autostartupmanageone Acts_AutoStartup_1500 setApplicationAutoStartup callback null : '
          + JSON.stringify(err) + ' data: ' + JSON.stringify(data));
          expect().assertFail();
        });
      } catch (err) {
        console.info('====> catch  Acts_AutoStartup_1500 setApplicationAutoStartup callback null + err: ' +
        JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        AutoStartUpManager.setApplicationAutoStartup(undefined, (err, data) => {
          console.info('====> Acts_AutoStartup_1500 setApplicationAutoStartup callback undefined + err: ' +
          JSON.stringify(err) + ' data: ' + JSON.stringify(data));
          expect().assertFail();
        });
      } catch (err) {
        console.info('====> Acts_AutoStartup_1500 setApplicationAutoStartup callback undefined + err: ' +
        JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        AutoStartUpManager.setApplicationAutoStartup(null).catch((err) => {
          console.info('====> Acts_AutoStartup_1500 setApplicationAutoStartup promise null + err: ' +
          JSON.stringify(err));
          expect().assertFail();
        })
      } catch (err) {
        console.info('====> Acts_AutoStartup_1500 setApplicationAutoStartup promise null + err: ' +
        JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        AutoStartUpManager.setApplicationAutoStartup(undefined).catch((err) => {
          console.info('====> Acts_AutoStartup_1500 setApplicationAutoStartup promise undefined + err: ' +
          JSON.stringify(err));
          expect().assertFail();
        })
      } catch (err) {
        console.info('====> Acts_AutoStartup_1500 setApplicationAutoStartup promise undefined + err: ' +
        JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        AutoStartUpManager.cancelApplicationAutoStartup(null, (err, data) => {
          console.info('====>  Acts_AutoStartup_1500 cancelApplicationAutoStartup callback null + err: ' +
          JSON.stringify(err) + ' data: ' + JSON.stringify(data));
          expect().assertFail();
        });
      } catch (err) {
        console.info('====> Acts_AutoStartup_1500 cancelApplicationAutoStartup callback null + err: ' +
        JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        AutoStartUpManager.cancelApplicationAutoStartup(undefined, (err, data) => {
          console.info('====> Acts_AutoStartup_1500 cancelApplicationAutoStartup callback undefined + err: ' +
          JSON.stringify(err) + ' data: ' + JSON.stringify(data));
          expect().assertFail();
        });
      } catch (err) {
        console.info('====> Acts_AutoStartup_1500 cancelApplicationAutoStartup callback undefined + err: ' +
        JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        AutoStartUpManager.cancelApplicationAutoStartup(null).catch((err) => {
          console.info('====> Acts_AutoStartup_1500 cancelApplicationAutoStartup promise null + err: ' +
          JSON.stringify(err));
          expect().assertFail();
        })
      } catch (err) {
        console.info('====> Acts_AutoStartup_1500 cancelApplicationAutoStartup promise null + err: ' +
        JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        AutoStartUpManager.cancelApplicationAutoStartup(undefined).catch((err) => {
          console.info('====> Acts_AutoStartup_1500 cancelApplicationAutoStartup promise undefined + err: ' +
          JSON.stringify(err));
          expect().assertFail();
        })
      } catch (err) {
        console.info('====> Acts_AutoStartup_1500 cancelApplicationAutoStartup promise undefined2 + err: ' +
        JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number: Acts_AutoStartup_1600
     * @tc.name: Provide application self-starting management capabilities
     * @tc.desc: Non-system applications are not allowed to set/cancel the startup of other application
     * components.（callback）
     */
    it('Acts_AutoStartup_1600', 0, function (done) {
      let subscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then((data) => {
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.context.startAbility({
          bundleName: 'com.example.autostartupmanagethree',
          abilityName: 'EntryAbility',
          action: 'Acts_AutoStartup_1600'
        }, (err) => {
          console.info('====> Acts_AutoStartup_1600 startAbility OK err: ' + JSON.stringify(err));
        })
      })

      let clear = setTimeout(() => {
        expect().assertFail();
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }, 5000);

      let flag = 0;

      function subscribeCallBack(err, data) {
        if (data.event === 'ACTS_CALL_EVENT_UI_SET') {
          expect(data.parameters.str).assertEqual(202);
          flag++;
        }

        if (data.event === 'ACTS_CALL_EVENT_UI_CANCEL') {
          expect(data.parameters.str).assertEqual(202);
          flag++;
        }

        if (flag === CALL_TWICE) {
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          clearTimeout(clear);
        }
      }

      function unSubscribeCallback() {
        console.info(`====>Acts_AutoStartup_1600 unSubscribeCallback`);
        done();

      }
    })

    /*
     * @tc.number: Acts_AutoStartup_1700
     * @tc.name: Provide application self-starting management capabilities
     * @tc.desc: Non-system applications are not allowed to set/cancel the startup of other application
     * components.（promise）
     */
    it('Acts_AutoStartup_1700', 0, function (done) {
      let subscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then((data) => {
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.context.startAbility({
          bundleName: 'com.example.autostartupmanagethree',
          abilityName: 'EntryAbility',
          action: 'Acts_AutoStartup_1700'
        }, (err) => {
          console.info('====> Acts_AutoStartup_1700 startAbility OK err: ' + JSON.stringify(err));
        })
      })

      let clear = setTimeout(() => {
        expect().assertFail();
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }, 5000);

      let flag = 0;

      function subscribeCallBack(err, data) {
        if (data.event === 'ACTS_CALL_EVENT_UI_SET') {
          expect(data.parameters.str).assertEqual(202);
          flag++;
        }

        if (data.event === 'ACTS_CALL_EVENT_UI_CANCEL') {
          expect(data.parameters.str).assertEqual(202);
          flag++;
        }

        if (flag === CALL_TWICE) {
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          clearTimeout(clear);
        }

      }

      function unSubscribeCallback() {
        console.info(`====>Acts_AutoStartup_1700 unSubscribeCallback`);
        done();
      }
    })

    /*
     * @tc.number: Acts_AutoStartup_1800
     * @tc.name: Provide application self-starting management capabilities
     * @tc.desc: Non-system applications are not allowed to query the startup and self-startup status of
     * applications.（callback）
     */
    it('Acts_AutoStartup_1800', 0, function (done) {
      let subscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then((data) => {
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.context.startAbility({
          bundleName: 'com.example.autostartupmanagethree',
          abilityName: 'EntryAbility',
          action: 'Acts_AutoStartup_1800'
        }, (err) => {
          console.info('====> Acts_AutoStartup_1800 startAbility OK err: ' + JSON.stringify(err));
        })
      })

      let clear = setTimeout(() => {
        expect().assertFail();
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }, 5000);

      function subscribeCallBack(err, data) {
        if (data.event === 'ACTS_CALL_EVENT_QUERY') {
          expect(data.parameters.str).assertEqual(202);
          clearTimeout(clear);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        console.info(`====>Acts_AutoStartup_1800 unSubscribeCallback`);
        done();
      }
    })

    /*
     * @tc.number: Acts_AutoStartup_1900
     * @tc.name: Provide application self-starting management capabilities
     * @tc.desc: Non-system applications are not allowed to query the startup and self-startup status of
     * applications.（promise）
     */
    it('Acts_AutoStartup_1900', 0, function (done) {
      let subscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then((data) => {
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.context.startAbility({
          bundleName: 'com.example.autostartupmanagethree',
          abilityName: 'EntryAbility',
          action: 'Acts_AutoStartup_1900'
        }, (err) => {
          console.info('====> Acts_AutoStartup_1900 startAbility OK err: ' + JSON.stringify(err));
        })
      })

      let clear = setTimeout(() => {
        expect().assertFail();
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }, 5000);

      function subscribeCallBack(err, data) {
        if (data.event === 'ACTS_CALL_EVENT_QUERY') {
          expect(data.parameters.str).assertEqual(202);
          clearTimeout(clear);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        console.info(`====>Acts_AutoStartup_1900 unSubscribeCallback`);
        done();
      }
    })

    /*
     * @tc.number: Acts_AutoStartup_2000
     * @tc.name: Provide application self-starting management capabilities
     * @tc.desc: Non-system applications are not allowed to register/cancel listening to the change of startup state
     * of the application.
     */
    it('Acts_AutoStartup_2000', 0, function (done) {
      let subscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then((data) => {
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.context.startAbility({
          bundleName: 'com.example.autostartupmanagethree',
          abilityName: 'EntryAbility',
          action: 'Acts_AutoStartup_2000'
        }, (err) => {
          console.info('====> Acts_AutoStartup_2000 startAbility OK err: ' + JSON.stringify(err));
        })
      })

      let clear = setTimeout(() => {
        expect().assertFail();
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }, 5000);

      let flag = 0;

      function subscribeCallBack(err, data) {
        if (data.event === 'ACTS_CALL_EVENT_REGISTER_ON') {
          expect(data.parameters.str).assertEqual(202);
          flag++;
          console.info(`====>Acts_AutoStartup_2000  ACTS_CALL_EVENT_REGISTER_ON ${flag}`);
        }
        if (data.event === 'ACTS_CALL_EVENT_REGISTER_OFF') {
          expect(data.parameters.str).assertEqual(202);
          flag++;
          console.info(`====>Acts_AutoStartup_2000  ACTS_CALL_EVENT_REGISTER_OFF ${flag}`);
        }
        if (flag === CALL_TWICE) {
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          clearTimeout(clear);
        }
      }

      function unSubscribeCallback() {
        console.info(`====>Acts_AutoStartup_2000 unSubscribeCallback`);
        done();
      }
    })
  })
}