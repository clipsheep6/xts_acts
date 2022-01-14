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
import { describe, it, expect, beforeAll, Core } from 'deccjsunit/index';
describe('SimFixedDialManagerReliabilityTest', function () {

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = 300 * 1000;

  const triggerPuk2 = async function () {
    await sim.unlockPin2(env.SIM_SLOTID0, env.INCORRECT_PIN2);
    await sim.unlockPin2(env.SIM_SLOTID0, env.INCORRECT_PIN2);
    await sim.unlockPin2(env.SIM_SLOTID0, env.INCORRECT_PIN2);
  };

  let pin2Error = false;
  let puk2Error = false;

  const passwordError = function () {
    return pin2Error || puk2Error;
  };

  beforeAll(async function () {
    const PASSWORD_ERROR = -1;
    try {
      const unlockPin2Resp = await sim.unlockPin2(env.SIM_SLOTID0, env.CORRECT_PIN2);
      pin2Error = unlockPin2Resp.result === PASSWORD_ERROR;
      if (!pin2Error) {
        await triggerPuk2();
        const unlockPuk2Resp = await sim.unlockPuk2(env.SIM_SLOTID0, env.CORRECT_PIN2, env.CORRECT_PUK2);
        puk2Error = unlockPuk2Resp.result === PASSWORD_ERROR;
      }
    } catch (error) {
      console.log(`check password has a error: ${error.message}`);
    }
  });

  /**
    * @tc.number  Telephony_Sim_unlockPin2_Async_0400
    * @tc.name    Test the reliability of the unlockPuk2 (AsyncCallback) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_unlockPin2_Async_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockPin2_Async_0400';
    if (passwordError()) {
      console.log(`${CASE_NAME} pin2 or puk2 is incorrect.`);
      done();
      return;
    }
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.log(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.unlockPin2(env.SLOTID0, env.INCORRECT_PIN2_LEN3, (err, data) => {
        if (err || data.result !== env.UNLOCKPIN2_STATE_CODE.EXCEPTION) {
          console.log(`${CASE_NAME} error: ${err && err.message}, data: ${JSON.stringify(data)}`);
          expect().assertFail();
          done();
          return;
        }
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_unlockPin2_Promise_0400
    * @tc.name    Test the reliability of the unlockPin2 (Promise) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_unlockPin2_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockPin2_Promise_0400';
    if (passwordError()) {
      console.log(`${CASE_NAME} pin2 or puk2 is incorrect.`);
      done();
      return;
    }
    try {
      for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
        console.log(`${CASE_NAME} run ${i + 1} times`);
        const data = await sim.unlockPin2(env.SLOTID0, env.INCORRECT_PIN2_LEN3);
        if (data.result !== env.UNLOCKPIN2_STATE_CODE.EXCEPTION) {
          console.log(`${CASE_NAME} data: ${JSON.stringify(data)}`);
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
    if (passwordError()) {
      console.log(`${CASE_NAME} pin2 or puk2 is incorrect.`);
      done();
      return;
    }
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.log(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.unlockPuk2(env.SLOTID0, env.INCORRECT_PIN2, env.INCORRECT_PUK2_LEN3, (err, data) => {
        if (err) {
          console.log(`${CASE_NAME} error: ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        if (data.result !== env.UNLOCKPUK2_STATE_CODE.EXCEPTION) {
          console.log(`${CASE_NAME} data: ${JSON.stringify(data)}`);
          expect().assertFail();
          done();
          return;
        }
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_unlockPuk2_Promise_0600
    * @tc.name    Test the reliability of the unlockPuk2 (Promise) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_unlockPuk2_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockPuk2_Promise_0600';
    if (passwordError()) {
      console.log(`${CASE_NAME} pin2 or puk2 is incorrect.`);
      done();
      return;
    }
    try {
      for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
        console.log(`${CASE_NAME} run ${i + 1} times`);
        const data = await sim.unlockPuk2(env.SLOTID0, env.INCORRECT_PIN2, env.INCORRECT_PUK2_LEN3);
        if (data.result !== env.UNLOCKPUK2_STATE_CODE.EXCEPTION) {
          console.log(`${CASE_NAME} data: ${JSON.stringify(data)}`);
          expect(data.result === env.UNLOCKPUK2_STATE_CODE.EXCEPTION).assertTrue();
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
    if (passwordError()) {
      console.log(`${CASE_NAME} pin2 or puk2 is incorrect.`);
      done();
      return;
    }
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.log(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.alterPin2(env.SLOTID_MINUS1, env.INCORRECT_PIN2_LEN3, env.INCORRECT_PIN2, (err, data) => {
        if (err) {
          if (n === 1) {
            console.log(`${CASE_NAME} expect error: ${err.message}`);
          }
          recursive(n - 1);
        } else {
          console.log(`${CASE_NAME} data: ${JSON.stringify(data)}`);
          expect().assertFail();
          done();
        }
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_alterPin2_Promise_0300
    * @tc.name    Test the reliability of the alterPin2 (Promise) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_alterPin2_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_alterPin2_Promise_0300';
    if (passwordError()) {
      console.log(`${CASE_NAME} pin2 or puk2 is incorrect.`);
      done();
      return;
    }
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      console.log(`${CASE_NAME} run ${i + 1} times`);
      try {
        const data = await sim.alterPin2(env.SLOTID_MINUS1, env.INCORRECT_PIN2_LEN3, env.INCORRECT_PIN2);
        console.log(`${CASE_NAME} data: ${JSON.stringify(data)}`);
        expect().assertFail();
        break;
      } catch (error) {
        if (i === env.GENERAL_RUN_TIMES - 1) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} test finish`);
        }
      }
    }
    done();
  });
});