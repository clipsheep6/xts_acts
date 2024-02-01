/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import CommonEvent from '@ohos.commonEvent';
import { Component, Driver, UiWindow, ON, UiDriver } from '@ohos.UiTest';
import appManager from '@ohos.app.ability.appManager';

const TAG: string = 'ActsAbilityRunTimeLifeCycleTest';
let ACTS_ProcessState = {
  events: ["processState"]
};

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    let TEST_SUITE_NAME: string = 'ActsLifeCycleTest'
    let TEST_CASE_NAME: string = 'SUB_Ability_AbilityRuntime_LifeCycle_LifeCycleTest_0100';

    describe('ActsAbilityTest', function () {
      afterEach(async function (done) {
        let abilityDelegator;
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        let cmd1 = 'aa force-stop com.example.getrunningprocessinformation1';
        await abilityDelegator.executeShellCommand(cmd1).then(() => {
          console.info("executeShellCommand1 callback");
        });
        await sleep(1000)
        done()
      })

      function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time))
      }

      function startAbilityTest(bundleName: string, abilityName: string, context?) {
        let acontext = context
        if (!acontext) {
          acontext = globalThis.abilityContext
        }

        acontext.startAbility({
          bundleName: bundleName,
          abilityName: abilityName
        }, (error, data) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} ${bundleName}  ${abilityName} startAbility success, err:${JSON.stringify(error)}`);
        });
      }

      /**
       * @tc.number    : SUB_Ability_AbilityRuntime_ABILITY_StateInfo_GetRunningProcessInformation_0100
       * @tc.name      : In different applications, calling the on interface multiple times to register
       *                 for listening
       * @tc.desc      : switching between the front-end and back-end of the application,
       *                 and being able to listen to changes in the front-end and back-end of the application
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 3
       */
      it('SUB_Ability_AbilityRuntime_ABILITY_StateInfo_GetRunningProcessInformation_0100', 3, async function (done) {
        TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_ABILITY_StateInfo_GetRunningProcessInformation_0100';

        let subscribeInfo = {
          events: ["APP1_onApplicationForeground", "APP1_onApplicationBackground", "APP2_onApplicationForeground", "APP2_onApplicationBackground"]
        };
        let event = []
        let subscriber;
        CommonEvent.createSubscriber(subscribeInfo).then((commonEventSubscriber) => {
          subscriber = commonEventSubscriber;
          CommonEvent.subscribe(subscriber, (err, data) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe callback-data:${JSON.stringify(data?.event)}`);
            if (err.code) {
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe failed, code is ${err.code}`);
            } else {
              event.push(data.event)
            }
          });
        }).catch((err) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} createSubscriber failed, err is ${JSON.stringify(err)}`);
        });

        startAbilityTest("com.example.applicationstatechange1", "EntryAbility")
        await sleep(1000)
        startAbilityTest("com.example.applicationstatechange2", "EntryAbility")
        await sleep(1000)
        expect(event.indexOf("APP1_onApplicationBackground") != -1).assertTrue()
        event.splice(0, event.length)

        CommonEvent.publish("CALL_APP2_TERMINATE_SELF", () => {
          console.log(TAG, 'publish CALL_APP2_TERMINATE_SELF');
        });
        await sleep(1000)

        expect(event.indexOf("APP1_onApplicationBackground") === -1).assertTrue()
        expect(event.indexOf("APP1_onApplicationForeground") === -1).assertTrue()

        CommonEvent.unsubscribe(subscriber)
        done()
      })


      /**
       * @tc.number    : SUB_Ability_AbilityRuntime_ABILITY_StateInfo_GetRunningProcessInformation_0200
       * @tc.name      : In the same application, a single call to the on interface to register for listening
       * @tc.desc      : without calling the off interface, and switching between the front and back of the
       *                 application, can listen to changes in the front and back of the application
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 3
       */
      it('SUB_Ability_AbilityRuntime_ABILITY_StateInfo_GetRunningProcessInformation_0200', 3, async function (done) {
        TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_ABILITY_StateInfo_GetRunningProcessInformation_0200';


        let subscribeInfo = {
          events: ["APP2_onApplicationForeground", "APP2_onApplicationBackground"]
        };
        let event = []
        let subscriber;
        CommonEvent.createSubscriber(subscribeInfo).then((commonEventSubscriber) => {
          subscriber = commonEventSubscriber;
          CommonEvent.subscribe(subscriber, (err, data) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe callback-data:${JSON.stringify(data?.event)}`);
            if (err.code) {
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe failed, code is ${err.code}`);
            } else {
              event.push(data.event)
            }
          });
        }).catch((err) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} createSubscriber failed, err is ${JSON.stringify(err)}`);
        });

        startAbilityTest("com.example.applicationstatechange2", "EntryAbility")
        await sleep(1000)
        startAbilityTest("com.example.applicationstatechange2", "EntryAbility2")
        await sleep(1000)

        CommonEvent.publish("CALL_APP2_EntryAbility2_TERMINATE_SELF", () => {
          console.log(TAG, 'publish CALL_APP2_TERMINATE_SELF');
        });
        await sleep(1000)

        CommonEvent.unsubscribe(subscriber)
        done()
      })

      /**
       * @tc.number    : SUB_Ability_AbilityRuntime_ABILITY_StateInfo_GetRunningProcessInformation_0900
       * @tc.name      : calling the getRunningProcessInformation interface retrieve process information                
       * @tc.desc      : When the application gains focus or does not, calling the getRunningProcessInformation
       *                 interface in AsyncCallback mode can retrieve process information
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 3
       */
      it('SUB_Ability_AbilityRuntime_ABILITY_StateInfo_GetRunningProcessInformation_0900', 3, async function (done) {
        TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_ABILITY_StateInfo_GetRunningProcessInformation_0900';
        let want = {
          "deviceId": "",
          "bundleName": "com.example.getrunningprocessinformation1",
          "abilityName": "EntryAbility",
          "action": "Callback"
        }
        let subscriber;

        function unSubscribeCallback() {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} unSubscribeCallback`);
          done();
        }

        function subscribeCallBack(err, data) {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} data: ${JSON.stringify(data)}`);
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err: ${JSON.stringify(err)}`);
          if (data.event == "processState") {
            try {
              expect(data.parameters.commonStateArr[0]).assertEqual(2);
              expect(data.parameters.commonStateArr[1]).assertEqual(1);
              expect(data.parameters.commonStateArr[2]).assertEqual(3);
              expect(data.parameters.commonStateArr[3]).assertEqual(-1);
            }
            catch (error) {
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} An error is generated`);
            }
            CommonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }

        CommonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
          subscriber = data;
          CommonEvent.subscribe(subscriber, subscribeCallBack);

          globalThis.abilityContext.startAbility(want, (error) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start normal ability error : ${error}`);
            expect(error.code).assertEqual(0);
          })
        })

        await sleep(2000)

        let driver = Driver.create();
        await driver.delayMs(1500);
        let button1 = await driver.findComponent(ON.text('get focusedInfo'));
        expect(button1 != null).assertTrue();
        let button2 = await driver.findComponent(ON.text('get unFocusedInfo'));
        expect(button2 != null).assertTrue();
        let button3 = await driver.findComponent(ON.text('get BackInfo'));
        expect(button3 != null).assertTrue();
        await button1.click();
        await driver.delayMs(2000);
        await button2.click();
        await driver.delayMs(4000);
        await driver.pressBack();
        await driver.delayMs(2000);
        await button3.click();

      })

      /**
       * @tc.number    : SUB_Ability_AbilityRuntime_ABILITY_StateInfo_GetRunningProcessInformation_1000
       * @tc.name      : interface in Promise mode can retrieve process information
       * @tc.desc      : When the application gains focus or does not, calling the getRunningProcessInformation
       *                 interface in Promise mode can retrieve process information
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 3
       */
      it('SUB_Ability_AbilityRuntime_ABILITY_StateInfo_GetRunningProcessInformation_1000', 3, async function (done) {
        TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_ABILITY_StateInfo_GetRunningProcessInformation_1000';
        let want = {
          "deviceId": "",
          "bundleName": "com.example.getrunningprocessinformation1",
          "abilityName": "EntryAbility",
          "action": "Promise"
        }
        let subscriber;

        function unSubscribeCallback() {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} unSubscribeCallback`);
          done();
        }

        function subscribeCallBack(err, data) {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} data: ${JSON.stringify(data)}`);
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err: ${JSON.stringify(err)}`);
          if (data.event == "processState") {
            try {
              expect(data.parameters.commonStateArr[0]).assertEqual(2);
              expect(data.parameters.commonStateArr[1]).assertEqual(1);
              expect(data.parameters.commonStateArr[2]).assertEqual(3);
              expect(data.parameters.commonStateArr[3]).assertEqual(-1);
            }
            catch (error) {
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} An error is generated`);
            }
            CommonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }

        CommonEvent.createSubscriber(ACTS_ProcessState).then(async (data) => {
          subscriber = data;
          CommonEvent.subscribe(subscriber, subscribeCallBack);

          globalThis.abilityContext.startAbility(want, (error) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start normal ability error : ${error}`);
            expect(error.code).assertEqual(0);
          })
        })

        await sleep(2000)

        let driver = Driver.create();
        await driver.delayMs(1500);
        let button1 = await driver.findComponent(ON.text('get focusedInfo'));
        expect(button1 != null).assertTrue();
        let button2 = await driver.findComponent(ON.text('get unFocusedInfo'));
        expect(button2 != null).assertTrue();
        let button3 = await driver.findComponent(ON.text('get BackInfo'));
        expect(button3 != null).assertTrue();
        await button1.click();
        await driver.delayMs(2000);
        await button2.click();
        await driver.delayMs(4000);
        await driver.pressBack();
        await driver.delayMs(2000);
        await button3.click();

      })
    })

  })
}