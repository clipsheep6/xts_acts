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
import commonEventManager from '@ohos.commonEventManager';
import appManager from '@ohos.app.ability.appManager';

let StateEvent = {
  events: [ 'MultiApplicationTest' ]
};

function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /*
    * @tc.number: Acts_ObserverAppState_0100
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify registration interface(parameter is null, undefined)
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_0100', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0100_TAG';
      console.info(TAG, 'Start.');
      await sleep(200);
      let windowModeObserver1 = null;
      let windowModeObserver2 = undefined;
      try {
        await appManager.on('appForegroundState', windowModeObserver1);
        expect().assertFail();
        done();
      } catch(error) {
        console.info(TAG, 'Expect area1 error: ' + JSON.stringify(error));
        expect(error.code).assertEqual(401);
      }
      await sleep(1000);
      try {
        await appManager.on('appForegroundState', windowModeObserver2);
        console.info(TAG, 'End.');
        expect().assertFail();
        done();
      } catch(error) {
        console.info(TAG, 'Expect area2 error: ' + JSON.stringify(error));
        expect(error.code).assertEqual(401);
        console.info(TAG, 'End.');
        done();
      }
    })

    /*
    * @tc.number: Acts_ObserverAppState_0200
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify non system application registration
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_0200', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0200_TAG';
      console.info(TAG, 'Start.');
      let want = {
        bundleName: 'com.example.observerappstatetwo',
        abilityName: 'EntryAbility',
        action: 'Acts_ObserverAppState_0200'
      };
      await sleep(500);
      await globalThis.abilityContext.startAbilityForResult(want).then((data) => {
        console.info(TAG, 'Start ability for result data: ' + JSON.stringify(data));
        expect(data.want.parameters.errorCode).assertEqual(202);
        done();
      })
      console.info(TAG, 'End.');
    })

    /*
    * @tc.number: Acts_ObserverAppState_0300
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify unauthorized system application registration
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_0300', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0300_TAG';
      console.info(TAG, 'Start.');
      let want = {
        bundleName: 'com.example.observerappstatethree',
        abilityName: 'EntryAbility',
        action: 'Acts_ObserverAppState_0300'
      };
      await sleep(500);
      await globalThis.abilityContext.startAbilityForResult(want).then((data) => {
        console.info(TAG, 'Start ability for result data: ' + JSON.stringify(data));
        expect(data.want.parameters.errorCode).assertEqual(201);
        done();
      })
      console.info(TAG, 'End.');
    })

    /*
    * @tc.number: Acts_ObserverAppState_0400
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify unregistered interface (parameter is null, undefined)
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_0400', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0400_TAG';
      console.info(TAG, 'Start.');
      await sleep(500);
      let windowModeObserver1 = null;
      let windowModeObserver2 = undefined;
      let windowModeObserver = {
        onAppStateChanged(appStateData) {
          console.info(TAG, 'On app state changed.');
        }
      };
      await appManager.on('appForegroundState', windowModeObserver);
      try {
        await appManager.off('appForegroundState', windowModeObserver1);
      } catch(error) {
        console.info(TAG, 'Off1 error: ' + JSON.stringify(error));
        expect(error.code).assertEqual(401);
      }
      await sleep(1000);
      try {
        await appManager.off('appForegroundState', windowModeObserver2);
      } catch (error) {
        console.info(TAG, 'Off2 error: ' + JSON.stringify(error));
        expect(error.code).assertEqual(401);
        await appManager.off('appForegroundState', windowModeObserver);
        console.info(TAG, 'End.');
        done();
      }
    })

    /*
    * @tc.number: Acts_ObserverAppState_0500
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify non system application deregistration
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_0500', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0500_TAG';
      console.info(TAG, 'Start.');
      let want = {
        bundleName: 'com.example.observerappstatetwo',
        abilityName: 'EntryAbility',
        action: 'Acts_ObserverAppState_0500'
      };
      await sleep(500);
      await globalThis.abilityContext.startAbilityForResult(want).then((data) => {
        console.info(TAG, 'Start ability for result data: ' + JSON.stringify(data));
        expect(data.want.parameters.errorCode).assertEqual(202);
        done();
      })
      console.info(TAG, 'End.');
    })

    /*
    * @tc.number: Acts_ObserverAppState_0600
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify unauthorized system application cancellation of registration
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_0600', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0600_TAG';
      console.info(TAG, 'Start.');
      let want = {
        bundleName: 'com.example.observerappstatethree',
        abilityName: 'EntryAbility',
        action: 'Acts_ObserverAppState_0600'
      };
      await sleep(500);
      await globalThis.abilityContext.startAbilityForResult(want).then((data) => {
        console.info(TAG, 'Start ability for result data: ' + JSON.stringify(data));
        expect(data.want.parameters.errorCode).assertEqual(201);
        done();
      })
      console.info(TAG, 'End.');
    })

    /*
    * @tc.number: Acts_ObserverAppState_0700
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify that a single listener is listening to multiple applications
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_0700', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0700_TAG';
      console.info(TAG, 'Start.');
      await sleep(200);
      let want = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility'
      };
      let testWant = {
        bundleName: 'com.example.observerappstatetest',
        abilityName: 'TestAbility'
      };
      let foregroundState = 0;
      let backgroundState = 0;
      let windowModeObserver = {
        onAppStateChanged(appStateData) {
          console.info(TAG, 'On app state changed.');
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            console.info(TAG, 'Testing application state has changed: ' + JSON.stringify(appStateData));
            foregroundState = appStateData.state == 2 ? appStateData.state : foregroundState;
            backgroundState = appStateData.state == 4 ? appStateData.state : backgroundState;
          }
        }
      };
      await appManager.on('appForegroundState', windowModeObserver);
      await sleep(1000);
      await globalThis.abilityContext.startAbility(want).then(() => {
        console.info(TAG, 'Start ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      await globalThis.abilityContext.startAbility(testWant).then(() => {
        console.info(TAG, 'Start test ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      console.info(TAG, 'foreground state: ',foregroundState, 'background state: ', backgroundState);
      try {
        expect(foregroundState).assertEqual(2);
        expect(backgroundState).assertEqual(4);
        await appManager.off('appForegroundState', windowModeObserver);
        console.info(TAG, 'End.');
        done();
      } catch(error) {
        console.info(TAG, 'Expect area error: ' + JSON.stringify(error));
        await appManager.off('appForegroundState', windowModeObserver);
        console.info(TAG, 'End.');
        expect().assertFail();
        done();
      }
    })

    /*
    * @tc.number: Acts_ObserverAppState_0800
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify that a single listener is listening to multiple applications
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_0800', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0800_TAG';
      console.info(TAG, 'Start.');
      await sleep(200);
      let want = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility'
      };
      let testWant = {
        bundleName: 'com.example.observerappstatetest',
        abilityName: 'TestAbility'
      };
      let foregroundTimes = 0;
      let backgroundTimes = 0;
      let windowModeObserver = {
        onAppStateChanged(appStateData) {
          console.info(TAG, 'On app state changed.');
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            console.info(TAG, 'Testing application state has changed: ' + JSON.stringify(appStateData));
            foregroundTimes = appStateData.state == 2 ? ++foregroundTimes : foregroundTimes;
            backgroundTimes = appStateData.state == 4 ? ++backgroundTimes : backgroundTimes;
          }
        }
      };
      await appManager.on('appForegroundState', windowModeObserver);
      await appManager.on('appForegroundState', windowModeObserver);
      await sleep(1000);
      await globalThis.abilityContext.startAbility(want).then(() => {
        console.info(TAG, 'Start ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      await globalThis.abilityContext.startAbility(testWant).then(() => {
        console.info(TAG, 'Start test ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      console.info(TAG, 'foreground times: ',foregroundTimes, 'background times: ', backgroundTimes);
      try {
        expect(foregroundTimes).assertEqual(1);
        expect(backgroundTimes).assertEqual(1);
        await appManager.off('appForegroundState', windowModeObserver);
        console.info(TAG, 'End.');
        done();
      } catch(error) {
        console.info(TAG, 'Expect area error: ' + JSON.stringify(error));
        await appManager.off('appForegroundState', windowModeObserver);
        console.info(TAG, 'End.');
        expect().assertFail();
        done();
      }
    })

    /*
    * @tc.number: Acts_ObserverAppState_0900
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify that a single listener is listening to multiple applications
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_0900', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0900_TAG';
      console.info(TAG, 'Start.');
      await sleep(200);
      let want = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility'
      };
      let testWant = {
        bundleName: 'com.example.observerappstatetest',
        abilityName: 'TestAbility'
      };
      let foregroundState1 = 0;
      let backgroundState1 = 0;
      let foregroundTimes1 = 0;
      let backgroundTimes1 = 0;
      let foregroundState2 = 0;
      let backgroundState2 = 0;
      let foregroundTimes2 = 0;
      let backgroundTimes2 = 0;
      let windowModeObserver1 = {
        onAppStateChanged(appStateData) {
          console.info(TAG, 'On app1 state changed.');
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            console.info(TAG, '1-Testing application state has changed: ' + JSON.stringify(appStateData));
            if (appStateData.state == 2) {
              foregroundState1 = 2;
              foregroundTimes1++;
            }
            if (appStateData.state == 4) {
              backgroundState1 = 4;
              backgroundTimes1++;
            }
          }
        }
      };
      let windowModeObserver2 = {
        onAppStateChanged(appStateData) {
          console.info(TAG, 'On app2 state changed.');
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            console.info(TAG, '2-Testing application state has changed: ' + JSON.stringify(appStateData));
            if (appStateData.state == 2) {
              foregroundState2 = 2;
              foregroundTimes2++;
            }
            if (appStateData.state == 4) {
              backgroundState2 = 4;
              backgroundTimes2++;
            }
          }
        }
      };
      await appManager.on('appForegroundState', windowModeObserver1);
      await appManager.on('appForegroundState', windowModeObserver2);
      await sleep(1000);
      await globalThis.abilityContext.startAbility(want).then(() => {
        console.info(TAG, 'Start ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      await globalThis.abilityContext.startAbility(testWant).then(() => {
        console.info(TAG, 'Start test ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      console.info(TAG, 'foreground state1: ',foregroundState1, 'background state1: ', backgroundState1);
      console.info(TAG, 'foreground state2: ',foregroundState2, 'background state2: ', backgroundState2);
      console.info(TAG, 'foreground times1: ',foregroundTimes1, 'background times1: ', backgroundTimes1);
      console.info(TAG, 'foreground times2: ',foregroundTimes2, 'background times2: ', backgroundTimes2);
      try {
        expect(foregroundState1).assertEqual(2);
        expect(backgroundState1).assertEqual(4);
        expect(foregroundState2).assertEqual(2);
        expect(backgroundState2).assertEqual(4);
        expect(foregroundTimes1).assertEqual(1);
        expect(backgroundTimes1).assertEqual(1);
        expect(foregroundTimes2).assertEqual(1);
        expect(backgroundTimes2).assertEqual(1);
        await appManager.off('appForegroundState', windowModeObserver1);
        await appManager.off('appForegroundState', windowModeObserver2);
        console.info(TAG, 'End.');
        done();
      } catch(error) {
        console.info(TAG, 'Expect area error: ' + JSON.stringify(error));
        await appManager.off('appForegroundState', windowModeObserver1);
        await appManager.off('appForegroundState', windowModeObserver2);
        console.info(TAG, 'End.');
        expect().assertFail();
        done();
      }
    })

    /*
    * @tc.number: Acts_ObserverAppState_1000
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify that a single listener is listening to multiple applications
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_1000', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1000_TAG';
      console.info(TAG, 'Start.');
      await sleep(200);
      let want = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility'
      };
      let testWant = {
        bundleName: 'com.example.observerappstatetest',
        abilityName: 'TestAbility'
      };
      let foregroundState1 = 0;
      let backgroundState1 = 0;
      let foregroundTimes1 = 0;
      let backgroundTimes1 = 0;
      let foregroundState2 = 0;
      let backgroundState2 = 0;
      let foregroundTimes2 = 0;
      let backgroundTimes2 = 0;
      let windowModeObserver1 = {
        onAppStateChanged(appStateData) {
          console.info(TAG, 'On app1 state changed.');
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            console.info(TAG, '1-Testing application state has changed: ' + JSON.stringify(appStateData));
            if (appStateData.state == 2) {
              foregroundState1 = 2;
              foregroundTimes1++;
            }
            if (appStateData.state == 4) {
              backgroundState1 = 4;
              backgroundTimes1++;
            }
          }
        }
      };
      let windowModeObserver2 = {
        onAppStateChanged(appStateData) {
          console.info(TAG, 'On app2 state changed.');
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            console.info(TAG, '2-Testing application state has changed: ' + JSON.stringify(appStateData));
            if (appStateData.state == 2) {
              foregroundState2 = 2;
              foregroundTimes2++;
            }
            if (appStateData.state == 4) {
              backgroundState2 = 4;
              backgroundTimes2++;
            }
          }
        }
      };
      await appManager.on('appForegroundState', windowModeObserver1);
      await appManager.on('appForegroundState', windowModeObserver2);
      await appManager.off('appForegroundState', windowModeObserver2);
      await sleep(1000);
      await globalThis.abilityContext.startAbility(want).then(() => {
        console.info(TAG, 'Start ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      await globalThis.abilityContext.startAbility(testWant).then(() => {
        console.info(TAG, 'Start test ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      console.info(TAG, 'foreground state1: ',foregroundState1, 'background state1: ', backgroundState1);
      console.info(TAG, 'foreground state2: ',foregroundState2, 'background state2: ', backgroundState2);
      console.info(TAG, 'foreground times1: ',foregroundTimes1, 'background times1: ', backgroundTimes1);
      console.info(TAG, 'foreground times2: ',foregroundTimes2, 'background times2: ', backgroundTimes2);
      try {
        expect(foregroundState1).assertEqual(2);
        expect(backgroundState1).assertEqual(4);
        expect(foregroundState2).assertEqual(0);
        expect(backgroundState2).assertEqual(0);
        expect(foregroundTimes1).assertEqual(1);
        expect(backgroundTimes1).assertEqual(1);
        expect(foregroundTimes2).assertEqual(0);
        expect(backgroundTimes2).assertEqual(0);
        await appManager.off('appForegroundState', windowModeObserver1);
        console.info(TAG, 'End.');
        done();
      } catch(error) {
        console.info(TAG, 'Expect area error: ' + JSON.stringify(error));
        await appManager.off('appForegroundState', windowModeObserver1);
        console.info(TAG, 'End.');
        expect().assertFail();
        done();
      }
    })

    /*
    * @tc.number: Acts_ObserverAppState_1100
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify that a single listener is listening to multiple applications
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_1100', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1100_TAG';
      console.info(TAG, 'Start.');
      await sleep(200);
      let want = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility'
      };
      let testWant = {
        bundleName: 'com.example.observerappstatetest',
        abilityName: 'TestAbility'
      };
      let foregroundTimes = 0;
      let backgroundTimes = 0;
      let windowModeObserver = {
        onAppStateChanged(appStateData) {
          console.info(TAG, 'On app state changed.');
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            console.info(TAG, 'Testing application state has changed: ' + JSON.stringify(appStateData));
            foregroundTimes = appStateData.state == 2 ? ++foregroundTimes : foregroundTimes;
            backgroundTimes = appStateData.state == 4 ? ++backgroundTimes : backgroundTimes;
          }
        }
      };
      await appManager.on('appForegroundState', windowModeObserver);
      await sleep(1000);
      await globalThis.abilityContext.startAbility(want).then(() => {
        console.info(TAG, 'Start ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      await globalThis.abilityContext.startAbility(testWant).then(() => {
        console.info(TAG, 'Start test ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      console.info(TAG, 'foreground times: ',foregroundTimes, 'background times: ', backgroundTimes);
      try {
        await appManager.off('appForegroundState', windowModeObserver);
        await appManager.off('appForegroundState', windowModeObserver);
        expect().assertFail();
        console.info(TAG, 'End.');
        done();
      } catch(error) {
        console.info(TAG, 'Expect area error: ' + JSON.stringify(error));
        expect(error.code).assertEqual(16000050);
        console.info(TAG, 'End.');
        done();
      }
    })

    /*
    * @tc.number: Acts_ObserverAppState_1200
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify that a single listener is listening to multiple applications
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_1200', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1200_TAG';
      console.info(TAG, 'Start.');
      await sleep(200);
      let want = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility'
      };
      let wantRely = {
        bundleName: 'com.example.actsobserversubrely',
        abilityName: 'EntryAbility'
      };
      let testWant = {
        bundleName: 'com.example.observerappstatetest',
        abilityName: 'TestAbility'
      };
      let subscriber;
      let foregroundTimes1 = 0;
      let backgroundTimes1 = 0;
      let foregroundState1 = 0;
      let backgroundState1 = 0;
      let windowModeObserver = {
        onAppStateChanged(appStateData) {
          console.info(TAG, 'On app state changed.');
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            console.info(TAG, '1-Testing application state has changed: ' + JSON.stringify(appStateData));
            if (appStateData.state == 2) {
              foregroundState1 = 2;
              foregroundTimes1++;
            }
            if (appStateData.state == 4) {
              backgroundState1 = 4;
              backgroundTimes1++;
            }
          }
        }
      };
      function subscribeCallback(error, data) {
        console.info(TAG, 'subscribe callback err: ' + JSON.stringify(error));
        console.info(TAG, 'subscribe callback data: ' + JSON.stringify(data));
        if (data.event == 'MultiApplicationTest') {
          expect(data.parameters.foregroundState).assertEqual(2);
          expect(data.parameters.backgroundState).assertEqual(4);
          expect(data.parameters.foregroundTimes).assertEqual(1);
          expect(data.parameters.backgroundTimes).assertEqual(1);
          commonEventManager.unsubscribe(subscriber, (error) => {
            console.info(TAG, 'commonEventManager unsubscribe error', JSON.stringify(error));
            done();
          })
        }
      }
      await sleep(500);
      await commonEventManager.createSubscriber(StateEvent).then((data) => {
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
      })
      await appManager.on('appForegroundState', windowModeObserver);
      await sleep(1000);
      await globalThis.abilityContext.startAbility(wantRely).then(() => {
        console.info(TAG, 'Start rely-ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      await globalThis.abilityContext.startAbility(want).then(() => {
        console.info(TAG, 'Start ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      await globalThis.abilityContext.startAbility(testWant).then(() => {
        console.info(TAG, 'Start test ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      console.info(TAG, 'foreground state1: ', foregroundState1, 'background state1: ', backgroundState1);
      console.info(TAG, 'foreground times1: ', foregroundTimes1, 'background times1: ', backgroundTimes1);
      try {
        expect(foregroundState1).assertEqual(2);
        expect(backgroundState1).assertEqual(4);
        expect(foregroundTimes1).assertEqual(1);
        expect(backgroundTimes1).assertEqual(1);
        await appManager.off('appForegroundState', windowModeObserver);
      } catch(error) {
        console.info(TAG, 'Expect area error: ' + JSON.stringify(error));
        done();
      }
    })

    /*
    * @tc.number: Acts_ObserverAppState_1300
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify that a single listener is listening to multiple applications
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_1300', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1300_TAG';
      console.info(TAG, 'Start.');
      await sleep(200);
      let want = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility'
      };
      let wantRely = {
        bundleName: 'com.example.actsobserversubrely',
        abilityName: 'EntryAbility',
        action: 'Acts_MonitorApp_1300'
      };
      let testWant = {
        bundleName: 'com.example.observerappstatetest',
        abilityName: 'TestAbility'
      };
      let subscriber;
      let foregroundTimes1 = 0;
      let backgroundTimes1 = 0;
      let foregroundState1 = 0;
      let backgroundState1 = 0;
      let windowModeObserver = {
        onAppStateChanged(appStateData) {
          console.info(TAG, 'On app state changed.');
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            console.info(TAG, '1-Testing application state has changed: ' + JSON.stringify(appStateData));
            if (appStateData.state == 2) {
              foregroundState1 = 2;
              foregroundTimes1++;
            }
            if (appStateData.state == 4) {
              backgroundState1 = 4;
              backgroundTimes1++;
            }
          }
        }
      };
      function subscribeCallback(error, data) {
        console.info(TAG, 'subscribe callback err: ' + JSON.stringify(error));
        console.info(TAG, 'subscribe callback data: ' + JSON.stringify(data));
        if (data.event == 'MultiApplicationTest') {
          expect(data.parameters.foregroundState).assertEqual(0);
          expect(data.parameters.backgroundState).assertEqual(0);
          expect(data.parameters.foregroundTimes).assertEqual(0);
          expect(data.parameters.backgroundTimes).assertEqual(0);
          commonEventManager.unsubscribe(subscriber, (error) => {
            console.info(TAG, 'commonEventManager unsubscribe error', JSON.stringify(error));
            done();
          })
        }
      }
      await sleep(500);
      await commonEventManager.createSubscriber(StateEvent).then((data) => {
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
      })
      await appManager.on('appForegroundState', windowModeObserver);
      await sleep(1000);
      await globalThis.abilityContext.startAbility(wantRely).then(() => {
        console.info(TAG, 'Start rely-ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      await globalThis.abilityContext.startAbility(want).then(() => {
        console.info(TAG, 'Start ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      await globalThis.abilityContext.startAbility(testWant).then(() => {
        console.info(TAG, 'Start test ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      console.info(TAG, 'foreground state1: ', foregroundState1, 'background state1: ', backgroundState1);
      console.info(TAG, 'foreground times1: ', foregroundTimes1, 'background times1: ', backgroundTimes1);
      try {
        expect(foregroundState1).assertEqual(2);
        expect(backgroundState1).assertEqual(4);
        expect(foregroundTimes1).assertEqual(1);
        expect(backgroundTimes1).assertEqual(1);
        await appManager.off('appForegroundState', windowModeObserver);
      } catch(error) {
        console.info(TAG, 'Expect area error: ' + JSON.stringify(error));
        done();
      }
    })

    /*
    * @tc.number: Acts_ObserverAppState_1400
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify that a single listener is listening to multiple applications
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_1400', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1400_TAG';
      console.info(TAG, 'Start.');
      await sleep(200);
      let want = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility'
      };
      let testWant = {
        bundleName: 'com.example.observerappstatetest',
        abilityName: 'TestAbility'
      };
      let foregroundState1 = 0;
      let backgroundState1 = 0;
      let foregroundTimes1 = 0;
      let backgroundTimes1 = 0;
      let foregroundState2 = 0;
      let backgroundState2 = 0;
      let foregroundTimes2 = 0;
      let backgroundTimes2 = 0;
      let windowModeObserver1 = {
        onAppStateChanged(appStateData) {
          console.info(TAG, 'On app1 state changed.');
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            console.info(TAG, '1-Testing application state has changed: ' + JSON.stringify(appStateData));
            if (appStateData.state == 2) {
              foregroundState1 = 2;
              foregroundTimes1++;
            }
            if (appStateData.state == 4) {
              backgroundState1 = 4;
              backgroundTimes1++;
            }
          }
        }
      };
      let windowModeObserver2 = {
        onAppStateChanged(appStateData) {
          console.info(TAG, 'On app2 state changed.');
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            console.info(TAG, '2-Testing application state has changed: ' + JSON.stringify(appStateData));
            if (appStateData.state == 2) {
              foregroundState2 = 2;
              foregroundTimes2++;
            }
            if (appStateData.state == 4) {
              backgroundState2 = 4;
              backgroundTimes2++;
            }
          }
        }
      };
      await appManager.on('appForegroundState', windowModeObserver1);
      await appManager.on('appForegroundState', windowModeObserver2);
      await appManager.off('appForegroundState');
      await sleep(1000);
      await globalThis.abilityContext.startAbility(want).then(() => {
        console.info(TAG, 'Start ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      await globalThis.abilityContext.startAbility(testWant).then(() => {
        console.info(TAG, 'Start test ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(1500);
      console.info(TAG, 'foreground state1: ',foregroundState1, 'background state1: ', backgroundState1);
      console.info(TAG, 'foreground state2: ',foregroundState2, 'background state2: ', backgroundState2);
      console.info(TAG, 'foreground times1: ',foregroundTimes1, 'background times1: ', backgroundTimes1);
      console.info(TAG, 'foreground times2: ',foregroundTimes2, 'background times2: ', backgroundTimes2);
      try {
        expect(foregroundState1).assertEqual(0);
        expect(backgroundState1).assertEqual(0);
        expect(foregroundState2).assertEqual(0);
        expect(backgroundState2).assertEqual(0);
        expect(foregroundTimes1).assertEqual(0);
        expect(backgroundTimes1).assertEqual(0);
        expect(foregroundTimes2).assertEqual(0);
        expect(backgroundTimes2).assertEqual(0);
        console.info(TAG, 'End.');
        done();
      } catch(error) {
        console.info(TAG, 'Expect area error: ' + JSON.stringify(error));
        console.info(TAG, 'End.');
        expect().assertFail();
        done();
      }
    })

    /*
    * @tc.number: Acts_ObserverAppState_1700
    * @tc.name: Enable and disable application listening
    * @tc.desc: Verify the callback after launching multiple capabilities for the same application
    * @tc.size: MediumTest
    * @tc.type: Function
    * @tc.level: Level 1
    */
    it('Acts_ObserverAppState_1700', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1700_TAG';
      console.info(TAG, 'Start.');
      await sleep(200);
      let want = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility'
      };
      let want1 = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility1'
      };
      let flag = 0;
      let windowModeObserver = {
        onAppStateChanged(appStateData) {
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            flag += 1;
          }
        }
      };
      await appManager.on('appForegroundState', windowModeObserver);
      await sleep(1000);
      await globalThis.abilityContext.startAbility(want).then(() => {
        console.info(TAG, 'Start ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(500);
      await globalThis.abilityContext.startAbility(want1).then(async () => {
        console.info(TAG, 'Start ability1 successfully.');
        await sleep(500);
        expect(flag).assertEqual(1);
        appManager.off('appForegroundState', windowModeObserver);
        console.info(TAG, 'End.');
        done();
      }).catch((error) => {
        console.info(TAG, 'End.');
        expect().assertFail();
        done();
      });
    })
  })
}