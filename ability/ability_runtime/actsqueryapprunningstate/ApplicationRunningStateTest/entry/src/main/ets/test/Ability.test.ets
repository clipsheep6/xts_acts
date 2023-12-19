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
import { describe, it, expect } from '@ohos/hypium'
import commonEventManager from '@ohos.commonEventManager';
import appManager from '@ohos.app.ability.appManager';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';

const BUNDLENAME = "com.example.applicationrunningstatetest";
const BASE_COUNT = 1000;
const BASELINE_GETBUNDLEINFO = 5;

let ACTS_ProcessState = {
  events: ["Acts_ApplicationRunningState_0500", "Acts_ApplicationRunningState_0600"]
};

let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /*
     * @tc.number: Acts_ApplicationRunningState_0100
     * @tc.name: System applications can query their own running status.
     * @tc.desc: The system application can call the isApplication running interface to query its own running status.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_ApplicationRunningState_0100', 0, function (done) {
      let TAG = 'Acts_ApplicationRunningState_0100_TAG';
      console.log(TAG, "start");
      setTimeout(() => {
        try {
          appManager.isApplicationRunning('com.example.applicationrunningstatetest',).then((data) => {
            console.log(TAG, `The bundle running is:  ${JSON.stringify(data)}`);
            expect(data).assertTrue();
            done();
          })
        } catch (error) {
          console.log(TAG, `error: ${JSON.stringify(error)}`);
          expect().assertFail();
          done();
        }
      }, 150)
      console.log(TAG, "end");
    })

    /*
     * @tc.number: Acts_ApplicationRunningState_0200
     * @tc.name: System application queries the running status of other system applications.
     * @tc.desc: The system application calls the isApplication running interface, which can query the running status
     *           of other system applications.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_ApplicationRunningState_0200', 0, function (done) {
      let TAG = 'Acts_ApplicationRunningState_0200_TAG';
      console.log(TAG, "start");
      let want = {
        "deviceId": "",
        "bundleName": "com.example.applicationrunningstatetestonerely",
        "abilityName": "EntryAbility"
      };
      setTimeout(() => {
        globalThis.abilityContext.startAbility(want, (error) => {
          console.log(TAG, "ability error code = " + error.code);
          expect(error.code).assertEqual(0);
        })
      }, 200);
      setTimeout(() => {
        try {
          appManager.isApplicationRunning('com.example.applicationrunningstatetestonerely').then((data) => {
            console.log(TAG, `The bundle running is:  ${JSON.stringify(data)}`);
            expect(data).assertTrue();
            done();
          })
        } catch (error) {
          console.log(TAG, `error: ${JSON.stringify(error)}`);
          expect().assertFail();
          done();
        }
      }, 2500)
      console.log(TAG, "end");
    })

    /*
     * @tc.number: Acts_ApplicationRunningState_0300
     * @tc.name: System application queries the running status of other ordinary applications.
     * @tc.desc: The system application calls the isApplication running interface, which can query the running status
     *           of other ordinary applications.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_ApplicationRunningState_0300', 0, function (done) {
      let TAG = 'Acts_ApplicationRunningState_0300_TAG';
      console.log(TAG, "start");
      let want = {
        "deviceId": "",
        "bundleName": "com.example.applicationrunningstatetesttworely",
        "abilityName": "EntryAbility"
      };
      setTimeout(() => {
        globalThis.abilityContext.startAbility(want, (error) => {
          console.log(TAG, "ability error code = " + error.code);
          expect(error.code).assertEqual(0);
        })
      }, 400);
      setTimeout(() => {
        try {
          appManager.isApplicationRunning('com.example.applicationrunningstatetesttworely').then((data) => {
            console.log(TAG, `The bundle running is:  ${JSON.stringify(data)}`);
            expect(data).assertTrue();
            done();
          })
        } catch (error) {
          console.log(TAG, `The bundle running is:  ${JSON.stringify(error)}`);
          expect(error).assertFail();
          abilityDelegator.executeShellCommand('pkill -f com.example.applicationrunningstatetesttworely');
          done();
        }
      }, 2500)
      console.log(TAG, "end");
    })

    /*
     * @tc.number: Acts_ApplicationRunningState_0400
     * @tc.name: The system application queries the running status of a non-existent application.
     * @tc.desc: The system application called the isApplication running interface, but the running status
     *           of the application was not found.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_ApplicationRunningState_0400', 0, function (done) {
      let TAG = 'Acts_ApplicationRunningState_0400_TAG';
      console.log(TAG, "start");
      setTimeout(() => {
        try {
          appManager.isApplicationRunning('com.example.applicationrunningstatetestsevenrely').then((data) => {
            console.log(TAG, `The bundle running is:  ${JSON.stringify(data)}`);
            expect(data).assertFalse();
            done();
          })
        } catch (error) {
          console.log(TAG, `error: ${JSON.stringify(error)}`);
          expect().assertFail();
          done();
        }
      }, 200)
      console.log(TAG, "end");
    })

    /*
     * @tc.number: Acts_ApplicationRunningState_0500
     * @tc.name: No system applications query their own running status.
     * @tc.desc: Non system application cannot query its own running status, returning 202 error.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_ApplicationRunningState_0500', 0, async function (done) {
      let TAG = 'Acts_ApplicationRunningState_0500_TAG';

      function sleep(ms) {
        return new Promise(resolve => setTimeout(resolve, ms));
      }

      console.log(TAG, "start");
      let subscriber;
      let want = {
        "deviceId": "",
        "bundleName": "com.example.applicationrunningstatetestthreerely",
        "abilityName": "EntryAbility"
      };

      function unSubscribeCallback() {
        console.debug("====>Acts_ApplicationRunningState_0500 unSubscribeCallback");
        done();
      }

      function SubscribeCallback(err, data) {
        console.log("====>Acts_ApplicationRunningState_0500 data: " + JSON.stringify(data));
        console.log("====>Acts_ApplicationRunningState_0500 err: " + JSON.stringify(err));
        if (data.event == 'Acts_ApplicationRunningState_0500') {
          try {
            expect(data.parameters.publishData).assertEqual(202);
          }
          catch (error) {
            console.log("An error is generated");
          }
          commonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      commonEventManager.createSubscriber(ACTS_ProcessState).then(async (data) => {
        subscriber = data;
        commonEventManager.subscribe(subscriber, SubscribeCallback);
        await sleep(800);
        await globalThis.abilityContext.startAbility(want);
        await sleep(1000)
      })
      console.log(TAG, "end");
    })

    /*
     * @tc.number: Acts_ApplicationRunningState_0600
     * @tc.name: System applications without permission to query their own running status.
     * @tc.desc: System applications without permission cannot query their own running status, returning 201 error.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_ApplicationRunningState_0600', 0, async function (done) {
      let TAG = 'Acts_ApplicationRunningState_0600_TAG';

      function sleep(ms) {
        return new Promise(resolve => setTimeout(resolve, ms));
      }

      console.log(TAG, "start");
      let subscriber;
      let want = {
        "deviceId": "",
        "bundleName": "com.example.applicationrunningstatetestfourrely",
        "abilityName": "EntryAbility"
      };

      function unSubscribeCallback() {
        console.debug("====>Acts_ApplicationRunningState_0600 unSubscribeCallback");
        done();
      }

      function SubscribeCallback(err, data) {
        console.log("====>Acts_ApplicationRunningState_0600 data: " + JSON.stringify(data));
        console.log("====>Acts_ApplicationRunningState_0600 err: " + JSON.stringify(err));
        if (data.event == 'Acts_ApplicationRunningState_0600') {
          try {
            expect(data.parameters.publishData).assertEqual(201);
          }
          catch (error) {
            console.log("An error is generated");
          }
          commonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      commonEventManager.createSubscriber(ACTS_ProcessState).then(async (data) => {
        subscriber = data;
        commonEventManager.subscribe(subscriber, SubscribeCallback);
        await sleep(1300);
        await globalThis.abilityContext.startAbility(want);
        await sleep(1600);
      })
      console.log(TAG, "end");
    })

    /*
     * @tc.number: Acts_ApplicationRunningState_0700
     * @tc.name: The interface passes in abnormal parameters, and the application queries its own running status.
     * @tc.desc: The interface passed in an exception  parameter of null, and the application cannot query its own
     *           running status,returning an error of 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_ApplicationRunningState_0700', 0, async function (done) {
      let TAG = 'Acts_ApplicationRunningState_0700_TAG';
      console.log(TAG, "start");
      setTimeout(() => {
        try {
          appManager.isApplicationRunning(null).then((data) => {
            console.log(TAG, `The bundle running is:  ${JSON.stringify(data)}`);
            expect(data).assertFail();
            done();
          })
        } catch (error) {
          console.log(TAG, `null error: ${JSON.stringify(error)}`);
          expect(error.code).assertEqual(401);
          done();
        }
      }, 200);
      console.log(TAG, "end");
    })

    /*
     * @tc.number: Acts_ApplicationRunningState_0800
     * @tc.name: The interface passes in abnormal parameters, and the application queries its own running status.
     * @tc.desc: The interface passed in an exception  parameter of undefined, and the application cannot query its own
     *           running status,returning an error of 401.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_ApplicationRunningState_0800', 0, async function (done) {
      let TAG = 'Acts_ApplicationRunningState_0800_TAG';
      console.log(TAG, "start");
      setTimeout(() => {
        try {
          appManager.isApplicationRunning(undefined).then((data) => {
            console.log(TAG, `The bundle running is:  ${JSON.stringify(data)}`);
            expect(data).assertFail();
            done();
          })
        } catch (error) {
          console.log(TAG, `null error: ${JSON.stringify(error)}`);
          expect(error.code).assertEqual(401);
          done();
        }
      }, 200);
      console.log(TAG, "end");
    })

    /*
     * @tc.number: Acts_ApplicationRunningState_0900
     * @tc.name: The application queries its own running status 1000 times.
     * @tc.desc: The application can query its own running status 1000 times, and the running status of the application
     *           can be queried.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_ApplicationRunningState_0900', 0, function (done) {
      let TAG = 'Acts_ApplicationRunningState_0900_TAG';
      var count = 1;
      console.log(TAG, "start");
      setTimeout(() => {
        for (count = 1; count <= 1000; count++) {
          try {
            appManager.isApplicationRunning('com.example.applicationrunningstatetest',).then((data) => {
              console.log(TAG, `The bundle running is:  ${JSON.stringify(data)}`);
              expect(data).assertTrue();
              done();
            })
          } catch (error) {
            console.log(TAG, `error: ${JSON.stringify(error)}`);
            expect().assertFail();
            done();
          }
        }
      }, 150)
      console.log(TAG, "end");
    })

    /*
     * @tc.number: Acts_ApplicationRunningState_1000
     * @tc.name: Stability testing of calling the interface 1000 times.
     * @tc.desc: Interface performance testing for obtaining application running status.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_ApplicationRunningState_1000', 0, function (done) {
      let TAG = 'Acts_ApplicationRunningState_1000_TAG';
      let startTime = new Date().getTime();
      var count = 1;
      console.log(TAG, "start");
      setTimeout(() => {
        for (count = 1; count <= BASE_COUNT; count++) {
          appManager.isApplicationRunning(BUNDLENAME);
        }
        done();
        let endTime = new Date().getTime();
        console.info(TAG, "getBundleInfoSyncPerfTest startTime:" + startTime);
        console.info(TAG, "getBundleInfoSyncPerfTest endTime:" + endTime);
        let averageTime = (endTime - startTime) / BASE_COUNT;
        console.info(TAG, "getBundleInfoSync performance test averageTime:" + averageTime + "ms");
        expect(averageTime).assertLess(BASELINE_GETBUNDLEINFO);
        console.info(TAG, "==================getBundleInfoSyncPerfTest end==================");
        done();
      }, 300)
      console.log(TAG, "end");
    })
  })
}