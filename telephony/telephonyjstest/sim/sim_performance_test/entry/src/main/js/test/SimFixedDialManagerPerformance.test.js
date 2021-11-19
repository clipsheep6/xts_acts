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
   * @tc.number  Telephony_Sim_unlockPin2_Async_0500
   * @tc.name    Test the performance of unlockPin2 (AsyncCallback) interface
   * @tc.desc    Performance test
   */
  it('Telephony_Sim_unlockPin2_Async_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockPin2_Async_0500';
    let totalTime = 0;
    const recursive = function (n) {
      if (n === 0) {
        expect(totalTime).assertLess(env.TIMES_VALUE.timeSpan);
        console.log(`${CASE_NAME} test finish, use time: ${totalTime}ms`);
        done();
        return;
      }
      const startTime = new Date().getTime();
      sim.unlockPin2(env.SLOTID0, env.INCORRECT_PIN2_LEN3, (err, data) => {
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
        if (err) {
          console.log(`${CASE_NAME} unlockPin2 error: ${err.message}`);
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
   * @tc.number  Telephony_Sim_unlockPin2_Promise_0500
   * @tc.name    Test the performance of unlockPin2 (Promise) interface
   * @tc.desc    Performance test
   */
  it('Telephony_Sim_unlockPin2_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockPin2_Promise_0500';
    const startTime = new Date().getTime();
    for (let i = 0; i < env.TIMES_VALUE.testRunTime; i++) {
      try {
        await sim.unlockPin2(env.SLOTID0, env.INCORRECT_PIN2_LEN3);
      } catch (error) {
        console.log(`${CASE_NAME} unlockPin2 error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    const endTime = new Date().getTime();
    expect(endTime - startTime).assertLess(env.TIMES_VALUE.timeSpan);
    console.log(`${CASE_NAME} test finish, use time: ${endTime - startTime}ms`);
    done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Async_0500
   * @tc.name    Test the performance of unlockPuk2 (AsyncCallback) interface
   * @tc.desc    Performance test
   */
  it('Telephony_Sim_unlockPuk2_Async_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockPuk2_Async_0500';
    let totalTime = 0;
    const recursive = function (n) {
      if (n === 0) {
        expect(totalTime).assertLess(env.TIMES_VALUE.timeSpan);
        console.log(`${CASE_NAME} test finish, use time: ${totalTime}ms`);
        done();
        return;
      }
      const startTime = new Date().getTime();
      sim.unlockPuk2(env.SLOTID0, env.INCORRECT_PIN2, env.INCORRECT_PUK2_LEN3, (err, data) => {
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
        if (err) {
          console.log(`${CASE_NAME} unlockPuk2 error: ${err.message}`);
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
   * @tc.number  Telephony_Sim_unlockPuk2_Promise_0500
   * @tc.name    Test the performance of unlockPuk2 (Promise) interface
   * @tc.desc    Performance test
   */
  it('Telephony_Sim_unlockPuk2_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockPuk2_Promise_0500';
    const startTime = new Date().getTime();
    for (let i = 0; i < env.TIMES_VALUE.testRunTime; i++) {
      try {
        await sim.unlockPuk2(env.SLOTID0, env.INCORRECT_PIN2, env.INCORRECT_PUK2_LEN3);
      } catch (error) {
        console.log(`${CASE_NAME} unlockPuk2 error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    const endTime = new Date().getTime();
    expect(endTime - startTime).assertLess(env.TIMES_VALUE.timeSpan);
    console.log(`${CASE_NAME} test finish, use time: ${endTime - startTime}ms`);
    done();
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Async_0200
   * @tc.name    Test the performance of alterPin2 (AsyncCallback) interface
   * @tc.desc    Performance test
   */
  it('Telephony_Sim_alterPin2_Async_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_alterPin2_Async_0200';
    let totalTime = 0;
    const recursive = function (n) {
      if (n === 0) {
        expect(totalTime).assertLess(env.TIMES_VALUE.timeSpan);
        console.log(`${CASE_NAME} test finish, use time: ${totalTime}ms`);
        done();
        return;
      }
      const startTime = new Date().getTime();
      sim.alterPin2(env.SLOTID_MINUS1, env.INCORRECT_PIN2_LEN3, env.INCORRECT_PIN2, (err, data) => {
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
        if (err) {
          console.log(`${CASE_NAME} alterPin2 error: ${err.message}`);
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
   * @tc.number  Telephony_Sim_alterPin2_Promise_0200
   * @tc.name    Test the performance of alterPin2 (Promise) interface
   * @tc.desc    Performance test
   */
  it('Telephony_Sim_alterPin2_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_alterPin2_Promise_0200';
    const startTime = new Date().getTime();
    for (let i = 0; i < env.TIMES_VALUE.testRunTime; i++) {
      try {
        await sim.alterPin2(env.SLOTID_MINUS1, env.INCORRECT_PIN2_LEN3, env.INCORRECT_PIN2);
      } catch (error) {
        console.log(`${CASE_NAME} alterPin2 error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    const endTime = new Date().getTime();
    expect(endTime - startTime).assertLess(env.TIMES_VALUE.timeSpan);
    console.log(`${CASE_NAME} test finish, use time: ${endTime - startTime}ms`);
    done();
  });
});