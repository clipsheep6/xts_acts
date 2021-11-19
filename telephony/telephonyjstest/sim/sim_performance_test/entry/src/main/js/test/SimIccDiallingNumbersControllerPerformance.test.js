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

describe('SimPerformanceTest', function () {
  const diallingNumbersInfo = { recordNumber: 1, alphaTag: 'test', number: '12345678' };
  const withIncorrectPin2 = Object.assign({}, diallingNumbersInfo, { pin2: env.INCORRECT_PIN2_LEN9 });

  const deleteTestDiallingNumbers = async function (slotId, type) {
    const alphaTags = ['', 'test', 'test_Update', '测试测试测试', '123#@%_ABCDE', '测试1234'];
    console.debug(`deleteTestDiallingNumbers arguments: ${JSON.stringify(arguments)}`);
    const numbers = await sim.queryIccDiallingNumbers(slotId, type);
    console.debug(
      `deleteTestDiallingNumbers query number length: ${numbers.length}, data: ${JSON.stringify(numbers)}`
    );
    for (let i = 0; i < numbers.length; i++) {
      if (numbers[i].recordNumber === 1 || alphaTags.indexOf(numbers[i].alphaTag) > -1) {
        if (type === env.NUM_TYPE2) {
          numbers[i]['pin2'] = env.CORRECT_PIN2;
        }
        console.debug(`deleteTestDiallingNumbers delete number: ${JSON.stringify(numbers[i])}`);
        await sim.delIccDiallingNumbers(slotId, type, numbers[i]);
      }
    }
  };

  const addTestDiallingNumbers = async function (slotId, type, diallingNumberInfo) {
    console.debug(`addTestDiallingNumbers data: ${JSON.stringify(arguments)}`);
    await sim.addIccDiallingNumbers(slotId, type, diallingNumberInfo);
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
      sim.queryIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1, (error, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        if (error) {
          console.log(`${CASE_NAME} test query error:${error.message}`);
          expect().assertFail();
          done();
        } else {
          console.log(`${CASE_NAME} query data: ${JSON.stringify(data)}`);
          recursive(n - 1);
        }
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
        await sim.queryIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1);
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
      } catch (error) {
        console.log(`${CASE_NAME} test query error:${error.message}`);
        expect().assertFail();
        done();
        return;
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
        console.log(`${CASE_NAME} delete`);
        await deleteTestDiallingNumbers(env.SLOTID0, env.NUM_TYPE1);
        await deleteTestDiallingNumbers(env.SLOTID0, env.NUM_TYPE2);
      } catch (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      startTime = new Date().getTime();
      sim.addIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1, withIncorrectPin2, function (error) {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        if (error) {
          console.log(`${CASE_NAME} add error: ${error.message}`);
          expect().assertFail();
          done();
        } else {
          recursive(n - 1);
        }
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
        console.log(`${CASE_NAME} delete`);
        await deleteTestDiallingNumbers(env.SLOTID0, env.NUM_TYPE1);
        await deleteTestDiallingNumbers(env.SLOTID0, env.NUM_TYPE2);
      } catch (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        console.log(`${CASE_NAME} add`);
        const startTime = new Date().getTime();
        await sim.addIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1, withIncorrectPin2);
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
      } catch (error) {
        console.log(`${CASE_NAME} add error:${error.message}`);
        expect().assertFail();
        done();
        return;
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
      let deleteRecordNumber;
      let recordNumbers = [];
      let data;
      try {
        data = await sim.queryIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1);
        console.log(
          `${CASE_NAME} first query result: ${JSON.stringify(data)}`
        );
        recordNumbers = data.map(record => record.recordNumber);
        console.log(
          `${CASE_NAME} recordNumbers: ${JSON.stringify(recordNumbers)}`
        );
      } catch (error) {
        console.log(`${CASE_NAME} first
           query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      if (data && data.length !== 0) {
        for (let i = 0; i < data.length; i++) {
          if (data[i].alphaTag === 'test') {
            deleteRecordNumber = data[i].recordNumber;
            break;
          }
        }
      }
      if (!deleteRecordNumber) {
        try {
          await sim.addIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1, withIncorrectPin2);
          console.log(`${CASE_NAME} add`);
        } catch (error) {
          console.log(`${CASE_NAME} add fail, error:${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        try {
          const _data = await sim.queryIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1);
          console.log(
            `${CASE_NAME} second query result: ${JSON.stringify(_data)}`
          );
          let tmp = _data.filter(record => recordNumbers.indexOf(record.recordNumber) < 0)
            .map(record => record.recordNumber);
          deleteRecordNumber = tmp[0];
          console.log(`${CASE_NAME} recordNumber: ${deleteRecordNumber}`);
        } catch (error) {
          console.log(
            `${CASE_NAME} second query fail, error:${error.message}`
          );
          expect().assertFail();
          done();
          return;
        }
      }
      const diallingNumbersInfo = Object.assign({}, withIncorrectPin2, { recordNumber: deleteRecordNumber });
      startTime = new Date().getTime();
      sim.delIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1, diallingNumbersInfo, function (error) {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        if (error) {
          console.log(`${CASE_NAME} delete fail, error:${error.message}`);
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
    * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0600
    * @tc.name     Test delIccDiallingNumbers promise interface performance.
    *              The expected average latency is less than 500us
    * @tc.desc     Performance test
    */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_0600';
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      let deleteRecordNumber;
      let recordNumbers = [];
      let data;
      try {
        data = await sim.queryIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1);
        console.log(
          `${CASE_NAME} first query result: ${JSON.stringify(data)}`
        );
        recordNumbers = data.map(record => record.recordNumber);
        console.log(
          `${CASE_NAME} recordNumbers: ${JSON.stringify(recordNumbers)}`
        );
      } catch (error) {
        console.log(
          `${CASE_NAME} first query fail, error: ${error.message}`
        );
        expect().assertFail();
        done();
        return;
      }
      if (data && data.length !== 0) {
        for (let i = 0; i < data.length; i++) {
          if (data[i].alphaTag === 'test') {
            deleteRecordNumber = data[i].recordNumber;
            break;
          }
        }
      }
      if (!deleteRecordNumber) {
        try {
          await sim.addIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1, withIncorrectPin2);
          console.log(`${CASE_NAME} add`);
        } catch (error) {
          console.log(`${CASE_NAME} add fail, error:${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        try {
          const _data = await sim.queryIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1);
          console.log(
            `${CASE_NAME} second query result: ${JSON.stringify(_data)}`
          );
          const tmp = _data.filter(record => recordNumbers.indexOf(record.recordNumber) < 0)
            .map(record => record.recordNumber);
          deleteRecordNumber = tmp[0];
          console.log(`${CASE_NAME} recordNumber: ${deleteRecordNumber}`);
        } catch (error) {
          console.log(
            `${CASE_NAME} second query fail, error:${error.message}`
          );
          expect().assertFail();
          done();
          return;
        }
      }
      try {
        const diallingNumbersInfo = Object.assign({}, withIncorrectPin2, { recordNumber: deleteRecordNumber });
        const startTime = new Date().getTime();
        await sim.delIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1, diallingNumbersInfo);
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
        console.log(`${CASE_NAME} delete`);
      } catch (error) {
        console.log(`${CASE_NAME} delete fail. error: ${error.message}`);
        expect().assertFail();
        done();
        return;
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
        console.log(`${CASE_NAME} delete`);
        await deleteTestDiallingNumbers(env.SLOTID0, env.NUM_TYPE1);
        await deleteTestDiallingNumbers(env.SLOTID0, env.NUM_TYPE2);
        console.log(`${CASE_NAME} add`);
        await addTestDiallingNumbers(env.SLOTID0, env.NUM_TYPE1, withIncorrectPin2);
      } catch (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      const startTime = new Date().getTime();
      sim.updateIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1, diallingNumbersInfoUpdate, async function (error) {
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
        if (error) {
          console.log(
            `${CASE_NAME} update fail, error: ${error.message}`
          );
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
  * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_0900
  * @tc.name   Test updateIccDiallingNumbers promise interface performance.
    *          The expected average latency is less than 500us
  * @tc.desc   Performance test
  */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_0900';
    let diallingNumbersInfoUpdate = Object.assign(
      {},
      withIncorrectPin2,
      { alphaTag: 'test_Update', number: '87654321' }
    );
    let totalTime = 0;
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      try {
        console.log(`${CASE_NAME} delete`);
        await deleteTestDiallingNumbers(env.SLOTID0, env.NUM_TYPE1);
        await deleteTestDiallingNumbers(env.SLOTID0, env.NUM_TYPE2);
        console.log(`${CASE_NAME} add`);
        await addTestDiallingNumbers(env.SLOTID0, env.NUM_TYPE1, withIncorrectPin2);
      } catch (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      try {
        console.log(`${CASE_NAME} update`);
        const startTime = new Date().getTime();
        await sim.updateIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE1, diallingNumbersInfoUpdate);
        const endTime = new Date().getTime();
        totalTime += endTime - startTime;
      } catch (error) {
        console.log(`${CASE_NAME} update fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    expect(totalTime).assertLess(env.EXPECT_TOTAL_TIME);
    console.log(`${CASE_NAME} exec done useTime:${totalTime}ms`);
    console.log(`${CASE_NAME} finish`);
    done();
  });
});