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
import CommonEventManager from '@ohos.commonEvent';
import common from '@ohos.app.ability.common';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';

const TAG = 'ACTS_StartAbilityForResult';

export default function actsStartAbilityForResult() {
  describe('ActsAbilityTest3', function () {
    const TEST_SUITE_NAME: string = 'ActsStartAbilityForResultTest';
    let TEST_CASE_NAME: string = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0100';

    function sleep(time) {
      return new Promise((resolve) => setTimeout(resolve, time));
    }

    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(async (done) => {
      await sleep(1000)
      done()
    })
    afterEach(async (done) => {
      await sleep(1000)
      done()
    })



    /**
     * @tc.number: SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_6600
     * @tc.name  : test Same application, same HAP, ability chain pull up: 1 pull 2, 2 pull 3
     * @tc.desc  : With the same hap application, ability chain pull up: 1 pull 2,2 pull 3.
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_6600', 3, async (done) => {
      try {
        TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_6600';
        console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME} is begin`);
        globalThis.context.startAbilityForResult({
          bundleName: "com.acts.startabilityforresult",
          abilityName: 'Assistant4Ability'
        }, async (err: any, result: common.AbilityResult) => {
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---startAbilityForResult4:${JSON.stringify(result)}`)
          expect(result.resultCode).assertEqual(100);
          expect(result.want.bundleName).assertEqual("com.acts.startabilityforresult");
          expect(result.want.abilityName).assertEqual('Assistant4Ability');
        });
        await sleep(1000)
        console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---globalThis.lifeCycle4:${JSON.stringify(globalThis.lifeCycle4)}`)
        expect(globalThis.lifeCycle4).assertContain("onCreate");
        expect(globalThis.lifeCycle4).assertContain("onWindowStageCreate");
        expect(globalThis.lifeCycle4).assertContain("onForeground");
        globalThis.lifeCycle4 = ""

        globalThis.context4.startAbilityForResult({
          bundleName: "com.acts.startabilityforresult",
          abilityName: 'Assistant5Ability'
        }, async (err: any, result: common.AbilityResult) => {
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---startAbilityForResult:${JSON.stringify(result)}`)
          expect(result.resultCode).assertEqual(100);
          expect(result.want.bundleName).assertEqual("com.acts.startabilityforresult");
          expect(result.want.abilityName).assertEqual('Assistant5Ability');
        });
        console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---test :${JSON.stringify(globalThis.lifeCycle4)}`)

        await sleep(1000)
        expect(globalThis.lifeCycle5).assertContain("onCreate");
        expect(globalThis.lifeCycle5).assertContain("onWindowStageCreate");
        expect(globalThis.lifeCycle5).assertContain("onForeground");
        console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---globalThis.lifeCycle5 :${JSON.stringify(globalThis.lifeCycle5)}`)
        globalThis.lifeCycle5 = ""
        globalThis.context5.terminateSelfWithResult({
          want: {
            bundleName: "com.acts.startabilityforresult",
            abilityName: 'Assistant5Ability'
          }, resultCode: 100
        }, async (err: any, result: common.AbilityResult) => {
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---terminateSelfWithResult5:${JSON.stringify(result)}`)
        });
        await sleep(1000)
        expect(globalThis.lifeCycle5).assertContain("onBackground");
        expect(globalThis.lifeCycle5).assertContain("onWindowStageDestroy");
        expect(globalThis.lifeCycle5).assertContain("onDestroy");
        globalThis.lifeCycle5 = ""

        globalThis.context4.terminateSelfWithResult({
          want: {
            bundleName: "com.acts.startabilityforresult",
            abilityName: 'Assistant4Ability'
          }, resultCode: 100
        }, async (err: any, result: common.AbilityResult) => {
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---terminateSelfWithResult4:${JSON.stringify(result)}`)
        });
        await sleep(1000)
        expect(globalThis.lifeCycle4).assertContain("onBackground");
        expect(globalThis.lifeCycle4).assertContain("onWindowStageDestroy");
        expect(globalThis.lifeCycle4).assertContain("onDestroy");
        done()
      } catch (e) {
        console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---err:${JSON.stringify(e)}`)
      }
    })
  })
}