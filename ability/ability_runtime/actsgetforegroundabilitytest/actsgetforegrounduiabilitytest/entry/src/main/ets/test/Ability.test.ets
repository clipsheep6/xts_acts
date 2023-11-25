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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import commonEvent from '@ohos.commonEventManager';

let TIMEOUT_TWO_SECONDS = 2000;
let TIMEOUTTEN = 1000;
let ERROR_CODE_ZERO = 0;
function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

let ACTS_ProcessState = {
  events: ['Acts_MonitorApp_First', 'Acts_MonitorApp_Second', 'Acts_MonitorApp_Third'],
};

export default function abilityTest() {
  afterEach(async () => {
    await sleep(TIMEOUT_TWO_SECONDS);
  })

  describe('ActsAbilityTest', function () {

    /*
    * @tc.number: Acts_GetForegroundUiAbilityTest_0200
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that the observer parameters for registering on and unregistering off are passed in
    *           as null and undefined (non system applications)
    */
    it('Acts_GetForegroundUiAbilityTest_0200', 0, async function (done) {
      let subscriber;

      function subscribeCallBack(err, data) {
        console.info('====>Acts_GetForegroundUiAbilityTest_0200 data: ' + JSON.stringify(data));
        if (data.event == 'Acts_MonitorApp_Second') {
          console.info('====>Acts_GetForegroundUiAbilityTest_0200 data.event=====' + data.event);
          console.info('====>Acts_GetForegroundUiAbilityTest_0200 code=====' + data.parameters.message.code);
          expect(data.parameters.message.code).assertEqual(202);
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
        console.info('====>Acts_GetForegroundUiAbilityTest_0200 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        let want = {
          'bundleName': 'com.example.appnotsystem',
          'abilityName': 'EntryAbility',
          'action': 'Acts_ForegroundApp_0200'
        }
        await sleep(TIMEOUTTEN);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_GetForegroundUiAbilityTest_0200 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
     * @tc.number: Acts_GetForegroundUiAbilityTest_0300
     * @tc.name: Listen for UIAbility start and exit
     * @tc.desc: Verify that the observer parameters for registration on and deregistration off are passed in
     *           with null and undefined parameters respectively (the application does not have permission)
     */
    it('Acts_GetForegroundUiAbilityTest_0300', 0, async function (done) {
      let subscriber;

      function subscribeCallBack(err, data) {
        console.info('====>Acts_GetForegroundUiAbilityTest_0300 data: ' + JSON.stringify(data));
        if (data.event == 'Acts_MonitorApp_Second') {
          console.info('====>Acts_GetForegroundUiAbilityTest_0300 code=====' + data.parameters.message.code);
          expect(data.parameters.message.code).assertEqual(201);
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
        console.info('====>Acts_GetForegroundUiAbilityTest_0300 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.appnopermission',
          'abilityName': 'EntryAbility',
          'action': 'Acts_ForegroundApp_0300'
        }
        await sleep(TIMEOUTTEN);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_GetForegroundUiAbilityTest_0300 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
    * @tc.number: Acts_GetForegroundUiAbilityTest_0400
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify registering an observer in OtherAbility and switching between the front-end and back-end
    *          (single module)
    */
    it('Acts_GetForegroundUiAbilityTest_0400', 0, async function (done) {
      let subscriber;

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_GetForegroundUiAbilityTest_0400 data: ' + JSON.stringify(data));
        if (data.event == 'Acts_MonitorApp_First') {
          console.info('====>Acts_GetForegroundUiAbilityTest_0400 data.parameters.message=====' +
            JSON.stringify(data.parameters.message));
          for (let j = 0; j < data.parameters.message.length; j++) {
            console.log("Acts_GetForegroundUiAbilityTest_0400 data.parameters.message[" + j + "] : "
              + data.parameters.message[j]);
            if (data.parameters.message[j].abilityName == 'TestAbilityOther') {
              expect(data.parameters.message[j].abilityName).assertEqual('TestAbilityOther');
              expect(data.parameters.message[j].abilityType).assertLarger(0);
              expect(data.parameters.message[j].bundleName).assertEqual('com.example.getforegroundtest');
              expect(data.parameters.message[j].moduleName).assertEqual('entry_test');
              expect(data.parameters.message[j].pid).assertLarger(0);
              expect(data.parameters.message[j].state).assertEqual(9);
              expect(data.parameters.message[j].uid).assertLarger(0);
              commonEvent.unsubscribe(subscriber);
              done();
            }
          }
        }
      }

      commonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
        console.info('====>Acts_GetForegroundUiAbilityTest_0400 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.getforegroundtest',
          'abilityName': 'TestAbilityOther',
          'action': 'Acts_ForegroundApp_0400'
        }
        await sleep(TIMEOUTTEN);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_GetForegroundUiAbilityTest_0400 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
    * @tc.number: Acts_GetForegroundUiAbilityTest_0500
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that the same observer is registered twice in OtherAbility and switches between
    *          the front-end and back-end (single module)
    */
    it('Acts_GetForegroundUiAbilityTest_0500', 0, async function (done) {
      let subscriber;
      let msg = { "ACTS_RegisterEvent_First": false, "ACTS_RegisterEvent_Second": false }

      function subscribeCallBack(err, data) {
        console.info('====>Acts_GetForegroundUiAbilityTest_0500 data: ' + JSON.stringify(data));
        if (data.event == 'Acts_MonitorApp_Third') {
          for (let j = 0; j < data.parameters.result.length; j++) {
            console.log("Acts_GetForegroundUiAbilityTest_0500 data.parameters.result[" + j + "] : "
              + data.parameters.result[j]);
            if (data.parameters.result[j].abilityName == 'TestAbilityOtherSecond') {
              console.info('====>Acts_GetForegroundUiAbilityTest_0500 data1: ');
              expect(data.parameters.result[j].abilityName).assertEqual('TestAbilityOtherSecond');
              expect(data.parameters.result[j].bundleName).assertEqual('com.example.getforegroundtest');
              expect(data.parameters.result[j].moduleName).assertEqual('entry_test');
              expect(data.parameters.result[j].state).assertEqual(9);
              msg["ACTS_RegisterEvent_First"] = true;
            } else if (data.parameters.result[j].abilityName == 'TestAbilityOther') {
              console.info('====>Acts_GetForegroundUiAbilityTest_0500 data2: ');
              expect(data.parameters.result[j].abilityName).assertEqual('TestAbilityOther');
              expect(data.parameters.result[j].bundleName).assertEqual('com.example.getforegroundtest');
              expect(data.parameters.result[j].moduleName).assertEqual('entry_test');
              expect(data.parameters.result[j].state).assertEqual(9);
              msg["ACTS_RegisterEvent_Second"] = true;
            }
          }
        }

        setTimeout(() => {
          if (msg["ACTS_RegisterEvent_First"] == true && msg["ACTS_RegisterEvent_Second"] == true) {
            commonEvent.unsubscribe(subscriber);
            done();
          }
        }, TIMEOUTTEN)
      }

      commonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
        console.info('====>Acts_GetForegroundUiAbilityTest_0500 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.getforegroundtest',
          'abilityName': 'TestAbilityOther',
          'action': 'Acts_ForegroundApp_0500'
        }
        await sleep(TIMEOUTTEN);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_GetForegroundUiAbilityTest_0500 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
    * @tc.number: Acts_GetForegroundUiAbilityTest_0600
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that different observers are registered twice in OtherAbility and switch between the
    *          front-end and back-end (single module)
    */
    it('Acts_GetForegroundUiAbilityTest_0600', 0, async function (done) {
      let subscriber;
      let msg = { "ACTS_RegisterEvent_First": false, "ACTS_RegisterEvent_Second": false }

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_GetForegroundUiAbilityTest_0600 data: ' + JSON.stringify(data));
        if (data.event == 'Acts_MonitorApp_First') {
          for (let j = 0; j < data.parameters.result.length; j++) {
            console.log("Acts_GetForegroundUiAbilityTest_0600 data.parameters.result[" + j + "] : "
              + data.parameters.result[j]);
            if (data.parameters.result[j].abilityName == 'EntryAbility') {
              console.info('====>Acts_GetForegroundUiAbilityTest_0600 data1: ');
              expect(data.parameters.result[j].abilityName).assertEqual('EntryAbility');
              expect(data.parameters.result[j].bundleName).assertEqual('com.example.getforegroundtest');
              expect(data.parameters.result[j].moduleName).assertEqual('entry');
              expect(data.parameters.result[j].state).assertEqual(9);
              msg["ACTS_RegisterEvent_First"] = true;
            } else if (data.parameters.result[j].abilityName == 'TestAbilityOther') {
              console.info('====>Acts_GetForegroundUiAbilityTest_0600 data2: ');
              expect(data.parameters.result[j].abilityName).assertEqual('TestAbilityOther');
              expect(data.parameters.result[j].bundleName).assertEqual('com.example.getforegroundtest');
              expect(data.parameters.result[j].moduleName).assertEqual('entry_test');
              expect(data.parameters.result[j].state).assertEqual(9);
              msg["ACTS_RegisterEvent_Second"] = true;
            }
          }
        }

        setTimeout(() => {
          if (msg["ACTS_RegisterEvent_First"] == true && msg["ACTS_RegisterEvent_Second"] == true) {
            commonEvent.unsubscribe(subscriber);
            done();
          }
        }, TIMEOUTTEN)
      }

      commonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
        console.info('====>Acts_GetForegroundUiAbilityTest_0600 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.getforegroundtest',
          'abilityName': 'TestAbilityOther',
          'action': 'Acts_ForegroundApp_0600'
        }
        await sleep(TIMEOUTTEN);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_GetForegroundUiAbilityTest_0600 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
      * @tc.number: Acts_GetForegroundUiAbilityTest_0700
      * @tc.name: Listen for UIAbility start and exit
      * @tc.desc: Verify that different observers are registered twice in OtherAbility and switch between the
      *          front-end and back-end (single module)
      */
    it('Acts_GetForegroundUiAbilityTest_0700', 0, async function (done) {
      let subscriber;
      let msg = { "ACTS_RegisterEvent_First": false, "ACTS_RegisterEvent_Second": false }

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_GetForegroundUiAbilityTest_0700 data: ' + JSON.stringify(data));
        if (data.event == 'Acts_MonitorApp_Second') {
          for (let j = 0; j < data.parameters.result.length; j++) {
            console.log("Acts_GetForegroundUiAbilityTest_0700 data.parameters.result[" + j + "] : "
              + data.parameters.result[j]);
            if (data.parameters.result[j].abilityName == 'EntryAbility') {
              console.info('====>Acts_GetForegroundUiAbilityTest_0700 data1: ');
              expect(data.parameters.result[j].abilityName).assertEqual('EntryAbility');
              expect(data.parameters.result[j].bundleName).assertEqual('com.example.getforegroundfirstrely');
              expect(data.parameters.result[j].moduleName).assertEqual('entry');
              expect(data.parameters.result[j].state).assertEqual(9);
              msg["ACTS_RegisterEvent_First"] = true;
            } else if (data.parameters.result[j].abilityName == 'TestAbilityOther') {
              console.info('====>Acts_GetForegroundUiAbilityTest_0700 data2: ');
              expect(data.parameters.result[j].abilityName).assertEqual('TestAbilityOther');
              expect(data.parameters.result[j].bundleName).assertEqual('com.example.getforegroundtest');
              expect(data.parameters.result[j].moduleName).assertEqual('entry_test');
              expect(data.parameters.result[j].state).assertEqual(9);
              msg["ACTS_RegisterEvent_Second"] = true;
            }
          }
        }

        setTimeout(() => {
          if (msg["ACTS_RegisterEvent_First"] == true && msg["ACTS_RegisterEvent_Second"] == true) {
            commonEvent.unsubscribe(subscriber);
            done();
          }
        }, TIMEOUTTEN)
      }

      commonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
        console.info('====>Acts_GetForegroundUiAbilityTest_0700 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.getforegroundtest',
          'abilityName': 'TestAbilityOther',
          'action': 'Acts_ForegroundApp_0700'
        }
        await sleep(TIMEOUTTEN);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_GetForegroundUiAbilityTest_0700 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })
  })
}