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
import { describe, it, expect, Core, beforeAll, afterAll } from 'deccjsunit/index';

describe('SimSetLockStateReliabilityTest', function () {

  let fdnLockUnavailable = true;

  beforeAll(async function () {
    // set timeout
    const core = Core.getInstance();
    const config = core.getDefaultService('config');
    config.timeout = env.TIME_OUT * 1000;

    try {
      const pin2LockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN2 };
      const pin2UnlockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN2 };
      const checkFdn = await sim.setLockState(env.DEFAULT_SLOTID, pin2LockInfo);
      console.debug(`checkFdn result: ${JSON.stringify(checkFdn)}`);
      fdnLockUnavailable = checkFdn.result !== env.LOCK_RESULT.SUCCESS;
      await sim.setLockState(env.DEFAULT_SLOTID, pin2UnlockInfo);
      console.debug(`fdnLockUnavailable: ${fdnLockUnavailable}`);
    } catch (error) {
      console.log(`check password has a error: ${error.message}`);
    }
  });

  afterAll(function () {
    // set timeout
    const core = Core.getInstance();
    const config = core.getDefaultService('config');
    config.timeout = 5 * 1000;
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_0900
   * @tc.name   Test the reliability of the SetLockState (Async) interface
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_SetLockState_Async_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_0900';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN2 };
    if (fdnLockUnavailable) {
      console.error(`${CASE_NAME} fdn function is unreachable`);
      done();
      return;
    }
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.debug(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.setLockState(env.DEFAULT_SLOTID, lockInfo, (error, lockStatusResponse) => {
        if (error) {
          console.log(`${CASE_NAME} setLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
          console.log(`${CASE_NAME} setLockState off failure, response: ${JSON.stringify(lockStatusResponse)}`);
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
    if (fdnLockUnavailable) {
      console.error(`${CASE_NAME} fdn function is unreachable`);
      done();
      return;
    }
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      console.debug(`${CASE_NAME} run ${index + 1} times`);
      try {
        lockStatusResponse = await sim.setLockState(env.DEFAULT_SLOTID, lockInfo);
        if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
          console.log(`${CASE_NAME} setLockState off failure, response: ${JSON.stringify(lockStatusResponse)}`);
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