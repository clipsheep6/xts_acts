/**
 ** Copyright (c) 2023 Huawei Device Co., Ltd.
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
import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import common from '@ohos.app.ability.common';
import Want from '@ohos.app.ability.Want';
import StartOptions from '@ohos.app.ability.StartOptions';

import { BusinessError } from '@ohos.base';

import ServiceExtension from '@ohos.app.ability.ServiceExtensionAbility';


let abilityName = 'SecondAbility';
function sleep(ms: number): Promise<void> {
  return new Promise(resolve => setTimeout(resolve, ms));
}
export default function startAbilityTest() {
  describe('StartAbilityTest', () => {

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



    /*
        * @tc.name    SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0800
        * @tc.desc    入参为string
        * @tc.type:   Function
        * @tc.level   3
        */

     it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0800', 0, async (done: Function) => {
       let context = AppStorage.get('context') as common.UIAbilityContext
       const TAG = 'StartAbility';
       const TEST_SUITE_NAME: string = 'StartAbilityTest';
       const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0800';
       let want: Want = {
         bundleName: 'com.hits.startabilityforresulttest',
         abilityName: abilityName,
       }
       let options:StartOptions={
         windowMode: 1
       }
       try {
         await context.startAbility(want,options).then(async () => {
           hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
           await sleep(200)
           done();
         }).catch((err: BusinessError) => {
           hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
         })
       } catch (error) {
         hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
         expect().assertFail();
         done();
       }
    
     })


    /*
        * @tc.name    SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0900
        * @tc.desc    入参为undefined
        * @tc.type:   Function
        * @tc.level   3
        */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0900', 0, async (done: Function) => {
      let context = AppStorage.get('context') as common.UIAbilityContext
      const TAG = 'StartAbility';
      const TEST_SUITE_NAME: string = 'StartAbilityTest';
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0900';
      let want: Want = {
        bundleName: 'com.hits.startabilityforresulttest',
        abilityName: abilityName,
      }
      let options:StartOptions={
        windowMode:undefined
      }
      try {
        await context.startAbility(want,options).then(async () => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          await sleep(200)
          done();
        }).catch((err: BusinessError) => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}`);
        })
      } catch (error) {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }

    })
    /*
       * @tc.name    SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1000
       * @tc.desc    入参为不在定义范围内的参数
       * @tc.type:   Function
       * @tc.level   3
       */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1000', 0, async (done: Function) => {
      let context = AppStorage.get('context') as common.UIAbilityContext
      const TAG = 'StartAbility';
      const TEST_SUITE_NAME: string = 'StartAbilityTest';
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1000';
      let want: Want = {
        bundleName: 'com.hits.startabilityforresulttest',
        abilityName: abilityName,
      }
      let options:StartOptions={
        windowMode:99
      }
      try {
        await context.startAbility(want,options).then(async () => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          expect().assertFail();
          done();
        }).catch((err: BusinessError) => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}errorcode is ${err.code}`);
          expect(err.code).assertEqual(16000050);
          done();
        })
      } catch (error) {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }

    })

    /*
             * @tc.name    SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1100
             * @tc.desc    入参为存在的浮点型
             * @tc.type:   Function
             * @tc.level   3
             */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1100', 0, async (done: Function) => {
      let context = AppStorage.get('context') as common.UIAbilityContext
      const TAG = 'StartAbility';
      const TEST_SUITE_NAME: string = 'StartAbilityTest';
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1100';
      let want: Want = {
        bundleName: 'com.hits.startabilityforresulttest',
        abilityName: abilityName,
      }
      let options:StartOptions={
        windowMode:101.1
      }
      try {
        await context.startAbility(want,options).then(async () => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
          await sleep(5000)
          expect().assertUndefined();
          done();
        }).catch((err: BusinessError) => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ablility err : ${err}errorcode is ${err.code}`);
          expect().assertFail()
          done();
        })
      } catch (error) {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        expect().assertFail();
        done();
      }

    })
    /*
           * @tc.name    SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1800
           * @tc.desc    serviceExtension全屏模式启动ability
           * @tc.type:   Function
           * @tc.level   3
           */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1800', 0, async (done: Function) => {
      let context = AppStorage.get('context') as common.UIAbilityContext
      const TAG = 'StartAbility';
      const TEST_SUITE_NAME: string = 'StartAbilityTest';
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1800';
      let want: Want = {
        bundleName: 'com.hits.startabilityforresulttest',
        abilityName: 'ServiceExtensionAbility',
      }
      try {
        await context.startServiceExtensionAbility(want);
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
        await sleep(1000);
        expect().assertUndefined();
        done();
      } catch (err) {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability err : ${err} errorcode is ${err.code}`);
        expect().assertFail();
        done();
      }

    })
    /*
           * @tc.name    SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1900
           * @tc.desc    serviceExtension分屏模式启动ability
           * @tc.type:   Function
           * @tc.level   3
           */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1900', 0, async (done: Function) => {
      let context = AppStorage.get('context') as common.UIAbilityContext
      const TAG = 'StartAbility';
      const TEST_SUITE_NAME: string = 'StartAbilityTest';
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_1900';
      let want: Want = {
        bundleName: 'com.hits.startabilityforresulttest',
        abilityName: 'ServiceExtensionAbility2',
      }
      try {
        await context.startServiceExtensionAbility(want);
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
        await sleep(1000);
        expect().assertUndefined();
        done();
      } catch (err) {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability err : ${err} errorcode is ${err.code}`);
        expect().assertFail();
        done();
      }

    })
    /*
           * @tc.name    SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2000
           * @tc.desc    serviceExtension右分屏模式启动ability
           * @tc.type:   Function
           * @tc.level   3
           */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2000', 0, async (done: Function) => {
      let context = AppStorage.get('context') as common.UIAbilityContext
      const TAG = 'StartAbility';
      const TEST_SUITE_NAME: string = 'StartAbilityTest';
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2000';
      let want: Want = {
        bundleName: 'com.hits.startabilityforresulttest',
        abilityName: 'ServiceExtensionAbility3',
      }
      try {
        await context.startServiceExtensionAbility(want);
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
        await sleep(1000);
        expect().assertUndefined();
        done();
      } catch (err) {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability err : ${err} errorcode is ${err.code}`);
        expect().assertFail();
        done();
      }

    })
    /*
           * @tc.name    SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2100
           * @tc.desc    serviceExtension未定义模式启动ability
           * @tc.type:   Function
           * @tc.level   3
           */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2100', 0, async (done: Function) => {
      let context = AppStorage.get('context') as common.UIAbilityContext
      const TAG = 'StartAbility';
      const TEST_SUITE_NAME: string = 'StartAbilityTest';
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2100';
      let want: Want = {
        bundleName: 'com.hits.startabilityforresulttest',
        abilityName: 'ServiceExtensionAbility4',
      }
      try {
        await context.startServiceExtensionAbility(want);
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
        await sleep(1000);
        expect().assertUndefined();
        done();
      } catch (err) {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability err : ${err} errorcode is ${err.code}`);
        expect().assertFail();
        done();
      }

    })
    /*
           * @tc.name    SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2200
           * @tc.desc    serviceExtension悬浮模式启动ability
           * @tc.type:   Function
           * @tc.level   3
           */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2200', 0, async (done: Function) => {
      let context = AppStorage.get('context') as common.UIAbilityContext
      const TAG = 'StartAbility';
      const TEST_SUITE_NAME: string = 'StartAbilityTest';
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_2200';
      let want: Want = {
        bundleName: 'com.hits.startabilityforresulttest',
        abilityName: 'ServiceExtensionAbility5',
      }
      try {
        await context.startServiceExtensionAbility(want);
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability successful`);
        await sleep(1000);
        expect().assertUndefined();
        done();
      } catch (err) {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability err : ${err} errorcode is ${err.code}`);
        expect().assertFail();
        done();
      }

    })









  })







}