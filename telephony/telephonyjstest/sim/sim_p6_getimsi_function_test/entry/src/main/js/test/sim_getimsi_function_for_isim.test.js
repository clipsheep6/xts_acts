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

describe('SimGetIMSIFunctionForIsimTest', function () {

  const sleep = function (s) {
    return new Promise(resolve => {
      setTimeout(resolve, s * 1000);
    });
  };

  beforeAll(async function () {
    console.debug('---------------- Set ISIM network mode --------------------');
    try {
      let cardType;
      for (let index = 0; index < 3; index++) {
        cardType = await sim.getCardType(env.SLOTID0);
        if (cardType === sim.CARD_MODE_IMS) {
          break;
        }
        console.debug(`Card type incorrent: ${cardType}, switch network mode: 201`);
        await radio.setPreferredNetwork(env.SLOTID0, env.ISIM_NETWORK_MODE);
        await sleep(0.5);
      }
      console.debug(`Current card type: ${cardType}`);
      if (cardType !== sim.CARD_MODE_IMS) {
        throw new Error(`Failed to set to ISIM network mode, type value: ${cardType}`);
      }
      await sleep(5);
    } catch (error) {
      console.debug(`setPreferredNetwork ISIM error: ${error.message}`);
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