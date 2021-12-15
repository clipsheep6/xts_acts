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

describe('SimGetSimAccountInfoPerformanceTest', function () {

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = 300 * 1000;

  /**
   * @tc.number  Telephony_Sim_getSimAccountInfo_Async_0300
   * @tc.name    Test the getSimAccountInfo interface query function ten times
   *             and expect a delay of less than env.EXPECT_TOTAL_TIME millisecond.
   * @tc.desc    Performance test
   */
  it('Telephony_Sim_getSimAccountInfo_Async_0300', 0, async function (done) {
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const CASE_NAME = 'Telephony_Sim_getSimAccountInfo_Async_0300';
    const recursive = function (n) {
      if (n <= 0) {
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        console.log(`${CASE_NAME} exec done useTime:${totalTime}ms`);
        console.log(`${CASE_NAME} finish`);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.getSimAccountInfo(env.SLOTID0, (err, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_getSimAccountInfo_Promise_0300
   * @tc.name    Test the getSimAccountInfo interface query function ten times
   *             and expect a delay of less than env.EXPECT_TOTAL_TIME millisecond.
   * @tc.desc    Performance test
   */
  it('Telephony_Sim_getSimAccountInfo_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getSimAccountInfo_Async_0300';
    const startTime = new Date().getTime();
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        await sim.getSimAccountInfo(env.SLOTID0).catch(error => error);
      } catch (err) {
        console.log(`${CASE_NAME} fail, err : ${err.message}`);
      }
    }
    const endTime = new Date().getTime();
    expect(endTime - startTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} useTime : ${endTime - startTime}ms`);
    console.log(`${CASE_NAME} finish`);
    done();
  });
});