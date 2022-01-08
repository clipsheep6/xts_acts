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

describe('SimGetPrimarySlotIdPerformanceTest', function () {

  /**
    * @tc.number Telephony_Sim_getPrimarySlotId_Async_0200
    * @tc.name   Test the performance of the getPrimarySlotId interface (Async)
    * @tc.desc   Performance test
    */
  it('Telephony_Sim_getPrimarySlotId_Async_0200', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_getPrimarySlotId_Async_0200';
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
      sim.getPrimarySlotId((error) => {
        if (error) {
          console.log(`${CASE_NAME} getPrimarySlotId error: ${error.message}`);
        }
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number Telephony_Sim_getPrimarySlotId_Promise_0200
    * @tc.name   Test the performance of the getPrimarySlotId interface (Promise)
    * @tc.desc   Performance test
    */
  it('Telephony_Sim_getPrimarySlotId_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getPrimarySlotId_Promise_0200';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        startTime = new Date().getTime();
        await sim.getPrimarySlotId();
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
      } catch (error) {
        console.log(`${CASE_NAME} getPrimarySlotId error: ${error.message}`);
      }
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} test finish, use time: ${totalTime}ms`);
    done();
  });
});