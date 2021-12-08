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

describe('SimSetLockStateReliabilityTest', function () {

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = env.TIME_OUT * 1000;

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_0900
   * @tc.name   Test the reliability of the SetLockState (Async) interface
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_SetLockState_Async_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_0900';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN2 };
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.debug(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.setLockState(env.SLOTID0, lockInfo, (error, lockStatusResponse) => {
        if (error) {
          console.log(`${CASE_NAME} setLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
          console.log(`${CASE_NAME} setLockState off failure, lock status response: ${lockStatusResponse.result}`);
          expect().assertFail();
          done();
        } else {
          recursive(n - 1);
        }
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_0900
   * @tc.name   Test the reliability of the SetLockState (Promise) interface
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_SetLockState_Promise_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_0900';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN2 };
    let lockStatusResponse;
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      console.debug(`${CASE_NAME} run ${index + 1} times`);
      try {
        lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
        if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
          console.log(`${CASE_NAME} setLockState off failure, lock status response: ${lockStatusResponse.result}`);
          expect().assertFail();
          done();
          return;
        }
      } catch (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    done();
  });
});