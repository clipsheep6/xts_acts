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

describe('SimGetImsiCdmaFunctionTest', function () {

  /**
   * @tc.number Telephony_Sim_GetIMSI_Async_0500
   * @tc.name   CDMA file, test GetIMSI async callback interface slotId
   *            normal input parameter, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetIMSI_Async_0500', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetIMSI_Async_0500';
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
   * @tc.number  Telephony_Sim_GetIMSI_Async_0600
   * @tc.name    CDMA file, getIMSI async callback interface slotId
   *             exception enters parameter -1 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetIMSI_Async_0600', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetIMSI_Async_0600';
    sim.getIMSI(env.SLOTID_MINUS1, error => {
      if (error) {
        console.log(`${CASE_NAME} getIMSI expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_GetIMSI_Async_0700
   * @tc.name    CDMA file, getIMSI async callback interface slotId
   *             exception enters parameter 1 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetIMSI_Async_0700', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetIMSI_Async_0700';
    sim.getIMSI(env.SLOTID1, error => {
      if (error) {
        console.log(`${CASE_NAME} getIMSI expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_GetIMSI_Async_0800
   * @tc.name    CDMA file, getIMSI async callback interface slotId
   *             exception enters parameter 2 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetIMSI_Async_0800', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetIMSI_Async_0800';
    sim.getIMSI(env.SLOTID2, error => {
      if (error) {
        console.log(`${CASE_NAME} getIMSI expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_GetIMSI_Promise_0500
   * @tc.name   CDMA file, test GetIMSI promise interface slotId
   *            normal input parameter, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetIMSI_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetIMSI_Promise_0500';
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

  /**
   * @tc.number  Telephony_Sim_GetIMSI_Promise_0600
   * @tc.name    CDMA file, getIMSI promise interface slotId
   *             exception enters parameter -1 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetIMSI_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetIMSI_Promise_0600';
    try {
      await sim.getIMSI(env.SLOTID_MINUS1);
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
    } catch (error) {
      console.log(`${CASE_NAME} getIMSI expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_GetIMSI_Promise_0700
   * @tc.name    CDMA file, getIMSI promise interface slotId
   *             exception enters parameter 1 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetIMSI_Promise_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetIMSI_Promise_0700';
    try {
      await sim.getIMSI(env.SLOTID1);
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
    } catch (error) {
      console.log(`${CASE_NAME} getIMSI expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_GetIMSI_Promise_0800
   * @tc.name    CDMA file, getIMSI promise interface slotId
   *             exception enters parameter 2 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetIMSI_Promise_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetIMSI_Promise_0800';
    try {
      await sim.getIMSI(env.SLOTID2);
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
    } catch (error) {
      console.log(`${CASE_NAME} getIMSI expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });
});