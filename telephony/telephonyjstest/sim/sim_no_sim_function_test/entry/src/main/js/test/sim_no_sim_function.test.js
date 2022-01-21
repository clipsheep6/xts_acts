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
import { describe, it, expect, beforeAll } from 'deccjsunit/index';

describe('SimNoSimFunctionTest', function () {

  let hasSimCard = false;

  beforeAll(async function () {
    try {
      hasSimCard = await sim.hasSimCard(env.DEFAULT_SLOTID);
    } catch (error) {
      console.log(`check hasSimCard has a error: ${error.message}`);
    }
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_2000
   * @tc.name   When there is no card, test the SetLockState async callback interface and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_2000', 0, function (done) {
    if (hasSimCard) {
      console.log('Test the function without SIM card, but now there is a SIMka in the sim slot ');
      done();
      return;
    }
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_2000';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN2 };
    sim.setLockState(env.DEFAULT_SLOTID, lockInfo, (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockStatusResponse.result === env.LOCK_RESULT.EXCEPTION).assertTrue();
      console.log(`${CASE_NAME} test finish`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_2000
   * @tc.name   When there is no card, test the SetLockState promise interface and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_2000', 0, async function (done) {
    if (hasSimCard) {
      console.log('Test the function without SIM card, but now there is a SIMka in the sim slot ');
      done();
      return;
    }
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_2000';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN2 };

    try {
      const lockStatusResponse = await sim.setLockState(env.DEFAULT_SLOTID, lockInfo);
      expect(lockStatusResponse.result === env.LOCK_RESULT.EXCEPTION).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
    }

    done();
  });

  /**
   * @tc.number Telephony_Sim_GetLockState_Async_0600
   * @tc.name   When there is no card, test the GetLockState async callback interface and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetLockState_Async_0600', 0, function (done) {
    if (hasSimCard) {
      console.log('Test the function without SIM card, but now there is a SIMka in the sim slot ');
      done();
      return;
    }
    const CASE_NAME = 'Telephony_Sim_GetLockState_Async_0600';
    sim.getLockState(env.DEFAULT_SLOTID, sim.PIN_LOCK, error => {
      if (error) {
        console.log(`${CASE_NAME} getLockState expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_GetLockState_Promise_0600
   * @tc.name   When there is no card, test the GetLockState promise interface and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetLockState_Promise_0600', 0, async function (done) {
    if (hasSimCard) {
      console.log('Test the function without SIM card, but now there is a SIMka in the sim slot ');
      done();
      return;
    }
    const CASE_NAME = 'Telephony_Sim_GetLockState_Promise_0600';
    try {
      await sim.getLockState(env.DEFAULT_SLOTID, sim.PIN_LOCK);
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} getLockState expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_GetCardType_Async_0700
   * @tc.name   When there is no card, test the GetCardType async callback interface and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetCardType_Async_0700', 0, async function (done) {
    if (hasSimCard) {
      console.log('Test the function without SIM card, but now there is a SIMka in the sim slot ');
      done();
      return;
    }
    const CASE_NAME = 'Telephony_Sim_GetCardType_Async_0700';
    sim.getCardType(env.DEFAULT_SLOTID, (error, cardType) => {
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
   * @tc.number Telephony_Sim_GetCardType_Promise_0700
   * @tc.name   When there is no card, test the GetCardType promise interface and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetCardType_Promise_0700', 0, async function (done) {
    if (hasSimCard) {
      console.log('Test the function without SIM card, but now there is a SIMka in the sim slot ');
      done();
      return;
    }
    const CASE_NAME = 'Telephony_Sim_GetCardType_Promise_0700';
    try {
      const cardType = await sim.getCardType(env.DEFAULT_SLOTID);
      expect(cardType === sim.UNKNOWN_CARD).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} GetCardType error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });
});