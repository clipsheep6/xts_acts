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

describe('SimGetLockStateReliabilityTest', function () {

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = env.TIME_OUT * 1000;

  /**
   * @tc.number Telephony_Sim_GetLockState_Async_0500
   * @tc.name   Test GetLockState (Async) interface reliability
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_GetLockState_Async_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetLockState_Async_0500';
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.debug(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.getLockState(env.SLOTID0, sim.PIN_LOCK, (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        if (lockState !== sim.LOCK_OFF) {
          console.log(`${CASE_NAME} getLockState lock state incorrect: ${lockState}`);
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
   * @tc.number Telephony_Sim_GetLockState_Promise_0500
   * @tc.name   Test GetLockState (Promise) interface reliability
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_GetLockState_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetLockState_Promise_0500';

    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      console.debug(`${CASE_NAME} run ${index + 1} times`);
      try {
        const lockState = await sim.getLockState(env.SLOTID0, sim.PIN_LOCK);
        if (lockState !== sim.LOCK_OFF) {
          console.log(`${CASE_NAME} getLockState lock state incorrect: ${lockState}`);
          expect().assertFail();
          done();
          return;
        }
      } catch (error) {
        console.log(`${CASE_NAME} getLockState error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    done();
  });
});