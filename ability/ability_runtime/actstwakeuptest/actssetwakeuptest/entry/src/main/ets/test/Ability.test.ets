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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import CommonEvent from '@ohos.commonEvent';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'

const TAG: string = 'ActsStartAndTerminate_FA_SetWakeUpTest';

export default function abilityTest() {
  let TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0700';
  let TEST_SUITE_NAME: string = 'ActsSetWakeUpTest'

  function sleep(time) {
    return new Promise((resolve) => setTimeout(resolve, time))
  }

  describe('ActsAbilityTest', function () {

    beforeEach(async function (done) {
      await sleep(1000);
      done()
    })
    afterEach(async function (done) {
      await sleep(1000);
      done()
    })
    afterAll(async function (done) {
      let cmd = "bm uninstall -n com.example.setwakeupscreentest2";
      let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd, (err: any, d: any) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} executeShellCommand ${cmd} err:${JSON.stringify(err)}  data :   + ${JSON.stringify(d)} `);
      })
      await sleep(1000);
      done()
    })

    function startAbilityTest(bundleName: string, abilityName: string, parametersNumber, value) {
      globalThis.abilityContext.startAbility({
        bundleName: bundleName,
        abilityName: abilityName,
        parameters: {
          number: parametersNumber,
          value: value,
        },
      }, (error, data) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} ${bundleName}:${abilityName} startAbility success, err:${JSON.stringify(error)}`);
      });
    }

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0700
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0700
     * @tc.desc      : Call the setWakeUpScreen interface during ability initialization, with input parameters of array type
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0700', 3, async function (done) {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0700';
      let subscriber;

      let subscribeInfo = {
        events: ["SetWakeupScreenTest2_onCreate", "SetWakeupScreenTest2_onActive"
          , "SetWakeupScreenTest2_setWakeUpScreen_ERR", "SetWakeupScreenTest2_onDestroy"]
      };

      let event = []

      CommonEvent.createSubscriber(subscribeInfo).then((commonEventSubscriber) => {
        subscriber = commonEventSubscriber;
        CommonEvent.subscribe(subscriber, (err, data) => {
          if (err.code) {
            console.error(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}subscribe failed, code is ${err.code}`);
          } else {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe ${JSON.stringify(data)}`);
            if (data.event === "SetWakeupScreenTest2_onDestroy") {
              expect(event.indexOf("SetWakeupScreenTest2_onCreate") != -1).assertTrue()
              expect(event.indexOf("SetWakeupScreenTest2_onActive") != -1).assertTrue()
              expect(event.indexOf("SetWakeupScreenTest2_setWakeUpScreen_ERR") != -1).assertTrue()
              CommonEvent.unsubscribe(subscriber, () => {
               done()
               })
            } else {
              event.push(data.event)
            }
          }
        });
      }).catch((err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}createSubscriber failed, code is ${err.code}`);
      });

      startAbilityTest("com.example.setwakeupscreentest2", "com.example.setwakeupscreentest2.MainAbility", 4, "")
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0300
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0300
     * @tc.desc      : Call the setWakeUpScreen interface during ability initialization, with input parameters of false
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0300', 3, async function (done) {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0300';
      let subscriber;

      let subscribeInfo = {
        events: ["SetWakeupScreenTest2_onCreate", "SetWakeupScreenTest2_onActive", "SetWakeupScreenTest2_onDestroy"]
      };

      let event = []

      CommonEvent.createSubscriber(subscribeInfo).then((commonEventSubscriber) => {
        subscriber = commonEventSubscriber;
        CommonEvent.subscribe(subscriber, (err, data) => {
          if (err.code) {
            console.error(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}subscribe failed, code is ${err.code}`);
          } else {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe ${JSON.stringify(data)}`);
            if (data.event === "SetWakeupScreenTest2_onDestroy") {
              expect(event.indexOf("SetWakeupScreenTest2_onCreate") != -1).assertTrue()
              expect(event.indexOf("SetWakeupScreenTest2_onActive") != -1).assertTrue()
              CommonEvent.unsubscribe(subscriber, () => {
               done()
               })
            } else {
              event.push(data.event)
            }
          }
        });
      }).catch((err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}createSubscriber failed, code is ${err.code}`);
      });
      startAbilityTest("com.example.setwakeupscreentest2", "com.example.setwakeupscreentest2.MainAbility", 3, false)

    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0800
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0800
     * @tc.desc      : Call the setWakeUpScreen interface during ability initialization, with input parameters of json
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0800', 3, async function (done) {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0800';
      let subscriber;

      let subscribeInfo = {
        events: ["SetWakeupScreenTest2_onCreate", "SetWakeupScreenTest2_onActive"
          , "SetWakeupScreenTest2_setWakeUpScreen_ERR", "SetWakeupScreenTest2_onDestroy"]
      };

      let event = []

      CommonEvent.createSubscriber(subscribeInfo).then((commonEventSubscriber) => {
        subscriber = commonEventSubscriber;
        CommonEvent.subscribe(subscriber, (err, data) => {
          if (err.code) {
            console.error(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}subscribe failed, code is ${err.code}`);
          } else {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe ${JSON.stringify(data)}`);
            if (data.event === "SetWakeupScreenTest2_onDestroy") {
              expect(event.indexOf("SetWakeupScreenTest2_onCreate") != -1).assertTrue()
              expect(event.indexOf("SetWakeupScreenTest2_onActive") != -1).assertTrue()
              expect(event.indexOf("SetWakeupScreenTest2_setWakeUpScreen_ERR") != -1).assertTrue()
              CommonEvent.unsubscribe(subscriber, () => {
               done()
               })
            } else {
              event.push(data.event)
            }
          }
        });
      }).catch((err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}createSubscriber failed, code is ${err.code}`);
      });
      startAbilityTest("com.example.setwakeupscreentest2", "com.example.setwakeupscreentest2.MainAbility", 5, "")

    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0500
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0500
     * @tc.desc      : Call the setWakeUpScreen interface during ability initialization, with input parameters of number
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0500', 3, async function (done) {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0500';
      let subscriber;

      let subscribeInfo = {
        events: ["SetWakeupScreenTest2_onCreate", "SetWakeupScreenTest2_onActive"
          , "SetWakeupScreenTest2_setWakeUpScreen_ERR", "SetWakeupScreenTest2_onDestroy"]
      };

      let event = []

      CommonEvent.createSubscriber(subscribeInfo).then((commonEventSubscriber) => {
        subscriber = commonEventSubscriber;
        CommonEvent.subscribe(subscriber, (err, data) => {
          if (err.code) {
            console.error(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}subscribe failed, code is ${err.code}`);
          } else {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe ${JSON.stringify(data)}`);
            if (data.event === "SetWakeupScreenTest2_onDestroy") {
              expect(event.indexOf("SetWakeupScreenTest2_onCreate") != -1).assertTrue()
              expect(event.indexOf("SetWakeupScreenTest2_onActive") != -1).assertTrue()
              expect(event.indexOf("SetWakeupScreenTest2_setWakeUpScreen_ERR") != -1).assertTrue()
              CommonEvent.unsubscribe(subscriber, () => {
               done()
               })
            } else {
              event.push(data.event)
            }
          }
        });
      }).catch((err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}createSubscriber failed, code is ${err.code}`);
      });
      startAbilityTest("com.example.setwakeupscreentest2", "com.example.setwakeupscreentest2.MainAbility", 2, 123)
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0600
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0600
     * @tc.desc      : Call the setWakeUpScreen interface during ability initialization, with input parameters of string
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0600', 3, async function (done) {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0500';
      let subscriber;

      let subscribeInfo = {
        events: ["SetWakeupScreenTest2_onCreate", "SetWakeupScreenTest2_onActive"
          , "SetWakeupScreenTest2_setWakeUpScreen_ERR", "SetWakeupScreenTest2_onDestroy"]
      };

      let event = []

      CommonEvent.createSubscriber(subscribeInfo).then((commonEventSubscriber) => {
        subscriber = commonEventSubscriber;
        CommonEvent.subscribe(subscriber, (err, data) => {
          if (err.code) {
            console.error(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}subscribe failed, code is ${err.code}`);
          } else {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe ${JSON.stringify(data)}`);
            if (data.event === "SetWakeupScreenTest2_onDestroy") {
              expect(event.indexOf("SetWakeupScreenTest2_onCreate") != -1).assertTrue()
              expect(event.indexOf("SetWakeupScreenTest2_onActive") != -1).assertTrue()
              expect(event.indexOf("SetWakeupScreenTest2_setWakeUpScreen_ERR") != -1).assertTrue()
              CommonEvent.unsubscribe(subscriber, () => {
               done()
               })
            } else {
              event.push(data.event)
            }
          }
        });
      }).catch((err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}createSubscriber failed, code is ${err.code}`);
      });
      startAbilityTest("com.example.setwakeupscreentest2", "com.example.setwakeupscreentest2.MainAbility", 3, "true")
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0400
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0400
     * @tc.desc      : Call the setWakeUpScreen interface during ability initialization, with input parameters of undefined
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0400', 3, async function (done) {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0400';
      let subscriber;

      let subscribeInfo = {
        events: ["SetWakeupScreenTest2_onCreate", "SetWakeupScreenTest2_onActive"
          , "SetWakeupScreenTest2_setWakeUpScreen_ERR", "SetWakeupScreenTest2_onDestroy"]
      };

      let event = []

      CommonEvent.createSubscriber(subscribeInfo).then((commonEventSubscriber) => {
        subscriber = commonEventSubscriber;
        CommonEvent.subscribe(subscriber, (err, data) => {
          if (err.code) {
            console.error(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}subscribe failed, code is ${err.code}`);
          } else {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe ${JSON.stringify(data)}`);
            event.push(data.event)
          }
        });
      }).catch((err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}createSubscriber failed, code is ${err.code}`);
      });
      startAbilityTest("com.example.setwakeupscreentest2", "com.example.setwakeupscreentest2.MainAbility", 1, undefined)
      await sleep(3000)

      expect(event.indexOf("SetWakeupScreenTest2_onCreate") != -1).assertTrue()
      expect(event.indexOf("SetWakeupScreenTest2_onActive") != -1).assertTrue()
      expect(event.indexOf("SetWakeupScreenTest2_setWakeUpScreen_ERR") != -1).assertTrue()
      CommonEvent.unsubscribe(subscriber, ()=> {
        done()
      })
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0200
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0200
     * @tc.desc      : Call the setWakeUpScreen interface during ability initialization, with input parameters of true
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0200', 3, async function (done) {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0200';
      let subscriber;

      let subscribeInfo = {
        events: ["SetWakeupScreenTest2_onCreate", "SetWakeupScreenTest2_onActive", "SetWakeupScreenTest2_onDestroy"]
      };

      let event = []

      CommonEvent.createSubscriber(subscribeInfo).then((commonEventSubscriber) => {
        subscriber = commonEventSubscriber;
        CommonEvent.subscribe(subscriber, (err, data) => {
          if (err.code) {
            console.error(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}subscribe failed, code is ${err.code}`);
          } else {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe ${JSON.stringify(data)}`);
            if (data.event === "SetWakeupScreenTest2_onDestroy") {
              expect(event.indexOf("SetWakeupScreenTest2_onCreate") != -1).assertTrue()
              expect(event.indexOf("SetWakeupScreenTest2_onActive") != -1).assertTrue()
              CommonEvent.unsubscribe(subscriber, () => {
               done()
               })
            } else {
              event.push(data.event)
            }
          }
        });
      }).catch((err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}createSubscriber failed, code is ${err.code}`);
      });
      startAbilityTest("com.example.setwakeupscreentest2", "com.example.setwakeupscreentest2.MainAbility", 2, true)
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0100
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0100
     * @tc.desc      : Call the setWakeUpScreen interface during ability initialization, with input parameters of true
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0100', 3, async function (done) {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_FA_SetWakeUp_0400';
      let subscriber;

      let subscribeInfo = {
        events: ["SetWakeupScreenTest2_onCreate", "SetWakeupScreenTest2_onActive", "SetWakeupScreenTest2_onDestroy"]
      };

      let event = []

      CommonEvent.createSubscriber(subscribeInfo).then((commonEventSubscriber) => {
        subscriber = commonEventSubscriber;
        CommonEvent.subscribe(subscriber, (err, data) => {
          if (err.code) {
            console.error(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}subscribe failed, code is ${err.code}`);
          } else {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe ${JSON.stringify(data)}`);
            if (data.event === "SetWakeupScreenTest2_onDestroy") {
              expect(event.indexOf("SetWakeupScreenTest2_onCreate") != -1).assertTrue()
              expect(event.indexOf("SetWakeupScreenTest2_onActive") != -1).assertTrue()
              CommonEvent.unsubscribe(subscriber, () => {
               done()
               })
            } else {
              event.push(data.event)
            }
          }
        });
      }).catch((err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}createSubscriber failed, code is ${err.code}`);
      });
      startAbilityTest("com.example.setwakeupscreentest2", "com.example.setwakeupscreentest2.MainAbility", 1, true)
    })
  })
}
