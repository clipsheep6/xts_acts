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

describe('SimSetPrimarySlotIdFunctionTest', function () {

  /**
   * @tc.number Telephony_Sim_setPrimarySlotId_Async_0400
   * @tc.name   When there is no card, test the setPrimarySlotId interface to
   *            enter parameter 0 normally, and check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setPrimarySlotId_Async_0400', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_setPrimarySlotId_Async_0400';
    sim.setPrimarySlotId(env.SLOTID0, (error) => {
      if (!error) {
        console.log(`${CASE_NAME} test fail`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`${CASE_NAME} setPrimarySlotId expect error: ${error.message}`);
      sim.getPrimarySlotId((error, slotId) => {
        if (!error) {
          console.log(`${CASE_NAME} test fail`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`${CASE_NAME} getPrimarySlotId expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_setPrimarySlotId_Promise_0400
   * @tc.name   Test the setPrimarySlotId promise interface exception
   *            and enter parameter -1 to check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setPrimarySlotId_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setPrimarySlotId_Promise_0400';
    try {
      await sim.setPrimarySlotId(env.SLOTID0);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} setPrimarySlotId expect error: ${error.message}`);
    }
    try {
      await sim.getPrimarySlotId();
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} getPrimarySlotId expect error: ${error.message}`);
    }
    console.log(`${CASE_NAME} test finish.`);
    done();
  });
});