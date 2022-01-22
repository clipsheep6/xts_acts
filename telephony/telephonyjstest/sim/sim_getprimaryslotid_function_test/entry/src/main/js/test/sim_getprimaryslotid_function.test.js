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
import { describe, it, expect } from 'deccjsunit/index';

describe('SimGetPrimarySlotIdFunctionTest', function () {

  /**
   * @tc.number Telephony_Sim_getPrimarySlotId_Async_0100
   * @tc.name   Test the getPrimarySlotId async callback interface and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_getPrimarySlotId_Async_0100', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_getPrimarySlotId_Async_0100';
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
        expect(slotId === env.DEFAULT_SLOTID).assertTrue();
        console.log(`${CASE_NAME} test finish.`);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_getPrimarySlotId_Promise_0100
   * @tc.name   Test the getPrimarySlotId promise interface and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_getPrimarySlotId_Promise_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getPrimarySlotId_Promise_0100';
    try {
      await radio.setPrimarySlotId(env.DEFAULT_SLOTID);
      const slotId = await radio.getPrimarySlotId();
      expect(slotId === env.DEFAULT_SLOTID).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} has a error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });
});