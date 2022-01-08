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

describe('SimGetPrimarySlotIdReliabilityTest', function () {

  /**
    * @tc.number Telephony_Sim_getPrimarySlotId_Async_0300
    * @tc.name   Test the reliability of the getPrimarySlotId interface (Async)
    * @tc.desc   Reliability test
    */
  it('Telephony_Sim_getPrimarySlotId_Async_0300', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_getPrimarySlotId_Async_0300';
    sim.setPrimarySlotId(env.SLOTID0, (error) => {
      if (error) {
        console.log(`${CASE_NAME} setPrimarySlotId error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      const recursive = function (n) {
        if (n === 0) {
          console.log(`${CASE_NAME} test finish`);
          done();
          return;
        }
        sim.getPrimarySlotId((error, slotId) => {
          if (error) {
            console.log(`${CASE_NAME} getPrimarySlotId error: ${error.message}`);
            expect().assertFail();
            done();
            return;
          }
          if (slotId !== env.SLOTID0) {
            console.log(`${CASE_NAME} getPrimarySlotId retrun error: ${slotId}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      };
      recursive(env.GENERAL_RUN_TIMES);
    });
  });

  /**
    * @tc.number Telephony_Sim_getPrimarySlotId_Promise_0300
    * @tc.name   Test the reliability of the getPrimarySlotId interface (Promise)
    * @tc.desc   Reliability test
    */
  it('Telephony_Sim_getPrimarySlotId_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getPrimarySlotId_Promise_0300';
    try {
      await sim.setPrimarySlotId(env.SLOTID0);
      for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
        let slotId = await sim.getPrimarySlotId();
        if (slotId !== env.SLOTID0) {
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