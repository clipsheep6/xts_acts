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

describe('SimGetMaxSimCountPerformanceTest', function () {

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
   * @tc.number Telephony_Sim_getMaxSimCount_0200
   * @tc.name   Test the performance of the getMaxSimCount interface
   * @tc.desc   Performance test
   */
  it('Telephony_Sim_getMaxSimCount_0200', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_getMaxSimCount_0200';
    let startTime = 0;
    let endTime = 0;
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      startTime = new Date().getTime();
      sim.getMaxSimCount();
      endTime = new Date().getTime();
      totalTime += endTime - startTime;
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} test finish, use time: ${totalTime}ms`);
    done();
  });
});