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
import radio from '@ohos.telephony.radio';
import * as env from './lib/Const.js';
import { describe, it, expect, beforeAll, afterAll } from 'deccjsunit/index';

describe('SimGetSimIccIdFunctionTest', function () {

  const sleep = function (s) {
    return new Promise(resolve => {
      setTimeout(resolve, s * 1000);
    });
  };

  beforeAll(async function () {
    console.debug('---------------- Set CDMA network mode --------------------');
    try {
      await radio.setPreferredNetwork(env.SLOTID0, env.CDMA_NETWORK_MODE);
      await sleep(3);
      const cardType = await sim.getCardType(env.SLOTID0);
      console.debug(`Current card type: ${cardType}`);
    } catch (error) {
      console.debug(`setPreferredNetwork cmda error: ${error.message}`);
      throw error;
    }
  });

  afterAll(async function () {
    try {
      console.debug('---------------- Restore auto network mode --------------------');
      await radio.setPreferredNetwork(env.SLOTID0, radio.PREFERRED_NETWORK_MODE_AUTO);
    } catch (error) {
      console.debug(`setPreferredNetwork auto error: ${error.message}`);
      throw error;
    }
  });

  /**
   * @tc.number Telephony_Sim_GetSimIccId_Async_0500
   * @tc.name   CDMA file, test GetSimIccId async callback interface slotId
   *            normal input parameter, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetSimIccId_Async_0500', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimIccId_Async_0500';
    sim.getSimIccId(env.SLOTID0, (error, iccId) => {
      if (error) {
        console.log(`${CASE_NAME} getSimIccId error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(iccId.length === env.SIM_ICCID_LEN).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_GetSimIccId_Async_0600
   * @tc.name    CDMA file, getSimIccId async callback interface slotId
   *             exception enters parameter -1 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetSimIccId_Async_0600', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimIccId_Async_0600';
    sim.getSimIccId(env.SLOTID_MINUS1, error => {
      if (error) {
        console.log(`${CASE_NAME} getSimIccId expect error: ${error.message}`);
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
   * @tc.number  Telephony_Sim_GetSimIccId_Async_0700
   * @tc.name    CDMA file, getSimIccId async callback interface slotId
   *             exception enters parameter 1 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetSimIccId_Async_0700', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimIccId_Async_0700';
    sim.getSimIccId(env.SLOTID1, error => {
      if (error) {
        console.log(`${CASE_NAME} getSimIccId expect error: ${error.message}`);
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
   * @tc.number  Telephony_Sim_GetSimIccId_Async_0800
   * @tc.name    CDMA file, getSimIccId async callback interface slotId
   *             exception enters parameter 2 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetSimIccId_Async_0800', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimIccId_Async_0800';
    sim.getSimIccId(env.SLOTID2, error => {
      if (error) {
        console.log(`${CASE_NAME} getSimIccId expect error: ${error.message}`);
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
   * @tc.number Telephony_Sim_GetSimIccId_Promise_0500
   * @tc.name   CDMA file, test GetSimIccId promise interface slotId
   *            normal input parameter, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetSimIccId_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimIccId_Promise_0500';
    try {
      const iccId = await sim.getSimIccId(env.SLOTID0);
      expect(iccId.length === env.SIM_ICCID_LEN).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getSimIccId error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_GetSimIccId_Promise_0600
   * @tc.name    CDMA file, getSimIccId promise interface slotId
   *             exception enters parameter -1 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetSimIccId_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimIccId_Promise_0600';
    try {
      await sim.getSimIccId(env.SLOTID_MINUS1);
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
    } catch (error) {
      console.log(`${CASE_NAME} getSimIccId expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_GetSimIccId_Promise_0700
   * @tc.name    CDMA file, getSimIccId promise interface slotId
   *             exception enters parameter 1 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetSimIccId_Promise_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimIccId_Promise_0700';
    try {
      await sim.getSimIccId(env.SLOTID1);
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
    } catch (error) {
      console.log(`${CASE_NAME} getSimIccId expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_GetSimIccId_Promise_0800
   * @tc.name    CDMA file, getSimIccId promise interface slotId
   *             exception enters parameter 2 test
   * @tc.desc    Function test
   */
  it('Telephony_Sim_GetSimIccId_Promise_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetSimIccId_Promise_0800';
    try {
      await sim.getSimIccId(env.SLOTID2);
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
    } catch (error) {
      console.log(`${CASE_NAME} getSimIccId expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });
});