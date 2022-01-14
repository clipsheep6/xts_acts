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

describe('SimIccDiallingNumbersReliabilityTest', function () {

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = 800 * 1000;

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
      throw error;
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
    * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0600
    * @tc.name    Test the stability of queryIccDiallingNumbers (AsyncCallback) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Async_0600';
    try {
      await deleteTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      await addTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, withIncorrectPin2);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    const recursive = function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      console.log(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, (error, data) => {
        if (error) {
          console.log(`${CASE_NAME} query error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        let isExist = data.some(item =>
          item.recordNumber === withIncorrectPin2.recordNumber
          && item.alphaTag === withIncorrectPin2.alphaTag
          && item.number === withIncorrectPin2.number
          && item.pin2 === ''
        );
        if (isExist) {
          recursive(n - 1);
        } else {
          console.log(`${CASE_NAME} query data: ${JSON.stringify(data)}`);
          console.log(`${CASE_NAME} test fail.`);
          expect().assertFail();
          done();
        }
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
    * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_0600
    * @tc.name    Test the stability of queryIccDiallingNumbers (Promise) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_queryIccDiallingNumbers_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Promise_0600';
    try {
      await deleteTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      await addTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, withIncorrectPin2);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      console.log(`${CASE_NAME} run ${i + 1} times`);
      try {
        const data = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
        let isExist = data.some(item =>
          item.recordNumber === withIncorrectPin2.recordNumber
          && item.alphaTag === withIncorrectPin2.alphaTag
          && item.number === withIncorrectPin2.number
          && item.pin2 === ''
        );
        if (!isExist) {
          console.log(`${CASE_NAME} test query result: ${JSON.stringify(data)}`);
          console.log(`${CASE_NAME} test fail.`);
          expect().assertFail();
          break;
        }
      } catch (error) {
        console.log(`${CASE_NAME} query error:${error.message}`);
        expect().assertFail();
        break;
      }
    }
    done();
  });

  /**
    * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0700
    * @tc.name    Test the stability of queryIccDiallingNumbers (AsyncCallback) interface
    * @tc.desc    Reliability test
    */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_0700';
    const recursive = async function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      console.log(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      try {
        await deleteTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      } catch (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, withIncorrectPin2, function (error) {
        if (error) {
          console.log(`${CASE_NAME} add error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, (error, data) => {
          if (error) {
            console.log(`${CASE_NAME} query error: ${error.message}`);
            expect().assertFail();
            done();
            return;
          }
          let isExist = data.some(item => item.recordNumber === withIncorrectPin2.recordNumber
            && item.alphaTag === withIncorrectPin2.alphaTag
            && item.number === withIncorrectPin2.number
            && item.pin2 === ''
          );
          if (isExist) {
            recursive(n - 1);
          } else {
            console.log(`${CASE_NAME} test fail.`);
            expect().assertFail();
            done();
          }
        });
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
  * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_0700
  * @tc.name     Test the stability of queryIccDiallingNumbers (Promise) interface
  * @tc.desc     Reliability test
 */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_0700';
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      console.log(`${CASE_NAME} run ${i + 1} times`);
      try {
        await deleteTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      } catch (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      try {
        await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, withIncorrectPin2);
        const data = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
        let isExist = data.some(item =>
          item.recordNumber === withIncorrectPin2.recordNumber
          && item.alphaTag === withIncorrectPin2.alphaTag
          && item.number === withIncorrectPin2.number
          && item.pin2 === ''
        );
        if (!isExist) {
          console.log(`${CASE_NAME} test fail.`);
          expect().assertFail();
          break;
        }
      } catch (error) {
        console.log(`${CASE_NAME} error:${error.message}`);
        expect().assertFail();
        break;
      }
    }
    done();
  });

  /**
  * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_0700
  * @tc.name     Test the stability of delIccDiallingNumbers (AsyncCallback) interface
  * @tc.desc     Reliability test
  */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_0700';
    const recursive = async function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      console.log(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
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
      sim.delIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo, function (error) {
        if (error) {
          console.log(`${CASE_NAME} delete fail, error:${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, function (error, data) {
          if (error) {
            console.log(`${CASE_NAME} third query error: ${error.message}`);
            expect().assertFail();
            done();
            return;
          }
          let recordNumbers2 = data.map(record => record.recordNumber);
          if (recordNumbers2.indexOf(deleteRecord.recordNumber) > 0) {
            console.log(`${CASE_NAME} delete fail, number still exist.`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
  * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0700
  * @tc.name     Test the stability of delIccDiallingNumbers (Promise) interface
  * @tc.desc     Reliability test
  */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_0700';
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      console.log(`${CASE_NAME} run ${i + 1} times`);
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
        await sim.delIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
      } catch (error) {
        console.log(`${CASE_NAME} delete fail. error: ${error.message}`);
        expect().assertFail();
        break;
      }

      try {
        const data = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
        let isExist = data.some(item => item.recordNumber === deleteRecord.recordNumber);
        if (isExist) {
          console.log(`${CASE_NAME} delete fail, query result: ${JSON.stringify(data)}`);
          expect(isExist).assertFalse();
          break;
        }
      } catch (error) {
        console.log(`${CASE_NAME} third query fail, error: ${error.message}`);
        expect().assertFail();
        break;
      }
    }
    done();
  });

  /**
  * @tc.number Telephony_Sim_updateIccDiallingNumbers_Async_1000
  * @tc.name   Test the stability of updateIccDiallingNumbers (AsyncCallback) interface
  * @tc.desc   Reliability test
  */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_1000';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, withIncorrectPin2, { alphaTag: 'test_Update', number: '87654321' }
    );
    const recursive = async function (n) {
      if (n <= 0) {
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      console.log(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      try {
        await deleteTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
        await addTestDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, withIncorrectPin2);
      } catch (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate, async function (error) {
        if (error) {
          console.log(`${CASE_NAME} update fail, error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        try {
          const data = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
          let isExist = data.some(item => (item.recordNumber === 1
            && item.alphaTag === diallingNumbersInfoUpdate.alphaTag
            && item.number === diallingNumbersInfoUpdate.number
            && item.pin2 === ''));
          if (isExist) {
            recursive(n - 1);
          } else {
            console.log(`${CASE_NAME} test fail.`);
            expect().assertFail();
            done();
          }
        } catch (error) {
          console.log(`${CASE_NAME} second query fail, error:${error.message}`);
          expect().assertFail();
          done();
        }
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
  * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_1000
  * @tc.name   Test the stability of updateIccDiallingNumbers (Promise) interface
  * @tc.desc   Reliability test
  */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_1000';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, withIncorrectPin2, { alphaTag: 'test_Update', number: '87654321' }
    );
    for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
      console.log(`${CASE_NAME} run ${i + 1} times`);
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
        await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      } catch (error) {
        console.log(`${CASE_NAME} update fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      try {
        const data = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
        let isExist = data.some(item => (item.recordNumber === 1
          && item.alphaTag === diallingNumbersInfoUpdate.alphaTag
          && item.number === diallingNumbersInfoUpdate.number
          && item.pin2 === ''));
        if (!isExist) {
          console.log(`${CASE_NAME} test fail. query result: ${JSON.stringify(data)}`);
          expect(isExist).assertTrue();
          done();
          return;
        }
      } catch (error) {
        console.log(`${CASE_NAME} second query fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    done();
  });
});