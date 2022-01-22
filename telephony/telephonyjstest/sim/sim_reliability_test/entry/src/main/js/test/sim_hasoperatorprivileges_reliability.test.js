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

describe('SimHasOperatorPrivilegesReliabilityTest', function () {

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
   * @tc.number Telephony_Sim_hasOperatorPrivileges_Async_0500
   * @tc.name   Test hasOperatorPrivileges interface reliability (Async)
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_hasOperatorPrivileges_Async_0500', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_hasOperatorPrivileges_Async_0500';
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      sim.hasOperatorPrivileges(env.DEFAULT_SLOTID, (error, result) => {
        if (error) {
          console.log(`${CASE_NAME} hasOperatorPrivileges error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        if (!result) {
          console.log(`${CASE_NAME} hasOperatorPrivileges result: ${result}`);
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
   * @tc.number Telephony_Sim_hasOperatorPrivileges_Promise_0500
   * @tc.name   Test hasOperatorPrivileges interface reliability (Promise)
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_hasOperatorPrivileges_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_hasOperatorPrivileges_Promise_0500';
    try {
      for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
        let result = await sim.hasOperatorPrivileges(env.DEFAULT_SLOTID);
        if (!result) {
          throw new Error(`hasOperatorPrivileges result: ${result}`);
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