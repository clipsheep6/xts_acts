import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import Want from '@ohos.app.ability.Want';
import common from '@ohos.app.ability.common';
import commonEvent from '@ohos.commonEvent'
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';

const TAG = 'ACTS_StartAbilityForResult_1200';

export default function actsStartAbilityForResult(){
  describe('ActsAbilityTest', function () {
    const TEST_SUITE_NAME: string = 'ActsStartAbilityForResultTest';
    let TEST_CASE_NAME: string = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0100';
    const START_ABILITY_TIMEOUT = 10000;

    function sleep(time) {
      return new Promise((resolve) => setTimeout(resolve, time));
    }
    function AssertionFailed(done)  {
      expect().assertFail();
      done();
    }
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.

    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1200
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1200
     * @tc.desc      : test StartAbilityForResult cannot receive information on the return value
     *                 The input parameter includes want and resultCode,
     *                 which includes activityName and bundleName, and resultCode is "undefined"
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1200', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1200';
      try{
        setTimeout(() => {
          expect(true).assertTrue();
          done();
        }, 2000)
        // 2, startAbilityForResult
        let want2: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2'
        };
        globalThis.context.startAbilityForResult(want2)
          .then((result) => {
            // Performing normal business operations
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            AssertionFailed(done);
          })
          .catch((err) => {
            // Processing business logic errors
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, err is ${JSON.stringify(err)}`);
            AssertionFailed(done);
          });
           // 3， terminateSelfWithResult
          try {
            let resultCode = undefined;
            // Return the AbilityResult information to the interface caller
            let abilityResult = {
              want2,
              resultCode
            };
            globalThis.context2.terminateSelfWithResult(abilityResult)
              .then((result) => {
                // Performing normal business operations
                console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
              })
              .catch((err) => {
                // Processing business logic errors
                console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult err, err is ${JSON.stringify(err)}`);
              });
          } catch (err) {
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch, err is ${JSON.stringify(err)}`);
          }
      } catch (err) {
        console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err catch, err is ${JSON.stringify(err)}`);
        AssertionFailed(done);
      }

    })
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1500
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1500
     * @tc.desc      : test StartAbilityForResult receives the same information as the input
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
      try{
        let resultCode = 2.5;
        // 2, startAbilityForResult
        let want2: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2'
        };
        globalThis.context.startAbilityForResult(want2)
          .then((result) => {
            // Performing normal business operations
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult sbundleName is ${result.want.bundleName}`);
            expect(result.resultCode).assertEqual(2);
            done();
          })
          .catch((err) => {
            // Processing business logic errors
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, err is ${JSON.stringify(err)}`);
            done();
          });
        await sleep(1000);
        // 3， terminateSelfWithResult
        try {
          // Return the AbilityResult information to the interface caller
          let abilityResult = {
            want2, resultCode
          };
          globalThis.context2.terminateSelfWithResult(abilityResult)
            .then((result) => {
              // Performing normal business operations
              console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
            })
            .catch((err) => {
              // Processing business logic errors
              console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult err, err is ${JSON.stringify(err)}`);
            });
        } catch (err) {
          console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch, err is ${JSON.stringify(err)}`);
        }
      } catch (err) {
        console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err catch, err is ${JSON.stringify(err)}`);
        AssertionFailed(done);
      }
    })
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1300
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1300
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
        setTimeout(() => {
          expect(true).assertTrue();
          done();
        }, 2000)
        // 2, startAbilityForResult
        let want3: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2'
        };
        globalThis.context.startAbilityForResult(want3)
          .then((result) => {
            // Performing normal business operations
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            expect().assertFail();
            done();
          })
          .catch((err) => {
            // Processing business logic errors
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, err is ${JSON.stringify(err)}`);
            done();
          });
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
              console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
            })
            .catch((err) => {
              // Processing business logic errors
              console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult err, err is ${JSON.stringify(err)}`);
            });
        } catch (err) {
          console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch, err is ${JSON.stringify(err)}`);
        }
      } catch (err) {
        console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err catch, err is ${JSON.stringify(err)}`);
        AssertionFailed(done);
      }
    })
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1400
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1400
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
        setTimeout(() => {
          expect(true).assertTrue();
          done();
        }, 2000)
        // 2, startAbilityForResult
        let want3: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2'
        };
        globalThis.context.startAbilityForResult(want3)
          .then((result) => {
            // Performing normal business operations
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult sbundleName is ${result.want.bundleName}`);
            expect().assertFail();
            done();
          })
          .catch((err) => {
            // Processing business logic errors
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, err is ${JSON.stringify(err)}`);
            done();
          });
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
              console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
            })
            .catch((err) => {
              // Processing business logic errors
              console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult err, err is ${JSON.stringify(err)}`);
            });
        } catch (err) {
          console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch, err is ${JSON.stringify(err)}`);
        }
      } catch (err) {
        console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err catch, err is ${JSON.stringify(err)}`);
        AssertionFailed(done);
      }
    })
     /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1600
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1600
     * @tc.desc      : test StartAbilityForResult cannot receive information on the return value
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
        setTimeout(() => {
          expect(true).assertTrue();
          done();
        }, 3000)
        // 2, startAbilityForResult
        let want5: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
        };
        globalThis.context.startAbilityForResult(want5)
          .then((result) => {
            // Performing normal business operations
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult sbundleName is ${result.want.bundleName}`);
            expect(result.resultCode).assertEqual(resultCode);
            done();
          })
          .catch((err) => {
            // Processing business logic errors
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, err is ${JSON.stringify(err)}`);
            done();
          });
          await sleep(2000)
          // 3， terminateSelfWithResult
          // Return the AbilityResult information to the interface caller
          let abilityResult = {
            want5,
            resultCode
          };
          globalThis.context2.terminateSelfWithResult(abilityResult)
            .then((result) => {
              // Performing normal business operations
              console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
            })
            .catch((err) => {
              // Processing business logic errors
              console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult err, err is ${JSON.stringify(err)}`);
            });
      } catch (err) {
        console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err catch, err is ${JSON.stringify(err)}`);
        AssertionFailed(done);
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1700
     * @tc.name      : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1700
     * @tc.desc      : test StartAbilityForResult cannot receive information on the return value
     *                 The input parameter includes want and resultCode,
     *                 which includes activityName and bundleName, and resultCode is Empty  string
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1700', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1700 ';
      try {
        setTimeout(() => {
          expect(true).assertTrue();
          done();
        }, 2000)
        // 2, startAbilityForResult
        let want4: Want = {
          bundleName: 'com.acts.startabilityforresult',
          abilityName: 'MainAbility2',
        };
        globalThis.context.startAbilityForResult(want4)
          .then((result) => {
            // Performing normal business operations
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, result is ${JSON.stringify(result)}`);
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult sbundleName is ${result.want.bundleName}`);
            AssertionFailed(done);
          })
          .catch((err) => {
            // Processing business logic errors
            console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbilityForResult succeed, err is ${JSON.stringify(err)}`);
            done();
          });
          await sleep(2000)
          // 3， terminateSelfWithResult
          let resultCode = '';
          // Return the AbilityResult information to the interface caller
          let abilityResult = {
            want4,
            resultCode
          };
          globalThis.context2.terminateSelfWithResult(abilityResult)
            .then((result) => {
              // Performing normal business operations
              console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
            })
            .catch((err) => {
              // Processing business logic errors
              console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult err, err is ${JSON.stringify(err)}`);
            });
      } catch (err) {
        console.info( `${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err catch, err is ${JSON.stringify(err)}`);
        AssertionFailed(done);
      }
    })
    

  })
}