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
 
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import Want from '@ohos.app.ability.Want';
import CommonEventManager from '@ohos.commonEventManager';

const TAG = 'ACTS_StartAbilityForResult';

export default function actsStartAbilityForResult() {
  describe('ActsAbilityTest', function () {
    const TEST_SUITE_NAME: string = 'ActsStartAbilityForResultTest';
    let TEST_CASE_NAME: string = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0100';

    async function sleep(time) {
      return new Promise((resolve) => setTimeout(resolve, time));
    }

    function AssertionFailed(done) {
      expect().assertFail();
      done();
    }

    function areArraysEqual(arr1, arr2) {
      // Using the every method to check if the lengths of two arrays are equal
      if (arr1.length !== arr2.length) {
        return false;
      }
      // Use the every method to check if each element of two arrays is equal
      return arr1.every((item, index) => {
        return Object.keys(item).length === Object.keys(arr2[index]).length &&
        Object.keys(item).every(key => item[key] === arr2[index][key]);
      });
    }

    function arraysEqual(arr1, arr2) {
      if (arr1.length !== arr2.length) {
        return false;
      }
      for (let i = 0; i < arr1.length; i++) {
        if (arr1[i] !== arr2[i]) {
          return false;
        }
      }
      return true;
    }

    function compareObjectsUsingJSON(obj1, obj2) {
      return JSON.stringify(obj1) === JSON.stringify(obj2);
    }

    // Defines a test suite. Two parameters are supported: test suite name and test suite function.

    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(async (done) => {
      await sleep(1000)
      done()
    })
    afterEach(async (done) => {
      CommonEventManager.publish("EVENT_TERMINATE_SELF_ABILITY4", (err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} publish EVENT_TERMINATE_SELF_ABILITY4 err ${JSON.stringify(err)}`);
      });
      await sleep(1000)
      done()
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0100
     * @tc.name      : "Installing Hap1 and Hap2 for auxiliary applications of a single instance (different from testing applications)"
     *                  The input parameter includes both want and resultCode, and the want includes activityName and bundleName
     * @tc.desc      : test  Ability loop pull up: 1 pull 2, 2 pull 1 (single example)
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0100', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0100 ';

      let want25: Want = {
        bundleName: 'com.acts.startabilityforresult4',
        abilityName: 'singletonAbility'
      }
      let subscribeInfo = {
        events: ["auxiliary_siginevent1", "auxiliary_siginevent2", "EVENT_SingletonAbility4_onDestroy", "EVENT_SingletonAbility5_onDestroy"]
      };
      let subscriber;

      function SubscribeCallBack(err, data) {
        if (err) {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "callback failed  " ${JSON.stringify(err)}`);
        } else {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "callback success  " ${JSON.stringify(data)}`);

          if (data.event === "EVENT_SingletonAbility4_onDestroy") {
            expect(data.data).assertContain('onBackground')
            expect(data.data).assertContain('onWindowStageDestroy')
            expect(data.data).assertContain('onDestroy')
          } else if (data.event === "EVENT_SingletonAbility5_onDestroy") {
            expect(data.data).assertContain('onBackground')
            expect(data.data).assertContain('onWindowStageDestroy')
            expect(data.data).assertContain('onDestroy')
          } else {
            expect(data.data).assertContain('onCreate')
            expect(data.data).assertContain('onWindowStageCreate')
            expect(data.data).assertContain('onForeground')
          }
        }
      };

      CommonEventManager.createSubscriber(subscribeInfo, (err, commonEventSubscriber) => {
        if (!err) {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber success " ${JSON.stringify(err)}`);
          subscriber = commonEventSubscriber;
          CommonEventManager.subscribe(subscriber, SubscribeCallBack);
        } else {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber failed " ${JSON.stringify(err)}`);
        }
      });

      globalThis.context.startAbilityForResult(want25)
        .then((result) => {
          expect(result.want.bundleName).assertEqual('com.acts.startabilityforresult4');
          expect(result.want.abilityName).assertEqual('singletonAbility');
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} 1 startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
        })
        .catch((err) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
          AssertionFailed(done);

        });

      await sleep(500)

      CommonEventManager.publish("EVENT_START_ABILITY5", (err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} publish EVENT_START_ABILITY5 err ${JSON.stringify(err)}`);
      });

      await sleep(500)
      CommonEventManager.publish("EVENT_TERMINATE_SELF_ABILITY4", (err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} publish EVENT_TERMINATE_SELF_ABILITY4 err ${JSON.stringify(err)}`);
      });
      await sleep(1000)
      CommonEventManager.publish("EVENT_TERMINATE_SELF_ABILITY5", (err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} publish EVENT_TERMINATE_SELF_ABILITY4 err ${JSON.stringify(err)}`);
      });
      await sleep(1000)
      CommonEventManager.publish("EVENT_START_ABILITY1", (err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} publish EVENT_TERMINATE_SELF_ABILITY4 err ${JSON.stringify(err)}`);
      });

      await sleep(1000)
      done()
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0300
     * @tc.name      : test Ability repeated start stop (single example)
     * @tc.desc      : HAP for installing auxiliary applications
     *                 for a single instance (different from testing applications),The input parameter includes both
     *                 want and resultCode, and the want includes activityName and bundleName
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0300', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0300 ';

      let want22: Want = {
        bundleName: 'com.acts.startabilityforresult4',
        abilityName: 'EntryAbility'
      }

      let subscribeInfo = {
        events: ["com.acts.startabilityforresult.event"]
      };
      let subscriber;

      function SubscribeCallBack(err, data) {
        if (err) {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "subscribe failed  " ${JSON.stringify(err)}`);
        } else {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "subscribe success  " ${JSON.stringify(data)}`);
          expect(data.data).assertEqual("onBackgroundonWindowStageDestroyonDestroy")
        }
      };

      CommonEventManager.createSubscriber(subscribeInfo, (err, commonEventSubscriber) => {
        if (!err) {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber success " ${JSON.stringify(err)}`);
          subscriber = commonEventSubscriber;
          CommonEventManager.subscribe(subscriber, SubscribeCallBack);
        } else {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber failed " ${JSON.stringify(err)}`);
        }
      });

      globalThis.context.startAbilityForResult(want22)
        .then((result) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} 1 startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
          expect(result.resultCode).assertEqual(3);
        })
        .catch((err) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
          AssertionFailed(done);
        });


      await sleep(2000)

      globalThis.context.startAbilityForResult(want22)
        .then((result) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
          expect(result.want.bundleName).assertEqual('com.acts.startabilityforresult4');
          expect(result.want.abilityName).assertEqual('EntryAbility');
          expect(result.resultCode).assertEqual(3);
        })
        .catch((err) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
          AssertionFailed(done);
        });

      await sleep(2000)
      done()
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0400
     * @tc.name      : test Ability repeated start stop (multiple cases)
     * @tc.desc      : The input parameter includes both
     *                 want and resultCode, and the want includes activityName and bundleName
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0400', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0400 ';

      let want23: Want = {
        bundleName: 'com.acts.startabilityforresult',
        abilityName: 'MultitonMainAbility2'
      }
      let subscribeInfo = {
        events: ["com.acts.startabilityforresult.multitonevent"]
      };
      let subscriber;

      function SubscribeCallBack(err, data) {
        if (err) {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "subscribe CallBack failed  " ${JSON.stringify(err)}`);
        } else {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "subscribe CallBack:  " ${JSON.stringify(data)}`);
          expect(data.data).assertEqual("_onCreate_onWindowStageCreate_onForeground")
        }
      };

      CommonEventManager.createSubscriber(subscribeInfo, (err, commonEventSubscriber) => {
        if (!err) {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber success " ${JSON.stringify(commonEventSubscriber)}`);
          subscriber = commonEventSubscriber;
          CommonEventManager.subscribe(subscriber, SubscribeCallBack);
        } else {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber failed " ${JSON.stringify(err)}`);
        }
      });

      globalThis.context.startAbilityForResult(want23)
        .then((result) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} 1 startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
          expect(result.want.bundleName).assertEqual(want23.bundleName);
          expect(result.want.abilityName).assertEqual(want23.abilityName);
        })
        .catch((err) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
          AssertionFailed(done);
        });

      await sleep(1000)
      // 3， terminateSelfWithResult
      console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}  globalThis.MultitonMainAbility2context 1 ${JSON.stringify( globalThis.MultitonMainAbility2context)}`);
      globalThis.MultitonMainAbility2context.terminateSelfWithResult({
        resultCode: -1,
        want: want23
      })
        .then((result) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
        })
        .catch((err) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
          AssertionFailed(done)
        });

      await sleep(1000)
      globalThis.context.startAbilityForResult(want23)
        .then((result) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} 222 startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
          expect(result.want.bundleName).assertEqual(want23.bundleName);
          expect(result.want.abilityName).assertEqual(want23.abilityName);
          expect(result.resultCode).assertEqual(999);
          done();
        })
        .catch((err) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
          AssertionFailed(done);
        });

      await sleep(1000)
      console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}  globalThis.MultitonMainAbility2context 2 ${JSON.stringify( globalThis.MultitonMainAbility2context)}`);
      globalThis.MultitonMainAbility2context.terminateSelfWithResult({
        resultCode: 999,
        want: want23
      })
        .then((result) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
        })
        .catch((err) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
          AssertionFailed(done)
        });


    })
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0500
     * @tc.name      : test Ability implicitly starts
     * @tc.desc      : 1. implicitly start Ability2 through the startAbilityForResult interface,
     *                 with action as the input parameter
     *                 2. Ability2 calls the terminateSelfWithResult interface to terminate Ability2.
     *                 The input parameters include want and resultCode, with want containing activityName and bundleName“
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0500', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0500 ';
      try {
        let want24: Want = {
          action: 'action.system.ActionStartMainAbility2'
        }
        let terwant24: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'ActionStartMainAbility2',
        }
        let subscribeInfo = {
          events: ["com.acts.startabilityforresult.action"]
        };
        let subscriber;

        function SubscribeCallBack(err, data) {
          if (err) {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "subscribe CallBack failed  " ${JSON.stringify(err)}`);
          } else {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "subscribe CallBack:  " ${JSON.stringify(data)}`);
            expect(data.data).assertEqual("_onCreate_onWindowStageCreate_onForeground")
          }
        };

        CommonEventManager.createSubscriber(subscribeInfo, (err, commonEventSubscriber) => {
          if (!err) {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber success " ${JSON.stringify(commonEventSubscriber)}`);
            subscriber = commonEventSubscriber;
            CommonEventManager.subscribe(subscriber, SubscribeCallBack);
          } else {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber failed " ${JSON.stringify(err)}`);
          }
        });

        globalThis.context.startAbilityForResult(want24)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} 1 startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.bundleName).assertEqual(terwant24.bundleName);
            expect(result.want.abilityName).assertEqual(terwant24.abilityName);
            expect(result.resultCode).assertEqual(588);
            done();
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
          });

        await sleep(1000)
        // 3， terminateSelfWithResult
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}  globalThis.ActionStartMainAbility2Context ：${JSON.stringify( globalThis.ActionStartMainAbility2Context)}`);
        globalThis.ActionStartMainAbility2Context.terminateSelfWithResult({
          resultCode: 588,
          want: terwant24
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
          });
      } catch (err) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME}  catch , err is ${JSON.stringify(err)}`);

      }

    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1200
     * @tc.name      : test resultCode for undefined
     * @tc.desc      : StartAbilityForResult cannot receive information on the return value
     *                 The input parameter includes want and resultCode,
     *                 which includes activityName and bundleName, and resultCode is "undefined"
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1200', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1200';
      try {

        // 2, startAbilityForResult
        let want2: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2'
        };
        globalThis.context.startAbilityForResult(want2)
        await sleep(3000);
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: undefined,
          want: want2
        })
          .then((result) => {
            // Performing normal business operations
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            // Processing business logic errors
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult1 err, err is ${JSON.stringify(err)}`);
          });
      } catch (err) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err catch, err is ${JSON.stringify(err)}`);
        // expect(err.message).assertEqual('Invalid input parameter');
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1300
     * @tc.name      : test resultCode for string
     * @tc.desc      : test StartAbilityForResult cannot receive information on the return value
     *                 The input parameter includes want and resultCode,
     *                 which includes activityName and bundleName, and resultCode type is string
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1300', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1300';
      try {
        // 2, startAbilityForResult
        let want3: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2'
        };
        globalThis.context.startAbilityForResult(want3)
        await sleep(2000)
        // 3， terminateSelfWithResult
        try {
          let resultCode = 'test is string';
          // Return the AbilityResult information to the interface caller
          let abilityResult = {
            want3,
            resultCode
          };
          globalThis.context2.terminateSelfWithResult(abilityResult)
            .then((result) => {
              // Performing normal business operations
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
            })
            .catch((err) => {
              // Processing business logic errors
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult err, err is ${JSON.stringify(err)}`);
            });
        } catch (err) {
          expect(err.code).assertEqual(401);
          done();
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch, err is ${JSON.stringify(err)}`);
        }
      } catch (err) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err catch, err is ${JSON.stringify(err)}`);
        AssertionFailed(done);
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1400
     * @tc.name      : test esultCode is a non numeric string
     * @tc.desc      : test StartAbilityForResult cannot receive information on the return value
     *                 The input parameter includes want and resultCode,
     *                 which includes activityName and bundleName, resultCode is a non numeric string
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1400', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1400';
      try {
        // 2, startAbilityForResult
        let want3: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2'
        };
        globalThis.context.startAbilityForResult(want3)
        await sleep(2000)
        // 3， terminateSelfWithResult
        try {
          let resultCode = 'test';
          // Return the AbilityResult information to the interface caller
          let abilityResult = {
            want3,
            resultCode
          };
          globalThis.context2.terminateSelfWithResult(abilityResult)
            .then((result) => {
              // Performing normal business operations
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
            })
            .catch((err) => {
              // Processing business logic errors
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult err, err is ${JSON.stringify(err)}`);
            });
        } catch (err) {
          expect(err.code).assertEqual(401);
          done();
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch, err is ${JSON.stringify(err)}`);
        }
      } catch (err) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err catch, err is ${JSON.stringify(err)}`);
        AssertionFailed(done);
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1500
     * @tc.name      : test resultCode type is float
     * @tc.desc      : StartAbilityForResult receives the same information as the input
     *                 parameter of terminateSelfWithResult, and the result code is an integer
     *                 converted from decimals
     *                 The input parameter includes want and resultCode,
     *                 which includes activityName and bundleName, and resultCode type is float
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1500', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1500';
      try {
        // 2, startAbilityForResult
        let want2: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2'
        };
        globalThis.context.startAbilityForResult(want2)
          .then((result) => {
            // Performing normal business operations
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult sbundleName is ${result.want.bundleName}`);
            expect(result.resultCode).assertEqual(2);
            done();
          })
          .catch((err) => {
            // Processing business logic errors
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(3000);
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: 2.5,
          want: want2
        })
          .then((result) => {
            // Performing normal business operations
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            AssertionFailed(done);
            // Processing business logic errors
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult1 err, err is ${JSON.stringify(err)}`);
          });
      } catch (err) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err catch, err is ${JSON.stringify(err)}`);
        AssertionFailed(done);
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1600
     * @tc.name      : test resultCode is A number that is related to or
     * @tc.desc      : StartAbilityForResult cannot receive information on the return value
     *                 The input parameter includes want and resultCode,
     *                 which includes activityName and bundleName,
     *                 resultCode is A number that is related to or
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1600', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1600 ';
      try {
        // The binary of 60 is 0011 1100
        let a = 60;
        // The binary of 13 is 0000 1101
        let b = 13;
        // result is 61，because The binary of 61 0011 1101
        let resultCode = a | b;
        // 2, startAbilityForResult
        let want5: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
        };
        globalThis.context.startAbilityForResult(want5)
          .then((result) => {
            // Performing normal business operations
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult sbundleName is ${result.want.bundleName}`);
            expect(result.resultCode).assertEqual(61);
            expect(result.want.bundleName).assertEqual(want5.bundleName);
            expect(result.want.abilityName).assertEqual(want5.abilityName);
            done();

          })
          .catch((err) => {
            AssertionFailed(done)
            // Processing business logic errors
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, err is ${JSON.stringify(err)}`);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult

        globalThis.context2.terminateSelfWithResult({
          resultCode: resultCode,
          want: want5
        })
          .then((result) => {
            // Performing normal business operations
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            // Processing business logic errors
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult err, err is ${JSON.stringify(err)}`);
          });
      } catch (err) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err catch, err is ${JSON.stringify(err)}`);
        AssertionFailed(done);
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1700
     * @tc.name      : test resultCode is Empty  string
     * @tc.desc      : StartAbilityForResult cannot receive information on the return value
     *                 The input parameter includes want and resultCode,
     *                 which includes activityName and bundleName, and resultCode is Empty  string
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1700', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1700 ';

      try {
        // 2, startAbilityForResult
        let want4: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
        };
        globalThis.context.startAbilityForResult(want4)
        await sleep(500)
        globalThis.context2.terminateSelfWithResult({
          want: want4,
          resultCode: ''
        })
          .then((result) => {
            // Performing normal business operations
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {

            // Processing business logic errors
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult err, err is ${JSON.stringify(err)}`);
          });
      } catch (err) {
        expect(err.code).assertEqual(401);
        done();
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err catch, err is ${JSON.stringify(err)}`);
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2500
     * @tc.name      : test The parameters in want are BigDecimal type,example parameters: {BigDecimal: 12.12345678911223656}
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, parameters is type BigDecimal
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2500', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2500 ';
      try {
        let want20: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            BigDecimal: 12.12345678911223656
          }
        }
        globalThis.context.startAbilityForResult(want20)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult 1succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.bundleName).assertEqual(want20.bundleName);
            expect(result.want.abilityName).assertEqual(want20.abilityName);
            expect(result.want.parameters.BigDecimal).assertEqual(want20.parameters.BigDecimal);
            done();
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult 1catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: -1,
          want: want20
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult 1succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult 1catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult 1catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }

    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2600
     * @tc.name      : test The parameters in want are of type BigInteger
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, parameters is type BigInteger
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2600', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2600 ';
      try {
        let want21: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            BigInteger: 1212345678911223656
          }
        }
        globalThis.context.startAbilityForResult(want21)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.bundleName).assertEqual(want21.bundleName);
            expect(result.want.abilityName).assertEqual(want21.abilityName);
            expect(result.want.parameters.BigInteger).assertEqual(want21.parameters.BigInteger);
            done();
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: -1,
          want: want21
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }

    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2700
     * @tc.name      : test The parameters in want are of type boolean
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, which include activityName,
     *                 bundleName, parameters, and the parameters are of boolean type
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2700', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2700 ';
      try {
        let bool: boolean = true;
        let want7: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            keyForBool: bool,
          },
        };
        globalThis.context.startAbilityForResult(want7)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.abilityName).assertEqual(want7.abilityName);
            expect(result.want.bundleName).assertEqual(want7.bundleName);
            expect(result.want.parameters.keyForBool).assertEqual(want7.parameters.keyForBool);
            expect(result.resultCode).assertEqual(299);
            done();
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(3000);
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: 299,
          want: {
            bundleName: 'com.acts.startabilityforresult',
            abilityName: 'MainAbility2',
            parameters: {
              keyForBool: true,
            },
          }
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }


    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2800
     * @tc.name      : test In want, parameters are of type double,example parameters: {keyForDouble: 13.1234567891}
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, which include activityName
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2800', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2800 ';
      try {
        let want8: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            keyForDouble: 13.1234567891,
          },
        };
        globalThis.context.startAbilityForResult(want8)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.abilityName).assertEqual(want8.abilityName);
            expect(result.want.bundleName).assertEqual(want8.bundleName);
            expect(result.want.parameters.keyForDouble).assertEqual(want8.parameters.keyForDouble);
            done()
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: -1,
          want: want8
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }


    })


    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2900
     * @tc.name      : test The parameters in want are of float type up to ,example parameters: {keyForFloat: 13.12345}
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, which include activityName
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2900', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2900 ';
      try {
        let want9: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            keyForFloat: 13.12345,
          },
        };
        globalThis.context.startAbilityForResult(want9)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.abilityName).assertEqual(want9.abilityName);
            expect(result.want.bundleName).assertEqual(want9.bundleName);
            expect(result.want.parameters.keyForFloat).assertEqual(want9.parameters.keyForFloat);
            done()
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: -1,
          want: want9
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }


    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3000
     * @tc.name      : test The parameters in want are an int array
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, which include activityName,
     *                 bundleName, parameters, and the parameters are of Int Array
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3000', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3000 ';
      try {
        let want10: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            keyForArrayInt: [100, 200, 300, 400],
          },
        };
        globalThis.context.startAbilityForResult(want10)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.abilityName).assertEqual(want10.abilityName);
            expect(result.want.bundleName).assertEqual(want10.bundleName);
            let arr = want10.parameters.keyForArrayInt;
            let arr1 = result.want.parameters.keyForArrayInt;
            if (arraysEqual(arr, arr1)) {
              done()
            }
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: -1,
          want: want10
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }


    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3100
     * @tc.name      : test The parameters in want are JSON arrays
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, which include activityName,
     *                 bundleName, parameters, and the parameters are of json array
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3100', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3100 ';
      try {
        let want11: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            keyForArrayObject: [{
              obj1: 'aaa'
            }, {
              obj2: 100
            }]
          },
        };
        globalThis.context.startAbilityForResult(want11)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.abilityName).assertEqual(want11.abilityName);
            expect(result.want.bundleName).assertEqual(want11.bundleName);
            let arr1 = want11.parameters.keyForArrayObject;
            let arr2 = result.want.parameters.keyForArrayObject;
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, arr1 is ${JSON.stringify(arr1)}`);
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, arr2 is ${JSON.stringify(arr2)}`);
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, arr3 is ${areArraysEqual(arr1, arr2)}`);
            if (areArraysEqual(arr1, arr2)) {
              done()
            } else {
              AssertionFailed(done)
            }
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: -1,
          want: want11
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }


    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3200
     * @tc.name      : test The parameters in the want are JSON type data
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, which include activityName,
     *                 bundleName, parameters, and the parameters are of json
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3200', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3200 ';
      try {
        let want12: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            keyForObject: {
              keyForObjectString: 'str',
            },
          },
        };
        globalThis.context.startAbilityForResult(want12)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.abilityName).assertEqual(want12.abilityName);
            expect(result.want.bundleName).assertEqual(want12.bundleName);
            let obj1 = want12.parameters.keyForObject;
            let obj2 = result.want.parameters.keyForObject;
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, obj1 is ${JSON.stringify(obj1)}`);
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, obj2 is ${JSON.stringify(obj2)}`);

            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, arr3 is ${compareObjectsUsingJSON(obj1, obj2)}`);
            if (compareObjectsUsingJSON(obj1, obj2)) {
              done();
            } else {
              AssertionFailed(done);
            }
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: -1,
          want: want12
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }


    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3300
     * @tc.name      : test Parameters in want are individual characters
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, which include activityName,
     *                 bundleName, parameters, and the parameters is single character
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3300', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3300 ';
      try {
        let want13: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            keyForString: 's',
          },
        };
        globalThis.context.startAbilityForResult(want13)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.abilityName).assertEqual(want13.abilityName);
            expect(result.want.bundleName).assertEqual(want13.bundleName);
            expect(result.want.parameters.keyForString).assertEqual(want13.parameters.keyForString);
            done()

          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: -1,
          want: want13
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }


    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3400
     * @tc.name      : test The parameters in want are strings
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, which include activityName,
     *                 bundleName, parameters, and the parameters is string
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3400', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3400 ';
      try {
        let want14: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            keyForString: 'string',
          },
        };
        globalThis.context.startAbilityForResult(want14)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.abilityName).assertEqual(want14.abilityName);
            expect(result.want.bundleName).assertEqual(want14.bundleName);
            expect(result.want.parameters.keyForString).assertEqual(want14.parameters.keyForString);
            done()

          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: -1,
          want: want14
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }

    })
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3600
     * @tc.name      : test The parameters in want are a string array
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, which include activityName,
     *                 bundleName, The parameters in want are a string array
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3600', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3600 ';
      try {
        let want15: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            keyForArrayString: ['str1', 'str2', 'str3'],
          },
        };
        globalThis.context.startAbilityForResult(want15)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.abilityName).assertEqual(want15.abilityName);
            expect(result.want.bundleName).assertEqual(want15.bundleName);
            let arr1 = want15.parameters.keyForArrayString;
            let arr2 = result.want.parameters.keyForArrayString;
            if (areArraysEqual(arr1, arr2)) {
              done()
            } else {
              AssertionFailed(done)
            }

          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: -1,
          want: want15
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }

    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3700
     * @tc.name      : test The parameters in want are integers
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, which include activityName,
     *                 bundleName, The parameters is Int
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3700', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3700 ';
      try {
        let want16: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            keyForInt: 100,
          },
        };
        globalThis.context.startAbilityForResult(want16)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.abilityName).assertEqual(want16.abilityName);
            expect(result.want.bundleName).assertEqual(want16.bundleName);
            let keyForInt1 = want16.parameters.keyForInt;
            let keyForInt2 = result.want.parameters.keyForInt;
            expect(keyForInt1).assertEqual(keyForInt2);
            done()
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: -1,
          want: want16
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }

    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3800
     * @tc.name      : test Parameters in Want carry multiple keys and values
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, which include activityName,
     *                 bundleName, Parameters in Want carry multiple keys and values
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3800', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_3800 ';
      try {
        let want17: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
          parameters: {
            parameters: {
              multipleKeysAndValues: [{
                key: 'A', value: '1'
              }, {
                key: 'B', value: '2'
              }, {
                key: 'C', value: '3'
              }]
            },
          },
        };
        globalThis.context.startAbilityForResult(want17)
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect(result.want.abilityName).assertEqual(want17.abilityName);
            expect(result.want.bundleName).assertEqual(want17.bundleName);
            let multipleKeysAndValues = want17.parameters.multipleKeysAndValues;
            let multipleKeysAndValues1 = result.want.parameters.multipleKeysAndValues;
            let areEqual = JSON.stringify(multipleKeysAndValues) === JSON.stringify(multipleKeysAndValues1);
            if (areEqual) {
              done();
            } else {
              AssertionFailed(done);
            }
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
        await sleep(2000)
        // 3， terminateSelfWithResult
        globalThis.context2.terminateSelfWithResult({
          resultCode: -1,
          want: want17
        })
          .then((result) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
          })
          .catch((err) => {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
            AssertionFailed(done)
          });

      } catch (error) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
        AssertionFailed(done)
      }

    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_4000
     * @tc.name      : test want is undefined
     * @tc.desc      : The information of the return value received by startAbilityForResult
     *                 is consistent with the information of the input parameter of terminateSelfWithResult
     *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
     *                 The input parameters include want and resultCode, want is undefined
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_4000', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_4000 ';
       try {
       let want18: Want = {
       bundleName: 'com.acts.startabilityforresult',
       abilityName: 'MainAbility2'
       }
       globalThis.context.startAbilityForResult(want18)
       await sleep(500)

       let want: Want = undefined;
       let resultCode = 199900;
       // 3， terminateSelfWithResult
       globalThis.context2.terminateSelfWithResult({
       want,
       resultCode
       })
       .then((result) => {

       console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
       })
       .catch((err) => {
       console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err, err is ${JSON.stringify(err)}`);
       });

       } catch (error) {
         expect(error.code).assertEqual(401);
         done();
       console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
       }

       })

       /**
       * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_4100
       * @tc.name      : test want is {}
       * @tc.desc      : The information of the return value received by startAbilityForResult
       *                 is consistent with the information of the input parameter of terminateSelfWithResult
       *                 Abilit2 calls the terminateSelfWithResult interface to terminate Abilit2.
       *                 The input parameters include want and resultCode, want is {}
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 3
       */
      it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_4100', 3, async (done) => {
        TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_4100 ';
        try {
          let want19: Want = {
            bundleName: 'com.acts.startabilityforresult',
            abilityName: 'MainAbility2'
          }
          globalThis.context.startAbilityForResult(want19)
            .then((result) => {
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
              expect(result.want.abilityName).assertEqual('');
              expect(result.want.bundleName).assertEqual('');
              done();
            })
            .catch((err) => {
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult catch err, err is ${JSON.stringify(err)}`);
              AssertionFailed(done);
            });
          await sleep(2000)
          // 3， terminateSelfWithResult
          globalThis.context2.terminateSelfWithResult({
            resultCode: 866,
            want: {}
          })
            .then((result) => {
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
            })
            .catch((err) => {
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
              AssertionFailed(done)
            });

        } catch (error) {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch---, error is ${JSON.stringify(error)}`);
          AssertionFailed(done)
        }

      })

    })
  }