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
let TIMEOUTFIFTEEN = 1500;
let TIMEOUTTEN = 1000;
let TIMEOUTTHIRTEEN = 1300;
let TIMEOUTFIVE = 500;
let TIMEOUTEIGHT = 800;
let ERROR_CODE_ZERO = 0;
function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

let ACTS_ProcessState = {
  events: ['Acts_MonitorApp_First', 'Acts_MonitorApp_Second'],
};

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_0400
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify registering an observer in OtherAbility and switching between the front-end and back-end
    *          (single module)
    */
    it('Acts_MonitorUIAbilityTest_0400', 0, async function (done) {
      let TAG = 'Acts_MonitorUIAbilityTest_0400_TAG';
      console.info(TAG, 'Start');
      let foreState = -1;
      let backState = -1;
      let observer = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'TestAbilityOther') {
            if (AbilityStateData.state == 2) {
              foreState = 2;
            } else if (AbilityStateData.state == 4) {
              backState = 4;
            }
          }
        }
      }
      let want = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbilityOther'
      }
      let want1 = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbility'
      }
      abilityManager.on('abilityForegroundState', observer);
      await sleep(TIMEOUTTHIRTEEN);
      await globalThis.abilityContext.startAbility(want);
      await sleep(TIMEOUTEIGHT);
      await globalThis.abilityContext.startAbility(want1).then(async () => {
        await sleep(TIMEOUTEIGHT);
        expect(foreState).assertEqual(2);
        expect(backState).assertEqual(4);
        abilityManager.off('abilityForegroundState', observer);
        done();
      });
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_0500
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that the same observer is registered twice in OtherAbility and switches between
    *          the front-end and back-end (single module)
    */
    it('Acts_MonitorUIAbilityTest_0500', 0, async function (done) {
      let TAG = 'Acts_MonitorUIAbilityTest_0500_TAG';
      console.info(TAG, 'Start');
      let foreState = -1;
      let backState = -1;
      let flag = 0;
      let observer = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'TestAbilityOther') {
            if (AbilityStateData.state == 2) {
              foreState = 2;
              flag++;
            } else if (AbilityStateData.state == 4) {
              backState = 4;
              flag++;
            }
          }
        }
      }
      let want = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbilityOther'
      }
      let want1 = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbility'
      }
      abilityManager.on('abilityForegroundState', observer);
      abilityManager.on('abilityForegroundState', observer);
      await sleep(TIMEOUTFIFTEEN);
      await globalThis.abilityContext.startAbility(want);
      await sleep(TIMEOUTEIGHT);
      await globalThis.abilityContext.startAbility(want1).then(async () => {
        await sleep(TIMEOUTEIGHT);
        expect(foreState).assertEqual(2);
        expect(backState).assertEqual(4);
        expect(flag).assertEqual(2);
        abilityManager.off('abilityForegroundState', observer);
        done();
      });
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_0600
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that different observers are registered twice in OtherAbility and switch between the
    *          front-end and back-end (single module)
    */
    it('Acts_MonitorUIAbilityTest_0600', 0, async function (done) {
      let TAG = 'Acts_MonitorUIAbilityTest_0600_TAG';
      console.info(TAG, 'Start');
      let foreState = -1;
      let backState = -1;
      let foreState1 = -1;
      let backState1 = -1;
      let observer = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'TestAbilityOther') {
            if (AbilityStateData.state == 2) {
              foreState = 2;
            } else if (AbilityStateData.state == 4) {
              backState = 4;
            }
          }
        }
      }
      let observer1 = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'TestAbilityOther') {
            if (AbilityStateData.state == 2) {
              foreState1 = 2;
            } else if (AbilityStateData.state == 4) {
              backState1 = 4;
            }
          }
        }
      }
      let want = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbilityOther'
      }
      let want1 = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbility'
      }
      abilityManager.on('abilityForegroundState', observer);
      abilityManager.on('abilityForegroundState', observer1);
      await sleep(TIMEOUTFIFTEEN);
      await globalThis.abilityContext.startAbility(want);
      await sleep(TIMEOUTEIGHT);
      await globalThis.abilityContext.startAbility(want1).then(async () => {
        await sleep(TIMEOUTEIGHT);
        expect(foreState).assertEqual(2);
        expect(backState).assertEqual(4);
        expect(foreState1).assertEqual(2);
        expect(backState1).assertEqual(4);
        abilityManager.off('abilityForegroundState', observer);
        abilityManager.off('abilityForegroundState', observer1);
        done();
      });
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_0700
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify the registration of observer in OtherAbility, unregister observer, and switch between
    *          front-end and back-end (single module)
    */
    it('Acts_MonitorUIAbilityTest_0700', 0, async function (done) {
      let TAG = 'Acts_MonitorUIAbilityTest_0700_TAG';
      console.info(TAG, 'Start');
      let flag = 0;
      let observer = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'TestAbilityOther') {
            if (AbilityStateData.state == 2) {
              flag++;
            } else if (AbilityStateData.state == 4) {
              flag++;
            }
          }
        }
      }
      let want = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbilityOther'
      }
      let want1 = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbility'
      }
      abilityManager.on('abilityForegroundState', observer);
      abilityManager.off('abilityForegroundState', observer);
      await sleep(TIMEOUTFIFTEEN);
      await globalThis.abilityContext.startAbility(want);
      await sleep(TIMEOUTEIGHT);
      await globalThis.abilityContext.startAbility(want1).then(async () => {
        await sleep(TIMEOUTEIGHT);
        expect(flag).assertEqual(0);
        done();
      });
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_0800
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that two observers are registered in OtherAbility and the second observer is deregistered
    *          and switches between the front-end and back-end (single module)
    */
    it('Acts_MonitorUIAbilityTest_0800', 0, async function (done) {
      let TAG = 'Acts_MonitorUIAbilityTest_0800_TAG';
      console.info(TAG, 'Start');
      let foreState = -1;
      let backState = -1;
      let foreState1 = -1;
      let backState1 = -1;
      let observer = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'TestAbilityOther') {
            if (AbilityStateData.state == 2) {
              foreState = 2;
            } else if (AbilityStateData.state == 4) {
              backState = 4;
            }
          }
        }
      }
      let observer1 = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'TestAbilityOther') {
            if (AbilityStateData.state == 2) {
              foreState1 = 2;
            } else if (AbilityStateData.state == 4) {
              backState1 = 4;
            }
          }
        }
      }
      let want = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbilityOther'
      }
      let want1 = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbility'
      }
      abilityManager.on('abilityForegroundState', observer);
      abilityManager.on('abilityForegroundState', observer1);
      abilityManager.off('abilityForegroundState', observer1);
      await sleep(TIMEOUTFIFTEEN);
      await globalThis.abilityContext.startAbility(want);
      await sleep(TIMEOUTEIGHT);
      await globalThis.abilityContext.startAbility(want1).then(async () => {
        await sleep(TIMEOUTEIGHT);
        expect(foreState).assertEqual(2);
        expect(backState).assertEqual(4);
        expect(foreState1).assertEqual(-1);
        expect(backState1).assertEqual(-1);
        abilityManager.off('abilityForegroundState', observer);
        done();
      });
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
      let TAG = 'Acts_MonitorUIAbilityTest_1000_TAG';
      console.info(TAG, 'Start');
      let foreState = -1;
      let backState = -1;
      let observer = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'EntryAbility') {
            if (AbilityStateData.state == 2) {
              foreState = 2;
            } else if (AbilityStateData.state == 4) {
              backState = 4;
            }
          }
        }
      }
      let want = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'EntryAbility',
      }
      abilityManager.on('abilityForegroundState', observer);
      await sleep(TIMEOUTTEN);

      let want1 = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbility'
      }
      abilityManager.on('abilityForegroundState', observer);
      await sleep(TIMEOUTTEN);
      await globalThis.abilityContext.startAbility(want);
      await sleep(TIMEOUTFIVE);
      await globalThis.abilityContext.startAbility(want1).then(async () => {
        await sleep(TIMEOUTFIVE);
        expect(foreState).assertEqual(2);
        expect(backState).assertEqual(4);
        abilityManager.off('abilityForegroundState', observer);
        done();
      });
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_1100
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that the observer is registered and unregistered in EntryAbility, and switch between the
    *          front-end and back-end (multiple modules)
    */
    it('Acts_MonitorUIAbilityTest_1100', 0, async function (done) {
      let TAG = 'Acts_MonitorUIAbilityTest_1100_TAG';
      console.info(TAG, 'Start');
      let foreState = -1;
      let backState = -1;
      let observer = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'EntryAbility') {
            if (AbilityStateData.state == 2) {
              foreState = 2;
            } else if (AbilityStateData.state == 4) {
              backState = 4;
            }
          }
        }
      }
      let want = {
        'bundleName': 'com.example.monitorapptest',
        'abilityName': 'EntryAbility',
        'moduleName': 'entry',
      }

      let want1 = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbility'
      }
      abilityManager.on('abilityForegroundState', observer);
      abilityManager.off('abilityForegroundState', observer);
      await sleep(TIMEOUTTEN);
      await globalThis.abilityContext.startAbility(want);
      await sleep(TIMEOUTFIVE);
      await globalThis.abilityContext.startAbility(want1).then(async () => {
        await sleep(TIMEOUTFIVE);
        expect(foreState).assertEqual(-1);
        expect(backState).assertEqual(-1);
        done();
      });
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_1200
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify registering an observer in EntryAbility and switching between front-end and back-end
    *          (multiple app)
    */
    it('Acts_MonitorUIAbilityTest_1200', 0, async function (done) {
      let TAG = 'Acts_MonitorUIAbilityTest_1200_TAG';
      console.info(TAG, 'Start');
      let foreState = -1;
      let backState = -1;
      let observer = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'EntryAbility') {
            if (AbilityStateData.state == 2) {
              foreState = 2;
            } else if (AbilityStateData.state == 4) {
              backState = 4;
            }
          }
        }
      }
      let want = {
        'bundleName': 'com.example.monitorappfirstrely',
        'abilityName': 'EntryAbility'
      }

      let want1 = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbility'
      }
      abilityManager.on('abilityForegroundState', observer);
      await sleep(TIMEOUTFIFTEEN);
      await globalThis.abilityContext.startAbility(want);
      await sleep(TIMEOUTEIGHT);
      await globalThis.abilityContext.startAbility(want1).then(async () => {
        await sleep(TIMEOUTEIGHT);
        expect(foreState).assertEqual(2);
        expect(backState).assertEqual(4);
        abilityManager.off('abilityForegroundState', observer);
        done();
      });
    })

    /*
    * @tc.number: Acts_MonitorUIAbilityTest_1300
    * @tc.name: Listen for UIAbility start and exit
    * @tc.desc: Verify that the observer is registered and unregistered in EntryAbility, and switch between the
    *          front-end and back-end (multiple app)
    */
    it('Acts_MonitorUIAbilityTest_1300', 0, async function (done) {
      let TAG = 'Acts_MonitorUIAbilityTest_1300_TAG';
      console.info(TAG, 'Start');
      let foreState = -1;
      let backState = -1;
      let observer = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'EntryAbility') {
            if (AbilityStateData.state == 2) {
              foreState = 2;
            } else if (AbilityStateData.state == 4) {
              backState = 4;
            }
          }
        }
      }
      let want = {
        'bundleName': 'com.example.monitorappfirstrely',
        'abilityName': 'EntryAbility'
      }

      let want1 = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbility'
      }
      abilityManager.on('abilityForegroundState', observer);
      abilityManager.off('abilityForegroundState', observer);
      await sleep(TIMEOUTTEN);
      await globalThis.abilityContext.startAbility(want);
      await sleep(TIMEOUTFIVE);
      await globalThis.abilityContext.startAbility(want1).then(async () => {
        await sleep(TIMEOUTFIVE);
        expect(foreState).assertEqual(-1);
        expect(backState).assertEqual(-1);
        done();
      });
    })

    /*
     * @tc.number: Acts_MonitorUIAbilityTest_1400
     * @tc.name: Listen for UIAbility start and exit
     * @tc.desc: Verify that two different observer are registered in the ability, call the unregistration API
     *         (no observer is passed), and all observer are unregistered.
     */
    it('Acts_MonitorUIAbilityTest_1400', 0, async function (done) {
      let TAG = 'Acts_MonitorUIAbilityTest_1400_TAG';
      console.info(TAG, 'Start');
      let foreState = -1;
      let backState = -1;
      let foreState1 = -1;
      let backState1 = -1;
      let observer = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'EntryAbility') {
            if (AbilityStateData.state == 2) {
              foreState = 2;
            } else if (AbilityStateData.state == 4) {
              backState = 4;
            }
          }
        }
      }
      let observer1 = {
        onAbilityStateChanged(AbilityStateData) {
          console.info(TAG, 'onAbilityStateChanged entered.' + JSON.stringify(AbilityStateData));
          if (AbilityStateData.abilityName == 'EntryAbility') {
            if (AbilityStateData.state == 2) {
              foreState1 = 2;
            } else if (AbilityStateData.state == 4) {
              backState1 = 4;
            }
          }
        }
      }
      let want = {
        'bundleName': 'com.example.monitorappfirstrely',
        'abilityName': 'EntryAbility',
        'moduleName': 'entry',
      }
      let want1 = {
        bundleName: 'com.example.monitorapptest',
        abilityName: 'TestAbility'
      }
      abilityManager.on('abilityForegroundState', observer);
      abilityManager.on('abilityForegroundState', observer1);
      abilityManager.off('abilityForegroundState');
      await sleep(TIMEOUTTEN);
      await globalThis.abilityContext.startAbility(want);
      await sleep(TIMEOUTFIVE);
      await globalThis.abilityContext.startAbility(want1).then(async () => {
        await sleep(TIMEOUTFIVE);
        expect(foreState).assertEqual(-1);
        expect(backState).assertEqual(-1);
        expect(foreState1).assertEqual(-1);
        expect(backState1).assertEqual(-1);
        done();
      });
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
  })
}