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

describe('SimGetSimOperatorNumeric', function () {

  /**
   * @tc.number Telephony_Sim_GetSimOperatorNumeric_Async_0500
   * @tc.name   CDMA file, test GetSimOperatorNumeric async callback interface
   *            slotId normal input parameter, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetSimOperatorNumeric_Async_0500', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimOperatorNumeric_Async_0500';
    sim.getSimOperatorNumeric(env.DEFAULT_SLOTID, (error, simOperatorNumeric) => {
      if (error) {
        console.log(`${CASE_NAME} getSimOperatorNumeric error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(
        simOperatorNumeric.length === env.SIM_OPERATOR_NUMBERIC_LEN
        && simOperatorNumeric.startsWith(env.SIM_OPERATOR_NUMBERIC_PREFIX
        )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_GetSimOperatorNumeric_Async_0600
   * @tc.name    CDMA file, GetSimOperatorNumeric async callback interface slotId
   *             exception enters parameter -1 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetSimOperatorNumeric_Async_0600', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimOperatorNumeric_Async_0600';
    sim.getSimOperatorNumeric(env.SLOTID_MINUS1, error => {
      if (error) {
        console.log(`${CASE_NAME} getSimOperatorNumeric expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_GetSimOperatorNumeric_Async_0700
   * @tc.name    CDMA file, GetSimOperatorNumeric async callback interface slotId
   *             exception enters parameter 3 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetSimOperatorNumeric_Async_0700', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimOperatorNumeric_Async_0700';
    sim.getSimOperatorNumeric(env.SLOTID3, error => {
      if (error) {
        console.log(`${CASE_NAME} getSimOperatorNumeric expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_GetSimOperatorNumeric_Async_0800
   * @tc.name    CDMA file, GetSimOperatorNumeric async callback interface slotId
   *             exception enters parameter 2 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetSimOperatorNumeric_Async_0800', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimOperatorNumeric_Async_0800';
    sim.getSimOperatorNumeric(env.SLOTID2, error => {
      if (error) {
        console.log(`${CASE_NAME} getSimOperatorNumeric expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_GetSimOperatorNumeric_Promise_0500
   * @tc.name   CDMA file, test GetSimOperatorNumeric promise interface slotId
   *            normal input parameter, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetSimOperatorNumeric_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimOperatorNumeric_Promise_0500';
    try {
      const simOperatorNumeric = await sim.getSimOperatorNumeric(env.DEFAULT_SLOTID);
      expect(
        simOperatorNumeric.length === env.SIM_OPERATOR_NUMBERIC_LEN
        && simOperatorNumeric.startsWith(env.SIM_OPERATOR_NUMBERIC_PREFIX
        )).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} test error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_GetSimOperatorNumeric_Promise_0600
   * @tc.name    CDMA file, GetSimOperatorNumeric promise interface slotId
   *             exception enters parameter -1 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetSimOperatorNumeric_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimOperatorNumeric_Promise_0600';
    try {
      await sim.getSimOperatorNumeric(env.SLOTID_MINUS1);
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
    } catch (error) {
      console.log(`${CASE_NAME} getSimOperatorNumeric expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_GetSimOperatorNumeric_Promise_0700
   * @tc.name    CDMA file, GetSimOperatorNumeric promise interface slotId
   *             exception enters parameter 3 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetSimOperatorNumeric_Promise_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimOperatorNumeric_Promise_0700';
    try {
      await sim.getSimOperatorNumeric(env.SLOTID3);
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
    } catch (error) {
      console.log(`${CASE_NAME} getSimOperatorNumeric expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_GetSimOperatorNumeric_Promise_0800
   * @tc.name    CDMA file, GetSimOperatorNumeric promise interface slotId
   *             exception enters parameter 2 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetSimOperatorNumeric_Promise_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimOperatorNumeric_Promise_0800';
    try {
      await sim.getSimOperatorNumeric(env.SLOTID2);
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
    } catch (error) {
      console.log(`${CASE_NAME} getSimOperatorNumeric expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });
});