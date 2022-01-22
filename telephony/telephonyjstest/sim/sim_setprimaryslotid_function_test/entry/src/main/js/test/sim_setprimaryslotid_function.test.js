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

describe('SimSetPrimarySlotIdFunctionTest', function () {

  /**
   * @tc.number Telephony_Sim_setPrimarySlotId_Async_0100
   * @tc.name   Test the setPrimarySlotId async callback interface exception
   *            and enter parameter -1 to check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setPrimarySlotId_Async_0100', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_setPrimarySlotId_Async_0100';
    radio.setPrimarySlotId(env.SLOTID_MINUS1, (error) => {
      if (!error) {
        console.log(`${CASE_NAME} test fail`);
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
        expect(slotId !== env.SLOTID_MINUS1).assertTrue();
        console.log(`${CASE_NAME} test finish.`);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_setPrimarySlotId_Async_0200
   * @tc.name   Test the setPrimarySlotId async callback interface exception
   *            and enter parameter 1 to check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setPrimarySlotId_Async_0200', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_setPrimarySlotId_Async_0200';
    radio.setPrimarySlotId(env.SLOTID3, (error) => {
      if (!error) {
        console.log(`${CASE_NAME} test fail`);
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
        expect(slotId !== env.SLOTID3).assertTrue();
        console.log(`${CASE_NAME} test finish.`);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_setPrimarySlotId_Async_0300
   * @tc.name   Test the setPrimarySlotId async callback interface exception
   *            and enter parameter 2 to check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setPrimarySlotId_Async_0300', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_setPrimarySlotId_Async_0300';
    radio.setPrimarySlotId(env.SLOTID2, (error) => {
      if (!error) {
        console.log(`${CASE_NAME} test fail`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      radio.getPrimarySlotId((error, slotId) => {
        if (error) {
          console.log(`${CASE_NAME} getPrimarySlotId error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(slotId !== env.SLOTID2).assertTrue();
        console.log(`${CASE_NAME} test finish.`);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_setPrimarySlotId_Promise_0100
   * @tc.name   Test the setPrimarySlotId promise interface exception
   *            and enter parameter -1 to check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setPrimarySlotId_Promise_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setPrimarySlotId_Promise_0100';
    try {
      await radio.setPrimarySlotId(env.SLOTID_MINUS1);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      const slotId = await radio.getPrimarySlotId();
      expect(slotId !== env.SLOTID_MINUS1).assertTrue();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_setPrimarySlotId_Promise_0200
   * @tc.name   Test the setPrimarySlotId promise interface exception
   *            and enter parameter 1 to check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setPrimarySlotId_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setPrimarySlotId_Promise_0200';
    try {
      await radio.setPrimarySlotId(env.SLOTID3);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      const slotId = await radio.getPrimarySlotId();
      expect(slotId !== env.SLOTID3).assertTrue();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_setPrimarySlotId_Promise_0300
   * @tc.name   Test the setPrimarySlotId promise interface exception
   *            and enter parameter 2 to check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setPrimarySlotId_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setPrimarySlotId_Promise_0300';
    try {
      await radio.setPrimarySlotId(env.SLOTID2);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      const slotId = await radio.getPrimarySlotId();
      expect(slotId !== env.SLOTID2).assertTrue();
    }
    done();
  });
});