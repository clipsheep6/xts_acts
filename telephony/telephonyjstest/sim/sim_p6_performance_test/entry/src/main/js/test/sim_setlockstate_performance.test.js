/**
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

import sim from '@ohos.telephony.sim';
import * as env from './lib/Const.js';
import { describe, it, expect, Core } from 'deccjsunit/index';

describe('SimSetLockStatePerformanceTest', function () {

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = env.TIME_OUT * 1000;

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_0800
   * @tc.name   Test SetLockState (Async) interface performance
   * @tc.desc   Performance test
   */
  it('Telephony_Sim_SetLockState_Async_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_0800';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN2 };
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    const recursive = function (n) {
      if (n === 0) {
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        console.log(`${CASE_NAME} test finish, use time: ${totalTime}ms`);
        done();
        return;
      }
      console.debug(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      startTime = new Date().getTime();
      sim.setLockState(env.SLOTID0, lockInfo, () => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_0800
   * @tc.name   Test SetLockState (Promise) interface performance
   * @tc.desc   Performance test
   */
  it('Telephony_Sim_SetLockState_Promise_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_0800';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN2 };
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      console.debug(`${CASE_NAME} run ${index + 1} times`);
      try {
        startTime = new Date().getTime();
        await sim.setLockState(env.SLOTID0, lockInfo);
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
      } catch (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      }
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} test finish, use time: ${totalTime}ms`);
    done();
  });
});