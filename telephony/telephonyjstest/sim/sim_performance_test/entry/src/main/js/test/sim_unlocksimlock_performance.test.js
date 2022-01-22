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

describe('SimUnlockSimLockPerformanceTest', function () {

  beforeAll(function () {
    // set timeout
    const core = Core.getInstance();
    const config = core.getDefaultService('config');
    config.timeout = env.TIME_OUT * 1000;
  });

  afterAll(function () {
    // set timeout
    const core = Core.getInstance();
    const config = core.getDefaultService('config');
    config.timeout = 5 * 1000;
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_2700
   * @tc.name   Test unlockSimLock interface performance (Async)
   * @tc.desc   Performance test
   */
  it('Telephony_Sim_unlockSimLock_Async_2700', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_2700';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.SIM_PN_PIN_PASSWORD };
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
      startTime = new Date().getTime();
      sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, (error, result) => {
        if (error) {
          console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        }
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_2700
   * @tc.name   Test unlockSimLock interface performance (Promise)
   * @tc.desc   Performance test
   */
  it('Telephony_Sim_unlockSimLock_Promise_2700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_2700';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.SIM_PN_PIN_PASSWORD };
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        startTime = new Date().getTime();
        await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
      } catch (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      }
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} test finish, use time: ${totalTime}ms`);
    done();
  });
});