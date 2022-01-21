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

describe('SimGetLockStateFunctionTest', function () {

  /**
   * @tc.number Telephony_Sim_GetLockState_Async_0100
   * @tc.name   Test the GetLockState async callback interface, enter parameter -1
   *            for slotId exception, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetLockState_Async_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetLockState_Async_0100';
    sim.getLockState(env.SLOTID_MINUS1, sim.PIN_LOCK, error => {
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
   * @tc.number Telephony_Sim_GetLockState_Async_0200
   * @tc.name   Test the GetLockState async callback interface, enter parameter 3
   *            for slotId exception, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetLockState_Async_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetLockState_Async_0200';
    sim.getLockState(env.SLOTID3, sim.PIN_LOCK, error => {
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
   * @tc.number Telephony_Sim_GetLockState_Async_0300
   * @tc.name   Test the GetLockState async callback interface, enter parameter 2
   *            for slotId exception, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetLockState_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetLockState_Async_0300';
    sim.getLockState(env.SLOTID2, sim.PIN_LOCK, error => {
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
   * @tc.number Telephony_Sim_GetLockState_Promise_0100
   * @tc.name   Test the GetLockState promise interface, enter parameter -1
   *            for slotId exception, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetLockState_Promise_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetLockState_Promise_0100';
    try {
      await sim.getLockState(env.SLOTID_MINUS1, sim.PIN_LOCK);
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} getLockState expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_GetLockState_Promise_0200
   * @tc.name   Test the GetLockState promise interface, enter parameter 3
   *            for slotId exception, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetLockState_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetLockState_Promise_0200';
    try {
      await sim.getLockState(env.SLOTID3, sim.PIN_LOCK);
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} getLockState expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_GetLockState_Promise_0300
   * @tc.name   Test the GetLockState promise interface, enter parameter 2
   *            for slotId exception, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_GetLockState_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetLockState_Promise_0300';
    try {
      await sim.getLockState(env.SLOTID2, sim.PIN_LOCK);
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} getLockState expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });
});