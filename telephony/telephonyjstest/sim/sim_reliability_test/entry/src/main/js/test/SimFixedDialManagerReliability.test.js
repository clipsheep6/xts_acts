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
describe('SimFixedDialManagerFunction', function () {

  /**
    * @tc.number  Telephony_Sim_unlockPin2_Async_0400
    * @tc.name    Test the reliability of the unlockPuk2 (AsyncCallback) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_unlockPin2_Async_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockPin2_Async_0400';
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      sim.unlockPin2(env.SLOTID0, env.INCORRECT_PIN2_LEN3, (err, data) => {
        if (err) {
          console.log(`${CASE_NAME} error: ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`${CASE_NAME} data: ${JSON.stringify(data)}`);
        if (data.result !== env.UNLOCKPIN2_STATE_CODE.EXCEPTION) {
          expect().assertFail();
          done();
          return;
        }
        recursive(n - 1);
      });
    };
    recursive(env.TIMES_VALUE.testRunTime);
  });

  /**
    * @tc.number  Telephony_Sim_unlockPin2_Promise_0400
    * @tc.name    Test the reliability of the unlockPin2 (Promise) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_unlockPin2_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockPin2_Promise_0400';
    try {
      for (let i = 0; i < env.TIMES_VALUE.testRunTime; i++) {
        const data = await sim.unlockPin2(env.SLOTID0, env.INCORRECT_PIN2_LEN3);
        console.log(`${CASE_NAME} data: ${JSON.stringify(data)}`);
        if (data.result !== env.UNLOCKPIN2_STATE_CODE.EXCEPTION) {
          expect().assertFail();
          break;
        }
      }
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
    * @tc.number  Telephony_Sim_unlockPuk2_Async_0600
    * @tc.name    Test the reliability of the unlockPuk2 (AsyncCallback) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_unlockPuk2_Async_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockPuk2_Async_0600';
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      sim.unlockPuk2(env.SLOTID0, env.INCORRECT_PIN2, env.INCORRECT_PUK2_LEN3, (err, data) => {
        if (err) {
          console.log(`${CASE_NAME} error: ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`${CASE_NAME} data: ${JSON.stringify(data)}`);
        if (data.result !== env.UNLOCKPUK2_STATE_CODE.EXCEPTION) {
          expect().assertFail();
          done();
          return;
        }
        recursive(n - 1);
      });
    };
    recursive(env.TIMES_VALUE.testRunTime);
  });

  /**
    * @tc.number  Telephony_Sim_unlockPuk2_Promise_0600
    * @tc.name    Test the reliability of the unlockPuk2 (Promise) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_unlockPuk2_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockPuk2_Promise_0600';
    try {
      for (let i = 0; i < env.TIMES_VALUE.testRunTime; i++) {
        const data = await sim.unlockPuk2(env.SLOTID0, env.INCORRECT_PIN2, env.INCORRECT_PUK2_LEN3);
        console.log(`${CASE_NAME} data: ${JSON.stringify(data)}`);
        if (data.result !== env.UNLOCKPUK2_STATE_CODE.EXCEPTION) {
          expect().assertFail();
          break;
        }
      }
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
    * @tc.number  Telephony_Sim_alterPin2_Async_0300
    * @tc.name    Test the reliability of the alterPin2 (AsyncCallback) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_alterPin2_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_alterPin2_Async_0300';
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      sim.alterPin2(env.SLOTID_MINUS1, env.INCORRECT_PIN2_LEN3, env.INCORRECT_PIN2, (err, data) => {
        if (err) {
          console.log(`${CASE_NAME} expect error: ${err.message}`);
          recursive(n - 1);
        } else {
          console.log(`${CASE_NAME} data: ${JSON.stringify(data)}`);
          expect().assertFail();
          done();
          return;
        }
      });
    };
    recursive(env.TIMES_VALUE.testRunTime);
  });

  /**
    * @tc.number  Telephony_Sim_alterPin2_Promise_0300
    * @tc.name    Test the reliability of the alterPin2 (Promise) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_alterPin2_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_alterPin2_Promise_0300';
    for (let i = 0; i < env.TIMES_VALUE.testRunTime; i++) {
      try {
        const data = await sim.alterPin2(env.SLOTID_MINUS1, env.INCORRECT_PIN2_LEN3, env.INCORRECT_PIN2);
        console.log(`${CASE_NAME} data: ${JSON.stringify(data)}`);
        expect().assertFail();
        done();
        return;
      } catch (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
      }
    }
    done();
  });
});