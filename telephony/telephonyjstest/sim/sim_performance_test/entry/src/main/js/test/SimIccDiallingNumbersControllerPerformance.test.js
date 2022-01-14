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
import { describe, it, expect, Core } from 'deccjsunit/index';

describe('SimIccDiallingNumbersControllerPerformanceTest', function () {

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = 300 * 1000;

  const diallingNumbersInfo = { recordNumber: 1, alphaTag: 'test', number: '12345678' };
  const withIncorrectPin2 = Object.assign({}, diallingNumbersInfo, { pin2: env.INCORRECT_PIN2_LEN9 });

  const deleteTestDiallingNumbers = async function (slotId, type) {
    const alphaTags = ['', 'test', 'test_Update', 'test_update', '测试测试测试', '123#@%_ABCDE', '测试1234'];
    const numbers = await sim.queryIccDiallingNumbers(slotId, type);
    for (let i = 0; i < numbers.length; i++) {
      if (numbers[i].recordNumber === 1 || alphaTags.indexOf(numbers[i].alphaTag) > -1) {
        if (type === sim.FIXED_DIALING) {
          numbers[i]['pin2'] = env.CORRECT_PIN2;
        }
        await sim.delIccDiallingNumbers(slotId, type, numbers[i]);
      }
    }
  };

  const addTestDiallingNumbers = async function (slotId, type, diallingNumberInfo) {
    await sim.addIccDiallingNumbers(slotId, type, diallingNumberInfo);
  };

  const triggerPuk2 = async function () {
    try {
      await sim.unlockPin2(env.SLOTID0, env.INCORRECT_PIN2);
      await sim.unlockPin2(env.SLOTID0, env.INCORRECT_PIN2);
      await sim.unlockPin2(env.SLOTID0, env.INCORRECT_PIN2);
    } catch (error) {
      console.debug(`unlockPin2 error: ${JSON.stringify(error)}`);
    }
  };

  const unlockPuk2AndResetPin2 = async function () {
    await sim.unlockPuk2(env.SLOTID0, env.CORRECT_PIN2, env.CORRECT_PUK2).catch(error => {
      console.debug(`unlockPuk2AndResetPin2 error: ${error.message}`);
    });
  };

  const restorePin2Remain = async function () {
    await sim.unlockPin2(env.SLOTID0, env.CORRECT_PIN2).catch(error => {
      console.debug(`unlockPuk2AndResetPin2 error: ${error.message}`);
    });
  };

  const preActionForDelIccDiallingNumbers = async function (label, slotId, type, diallingNumbers, trigPuk2 = false) {
    try {
      let data;
      data = await sim.queryIccDiallingNumbers(slotId, type);
      const recordNumbers = data.map(record => record.recordNumber);
      await sim.addIccDiallingNumbers(slotId, type, diallingNumbers);
      data = await sim.queryIccDiallingNumbers(slotId, type);
      const deleteRecord = data.filter(record => recordNumbers.indexOf(record.recordNumber) < 0).shift();
      if (trigPuk2) {
        await triggerPuk2();
      }
      return deleteRecord;
    } catch (error) {
      console.log(`${label} test fail: ${error.message}`);
      if (trigPuk2) {
        await unlockPuk2AndResetPin2();
      } else if (type === sim.FIXED_DIALING) {
        await restorePin2Remain();
      }
      throw error;
    }
  };

  /**
    * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0500
    * @tc.name    Test queryIccDiallingNumbers async callback interface performance.
    *             The expected average latency is less than 500us
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Async_0500';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} exec done useTime:${totalTime}`);
        console.log(`${CASE_NAME} test finish.`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_0500
    * @tc.name    Test queryIccDiallingNumbers promise interface performance.
    *             The expected average latency is less than 500us
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_queryIccDiallingNumbers_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Promise_0500';
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      try {
        const startTime = new Date().getTime();
        await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
      } catch (error) {
        console.log(`${CASE_NAME} test query error:${error.message}`);
      }
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} exec done useTime: ${totalTime}ms`);
    console.log(`${CASE_NAME} finish`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0600
    * @tc.name    Test addIccDiallingNumbers async callback interface performance.
    *             The expected average latency is less than 500us
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_0600';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = async function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} exec done useTime:${totalTime}`);
        console.log(`${CASE_NAME} test finish.`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      try {
        await deleteTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      } catch (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, withIncorrectPin2, function (error) {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_0600
    * @tc.name     Test addIccDiallingNumbers promise interface performance.
    *              The expected average latency is less than 500us
    * @tc.desc     Performance test
    */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_0600';
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      try {
        await deleteTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      } catch (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const startTime = new Date().getTime();
        await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, withIncorrectPin2);
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
      } catch (error) {
        console.log(`${CASE_NAME} add error:${error.message}`);
      }
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} exec done useTime:${totalTime}`);
    console.log(`${CASE_NAME} finish`);
    done();
  });

  /**
    * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_0600
    * @tc.name     Test delIccDiallingNumbers async callback interface performance.
    *              The expected average latency is less than 500us
    * @tc.desc     Performance test
    */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_0600';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    const recursive = async function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} exec done useTime:${totalTime}`);
        console.log(`${CASE_NAME} test finish.`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      let deleteRecord;
      try {
        deleteRecord = await preActionForDelIccDiallingNumbers(
          CASE_NAME, env.SLOTID0, sim.GENERAL_CONTACT, withIncorrectPin2
        );
      } catch (error) {
        expect().assertFail();
        done();
        return;
      }
      const diallingNumbersInfo = Object.assign({}, withIncorrectPin2, { recordNumber: deleteRecord.recordNumber });
      startTime = new Date().getTime();
      sim.delIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo, function (error) {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0600
    * @tc.name     Test delIccDiallingNumbers promise interface performance.
    *              The expected average latency is less than 500us
    * @tc.desc     Performance test
    */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_0600';
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      let deleteRecord;
      try {
        deleteRecord = await preActionForDelIccDiallingNumbers(
          CASE_NAME, env.SLOTID0, sim.GENERAL_CONTACT, withIncorrectPin2
        );
      } catch (error) {
        expect().assertFail();
        done();
        return;
      }
      try {
        const diallingNumbersInfo = Object.assign({}, withIncorrectPin2, { recordNumber: deleteRecord.recordNumber });
        const startTime = new Date().getTime();
        await sim.delIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
      } catch (error) {
        console.log(`${CASE_NAME} delete fail. error: ${error.message}`);
      }
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} exec done useTime:${totalTime}ms`);
    console.log(`${CASE_NAME} finish`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Async_0900
    * @tc.name    Test updateIccDiallingNumbers async callback interface performance.
    *             The expected average latency is less than 500us
    * @tc.desc    Performance test
    */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_0900';
    let diallingNumbersInfoUpdate = Object.assign(
      {},
      withIncorrectPin2,
      { alphaTag: 'test_Update', number: '87654321' }
    );
    let totalTime = 0;
    const recursive = async function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} exec done useTime:${totalTime}ms`);
        console.log(`${CASE_NAME} finish`);
        expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
        done();
        return;
      }
      try {
        await deleteTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
        await addTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, withIncorrectPin2);
      } catch (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      const startTime = new Date().getTime();
      sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate, async function (error) {
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
  * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_0900
  * @tc.name   Test updateIccDiallingNumbers promise interface performance.
    *          The expected average latency is less than 500us
  * @tc.desc   Performance test
  */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_0900';
    let diallingNumbersInfoUpdate = Object.assign(
      {},
      withIncorrectPin2,
      { alphaTag: 'test_Update', number: '87654321' }
    );
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      try {
        await deleteTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
        await addTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, withIncorrectPin2);
      } catch (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      try {
        const startTime = new Date().getTime();
        await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
      } catch (error) {
        console.log(`${CASE_NAME} update fail, error: ${error.message}`);
      }
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} exec done useTime:${totalTime}ms`);
    console.log(`${CASE_NAME} finish`);
    done();
  });
});