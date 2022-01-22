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

import radio from '@ohos.telephony.radio';
import * as env from './lib/Const.js';
import { describe, it, expect, Core, beforeAll, afterAll } from 'deccjsunit/index';

describe('SimSetPrimarySlotIdReliabilityTest', function () {

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
   * @tc.number Telephony_Sim_setPrimarySlotId_Async_0600
   * @tc.name   Test the reliability of the setPrimarySlotId interface (Async)
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_setPrimarySlotId_Async_0600', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_setPrimarySlotId_Async_0600';
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      radio.setPrimarySlotId(env.DEFAULT_SLOTID, (error) => {
        if (error) {
          console.log(`${CASE_NAME} setPrimarySlotId error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        radio.getPrimarySlotId((error, slotId) => {
          if (error) {
            console.log(`${CASE_NAME} getPrimarySlotId error: ${error.message}`);
            expect().assertFail();
            done();
            return;
          }
          if (slotId !== env.DEFAULT_SLOTID) {
            expect().assertFail();
            console.log(`${CASE_NAME} getPrimarySlotId retrun error: ${slotId}`);
            done();
            return;
          }
          recursive(n - 1);
        });
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number Telephony_Sim_setPrimarySlotId_Promise_0600
   * @tc.name   Test the reliability of the setPrimarySlotId interface (Promise)
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_setPrimarySlotId_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setPrimarySlotId_Promise_0600';
    try {
      for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
        await radio.setPrimarySlotId(env.DEFAULT_SLOTID);
        let slotId = await radio.getPrimarySlotId();
        if (slotId !== env.DEFAULT_SLOTID) {
          throw new Error(`slotId error: ${slotId}`);
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