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

describe('SimGetMaxSimCountFunctionTest', function () {

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
   * @tc.number Telephony_Sim_getMaxSimCount_0300
   * @tc.name   Test the reliability of the getMaxSimCount interface
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_getMaxSimCount_0300', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_getMaxSimCount_0300';
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      let simCount = sim.getMaxSimCount();
      if (simCount <= 0) {
        console.log(`${CASE_NAME} simCount error: ${simCount}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log(`${CASE_NAME} test finish`);
    done();
  });
});