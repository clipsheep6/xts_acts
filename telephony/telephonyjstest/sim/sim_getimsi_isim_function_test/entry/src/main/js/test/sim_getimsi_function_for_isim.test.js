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
import { describe, it, expect, beforeAll, afterAll } from 'deccjsunit/index';

describe('SimGetImsiIsimFunctionTest', function () {

  /**
   * @tc.number Telephony_Sim_GetIMSI_Async_0900
   * @tc.name   ISIM file, test GetIMSI async callback interface slotId
   *            normal input parameter, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetIMSI_Async_0900', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetIMSI_Async_0900';
    sim.getIMSI(env.SLOTID0, (error, imsi) => {
      if (error) {
        console.log(`${CASE_NAME} getIMSI error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(imsi.length === env.SIM_IMSI_LEN).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_GetIMSI_Promise_0900
   * @tc.name   CDMA file, test GetIMSI promise interface slotId
   *            normal input parameter, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetIMSI_Promise_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetIMSI_Promise_0900';
    try {
      const imsi = await sim.getIMSI(env.SLOTID0);
      expect(imsi.length === env.SIM_IMSI_LEN).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} test error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });
});