/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import worker from '@ohos.worker';
const TAG='JsRuntimeEnvironment';
const TEST_SUITE_NAME : string='JsRuntimeEnvironmentTest';

export default function ActsJsRuntimeEnvironmentTest() {
  describe('ActsJsRuntimeEnvironmentTest', function () {
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2300
     * @tc.name      : Check clearTimeout
     * @tc.desc      : Define the variable flag as false,
     *                 call setTimeout to set the flag to true for 100 milliseconds,
     *                 call clearTimeout, wait for 200 milliseconds, and observe the flag
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2300", 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2300';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        let flag:boolean = false;
        let timeoutID = setTimeout(()=> {
          // console.info('SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2300','flag ======== ' + JSON.stringify(flag));
          flag = true;
        }, 100);
        clearTimeout(timeoutID);
        let timeoutID1 = setTimeout(()=> {
          // console.info('SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2300','flag ======== ' + JSON.stringify(flag));
          clearTimeout(timeoutID1);
          expect(flag).assertEqual(false);
          done();
        }, 200);
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2400
     * @tc.name      : Check setInterval and clearInterval
     * @tc.desc      : Define the variable count as 0 and id as 0,
     *                 call setInterval to self add count for 100 milliseconds,
     *                 and stop when count equals 5. Assign it to id,
     *                 call clearInterval to pass in parameter id, wait for 200 milliseconds, and observe count
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2400", 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2400';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        let count:number = 0;
        let id = 0;
        id = setInterval(()=> {
          if (count == 5) {
            clearInterval(id);
            let timeoutID1 = setTimeout(()=> {
              // console.info('SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2400','count ======== ' + JSON.stringify(count));
              clearTimeout(timeoutID1);
              expect(count).assertEqual(5);
              done();
            }, 200);
          } else {
            count++;
          }
        }, 100);
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2500
     * @tc.name      : Verify setTimeout
     * @tc.desc      : Define the variable flag as false,
     *                 call setTimeout to set the flag to true for 100 milliseconds,
     *                 wait for 200 milliseconds, and observe the flag
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2500", 3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2500';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        let flag:boolean = true;
        setTimeout(()=> {
          flag = true;
          let timeoutID1 = setTimeout(()=> {
            // console.info('SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2300','flag ======== ' + JSON.stringify(flag));
            clearTimeout(timeoutID1);
            expect(flag).assertEqual(true);
            done();
          }, 200);
        }, 100);
      }catch (error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2600
     * @tc.name      : Verify worker
     * @tc.desc      : Start the worker, call Promise, call onmessage, pass "TestMessage", call terminate,
     *                 end the pass, and determine the return result
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2600',3, function (done) {
      const TEST_CASE_NAME ='SUB_Ability_AbilityRuntime_JsRuntimeEnvironment_2600';
      try {
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start`);
        let wk = new worker.ThreadWorker("entry_test/ets/workers/worker.ts");
        // 发送消息到worker线程
        wk.postMessage("TestMessage");
        // 处理来自worker线程的消�?
        wk.onmessage = function(message) {
          // 根据业务按需停止worker线程
          wk.terminate();
          console.info("===========>message from worker: " + JSON.stringify(message.data.data))
          expect(message.data.data).assertEqual("TestMessage");
          done();
        }
      }catch(error){
        hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start fail : ${error}`);
        done();
      }
    });
  })
}