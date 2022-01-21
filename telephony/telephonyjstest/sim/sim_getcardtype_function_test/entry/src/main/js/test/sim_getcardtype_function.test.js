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

describe('SimGetCardTypeFunctionTest', function () {

  /**
   * @tc.number Telephony_Sim_GetCardType_Async_0100
   * @tc.name   Verify that the slotId of the GetCardType async callback interface is normally entered,
   *            and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetCardType_Async_0100', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetCardType_Async_0100';
    sim.getCardType(env.DEFAULT_SLOTID, (error, cardType) => {
      if (error) {
        console.log(`${CASE_NAME} GetCardType error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(cardType === sim.SINGLE_MODE_USIM_CARD).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_GetCardType_Async_0200
   * @tc.name   Verify that the slotId of the GetCardType async callback interface is abnormal
   *            and enter parameter -1, and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetCardType_Async_0200', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetCardType_Async_0200';
    sim.getCardType(env.SLOTID_MINUS1, (error, cardType) => {
      if (error) {
        console.log(`${CASE_NAME} GetCardType error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(cardType === sim.UNKNOWN_CARD).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_GetCardType_Async_0300
   * @tc.name   Verify that the slotId of the GetCardType async callback interface is abnormal
   *            and enter parameter 3, and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetCardType_Async_0300', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetCardType_Async_0300';
    sim.getCardType(env.SLOTID3, (error, cardType) => {
      if (error) {
        console.log(`${CASE_NAME} GetCardType error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(cardType === sim.UNKNOWN_CARD).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_GetCardType_Async_0400
   * @tc.name   Verify that the slotId of the GetCardType async callback interface is abnormal
   *            and enter parameter 2, and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetCardType_Async_0400', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_GetCardType_Async_0400';
    sim.getCardType(env.SLOTID2, (error, cardType) => {
      if (error) {
        console.log(`${CASE_NAME} GetCardType error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(cardType === sim.UNKNOWN_CARD).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_GetCardType_Promise_0100
   * @tc.name   Verify that the slotId of the GetCardType promise interface is normally entered,
   *            and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetCardType_Promise_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetCardType_Promise_0100';
    try {
      const cardType = await sim.getCardType(env.DEFAULT_SLOTID);
      expect(cardType === sim.SINGLE_MODE_USIM_CARD).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} GetCardType error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_GetCardType_Promise_0200
   * @tc.name   Verify that the slotId of the GetCardType promise interface is abnormal
   *            and enter parameter -1, and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetCardType_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetCardType_Promise_0200';
    try {
      const cardType = await sim.getCardType(env.SLOTID_MINUS1);
      expect(cardType === sim.UNKNOWN_CARD).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} GetCardType error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_GetCardType_Promise_0300
   * @tc.name   Verify that the slotId of the GetCardType promise interface is abnormal
   *            and enter parameter 3, and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetCardType_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetCardType_Promise_0300';
    try {
      const cardType = await sim.getCardType(env.SLOTID3);
      expect(cardType === sim.UNKNOWN_CARD).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} GetCardType error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_GetCardType_Promise_0400
   * @tc.name   Verify that the slotId of the GetCardType promise interface is abnormal
   *            and enter parameter 2, and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetCardType_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetCardType_Promise_0400';
    try {
      const cardType = await sim.getCardType(env.SLOTID2);
      expect(cardType === sim.UNKNOWN_CARD).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} GetCardType error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });
});