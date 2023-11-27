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
import abilityManager from '@ohos.app.ability.abilityManager';
import commonEvent from '@ohos.commonEventManager';

let TIMEOUT_TWO_SECONDS = 2000;
let TIMEOUTTHREE = 300;
let TIMEOUTFIVE = 500;
let ERROR_CODE_ZERO = 0;
function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

let ACTS_ProcessState = {
  events: ['Acts_MonitorApp_First', 'Acts_MonitorApp_Second'],
};

let ACTS_DataEvent = {
  events: ['Acts_MonitorApp_Third', 'Acts_MonitorApp_Fourth', 'Acts_MonitorApp_Fifth'],
};

export default function abilityTest() {
  afterEach(async () => {
    await sleep(TIMEOUT_TWO_SECONDS);
  })

  describe('ActsAbilityTest', function () {

    /*
     * @tc.number: Acts_MonitorUIAbilityTest_0100
     * @tc.name: Listen for UIAbility start and exit
     * @tc.desc: Verify that the observer parameters for registering on and unregistering off are passed in
     *           with null and undefined parameters, respectively
     */
    it('Acts_MonitorUIAbilityTest_0100', 0, async function (done) {
      try {
        abilityManager.on('abilityForegroundState', null);
        expect().assertFail();
      } catch (err) {
        console.info('Acts_MonitorUIAbilityTest_0100 on null: ' + err.code);
        expect(err.code).assertEqual(401);
      }

      try {
        abilityManager.on('abilityForegroundState', undefined);
        expect().assertFail();
      } catch (err) {
        console.info('Acts_MonitorUIAbilityTest_0100 on undefined: ' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
      }

      try {
        abilityManager.off('abilityForegroundState', null);
        expect().assertFail();
      } catch (err) {
        console.info('Acts_MonitorUIAbilityTest_0400 off null: ' + err.code);
        expect(err.code).assertEqual(401);
      }

      try {
        abilityManager.off('abilityForegroundState', undefined);
        expect().assertFail();
      } catch (err) {
        console.info('Acts_MonitorUIAbilityTest_0400 off undefined: ' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_0200
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that the observer parameters for registering on and unregistering off are passed in
    *           as null and undefined (non system applications)
    */
    it('Acts_MonitorUIAbilityTest_0200', 0, async function (done) {
      let subscriber;

      function subscribeCallBack(err, data) {
        console.info('====>Acts_MonitorApp_0200 data: ' + JSON.stringify(data));
        if (data.event == 'Acts_MonitorApp_First') {
          console.info('====>Acts_MonitorApp_0200 data.event=====' + data.event);
          expect(data.parameters.message).assertEqual(202);
          expect(data.parameters.result).assertEqual(202);
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
        console.info('====>Acts_MonitorApp_0200 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        let want = {
          'bundleName': 'com.example.monitorappnotsystem',
          'abilityName': 'EntryAbility',
          'action': 'Acts_MonitorApp_0200'
        }
        await sleep(TIMEOUTFIVE);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_MonitorApp_0200 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
     * @tc.number: Acts_MonitorUIAbilityTest_0300
     * @tc.name: Listen for UIAbility start and exit
     * @tc.desc: Verify that the observer parameters for registration on and deregistration off are passed in
     *           with null and undefined parameters respectively (the application does not have permission)
     */
    it('Acts_MonitorUIAbilityTest_0300', 0, async function (done) {
      let subscriber;

      function subscribeCallBack(err, data) {
        console.info('====>Acts_MonitorUIAbilityTest_0300 data: ' + JSON.stringify(data));
        if (data.event == 'Acts_MonitorApp_Second') {
          expect(data.parameters.message).assertEqual(201);
          expect(data.parameters.result).assertEqual(201);
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
        console.info('====>Acts_MonitorUIAbilityTest_0300 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.monitorappnopermission',
          'abilityName': 'EntryAbility',
          'action': 'Acts_MonitorApp_0300'
        }
        await sleep(TIMEOUTFIVE);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_MonitorUIAbilityTest_0300 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_0400
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify registering an observer in OtherAbility and switching between the front-end and back-end
    *          (single module)
    */
    it('Acts_MonitorUIAbilityTest_0400', 0, async function (done) {
      let subscriber;

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_MonitorUIAbilityTest_0400 data: ' + JSON.stringify(data));
        await sleep(TIMEOUTTHREE);
        if (data.event == 'Acts_MonitorApp_First') {
          console.info('====>Acts_MonitorUIAbilityTest_0400 data.parameters.message====='
            + JSON.stringify(data.parameters.message));
          expect(data.parameters.message.state).assertEqual(2);
          expect(data.parameters.message.abilityName).assertEqual('TestAbilityOther');
          expect(data.parameters.message.abilityType).assertEqual(1);
          expect(data.parameters.message.bundleName).assertEqual('com.example.monitorapptest');
          expect(data.parameters.message.moduleName).assertEqual('entry_test');
          expect(data.parameters.message.pid).assertLarger(0);
          expect(data.parameters.message.uid).assertLarger(0);
          expect(data.parameters.result.state).assertEqual(4);
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
        console.info('====>Acts_MonitorUIAbilityTest_0400 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.monitorapptest',
          'abilityName': 'TestAbilityOther',
          'action': 'Acts_MonitorApp_0400'
        }
        await sleep(TIMEOUTFIVE);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_MonitorUIAbilityTest_0400 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_0500
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that the same observer is registered twice in OtherAbility and switches between
    *          the front-end and back-end (single module)
    */
    it('Acts_MonitorUIAbilityTest_0500', 0, async function (done) {
      let subscriber;
      let countNum = 0;
      let msg = {
        'Acts_CommonEvent_First': false, 'Acts_CommonEvent_Second': false
      };

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_MonitorUIAbilityTest_0500 data: ' + JSON.stringify(data));
        if (data.event == 'Acts_MonitorApp_Second') {
          expect(data.parameters.message.state).assertEqual(2);
          expect(data.parameters.result.state).assertEqual(4);
          msg['Acts_CommonEvent_First'] = true;
          countNum++;
        }
        await sleep(TIMEOUTFIVE);
        if (msg['Acts_CommonEvent_First'] == true) {
          commonEvent.unsubscribe(subscriber);
          done();
        } else if (countNum == 2) {
          expect().assertFail();
        }
      }

      commonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
        console.info('====>Acts_MonitorUIAbilityTest_0500 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.monitorapptest',
          'abilityName': 'TestAbilityOther',
          'action': 'Acts_MonitorApp_0500'
        }
        await sleep(TIMEOUTTHREE);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_MonitorUIAbilityTest_0500 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_0600
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that different observers are registered twice in OtherAbility and switch between the
    *          front-end and back-end (single module)
    */
    it('Acts_MonitorUIAbilityTest_0600', 0, async function (done) {
      let subscriber;

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_MonitorUIAbilityTest_0600 data: ' + JSON.stringify(data));
        await sleep(TIMEOUTTHREE);
        if (data.event == 'Acts_MonitorApp_First') {
          expect(data.parameters.message1.state).assertEqual(2);
          expect(data.parameters.message2.state).assertEqual(4);
          expect(data.parameters.message3.state).assertEqual(2);
          expect(data.parameters.message4.state).assertEqual(4);
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
        console.info('====>Acts_MonitorUIAbilityTest_0600 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.monitorapptest',
          'abilityName': 'TestAbilityOther',
          'action': 'Acts_MonitorApp_0600'
        }
        await sleep(TIMEOUTTHREE);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_MonitorUIAbilityTest_0600 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_0700
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify the registration of observer in OtherAbility, unregister observer, and switch between
    *          front-end and back-end (single module)
    */
    it('Acts_MonitorUIAbilityTest_0700', 0, async function (done) {
      let subscriber;
      let msg = {
        'Acts_CommonEvent_First': true, 'Acts_CommonEvent_Second': true, 'Acts_CommonEvent_Third': false
      };

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_MonitorUIAbilityTest_0700 data: ' + JSON.stringify(data));
        await sleep(TIMEOUTTHREE);
        if (data.event == 'Acts_MonitorApp_Third') {
          msg['Acts_CommonEvent_First'] = false;
        } else if (data.event == 'Acts_MonitorApp_Fourth') {
          msg['Acts_CommonEvent_Second'] = false;
        } else if (data.event == 'Acts_MonitorApp_Fifth') {
          msg['Acts_CommonEvent_Third'] = true;
        }
        if (msg['Acts_CommonEvent_Third'] == true && msg['Acts_CommonEvent_Second'] == true
          && msg['Acts_CommonEvent_First'] == true) {
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_DataEvent).then(async (data) => {
        console.info('====>Acts_MonitorUIAbilityTest_0700 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.monitorapptest',
          'abilityName': 'TestAbilityOther',
          'action': 'Acts_MonitorApp_0700'
        }
        await sleep(TIMEOUTTHREE);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_MonitorUIAbilityTest_0700 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_0800
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that two observers are registered in OtherAbility and the second observer is deregistered
    *          and switches between the front-end and back-end (single module)
    */
    it('Acts_MonitorUIAbilityTest_0800', 0, async function (done) {
      let subscriber;
      let msg = {
        'Acts_CommonEvent_First': false, 'Acts_CommonEvent_Second': false
      };

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_MonitorUIAbilityTest_0800 data: ' + JSON.stringify(data));
        if (data.event == 'Acts_MonitorApp_Second') {
          expect(data.parameters.message1.state).assertEqual(2);
          expect(data.parameters.message2.state).assertEqual(4);
          msg['Acts_CommonEvent_Second'] = true;
        } else if (data.event == 'Acts_MonitorApp_First') {
          msg['Acts_CommonEvent_First'] = true;
        }
        await sleep(TIMEOUTFIVE);
        if (msg['Acts_CommonEvent_Second'] == true && msg['Acts_CommonEvent_First'] == false) {
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
        console.info('====>Acts_MonitorUIAbilityTest_0800 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.monitorapptest',
          'abilityName': 'TestAbilityOther',
          'action': 'Acts_MonitorApp_0800'
        }
        await sleep(TIMEOUTTHREE);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_MonitorUIAbilityTest_0800 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_0900
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that the same observer is deregistered twice in OtherAbility (single module)
    */
    it('Acts_MonitorUIAbilityTest_0900', 0, async function (done) {
      let AbilityForegroundStateObserver = {
        async onAbilityStateChanged(AbilityStateData) {
          console.info('====>Acts_MonitorUIAbilityTest_0900 onAbilityStateChanged');
        }
      }
      try {
        abilityManager.on('abilityForegroundState', AbilityForegroundStateObserver);
        abilityManager.off('abilityForegroundState', AbilityForegroundStateObserver);
        abilityManager.off('abilityForegroundState', AbilityForegroundStateObserver);
        expect().assertFail();
      } catch (err) {
        console.info('====>Acts_MonitorUIAbilityTest_0900 AbilityForegroundStateObserver err:' + err.code);
        expect(err.code).assertEqual(16000050);
        done()
      }
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_1000
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify registering an observer in EntryAbility and switching between front-end and back-end
    *          (multiple modules)
    */
    it('Acts_MonitorUIAbilityTest_1000', 0, async function (done) {
      let subscriber;

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_MonitorUIAbilityTest_1000 data: ' + JSON.stringify(data));
        await sleep(TIMEOUTTHREE);
        if (data.event == 'Acts_MonitorApp_Third') {
          expect(data.parameters.message.state).assertEqual(2);
          expect(data.parameters.result.state).assertEqual(4);
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_DataEvent).then(async (data) => {
        console.info('====>Acts_MonitorUIAbilityTest_1000 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.monitorapptest',
          'abilityName': 'EntryAbility',
          'moduleName': 'entry',
          'action': 'Acts_MonitorApp_1000'
        }
        await sleep(TIMEOUTTHREE);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_MonitorUIAbilityTest_1000 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_1100
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that the observer is registered and unregistered in EntryAbility, and switch between the
    *          front-end and back-end (multiple modules)
    */
    it('Acts_MonitorUIAbilityTest_1100', 0, async function (done) {
      let subscriber;
      let msg = {
        'Acts_CommonEvent_First': true, 'Acts_CommonEvent_Second': true, 'Acts_CommonEvent_Third': false
      };

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_MonitorUIAbilityTest_1100 data: ' + JSON.stringify(data));
        await sleep(TIMEOUTTHREE);
        if (data.event == 'Acts_MonitorApp_Third') {
          msg['Acts_CommonEvent_First'] = false;
        } else if (data.event == 'Acts_MonitorApp_Fourth') {
          msg['Acts_CommonEvent_Second'] = false;
        } else if (data.event == 'Acts_MonitorApp_Fifth') {
          msg['Acts_CommonEvent_Third'] = true;
        }
        if (msg['Acts_CommonEvent_Third'] == true && msg['Acts_CommonEvent_Second'] == true
          && msg['Acts_CommonEvent_First'] == true) {
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_DataEvent).then(async (data) => {
        console.info('====>Acts_MonitorUIAbilityTest_1100 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.monitorapptest',
          'abilityName': 'EntryAbility',
          'moduleName': 'entry',
          'action': 'Acts_MonitorApp_1100'
        }
        await sleep(TIMEOUTTHREE);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_MonitorUIAbilityTest_1100 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_1200
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify registering an observer in EntryAbility and switching between front-end and back-end
    *          (multiple app)
    */
    it('Acts_MonitorUIAbilityTest_1200', 0, async function (done) {
      let subscriber;

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_MonitorUIAbilityTest_1200 data:: ' + JSON.stringify(data));
        await sleep(TIMEOUTTHREE);
        if (data.event == 'Acts_MonitorApp_Third') {
          expect(data.parameters.message.state).assertEqual(2);
          expect(data.parameters.result.state).assertEqual(4);
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_DataEvent).then(async (data) => {
        console.info('====>Acts_MonitorUIAbilityTest_1200 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.monitorappfirstrely',
          'abilityName': 'EntryAbility',
          'moduleName': 'entry',
          'action': 'Acts_MonitorApp_1200'
        }
        await sleep(TIMEOUTTHREE);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_MonitorUIAbilityTest_1200 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_1300
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that the observer is registered and unregistered in EntryAbility, and switch between the
    *          front-end and back-end (multiple app)
    */
    it('Acts_MonitorUIAbilityTest_1300', 0, async function (done) {
      let subscriber;
      let msg = {
        'Acts_CommonEvent_First': true, 'Acts_CommonEvent_Second': true, 'Acts_CommonEvent_Third': false
      };

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_MonitorUIAbilityTest_1300 data: ' + JSON.stringify(data));
        await sleep(TIMEOUTTHREE);
        if (data.event == 'Acts_MonitorApp_Third') {
          msg['Acts_CommonEvent_First'] = false;
        } else if (data.event == 'Acts_MonitorApp_Fourth') {
          msg['Acts_CommonEvent_Second'] = false;
        } else if (data.event == 'Acts_MonitorApp_Fifth') {
          msg['Acts_CommonEvent_Third'] = true;
        }
        if (msg['Acts_CommonEvent_Third'] == true && msg['Acts_CommonEvent_Second'] == true
          && msg['Acts_CommonEvent_First'] == true) {
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_DataEvent).then(async (data) => {
        console.info('====>Acts_MonitorUIAbilityTest_1300 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.monitorappfirstrely',
          'abilityName': 'EntryAbility',
          'moduleName': 'entry',
          'action': 'Acts_MonitorApp_1300'
        }
        await sleep(TIMEOUTTHREE);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_MonitorUIAbilityTest_1300 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })

   /*
    * @tc.number: Acts_MonitorUIAbilityTest_1400
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that two different observer are registered in the ability, call the unregistration API
    *         (no observer is passed), and all observer are unregistered.
    */
    it('Acts_MonitorUIAbilityTest_1400', 0, async function (done) {
      let subscriber;
      let msg = {
        'Acts_CommonEvent_First': false, 'Acts_CommonEvent_Second': false, 'Acts_CommonEvent_Third': false
      };

      async function subscribeCallBack(err, data) {
        console.info('====>Acts_MonitorUIAbilityTest_1400 data: ' + JSON.stringify(data));
        if (data.event == 'Acts_MonitorApp_Third') {
          msg['Acts_CommonEvent_First'] = true;
        } else if (data.event == 'Acts_MonitorApp_Fourth') {
          msg['Acts_CommonEvent_Second'] = true;
        } else if (data.event == 'Acts_MonitorApp_Fifth') {
          msg['Acts_CommonEvent_Third'] = true;
        }
        await sleep(TIMEOUTTHREE);
        if (msg['Acts_CommonEvent_Third'] == true && msg['Acts_CommonEvent_Second'] == false
          && msg['Acts_CommonEvent_First'] == false) {
          commonEvent.unsubscribe(subscriber);
          done();
        }
      }

      commonEvent.createSubscriber(ACTS_DataEvent).then(async (data) => {
        console.info('====>Acts_MonitorUIAbilityTest_1400 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);

        let want = {
          'bundleName': 'com.example.monitorappfirstrely',
          'abilityName': 'EntryAbility',
          'moduleName': 'entry',
          'action': 'Acts_MonitorApp_1400'
        }
        await sleep(TIMEOUTTHREE);
        globalThis.abilityContext.startAbility(want, (error) => {
          console.info('Acts_MonitorUIAbilityTest_1400 error.code = ' + error.code);
          expect(error.code).assertEqual(ERROR_CODE_ZERO);
        })
      })
    })
  })
}