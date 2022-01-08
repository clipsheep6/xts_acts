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
import { describe, it, expect } from 'deccjsunit/index';

describe('SimUnlockSimLockReliabilityTest', function () {

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_2800
   * @tc.name   Test unlockSimLock interface reliability (Async)
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_unlockSimLock_Async_2800', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_2800';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.SIM_PN_PIN_PASSWORD };
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      sim.unlockSimLock(env.SLOTID0, lockInfo, (error, lockResponse) => {
        if (error) {
          console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        if (lockResponse.result !== env.LOCK_STATE_CODE.SUCCESS) {
          console.log(`${CASE_NAME} unlockSimLock result error: ${lockResponse.result}`);
          expect().assertFail();
          done();
          return;
        }
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_2800
   * @tc.name   Test unlockSimLock interface reliability (Promise)
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_unlockSimLock_Promise_2800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_2800';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.SIM_PN_PIN_PASSWORD };
    try {
      let lockResponse;
      for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
        lockResponse = await sim.unlockSimLock(env.SLOTID0, lockInfo);
        if (lockResponse.result !== env.LOCK_STATE_CODE.SUCCESS) {
          throw new Error(`unlockSimLock result error: ${lockResponse.result}`);
        }
      }
    } catch (error) {
      console.log(`${CASE_NAME} has a error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log(`${CASE_NAME} test finish`);
    done();
  });
});