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

describe('SimHasOperatorPrivilegesFunctionTest', function () {

  /**
   * @tc.number Telephony_Sim_hasOperatorPrivileges_Async_0100
   * @tc.name   Test that slotId of the hasOperatorPrivileges interface is normally entered as 0,
   *            and check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_hasOperatorPrivileges_Async_0100', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_hasOperatorPrivileges_Async_0100';
    sim.hasOperatorPrivileges(env.DEFAULT_SLOTID, (error, result) => {
      if (error) {
        console.log(`${CASE_NAME} hasOperatorPrivileges error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(result).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_hasOperatorPrivileges_Async_0200
   * @tc.name   Test hasOperatorPrivileges interface slotId exception enter parameter -1,
   *            check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_hasOperatorPrivileges_Async_0200', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_hasOperatorPrivileges_Async_0200';
    sim.hasOperatorPrivileges(env.SLOTID_MINUS1, (error, result) => {
      if (error) {
        console.log(`${CASE_NAME} hasOperatorPrivileges error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(result).assertFalse();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_hasOperatorPrivileges_Async_0300
   * @tc.name   Test hasOperatorPrivileges interface slotId exception enter parameter 1,
   *            check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_hasOperatorPrivileges_Async_0300', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_hasOperatorPrivileges_Async_0300';
    sim.hasOperatorPrivileges(env.SLOTID3, (error, result) => {
      if (error) {
        console.log(`${CASE_NAME} hasOperatorPrivileges error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(result).assertFalse();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_hasOperatorPrivileges_Async_0400
   * @tc.name   Test hasOperatorPrivileges interface slotId exception enter parameter 2,
   *            check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_hasOperatorPrivileges_Async_0400', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_hasOperatorPrivileges_Async_0400';
    sim.hasOperatorPrivileges(env.SLOTID2, (error, result) => {
      if (error) {
        console.log(`${CASE_NAME} hasOperatorPrivileges error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(result).assertFalse();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_hasOperatorPrivileges_Promise_0100
   * @tc.name   Test the slotId of the hasOperatorPrivileges interface and enter the parameter 0 normally,
   *            check the returned result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_hasOperatorPrivileges_Promise_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_hasOperatorPrivileges_Promise_0100';
    try {
      const result = await sim.hasOperatorPrivileges(env.DEFAULT_SLOTID);
      expect(result).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} hasOperatorPrivileges error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_hasOperatorPrivileges_Promise_0200
   * @tc.name   Test hasOperatorPrivileges interface slotId exception enter parameter -1,
   *            check the returned result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_hasOperatorPrivileges_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_hasOperatorPrivileges_Promise_0200';
    try {
      const result = await sim.hasOperatorPrivileges(env.SLOTID_MINUS1);
      expect(result).assertFalse();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} hasOperatorPrivileges error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_hasOperatorPrivileges_Promise_0300
   * @tc.name   Test hasOperatorPrivileges interface slotId exception enter parameter 1,
   *            check the returned result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_hasOperatorPrivileges_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_hasOperatorPrivileges_Promise_0300';
    try {
      const result = await sim.hasOperatorPrivileges(env.SLOTID3);
      expect(result).assertFalse();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} hasOperatorPrivileges error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_hasOperatorPrivileges_Promise_0400
   * @tc.name   Test hasOperatorPrivileges interface slotId exception enter parameter 2,
   *            check the returned result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_hasOperatorPrivileges_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_hasOperatorPrivileges_Promise_0400';
    try {
      const result = await sim.hasOperatorPrivileges(env.SLOTID2);
      expect(result).assertFalse();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} hasOperatorPrivileges error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });
});