/**
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
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

describe('SimIccDiallingNumbersControllerFunction', function () {

  // pin2 and puk2 password status.
  let pin2IsError = false;
  let puk2IsError = false;

  // Can FDN function be turned on
  let fdnIsNotEnable = true;

  // contact info
  const CONTACT_INFO = { 'recordNumber': 1, 'alphaTag': 'test', 'number': '12345678' };
  const GENERAL_CONTACT_INFO = Object.assign({}, { 'pin2': env.INCORRECT_PIN2 }, CONTACT_INFO);
  const FIXED_DIALING_INFO = Object.assign({}, { 'pin2': env.CORRECT_PIN2 }, CONTACT_INFO);

  const deleteContact = async function (slotId, type, info) {
    const alphaTags = ['', 'test', 'test_Update', 'test_update', '测试测试测试', '123#@%_ABCDE', '测试1234'];
    const contacts = await sim.queryIccDiallingNumbers(slotId, type);
    info = info || CONTACT_INFO;
    for (let i = 0; i < contacts.length; i++) {
      if (contacts[i].recordNumber === info.recordNumber || alphaTags.indexOf(contacts[i].alphaTag) > -1) {
        console.debug(`deleteTestDiallingNumbers delete number: ${JSON.stringify(contacts[i])}`);
        if (type === sim.FIXED_DIALING) {
          contacts[i]['pin2'] = env.CORRECT_PIN2;
        }
        await sim.delIccDiallingNumbers(slotId, type, contacts[i]);
      }
    }
  };

  const triggerPuk2 = async function () {
    try {
      let incorrentPin2 = '1234';
      await sim.unlockPin2(env.SLOTID0, incorrentPin2);
      await sim.unlockPin2(env.SLOTID0, incorrentPin2);
      await sim.unlockPin2(env.SLOTID0, incorrentPin2);
    } catch (error) {
      console.debug(`triggerPuk2 error: ${error.message}`);
    }
  };

  const unlockPuk2 = async function () {
    try {
      if (!puk2IsError) {
        await sim.unlockPuk2(env.SLOTID0, env.CORRECT_PIN2, env.CORRECT_PUK2);
      }
    } catch (error) {
      console.debug(`unlockPuk2 error: ${error.message}`);
    }
  };

  const unlockPin2 = async function () {
    try {
      if (!pin2IsError) {
        await sim.unlockPin2(env.SLOTID0, env.CORRECT_PIN2);
      }
    } catch (error) {
      console.debug(`unlockPin2 error: ${error.message}`);
    }
  };

  const wrapperStepForQueryAndUpdate = async function (slotId, type, info, trigPuk2 = false) {
    try {
      await deleteContact(slotId, type, info);
      await sim.addIccDiallingNumbers(slotId, type, info);
      if (trigPuk2) {
        await triggerPuk2();
      }
    } catch (error) {
      if (trigPuk2) {
        await triggerPuk2();
      } else if (type === sim.FIXED_DIALING) {
        await unlockPin2();
      }
      throw error;
    }
  };

  const wrapperStepForAdd = async function (type, trigPuk2 = false) {
    try {
      await deleteContact(env.SLOTID0, type);
      if (trigPuk2) {
        await triggerPuk2();
      }
    } catch (error) {
      if (trigPuk2) {
        await triggerPuk2();
      } else if (type === sim.FIXED_DIALING) {
        await unlockPin2();
      }
      throw error;
    }
  };

  const wrapperStepForDel = async function (slotId, type, info, trigPuk2 = false) {
    try {
      let data;
      data = await sim.queryIccDiallingNumbers(slotId, type);
      const recordNumbers = data.map(record => record.recordNumber);
      await sim.addIccDiallingNumbers(slotId, type, info);
      data = await sim.queryIccDiallingNumbers(slotId, type);
      const deleteRecord = data.filter(record => recordNumbers.indexOf(record.recordNumber) < 0).shift();
      if (trigPuk2) {
        await triggerPuk2();
      }
      return deleteRecord;
    } catch (error) {
      if (trigPuk2) {
        await unlockPuk2();
      } else if (type === sim.FIXED_DIALING) {
        await unlockPin2();
      }
      throw error;
    }
  };

  const passwordIsError = function () {
    return pin2IsError || puk2IsError;
  };

  beforeAll(async function () {
    // set timeout
    const core = Core.getInstance();
    const config = core.getDefaultService('config');
    config.timeout = 15 * 1000;
    const LOCK_RESULT_SUCCESS = 0;
    try {
      const unlockPin2Resp = await sim.unlockPin2(env.SLOTID0, env.CORRECT_PIN2);
      pin2IsError = unlockPin2Resp.result !== LOCK_RESULT_SUCCESS;
      if (!pin2IsError) {
        await triggerPuk2();
        const unlockPuk2Resp = await sim.unlockPuk2(env.SLOTID0, env.CORRECT_PIN2, env.CORRECT_PUK2);
        puk2IsError = unlockPuk2Resp.result !== LOCK_RESULT_SUCCESS;
      }
      console.log(`PIN2 password is correct: ${!pin2IsError}, PUK2 password is correct: ${!puk2IsError}`);
      if (pin2IsError || puk2IsError) {
        throw new Error('Incorrect PIN2 or PUK2');
      }
      const lockInfo = { lockType: sim.FDN_LOCK || 2, password: env.CORRECT_PIN2, state: sim.LOCK_OFF || 0 };
      console.log(`lockInfo value: ${JSON.stringify(lockInfo)}`);
      let checkFdn = await sim.setLockState(env.SLOTID0, lockInfo);
      fdnIsNotEnable = checkFdn.result !== LOCK_RESULT_SUCCESS;
    } catch (error) {
      console.log(`check FDN has a error: ${error.message}`);
    }
  });

  afterAll(function () {
    // set timeout
    const core = Core.getInstance();
    const config = core.getDefaultService('config');
    config.timeout = 5 * 1000;
  });

  /**
   * @tc.number Telephony_Sim_queryIccDiallingNumbers_Async_0100
   * @tc.name   Test sim.queryIccDiallingNumbers(soltId: 0, type: 1, callback:
   *            AsyncCallback<Array<DiallingNumbersInfo>>) async callback interface,
   *            expect result is {recordNumber: 1,alphaTag: '测试测试测试',number: '01234567890123456789', pin2: ''}.
   * @tc.desc   Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Async_0100';
    const diallingNumbersInfo = Object.assign(
      {},
      GENERAL_CONTACT_INFO,
      { alphaTag: '测试测试测试', number: '01234567890123456789' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
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
      console.log(`${CASE_NAME} query result: ${JSON.stringify(data)}`);
      expect(data.some(item => item.recordNumber === diallingNumbersInfo.recordNumber
        && item.alphaTag === diallingNumbersInfo.alphaTag
        && item.number === diallingNumbersInfo.number
        && item.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} finish`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_queryIccDiallingNumbers_Async_0200
   * @tc.name   Test sim.queryIccDiallingNumbers(soltId: -1, type: 1, callback:
   *            AsyncCallback<Array<DiallingNumbersInfo>>), expect return a empty array.
   * @tc.desc   Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Async_0200';
    sim.queryIccDiallingNumbers(env.SLOTID_MINUS1, sim.GENERAL_CONTACT, (error, data) => {
      if (error) {
        console.log(`${CASE_NAME} query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(data.length === 0).assertTrue();
      console.log(`${CASE_NAME} finish`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_queryIccDiallingNumbers_Async_0300
   * @tc.name   Test sim.queryIccDiallingNumbers(soltId: 0, type: 2, callback:
   *            AsyncCallback<Array<DiallingNumbersInfo>>) async callback interface,
   *            expect result is {recordNumber: 1, alphaTag: 'test_!@#1234', number: '01234567890123456789', pin2: ''}.
   * @tc.desc   Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Async_0300';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {},
      FIXED_DIALING_INFO,
      { alphaTag: 'test_!@#1234', number: '01234567890123456789' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, diallingNumbersInfo);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, (error, data) => {
      if (error) {
        console.log(`${CASE_NAME} query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`${CASE_NAME} query result: ${JSON.stringify(data)}`);
      expect(data.some(item => item.recordNumber === diallingNumbersInfo.recordNumber
        && item.alphaTag === diallingNumbersInfo.alphaTag
        && item.number === diallingNumbersInfo.number
        && item.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} finish`);
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0400
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 0, type: -1, callback:
   *             AsyncCallback<Array<DiallingNumbersInfo>>), expect return a empty array.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Async_0400';
    sim.queryIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE_MINUS1, (error, data) => {
      if (error) {
        console.log(`${CASE_NAME} query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(data.length === 0).assertTrue();
      console.log(`${CASE_NAME} finish`);
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0700
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 1, type: 1, callback:
   *             AsyncCallback<Array<DiallingNumbersInfo>>), expect return a empty array.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Async_0700';
    sim.queryIccDiallingNumbers(env.SLOTID1, sim.GENERAL_CONTACT, (error, data) => {
      if (error) {
        console.log(`${CASE_NAME} query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(data.length === 0).assertTrue();
      console.log(`${CASE_NAME} finish`);
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0800
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 2, type: 1, callback:
   *             AsyncCallback<Array<DiallingNumbersInfo>>), expect return a empty array.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Async_0800';
    sim.queryIccDiallingNumbers(env.SLOTID2, sim.GENERAL_CONTACT, (error, data) => {
      if (error) {
        console.log(`${CASE_NAME} query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(data.length === 0).assertTrue();
      console.log(`${CASE_NAME} finish`);
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0900
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 0, type: 0, callback:
   *             AsyncCallback<Array<DiallingNumbersInfo>>), expect return a empty array.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Async_0900';
    sim.queryIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE0, (error, data) => {
      if (error) {
        console.log(`${CASE_NAME} query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(data.length === 0).assertTrue();
      console.log(`${CASE_NAME} finish`);
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_1000
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 0, type: 3, callback:
   *             AsyncCallback<Array<DiallingNumbersInfo>>), expect return a empty array.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_1000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Async_1000';
    sim.queryIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE3, (error, data) => {
      if (error) {
        console.log(`${CASE_NAME} query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(data.length === 0).assertTrue();
      console.log(`${CASE_NAME} finish`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_queryIccDiallingNumbers_Async_1200
   * @tc.name   When the puk2 lock is triggered, test the queryIccDiallingNumbers interface to query
   *            ordinary contacts (type input parameter = 1), and check the callback value.
   * @tc.desc   Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_1200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Async_1200';
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO, true);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, async (error, data) => {
      if (error) {
        console.log(`${CASE_NAME} query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`${CASE_NAME} query result: ${JSON.stringify(data)}`);
      expect(data.some(item => item.recordNumber === GENERAL_CONTACT_INFO.recordNumber
        && item.alphaTag === GENERAL_CONTACT_INFO.alphaTag
        && item.number === GENERAL_CONTACT_INFO.number
        && item.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} finish`);
      await unlockPuk2();
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_queryIccDiallingNumbers_Async_1300
   * @tc.name   When the puk2 lock is triggered, test the queryIccDiallingNumbers interface to query
   *            ordinary contacts (type input parameter = 2), and check the callback value.
   * @tc.desc   Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_1300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Async_1300';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO, true);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, async (error, data) => {
      console.log(`${CASE_NAME} query start`);
      if (error) {
        console.log(`${CASE_NAME} query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`${CASE_NAME} query result: ${JSON.stringify(data)}`);
      expect(data.some(item => item.recordNumber === FIXED_DIALING_INFO.recordNumber
        && item.alphaTag === FIXED_DIALING_INFO.alphaTag
        && item.number === FIXED_DIALING_INFO.number
        && item.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} finish`);
      await unlockPuk2();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_0100
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 0, type: 1):Promise<Array<DiallingNumbersInfo>>
   *             promise interface, expect result is {recordNumber: 1,alphaTag: '测试测试测试',
   *             number: '01234567890123456789', pin2: ''}.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Promise_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Promise_0100';
    const diallingNumbersInfo = Object.assign(
      {},
      GENERAL_CONTACT_INFO,
      { alphaTag: '测试测试测试', number: '01234567890123456789' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const contacts = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      console.log(`${CASE_NAME} query result: ${JSON.stringify(contacts)}`);
      expect(contacts.some(item => item.recordNumber === diallingNumbersInfo.recordNumber
        && item.alphaTag === diallingNumbersInfo.alphaTag
        && item.number === diallingNumbersInfo.number
        && item.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} finish`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_0200
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: -1, type: 1):Promise<Array<DiallingNumbersInfo>>
   *             promise interface, expect result is a empty array.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Promise_0200';
    try {
      const contacts = await sim.queryIccDiallingNumbers(env.SLOTID_MINUS1, sim.GENERAL_CONTACT);
      expect(contacts.length === 0).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} query error:${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_0300
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 0, type: 2):Promise<Array<DiallingNumbersInfo>>
   *             promise interface, expect result is {recordNumber: 1,alphaTag: 'test_!@#1234',
   *             number: '01234567890123456789', pin2: ''}.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Promise_0300';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {},
      FIXED_DIALING_INFO,
      { alphaTag: 'test_!@#1234', number: '01234567890123456789' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, diallingNumbersInfo);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const contacts = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING);
      console.log(`${CASE_NAME} query result: ${JSON.stringify(contacts)}`);
      expect(contacts.some(item => item.recordNumber === diallingNumbersInfo.recordNumber
        && item.alphaTag === diallingNumbersInfo.alphaTag
        && item.number === diallingNumbersInfo.number
        && item.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} finish`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_0400
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 0, type: -1):Promise<Array<DiallingNumbersInfo>>
   *             promise interface, expect result is a empty array.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Promise_0400';
    try {
      const contacts = await sim.queryIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE_MINUS1);
      expect(contacts.length === 0).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} query error:${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  elephony_Sim_queryIccDiallingNumbers_Promise_0700
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 1, type: 1):Promise<Array<DiallingNumbersInfo>>
   *             promise interface, expect result is a empty array.
   * @tc.desc    Function test
   */
  it('telephony_Sim_queryIccDiallingNumbers_Promise_0700', 0, async function (done) {
    const CASE_NAME = 'telephony_Sim_queryIccDiallingNumbers_Promise_0700';
    try {
      const contacts = await sim.queryIccDiallingNumbers(env.SLOTID1, sim.GENERAL_CONTACT);
      expect(contacts.length === 0).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} query error:${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  elephony_Sim_queryIccDiallingNumbers_Promise_0800
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 2, type: 1):Promise<Array<DiallingNumbersInfo>>
   *             promise interface, expect result is a empty array.
   * @tc.desc    Function test
   */
  it('telephony_Sim_queryIccDiallingNumbers_Promise_0800', 0, async function (done) {
    const CASE_NAME = 'telephony_Sim_queryIccDiallingNumbers_Promise_0800';
    try {
      const contacts = await sim.queryIccDiallingNumbers(env.SLOTID2, sim.GENERAL_CONTACT);
      expect(contacts.length === 0).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} query error:${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  telephony_Sim_queryIccDiallingNumbers_Promise_0900
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 0, type: 0):Promise<Array<DiallingNumbersInfo>>
   *             promise interface, expect result is a empty array.
   * @tc.desc    Function test
   */
  it('telephony_Sim_queryIccDiallingNumbers_Promise_0900', 0, async function (done) {
    const CASE_NAME = 'telephony_Sim_queryIccDiallingNumbers_Promise_0900';
    try {
      const contacts = await sim.queryIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE0);
      expect(contacts.length === 0).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} query error:${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  telephony_Sim_queryIccDiallingNumbers_Promise_1000
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 0, type: 3):Promise<Array<DiallingNumbersInfo>>
   *             promise interface, expect result is a empty array.
   * @tc.desc    Function test
   */
  it('telephony_Sim_queryIccDiallingNumbers_Promise_1000', 0, async function (done) {
    const CASE_NAME = 'telephony_Sim_queryIccDiallingNumbers_Promise_0900';
    try {
      const contacts = await sim.queryIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE3);
      expect(contacts.length === 0).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} query error:${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_1200
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 0, type: 1):Promise<Array<DiallingNumbersInfo>>
   *             promise interface when the puk2 lock is triggered.
   *             expect result is {recordNumber: 1,alphaTag: 'test',number: '12345678', pin2: ''}.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Promise_1200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Promise_1200';
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO, true);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const contacts = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      console.log(`${CASE_NAME} query result: ${JSON.stringify(contacts)}`);
      expect(contacts.some(item => item.recordNumber === GENERAL_CONTACT_INFO.recordNumber
        && item.alphaTag === GENERAL_CONTACT_INFO.alphaTag
        && item.number === GENERAL_CONTACT_INFO.number
        && item.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} finish`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    await unlockPuk2();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_1300
   * @tc.name    Test sim.queryIccDiallingNumbers(soltId: 0, type: 1):Promise<Array<DiallingNumbersInfo>>
   *             promise interface when the puk2 lock is triggered.
   *             expect result is {recordNumber: 1,alphaTag: 'test',number: '12345678', pin2: ''}.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Promise_1300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_queryIccDiallingNumbers_Promise_1300';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO, true);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const contacts = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING);
      console.log(`${CASE_NAME} query result: ${JSON.stringify(contacts)}`);
      expect(contacts.some(item => item.recordNumber === FIXED_DIALING_INFO.recordNumber
        && item.alphaTag === FIXED_DIALING_INFO.alphaTag
        && item.number === FIXED_DIALING_INFO.number
        && item.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} finish`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    await unlockPuk2();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0100
   * @tc.name    Test sim.addIccDiallingNumbers(soltId: -1, type: 1, diallingNumbers:
   *             {recordNumber: 1, alphaTag: 'test', number: '12345678', pin2: '123@#ABCD'},
   *             callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_0100';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID_MINUS1,
      sim.GENERAL_CONTACT,
      GENERAL_CONTACT_INFO,
      error => {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} finish.`);
        } else {
          console.log(`${CASE_NAME} test fail.`);
          expect().assertFail();
        }
        done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0200
   * @tc.name    Test sim.addIccDiallingNumbers(soltId: 0, type: -1, diallingNumbers:
   *             {recordNumber: 1, alphaTag: 'test', number: '12345678', pin2: env.correct_pin2},
   *             callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_0200';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID0,
      env.NUM_TYPE_MINUS1,
      FIXED_DIALING_INFO,
      error => {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} finish.`);
        } else {
          console.log(`${CASE_NAME} test fail.`);
          expect().assertFail();
        }
        done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0300
   * @tc.name    Test sim.addIccDiallingNumbers async callback interface when the recordNumber of
   *             DiallingNumbersInfo structure exist, check return value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_0300';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign({}, GENERAL_CONTACT_INFO, { number: '' });
    sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO, error => {
      if (error) {
        console.log(`${CASE_NAME} first add error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo, error => {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} test finish.`);
        } else {
          console.log(`${CASE_NAME} test fail.`);
          expect().assertFail();
        }
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0400
   * @tc.name    Test addIccDiallingNumbers async callback interface when DiallingNumbersInfo structure
   *             recordNumber exists, alphaTag is empty, number is a normal value, check the callback result.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_0400';
    const diallingNumbersInfo = Object.assign({}, FIXED_DIALING_INFO, { alphaTag: '' });
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO, error => {
      if (error) {
        console.log(`${CASE_NAME} first add error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo, error => {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} test finish.`);
        } else {
          console.log(`${CASE_NAME} test fail.`);
          expect().assertFail();
        }
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0500
   * @tc.name    Test sim.addIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers:
   *             {recordNumber: 1, alphaTag: '', number: ''}, callback: AsyncCallback<void>)
   *             async callback interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_0500';
    const diallingNumbersInfo = Object.assign({}, GENERAL_CONTACT_INFO, { alphaTag: '', number: '' });
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo, error => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
      } else {
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0800
   * @tc.name    Test sim.addIccDiallingNumbers(soltId: 1, type: 1, diallingNumbers:
   *             {recordNumber: 1, alphaTag: 'test', number: '12345678', pin2: '123@#ABCD'},
   *             callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_0800';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID1, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO, error => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} finish.`);
      } else {
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0900
   * @tc.name    Test sim.addIccDiallingNumbers(soltId: 2, type: 1, diallingNumbers:
   *             {recordNumber: 1, alphaTag: 'test', number: '12345678', pin2: '123@#ABCD'},
   *             callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_0900';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID2, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO, error => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} finish.`);
      } else {
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1000
   * @tc.name    Test sim.addIccDiallingNumbers(soltId: 0, type: 0, diallingNumbers:
   *             {recordNumber: 1, alphaTag: 'test', number: '12345678', pin2: env.correct_pin2},
   *             callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_1000';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE0, FIXED_DIALING_INFO, error => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} finish.`);
      } else {
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1100
   * @tc.name    Test sim.addIccDiallingNumbers(soltId: 0, type: 3, diallingNumbers:
   *             {recordNumber: 1, alphaTag: 'test', number: '12345678', pin2: env.correct_pin2},
   *             callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_1100';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE3, FIXED_DIALING_INFO, error => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} finish.`);
      } else {
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1300
   * @tc.name    Test the addIccDiallingNumbers async callback interface to add a common contact (type=1)
   *             when the puk2 lock is triggered, and check the query callback result
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_1300';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT, true);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO, async error => {
      if (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        await unlockPuk2();
        done();
        return;
      }
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, async (error, data) => {
        if (error) {
          console.log(`${CASE_NAME} test fail, error: ${error.message}`);
          expect().assertFail();
        } else {
          expect(data.some(record =>
            record.recordNumber === GENERAL_CONTACT_INFO.recordNumber
            && record.alphaTag === GENERAL_CONTACT_INFO.alphaTag
            && record.number === GENERAL_CONTACT_INFO.number
            && record.pin2 === ''
          )).assertTrue();
          console.log(`${CASE_NAME} test finish.`);
        }
        await unlockPuk2();
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1400
   * @tc.name    Test the addIccDiallingNumbers async callback interface to add a common contact (type=2)
   *             when the puk2 lock is triggered, and check the query callback result
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_1400';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    try {
      await wrapperStepForAdd(sim.FIXED_DIALING, true);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO, async error => {
      if (error) {
        console.log(`${CASE_NAME} add error: ${error.message}`);
      }
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, async (error, data) => {
        if (error) {
          console.log(`${CASE_NAME} test fail, error: ${error.message}`);
          expect().assertFail();
        } else {
          expect(data.some(record =>
            record.recordNumber === FIXED_DIALING_INFO.recordNumber
          )).assertFalse();
        }
        console.log(`${CASE_NAME} test finish.`);
        await unlockPuk2();
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1500
   * @tc.name    Test the addIccDiallingNumbers interface to input the wrong pin2 parameter
   *             when adding fixed dialing contacts, check the query callback result
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_1500';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    try {
      await wrapperStepForAdd(sim.FIXED_DIALING);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.addIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, GENERAL_CONTACT_INFO, async error => {
      if (error) {
        console.log(`${CASE_NAME} add error: ${error.message}`);
      }
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, async (error, data) => {
        if (error) {
          console.log(`${CASE_NAME} test fail, error: ${error.message}`);
          expect().assertFail();
        } else {
          expect(data.some(record =>
            record.recordNumber === GENERAL_CONTACT_INFO.recordNumber
          )).assertFalse();
        }
        console.log(`${CASE_NAME} test finish.`);
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1600
   * @tc.name    Test addIccDiallingNumbers async callback interface name (alphaTag) input more than 12
   *             characters without Chinese characters, check the callback value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_1600';
    const diallingNumbersInfo = Object.assign(
      {},
      GENERAL_CONTACT_INFO,
      { alphaTag: '123#@%_ABCDEF' }
    );
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo, async error => {
      if (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, async (error, data) => {
        if (error) {
          console.log(`${CASE_NAME} test fail, error: ${error.message}`);
          expect().assertFail();
        } else {
          expect(data.some(record =>
            record.recordNumber === diallingNumbersInfo.recordNumber
            && record.alphaTag === '123#@%_ABCDE'
            && record.number === diallingNumbersInfo.number
            && record.pin2 === ''
          )).assertTrue();
          console.log(`${CASE_NAME} test finish.`);
        }
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1700
   * @tc.name    Test addIccDiallingNumbers async callback interface name (alphaTag) input more than 6 characters
   *             containing Chinese characters, check the callback value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_1700';
    const diallingNumbersInfo = Object.assign(
      {},
      GENERAL_CONTACT_INFO,
      { alphaTag: '测试12345' }
    );
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo, async error => {
      if (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, async (error, data) => {
        if (error) {
          console.log(`${CASE_NAME} test fail, error: ${error.message}`);
          expect().assertFail();
        } else {
          expect(data.some(record =>
            record.recordNumber === diallingNumbersInfo.recordNumber
            && record.alphaTag === '测试1234'
            && record.number === diallingNumbersInfo.number
            && record.pin2 === ''
          )).assertTrue();
          console.log(`${CASE_NAME} test finish.`);
        }
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1800
   * @tc.name    Test addIccDiallingNumbers async callback interface number (number) input
   *             more than 20 digits, check the callback value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_1800';
    const diallingNumbersInfo = Object.assign(
      {},
      GENERAL_CONTACT_INFO,
      { number: '01234567890123456789' }
    );
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo, async error => {
      if (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, async (error, data) => {
        if (error) {
          console.log(`${CASE_NAME} test fail, error: ${error.message}`);
          expect().assertFail();
        } else {
          expect(data.some(record =>
            record.recordNumber === diallingNumbersInfo.recordNumber
            && record.alphaTag === diallingNumbersInfo.alphaTag
            && record.number === diallingNumbersInfo.number
            && record.pin2 === ''
          )).assertTrue();
          console.log(`${CASE_NAME} test finish.`);
        }
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1900
   * @tc.name    Test addIccDiallingNumbers async callback interface number (number)
   *             input non-pure numbers, check the callback value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_1900';
    const diallingNumbersInfo = Object.assign(
      {},
      GENERAL_CONTACT_INFO,
      { number: 'ABCD_#$%^1234' }
    );
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo, async error => {
      if (!error) {
        console.log(`${CASE_NAME} test fail`);
        expect().assertFail();
        done();
        return;
      }
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, async (error, data) => {
        if (error) {
          console.log(`${CASE_NAME} test fail, error: ${error.message}`);
          expect().assertFail();
        } else {
          expect(data.some(record =>
            record.recordNumber === diallingNumbersInfo.recordNumber
          )).assertFalse();
          console.log(`${CASE_NAME} test finish.`);
        }
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_2000
   * @tc.name    Test the addiccdiallingnumbers async callback interface,
   *             insert the same name and number, and check the callback value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_2000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Async_2000';
    const diallingNumbersInfo1 = Object.assign({}, GENERAL_CONTACT_INFO, { recordNumber: 2 });
    const diallingNumbersInfo2 = Object.assign({}, FIXED_DIALING_INFO, { recordNumber: 2 });
    try {
      console.log(`${CASE_NAME} delete`);
      await deleteContact(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
      await deleteContact(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo1);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo2, async error => {
      if (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo2, async error => {
        if (error) {
          console.log(`${CASE_NAME} test fail, error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, async (error, data) => {
          if (error) {
            console.log(`${CASE_NAME} test fail, error: ${error.message}`);
            expect().assertFail();
            done();
            return;
          }
          console.log(`${CASE_NAME} query result: ${JSON.stringify(data)}`);
          let contacts = data.filter(
            record => record.alphaTag === diallingNumbersInfo2.alphaTag
              && record.number === diallingNumbersInfo2.number
          );
          expect(contacts.length === 2).assertTrue();
          console.log(`${CASE_NAME} test finish.`);
          done();
        });
      });
    });
  });

  /**
   * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_0100
   * @tc.name     Test addIccDiallingNumbers promise interface when slotId=-1, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_0100';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.addIccDiallingNumbers(env.SLOTID_MINUS1, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_0200
   * @tc.name    Test addIccDiallingNumbers promise interface when type=-1, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_0200';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.addIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE_MINUS1, FIXED_DIALING_INFO);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_0300
   * @tc.name    Test the addIccDiallingNumbers promise interface when the recordNumber of the DiallingNumbersInfo
   *             structure exists, the alphaTag is normal, and the number is empty, and check the return value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_0300';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    const diallingNumbersInfo = Object.assign({}, GENERAL_CONTACT_INFO, { number: '' });

    try {
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
      console.log(`${CASE_NAME} add`);
    } catch (error) {
      console.log(`${CASE_NAME} add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }

    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_0400
   * @tc.name    Test addIccDiallingNumbers promise interface when DiallingNumbersInfo's recordNumber exists,
   *             alphaTag is empty, number is a normal value, check the return result.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_0400';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    const diallingNumbersInfo = Object.assign({}, FIXED_DIALING_INFO, { alphaTag: '' });

    try {
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
      console.log(`${CASE_NAME} add`);
    } catch (error) {
      console.log(`${CASE_NAME} add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }

    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_0500
   * @tc.name    Test sim.addIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers:
   *             {recordNumber: 1, alphaTag: '', number: '', pin2: '123@#ABCD'}): Promise<void>
   *             promise interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_0500';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    let diallingNumbersInfo = Object.assign({}, GENERAL_CONTACT_INFO, { alphaTag: '', number: '' });

    try {
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }

    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_0800
   * @tc.name    Test sim.addIccDiallingNumbers(soltId: 1, type: 1, diallingNumbers:
   *             {recordNumber: 1, alphaTag: 'test', number: '12345678', pin2: '123@#ABCD'}): Promise<void>
   *             promise interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_0800';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.addIccDiallingNumbers(env.SLOTID1, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_0900
   * @tc.name    Test sim.addIccDiallingNumbers(soltId: 2, type: 1, diallingNumbers:
   *             {recordNumber: 1, alphaTag: 'test', number: '12345678', pin2: '123@#ABCD'}): Promise<void>
   *             promise interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_0900';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.addIccDiallingNumbers(env.SLOTID2, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_1000
   * @tc.name    Test sim.addIccDiallingNumbers(soltId: 0, type: 0, diallingNumbers:
   *             {recordNumber: 1, alphaTag: 'test', number: '12345678', pin2: env.correct_pin2}): Promise<void>
   *             promise interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_1000';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.addIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE0, FIXED_DIALING_INFO);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_1100
   * @tc.name    Test sim.addIccDiallingNumbers(soltId: 0, type: 3, diallingNumbers:
   *             {recordNumber: 1, alphaTag: 'test', number: '12345678', pin2: env.correct_pin2}): Promise<void>
   *             promise interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_1100';
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.addIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE3, FIXED_DIALING_INFO);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_1300
   * @tc.name    Test the addIccDiallingNumbers promise interface when the puk2 lock is triggered,
   *             and add a common contact (type=1), and check the return value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_1300';

    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT, true);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} add`);
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      await unlockPuk2();
      done();
      return;
    }

    try {
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === GENERAL_CONTACT_INFO.recordNumber
        && record.alphaTag === GENERAL_CONTACT_INFO.alphaTag
        && record.number === GENERAL_CONTACT_INFO.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} query error: ${error.message}`);
      expect().assertFail();
    }
    await unlockPuk2();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_1400
   * @tc.name    Test the addIccDiallingNumbers promise interface when the puk2 lock is triggered,
   *             and add a common contact (type=2), and check the return value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_1400';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    try {
      await wrapperStepForAdd(sim.FIXED_DIALING, true);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} add`);
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
      expect().assertFail();
      await unlockPuk2();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} add expect error: ${error.message}`);
    }

    try {
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING);
      expect(numbers.some(record =>
        record.recordNumber === GENERAL_CONTACT_INFO.recordNumber
      )).assertFalse();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} query error: ${error.message}`);
      expect().assertFail();
    }
    await unlockPuk2();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_1500
   * @tc.name    Test the addIccDiallingNumbers promise interface when adding a fixed dialing contact
   *             to input the wrong pin2 parameter, check the return value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_1500';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    try {
      await wrapperStepForAdd(sim.FIXED_DIALING);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} add`);
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, GENERAL_CONTACT_INFO);
      expect().assertFail();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} add error: ${error.message}`);
    }

    try {
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING);
      expect(numbers.some(record =>
        record.recordNumber === GENERAL_CONTACT_INFO.recordNumber
      )).assertFalse();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} query error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_1600
   * @tc.name    Test addIccDiallingNumbers promise interface name (alphaTag) input more than 12
   *             characters without Chinese characters, check the return value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_1600';
    const diallingNumbersInfo = Object.assign(
      {},
      GENERAL_CONTACT_INFO,
      { alphaTag: '123#@%_ABCDEF' }
    );
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} add`);
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === diallingNumbersInfo.recordNumber
        && record.alphaTag === '123#@%_ABCDE'
        && record.number === diallingNumbersInfo.number
        && record.pin2 === ''
      )).assertTrue();
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_1700
   * @tc.name    Test addIccDiallingNumbers promise interface name (alphaTag) input more than 6 characters
   *             containing Chinese characters, check the return value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_1700';
    const diallingNumbersInfo = Object.assign(
      {},
      GENERAL_CONTACT_INFO,
      { alphaTag: '测试12345' }
    );
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} add`);
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === diallingNumbersInfo.recordNumber
        && record.alphaTag === '测试1234'
        && record.number === diallingNumbersInfo.number
        && record.pin2 === ''
      )).assertTrue();
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_1800
   * @tc.name    Test addIccDiallingNumbers promise interface number (number) input
   *             more than 20 digits, check the return value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_1800';
    const diallingNumbersInfo = Object.assign(
      {},
      GENERAL_CONTACT_INFO,
      { number: '01234567890123456789' }
    );
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} add`);
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === diallingNumbersInfo.recordNumber
        && record.alphaTag === diallingNumbersInfo.alphaTag
        && record.number === diallingNumbersInfo.number
        && record.pin2 === ''
      )).assertTrue();
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_1900
   * @tc.name    Test addIccDiallingNumbers async callback interface number (number)
   *             input non-pure numbers, check the callback value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_1900';
    const diallingNumbersInfo = Object.assign(
      {},
      GENERAL_CONTACT_INFO,
      { number: 'ABCD_#$%^1234' }
    );
    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} add`);
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
      expect().assertFail();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} add expect error: ${error.message}`);
    }

    try {
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === diallingNumbersInfo.recordNumber
      )).assertFalse();
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Promise_2000
   * @tc.name    Test the addiccdiallingnumbers async callback interface,
   *             insert the same name and number, and check the callback value
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_2000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_addIccDiallingNumbers_Promise_2000';
    const diallingNumbersInfo1 = Object.assign({}, GENERAL_CONTACT_INFO, { recordNumber: 2 });
    const diallingNumbersInfo2 = Object.assign({}, FIXED_DIALING_INFO, { recordNumber: 2 });
    try {
      await deleteContact(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
      await deleteContact(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo1);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo2);
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo2);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      console.log(`${CASE_NAME} query result: ${JSON.stringify(numbers)}`);
      expect(numbers.filter(record =>
        record.alphaTag === diallingNumbersInfo2.alphaTag
        && record.number === diallingNumbersInfo2.number
      ).length === 2).assertTrue();
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    done();
  });

  /**
     *
   * @tc.number  Telephony_Sim_delIccDiallingNumbers_Async_0100
   * @tc.name    Test sim.delIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers: DiallingNumbersInfo,
   *             callback: AsyncCallback<void>) async callback interface to delete record,
   *             expect cann't query the record.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_0100';
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign({},
      GENERAL_CONTACT_INFO,
      { recordNumber: deleteRecord.recordNumber, alphaTag: '', number: '' }
    );
    sim.delIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo, function (error) {
      if (error) {
        console.log(`${CASE_NAME} delete fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, function (error, data) {
        if (error) {
          console.log(`${CASE_NAME} third query fail, error${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(data.some(record => record.recordNumber === deleteRecord.recordNumber)).assertFalse();
        console.log(`${CASE_NAME} finish.`);
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_delIccDiallingNumbers_Async_0200
   * @tc.name    Test sim.delIccDiallingNumbers(soltId: -1, type: 1, diallingNumbers: DiallingNumbersInfo,
   *             callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_0200';
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {},
      GENERAL_CONTACT_INFO,
      { recordNumber: deleteRecord.recordNumber }
    );
    sim.delIccDiallingNumbers(env.SLOTID_MINUS1, sim.GENERAL_CONTACT, diallingNumbersInfo, error => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} finish.`);
      } else {
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_delIccDiallingNumbers_Async_0300
   * @tc.name    Test delIccDiallingNumbers async callback interface recordNumber parameter input
   *             non-existent value, check the callback value.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_0300';
    let recordNumbers = [];
    try {
      const data = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      console.log(`${CASE_NAME} first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(record => record.recordNumber);
      console.log(`${CASE_NAME} recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`${CASE_NAME} first query error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    const noExistIndex = Math.max.apply(recordNumbers) + 1;
    const diallingNumbersInfo = Object.assign({}, GENERAL_CONTACT_INFO, { recordNumber: noExistIndex });
    sim.delIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo, error => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
      } else {
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_delIccDiallingNumbers_Async_0400
   * @tc.name    Test sim.delIccDiallingNumbers(soltId: 0, type: 2, diallingNumbers: DiallingNumbersInfo,
   *             callback: AsyncCallback<void>) async callback interface to delete record,
   *             expect cann't query the record.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_0400';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, FIXED_DIALING_INFO, { recordNumber: deleteRecord.recordNumber }
    );
    sim.delIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, diallingNumbersInfo, function (error) {
      if (error) {
        console.log(`${CASE_NAME} delete fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, function (error, data) {
        if (error) {
          console.log(`${CASE_NAME} third query error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        const recordExist = data.some(record => record.recordNumber === deleteRecord.recordNumber);
        if (recordExist) {
          console.log(`${CASE_NAME} delete fail, number still exist.`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`${CASE_NAME} finish.`);
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_delIccDiallingNumbers_Async_0500
   * @tc.name    Test sim.delIccDiallingNumbers(soltId: -1, type: 1, diallingNumbers: DiallingNumbersInfo,
   *             callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_0500';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, FIXED_DIALING_INFO, { recordNumber: deleteRecord.recordNumber }
    );
    sim.delIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE_MINUS1, diallingNumbersInfo, error => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_delIccDiallingNumbers_Async_0800
   * @tc.name    Test sim.delIccDiallingNumbers(soltId: 1, type: 1, diallingNumbers: DiallingNumbersInfo,
   *             callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_0800';
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, GENERAL_CONTACT_INFO, { recordNumber: deleteRecord.recordNumber }
    );
    sim.delIccDiallingNumbers(env.SLOTID1, sim.GENERAL_CONTACT, diallingNumbersInfo, error => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} finish.`);
      } else {
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_delIccDiallingNumbers_Async_0900
   * @tc.name    Test sim.delIccDiallingNumbers(soltId: 2, type: 1, diallingNumbers: DiallingNumbersInfo,
   *             callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_0900';
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, GENERAL_CONTACT_INFO, { recordNumber: deleteRecord.recordNumber }
    );
    sim.delIccDiallingNumbers(env.SLOTID2, sim.GENERAL_CONTACT, diallingNumbersInfo, error => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} finish.`);
      } else {
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_delIccDiallingNumbers_Async_1000
   * @tc.name    Test the delIccDiallingNumbers async callbackk interface when type is 0 , expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_1000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_1000';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, FIXED_DIALING_INFO, { recordNumber: deleteRecord.recordNumber }
    );
    sim.delIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE0, diallingNumbersInfo, error => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} finish.`);
      } else {
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_delIccDiallingNumbers_Async_1100
   * @tc.name    Test sim.delIccDiallingNumbers(soltId: 0, type: 3, diallingNumbers: DiallingNumbersInfo,
   *             callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_1100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_1100';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, FIXED_DIALING_INFO, { recordNumber: deleteRecord.recordNumber }
    );
    sim.delIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE3, diallingNumbersInfo, error => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} finish.`);
      } else {
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_delIccDiallingNumbers_Async_1300
   * @tc.name    Test the delIccDiallingNumbers async callback interface to delete ordinary contacts
   *             when puk2 is triggered, expect the recordNumber is not exist in query result.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_1300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_1300';
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO, true);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, GENERAL_CONTACT_INFO, { recordNumber: deleteRecord.recordNumber, alphaTag: '', number: '' }
    );
    sim.delIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo, async error => {
      if (error) {
        console.log(`${CASE_NAME} test fail, error: ${error.message}`);
        expect().assertFail();
        await unlockPuk2();
        done();
      } else {
        sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, async (error, data) => {
          if (error) {
            console.log(`${CASE_NAME} test fail, query error: ${error.message}`);
            expect().assertFail();
          } else {
            expect(data.some(record => record.recordNumber === deleteRecord.recordNumber)).assertFalse();
            console.log(`${CASE_NAME} test finish`);
          }
          await unlockPuk2();
          done();
        });
      }
    });
  });

  /**
   * @tc.number  Telephony_Sim_delIccDiallingNumbers_Async_1400
   * @tc.name    Test the delIccDiallingNumbers async callback interface to delete fixed contacts
   *             when puk2 is triggered, expect the recordNumber is exist in query result..
   * @tc.desc    Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_1400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_1400';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO, true);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, FIXED_DIALING_INFO, { recordNumber: deleteRecord.recordNumber, alphaTag: '', number: '' }
    );
    sim.delIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, diallingNumbersInfo, async error => {
      if (error) {
        console.log(`${CASE_NAME} delete error: ${error.message}`);
      }
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, async (error, data) => {
        if (error) {
          console.log(`${CASE_NAME} test fail, query error: ${error.message}`);
          expect().assertFail();
        } else {
          expect(data.some(record =>
            record.recordNumber === deleteRecord.recordNumber
            && record.alphaTag === deleteRecord.alphaTag
            && record.number === deleteRecord.number
            && record.pin2 === ''
          )).assertTrue();
          console.log(`${CASE_NAME} test finish`);
        }
        await unlockPuk2();
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_1500
   * @tc.name     Test the delIccDiallingNumbers async callback interface to delete the wrong pin2
   *              parameter of the fixed dialing contact, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_1500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Async_1500';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, GENERAL_CONTACT_INFO, { recordNumber: deleteRecord.recordNumber, alphaTag: '', number: '' }
    );
    sim.delIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, diallingNumbersInfo, error => {
      if (error) {
        console.log(`${CASE_NAME} delete error: ${error.message}`);
      }
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, (error, data) => {
        if (error) {
          console.log(`${CASE_NAME} query error: ${error.message}`);
          expect().assertFail();
        } else {
          console.log(`${CASE_NAME} query result: ${JSON.stringify(data)}`);
          expect(data.some(record =>
            record.recordNumber === deleteRecord.recordNumber
            && record.alphaTag === deleteRecord.alphaTag
            && record.number === deleteRecord.number
            && record.pin2 === ''
          )).assertTrue();
          console.log(`${CASE_NAME} test finish.`);
        }
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_delIccDiallingNumbers_Promise_0100
   * @tc.name    Test sim.delIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers: DiallingNumbersInfo):
   *             Promise<void> promise interface to delete record, expect cann't query the record.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_0100';
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {},
      GENERAL_CONTACT_INFO,
      { recordNumber: deleteRecord.recordNumber, alphaTag: '', number: '' }
    );
    try {
      await sim.delIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
      console.log(`${CASE_NAME} delete`);
    } catch (error) {
      console.log(`${CASE_NAME} delete fail. error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record => record.recordNumber === deleteRecord.recordNumber)).assertFalse();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} query fail, error: ${error.message}`);
      expect().assertFail();
    }

    done();
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0200
   * @tc.name     Test sim.delIccDiallingNumbers(soltId: -1, type: 1, diallingNumbers: DiallingNumbersInfo):
   *              Promise<void> promise interface to delete record, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_0200';
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign({},
      GENERAL_CONTACT_INFO,
      { recordNumber: deleteRecord.recordNumber });
    try {
      await sim.delIccDiallingNumbers(env.SLOTID_MINUS1, sim.GENERAL_CONTACT, diallingNumbersInfo);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }

    done();
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0300
   * @tc.name     Test sim.delIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers: DiallingNumbersInfo):
   *              Promise<void> promise interface to delete record when the recor not exist, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_0300';
    let recordNumbers = [];

    try {
      const data = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      console.log(`${CASE_NAME} first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(record => record.recordNumber);
      console.log(`${CASE_NAME} recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`${CASE_NAME} query fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    let noExistIndex = Math.max.apply(recordNumbers) + 1;

    const diallingNumbersInfo = Object.assign(
      {}, GENERAL_CONTACT_INFO, { recordNumber: noExistIndex }
    );
    try {
      await sim.delIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0400
   * @tc.name     Test sim.delIccDiallingNumbers(soltId: 0, type: 2, diallingNumbers: DiallingNumbersInfo):
   *              Promise<void> promise interface to delete record, expect cann't query the record.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_0400';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, FIXED_DIALING_INFO, { recordNumber: deleteRecord.recordNumber }
    );
    try {
      await sim.delIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, diallingNumbersInfo);
      console.log(`${CASE_NAME} delete`);
    } catch (error) {
      console.log(`${CASE_NAME} delete fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING);
      expect(numbers.some(record => record.recordNumber === deleteRecord.recordNumber)).assertFalse();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0500
   * @tc.name     Test sim.delIccDiallingNumbers(soltId: 0, type: -1, diallingNumbers: DiallingNumbersInfo):
   *              Promise<void> promise interface to delete record, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_0500';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, FIXED_DIALING_INFO, { recordNumber: deleteRecord.recordNumber }
    );
    try {
      await sim.delIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE_MINUS1, diallingNumbersInfo);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0800
   * @tc.name     Test sim.delIccDiallingNumbers(soltId: 1, type: 1, diallingNumbers: DiallingNumbersInfo):
   *              Promise<void> promise interface to delete record, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_0800';
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, GENERAL_CONTACT_INFO, { recordNumber: deleteRecord.recordNumber }
    );
    try {
      await sim.delIccDiallingNumbers(env.SLOTID1, sim.GENERAL_CONTACT, diallingNumbersInfo);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0900
   * @tc.name     Test sim.delIccDiallingNumbers(soltId: 2, type: 1, diallingNumbers: DiallingNumbersInfo):
   *              Promise<void> promise interface to delete record, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_0900';
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, GENERAL_CONTACT_INFO, { recordNumber: deleteRecord.recordNumber }
    );
    try {
      await sim.delIccDiallingNumbers(env.SLOTID2, sim.GENERAL_CONTACT, diallingNumbersInfo);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_1000
   * @tc.name     Test sim.delIccDiallingNumbers(soltId: 0, type: 0, diallingNumbers: DiallingNumbersInfo):
   *              Promise<void> promise interface to delete record, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_1000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_1000';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, FIXED_DIALING_INFO, { recordNumber: deleteRecord.recordNumber }
    );
    try {
      await sim.delIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE0, diallingNumbersInfo);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_1100
   * @tc.name     Test sim.delIccDiallingNumbers(soltId: 0, type: 3, diallingNumbers: DiallingNumbersInfo):
   *              Promise<void> promise interface to delete record, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_1100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_1100';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, FIXED_DIALING_INFO, { recordNumber: deleteRecord.recordNumber }
    );
    try {
      await sim.delIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE3, diallingNumbersInfo);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_1300
   * @tc.name     Test the delIccDiallingNumbers promise interface to delete ordinary contacts
   *              when puk2 is triggered, and check back to the value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_1300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_1300';
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO, true);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, GENERAL_CONTACT_INFO, { recordNumber: deleteRecord.recordNumber, alphaTag: '', number: '' }
    );
    try {
      await sim.delIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record => record.recordNumber === deleteRecord.recordNumber)).assertFalse();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} delete error: ${error.message}`);
      expect().assertFail();
    }
    await unlockPuk2();
    done();
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_1400
   * @tc.name     Test the delIccDiallingNumbers promise interface to delete ordinary contacts
   *              when puk2 is triggered, and check back to the value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_1400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_1400';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO, true);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, FIXED_DIALING_INFO, { recordNumber: deleteRecord.recordNumber, alphaTag: '', number: '' }
    );
    try {
      await sim.delIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, diallingNumbersInfo);
    } catch (error) {
      console.log(`${CASE_NAME} delete error: ${error.message}`);
    }
    try {
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING);
      expect(numbers.some(record =>
        record.recordNumber === deleteRecord.recordNumber
        && record.alphaTag === deleteRecord.alphaTag
        && record.number === deleteRecord.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} query error: ${error.message}`);
      expect().assertFail();
    }
    await unlockPuk2();
    done();
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_1500
   * @tc.name     Test the delIccDiallingNumbers interface to delete the wrong pin2
   *              parameter of the fixed dialing contact, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_1500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_delIccDiallingNumbers_Promise_1500';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let deleteRecord;
    try {
      deleteRecord = await wrapperStepForDel(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }
    const diallingNumbersInfo = Object.assign(
      {}, GENERAL_CONTACT_INFO, { recordNumber: deleteRecord.recordNumber, alphaTag: '', number: '' }
    );
    try {
      await sim.delIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, diallingNumbersInfo);
    } catch (error) {
      console.log(`${CASE_NAME} delete error: ${error.message}`);
    }
    try {
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING);
      console.log(`${CASE_NAME} query result: ${JSON.stringify(numbers)}`);
      expect(numbers.some(record =>
        record.recordNumber === deleteRecord.recordNumber
        && record.alphaTag === deleteRecord.alphaTag
        && record.number === deleteRecord.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} query error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_0100
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: '123@#ABCD'},
   *              callback: AsyncCallback<void>) async callback interface, expect query result is
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: ''}.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_0100';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(env.SLOTID0,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      function (error) {
        if (error) {
          console.log(`${CASE_NAME} update fail, error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, (error, data) => {
          if (error) {
            console.log(`${CASE_NAME} query fail, error: ${error.message}`);
            expect().assertFail();
          } else {
            expect(data.some(record =>
              record.recordNumber === diallingNumbersInfoUpdate.recordNumber
              && record.alphaTag === diallingNumbersInfoUpdate.alphaTag
              && record.number === diallingNumbersInfoUpdate.number
              && record.pin2 === ''
            )).assertTrue();
            console.log(`${CASE_NAME} test finish.`);
          }
          done();
        });
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_0200
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: -1, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: '123@#ABCD'},
   *              callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_0200';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(
      env.SLOTID_MINUS1,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      error => {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} test finish.`);
          done();
          return;
        }
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_0300
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 2, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: correct pin2},
   *              callback: AsyncCallback<void>) async callback interface, expect query result is
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2:''}.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_0300';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let diallingNumbersInfoUpdate = Object.assign(
      {}, FIXED_DIALING_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(env.SLOTID0,
      sim.FIXED_DIALING,
      diallingNumbersInfoUpdate,
      function (error) {
        if (error) {
          console.log(`${CASE_NAME} update fail, error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, (error, data) => {
          if (error) {
            console.log(`${CASE_NAME} query fail, error: ${error.message}`);
            expect().assertFail();
          } else {
            expect(data.some(record =>
              record.recordNumber === diallingNumbersInfoUpdate.recordNumber
              && record.alphaTag === diallingNumbersInfoUpdate.alphaTag
              && record.number === diallingNumbersInfoUpdate.number
              && record.pin2 === ''
            )).assertTrue();
          }
          console.log(`${CASE_NAME} test finish.`);
          done();
        });
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_0400
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: -1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: correct pin2},
   *              callback: AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_0400';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    const diallingNumbersInfoUpdate = Object.assign(
      {}, FIXED_DIALING_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(
      env.SLOTID0,
      env.NUM_TYPE_MINUS1,
      diallingNumbersInfoUpdate,
      error => {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} test finish.`);
          done();
          return;
        }
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_0500
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '', pin2: '123@#ABCD'},
   *              callback: AsyncCallback<void>) async callback interface, expect enter error
   *              and query result not updated.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_0500';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(env.SLOTID0,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      function (error) {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);

          sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, (error, data) => {
            if (error) {
              console.log(`${CASE_NAME} query fail, error: ${error.message}`);
              expect().assertFail();
            } else {
              expect(data.some(record =>
                record.recordNumber === GENERAL_CONTACT_INFO.recordNumber
                && record.alphaTag === GENERAL_CONTACT_INFO.alphaTag
                && record.number === GENERAL_CONTACT_INFO.number
                && record.pin2 === ''
              )).assertTrue();
              console.log(`${CASE_NAME} test finish.`);
            }
            done();
          });
        } else {
          console.log(`${CASE_NAME} test fail.`);
          expect().assertFail();
          done();
        }
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_0600
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: '', number: '87654321', pin2: correct pin2},
   *              callback: AsyncCallback<void>) async callback interface, expect enter error
   *              and query result not updated.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_0600';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, FIXED_DIALING_INFO, { alphaTag: '', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(env.SLOTID0,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      function (error) {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);

          sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, (error, data) => {
            if (error) {
              console.log(`${CASE_NAME} query fail, error: ${error.message}`);
              expect().assertFail();
            } else {
              expect(data.some(record =>
                record.recordNumber === GENERAL_CONTACT_INFO.recordNumber
                && record.alphaTag === GENERAL_CONTACT_INFO.alphaTag
                && record.number === GENERAL_CONTACT_INFO.number
                && record.pin2 === ''
              )).assertTrue();
              console.log(`${CASE_NAME} test finish.`);
            }
            done();
          });
        } else {
          console.log(`${CASE_NAME} test fail.`);
          expect().assertFail();
          done();
        }
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_0700
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '12345678', pin2:'123@#ABCD'},
   *              callback: AsyncCallback<void>) async callback interface when record is not exist,
   *              expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_0700';
    const diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '12345678' }
    );

    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      env.SLOTID0,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      error => {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} test finish.`);
          done();
          return;
        }
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_0800
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: '', number: '', pin2:'123@#ABCD'},
   *              callback: AsyncCallback<void>) async callback interface when record is not exist,
   *              expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_0800';
    const diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: '', number: '' }
    );

    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      env.SLOTID0,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      error => {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} test finish.`);
          done();
          return;
        }
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_1100
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 1, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2:'123@#ABCD'}, callback:
   *              AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_1100';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(
      env.SLOTID1,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      error => {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} test finish.`);
          done();
          return;
        }
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_1200
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 2, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2:'123@#ABCD'}, callback:
   *              AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_1200';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      env.SLOTID2,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      error => {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} test finish.`);
          done();
          return;
        }
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_1300
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 0, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: correct pin2}, callback:
   *              AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_1300';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let diallingNumbersInfoUpdate = Object.assign(
      {}, FIXED_DIALING_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(
      env.SLOTID0,
      env.NUM_TYPE0,
      diallingNumbersInfoUpdate,
      error => {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} test finish.`);
          done();
          return;
        }
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_1400
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 3, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: correct pin2}, callback:
   *              AsyncCallback<void>) async callback interface, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_1400';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let diallingNumbersInfoUpdate = Object.assign(
      {}, FIXED_DIALING_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(
      env.SLOTID0,
      env.NUM_TYPE3,
      diallingNumbersInfoUpdate,
      error => {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          console.log(`${CASE_NAME} test finish.`);
          done();
          return;
        }
        console.log(`${CASE_NAME} test fail.`);
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_1600
   * @tc.name     Test the updateIccDiallingNumbers async callback interface to update the common contact
   *              when puk2 is triggered, and check the callback value.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_1600';
    if (passwordIsError()) {
      console.log(`${CASE_NAME} password is incorrect.`);
      done();
      return;
    }
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO, true);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(env.SLOTID0,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      async function (error) {
        if (error) {
          console.log(`${CASE_NAME} update fail, error: ${error.message}`);
          expect().assertFail();
          await unlockPuk2();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, async (error, data) => {
          if (error) {
            console.log(`${CASE_NAME} query fail, error: ${error.message}`);
            expect().assertFail();
          } else {
            expect(data.some(record =>
              record.recordNumber === diallingNumbersInfoUpdate.recordNumber
              && record.alphaTag === diallingNumbersInfoUpdate.alphaTag
              && record.number === diallingNumbersInfoUpdate.number
              && record.pin2 === ''
            )).assertTrue();
            console.log(`${CASE_NAME} test finish.`);
          }
          await unlockPuk2();
          done();
        });
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_1700
   * @tc.name     Test the updateIccDiallingNumbers async callback interface to update the fixed dialing contact
   *              when puk2 is triggered, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_1700';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let diallingNumbersInfoUpdate = Object.assign(
      {}, FIXED_DIALING_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO, true);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(env.SLOTID0,
      sim.FIXED_DIALING,
      diallingNumbersInfoUpdate,
      async function (error) {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);

          sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, async (error, data) => {
            if (error) {
              console.log(`${CASE_NAME} query fail, error: ${error.message}`);
              expect().assertFail();
            } else {
              expect(data.some(record =>
                record.recordNumber === FIXED_DIALING_INFO.recordNumber
                && record.alphaTag === FIXED_DIALING_INFO.alphaTag
                && record.number === FIXED_DIALING_INFO.number
                && record.pin2 === ''
              )).assertTrue();
              console.log(`${CASE_NAME} test finish.`);
            }
            await unlockPuk2();
            done();
          });
        } else {
          console.log(`${CASE_NAME} test fail.`);
          expect().assertFail();
          await unlockPuk2();
          done();
        }
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_1800
   * @tc.name     Test the updateIccDiallingNumbers async callback interface to input the wrong pin2 parameter
   *              when updating the fixed dialing contact, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_1800';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(env.SLOTID0,
      sim.FIXED_DIALING,
      diallingNumbersInfoUpdate,
      async function (error) {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);

          sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, async (error, data) => {
            if (error) {
              console.log(`${CASE_NAME} query fail, error: ${error.message}`);
              expect().assertFail();
            } else {
              expect(data.some(record =>
                record.recordNumber === FIXED_DIALING_INFO.recordNumber
                && record.alphaTag === FIXED_DIALING_INFO.alphaTag
                && record.number === FIXED_DIALING_INFO.number
                && record.pin2 === ''
              )).assertTrue();
              console.log(`${CASE_NAME} test finish.`);
            }
            done();
          });
        } else {
          console.log(`${CASE_NAME} test fail.`);
          expect().assertFail();
          done();
        }
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_1900
   * @tc.name     Test the updateIccDiallingNumbers async callback interface, input alphaTag exceeds
   *              12 characters without chinese characters, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_1900';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: '123#@%_ABCDEF', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(env.SLOTID0,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      function (error) {
        if (error) {
          console.log(`${CASE_NAME} update fail, error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, (error, data) => {
          if (error) {
            console.log(`${CASE_NAME} query fail, error: ${error.message}`);
            expect().assertFail();
          } else {
            expect(data.some(record =>
              record.recordNumber === diallingNumbersInfoUpdate.recordNumber
              && record.alphaTag === '123#@%_ABCDE'
              && record.number === diallingNumbersInfoUpdate.number
              && record.pin2 === ''
            )).assertTrue();
            console.log(`${CASE_NAME} test finish.`);
          }
          done();
        });
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_2000
   * @tc.name     Test the updateIccDiallingNumbers async callback interface, input alphaTag exceeds
   *              6 characters including chinese characters, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_2000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_2000';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: '测试12345', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(env.SLOTID0,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      function (error) {
        if (error) {
          console.log(`${CASE_NAME} update fail, error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, (error, data) => {
          if (error) {
            console.log(`${CASE_NAME} query fail, error: ${error.message}`);
            expect().assertFail();
          } else {
            expect(data.some(record =>
              record.recordNumber === diallingNumbersInfoUpdate.recordNumber
              && record.alphaTag === '测试1234'
              && record.number === diallingNumbersInfoUpdate.number
              && record.pin2 === ''
            )).assertTrue();
            console.log(`${CASE_NAME} test finish.`);
          }
          done();
        });
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_2100
   * @tc.name     Test the updateIccDiallingNumbers async callback interface, input number exceeds
   *              20 digits, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_2100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_2100';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '012345678901234567890' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(env.SLOTID0,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      function (error) {
        if (error) {
          console.log(`${CASE_NAME} update fail, error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, (error, data) => {
          if (error) {
            console.log(`${CASE_NAME} query fail, error: ${error.message}`);
            expect().assertFail();
          } else {
            expect(data.some(record =>
              record.recordNumber === diallingNumbersInfoUpdate.recordNumber
              && record.alphaTag === diallingNumbersInfoUpdate.alphaTag
              && record.number === '01234567890123456789'
              && record.pin2 === ''
            )).assertTrue();
            console.log(`${CASE_NAME} test finish.`);
          }
          done();
        });
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_2200
   * @tc.name     Test the updateIccDiallingNumbers async callback interface, input number is not
   *              pure number, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_2200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_2200';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: 'ABCD_#$%^1234' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(env.SLOTID0,
      sim.GENERAL_CONTACT,
      diallingNumbersInfoUpdate,
      function (error) {
        if (error) {
          console.log(`${CASE_NAME} expect error: ${error.message}`);
          sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, (error, data) => {
            if (error) {
              console.log(`${CASE_NAME} query fail, error: ${error.message}`);
              expect().assertFail();
            } else {
              expect(data.some(record => record.recordNumber === FIXED_DIALING_INFO.recordNumber
                && record.alphaTag === FIXED_DIALING_INFO.alphaTag
                && record.number === FIXED_DIALING_INFO.number
                && record.pin2 === ''
              )).assertTrue();
              console.log(`${CASE_NAME} test finish.`);
            }
            done();
          });
        } else {
          console.log(`${CASE_NAME} test fail.`);
          expect().assertFail();
          done();
        }
      });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Async_2300
   * @tc.name     Test the updateiccdiallingnumbers async callback interface to update the scenario
   *              that the contact has the same name and number as the existing contact
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_2300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Async_2300';
    const diallingNumbersInfo1 = Object.assign({}, GENERAL_CONTACT_INFO, { recordNumber: 2 });
    const diallingNumbersInfoUpdateLower = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_update', number: '87654321' }
    );
    const diallingNumbersInfoUpdateUpper = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await deleteContact(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
      await deleteContact(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo1);
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, FIXED_DIALING_INFO);
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdateLower);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdateUpper, function (error) {
      if (error) {
        console.log(`${CASE_NAME} update fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, (error, data) => {
        if (error) {
          console.log(`${CASE_NAME} query fail, error: ${error.message}`);
          expect().assertFail();
        } else {
          const existRecod1 = data.some(record => record.recordNumber === 1
            && record.alphaTag === diallingNumbersInfoUpdateUpper.alphaTag
            && record.number === diallingNumbersInfoUpdateUpper.number
            && record.pin2 === ''
          );
          const existRecod2 = data.some(record => record.recordNumber === 2
            && record.alphaTag === diallingNumbersInfoUpdateLower.alphaTag
            && record.number === diallingNumbersInfoUpdateLower.number
            && record.pin2 === ''
          );
          expect(existRecod1 && existRecod2).assertTrue();
          console.log(`${CASE_NAME} test finish.`);
        }
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_0100
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: '123@#ABCD'})
   *              promise interface, expect query result is
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: ''}.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_0100';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === diallingNumbersInfoUpdate.recordNumber
        && record.alphaTag === diallingNumbersInfoUpdate.alphaTag
        && record.number === diallingNumbersInfoUpdate.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_0200
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: -1, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: '123@#ABCD'})
   *              promise interface, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_0200';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID_MINUS1, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_0300
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 2, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: correct pin2})
   *              promise interface, expect query result is
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2:''}.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_0300';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let diallingNumbersInfoUpdate = Object.assign(
      {}, FIXED_DIALING_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING);
      expect(numbers.some(record =>
        record.recordNumber === diallingNumbersInfoUpdate.recordNumber
        && record.alphaTag === diallingNumbersInfoUpdate.alphaTag
        && record.number === diallingNumbersInfoUpdate.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error:${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_0400
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: -1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: correct pin2})
   *              promise interface, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_0400';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    const diallingNumbersInfoUpdate = Object.assign(
      {}, FIXED_DIALING_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE_MINUS1, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_0500
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '', pin2: '123@#ABCD'})
   *              promise interface, expect enter error
   *              and query result not updated.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_0500';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
    }

    try {
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === GENERAL_CONTACT_INFO.recordNumber
        && record.alphaTag === GENERAL_CONTACT_INFO.alphaTag
        && record.number === GENERAL_CONTACT_INFO.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_0600
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: '', number: '87654321', pin2: correct pin2})
   *              promise interface, expect enter error
   *              and query result not updated.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_0600';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, FIXED_DIALING_INFO, { alphaTag: '', number: '87654321' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
    }

    try {
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === GENERAL_CONTACT_INFO.recordNumber
        && record.alphaTag === GENERAL_CONTACT_INFO.alphaTag
        && record.number === GENERAL_CONTACT_INFO.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_0700
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '12345678', pin2:'123@#ABCD'})
   *              promise interface when record is not exist,
   *              expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_0700';
    const diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '12345678' }
    );

    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_0800
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: '', number: '', pin2:'123@#ABCD'})
   *              promise interface when record is not exist,
   *              expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_0800';
    const diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: '', number: '' }
    );

    try {
      await wrapperStepForAdd(sim.GENERAL_CONTACT);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_1100
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 1, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2:'123@#ABCD'})
   *              promise interface, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_1100';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID1, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_1200
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 2, type: 1, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2:'123@#ABCD'})
   *              promise interface, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_1200';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID2, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_1300
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 0, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: correct pin2})
   *              promise interface, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_1300';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let diallingNumbersInfoUpdate = Object.assign(
      {}, FIXED_DIALING_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE0, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_1400
   * @tc.name     Test sim.updateIccDiallingNumbers(soltId: 0, type: 3, diallingNumbers:
   *              {recordNumber: 1, alphaTag: 'test_Update', number: '87654321', pin2: correct pin2})
   *              promise interface, expect enter error.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_1400';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let diallingNumbersInfoUpdate = Object.assign(
      {}, FIXED_DIALING_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, env.NUM_TYPE3, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_1600
   * @tc.name     Test the updateIccDiallingNumbers promise interface to update the common contact
   *              when puk2 is triggered, and check the callback value.
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_1600';
    if (passwordIsError()) {
      console.log(`${CASE_NAME} password is incorrect.`);
      done();
      return;
    }
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO, true);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === diallingNumbersInfoUpdate.recordNumber
        && record.alphaTag === diallingNumbersInfoUpdate.alphaTag
        && record.number === diallingNumbersInfoUpdate.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    await unlockPuk2();
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_1700
   * @tc.name     Test the updateIccDiallingNumbers promise interface to update the fixed dialing contact
   *              when puk2 is triggered, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_1700';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let diallingNumbersInfoUpdate = Object.assign(
      {}, FIXED_DIALING_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO, true);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
      await unlockPuk2();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
    }

    try {
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING);
      expect(numbers.some(record =>
        record.recordNumber === FIXED_DIALING_INFO.recordNumber
        && record.alphaTag === FIXED_DIALING_INFO.alphaTag
        && record.number === FIXED_DIALING_INFO.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    await unlockPuk2();
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_1800
   * @tc.name     Test the updateIccDiallingNumbers promise interface to input the wrong pin2 parameter
   *              when updating the fixed dialing contact, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_1800';
    if (fdnIsNotEnable) {
      console.log(`${CASE_NAME} fdn is not enable.`);
      done();
      return;
    }
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.FIXED_DIALING, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
    }

    try {
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.FIXED_DIALING);
      expect(numbers.some(record =>
        record.recordNumber === FIXED_DIALING_INFO.recordNumber
        && record.alphaTag === FIXED_DIALING_INFO.alphaTag
        && record.number === FIXED_DIALING_INFO.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_1900
   * @tc.name     Test the updateIccDiallingNumbers promise interface, input alphaTag exceeds
   *              12 characters without chinese characters, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_1900';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: '123#@%_ABCDEF', number: '87654321' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === diallingNumbersInfoUpdate.recordNumber
        && record.alphaTag === '123#@%_ABCDE'
        && record.number === diallingNumbersInfoUpdate.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_2000
   * @tc.name     Test the updateIccDiallingNumbers promise interface, input alphaTag exceeds
   *              6 characters including chinese characters, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_2000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_2000';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: '测试12345', number: '87654321' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === diallingNumbersInfoUpdate.recordNumber
        && record.alphaTag === '测试1234'
        && record.number === diallingNumbersInfoUpdate.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_2100
   * @tc.name     Test the updateIccDiallingNumbers promise interface, input number exceeds
   *              20 digits, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_2100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_2100';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '012345678901234567890' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === diallingNumbersInfoUpdate.recordNumber
        && record.alphaTag === diallingNumbersInfoUpdate.alphaTag
        && record.number === '01234567890123456789'
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_2200
   * @tc.name     Test the updateIccDiallingNumbers promise interface, input number is not
   *              pure number, and check the callback value
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_2200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_2200';
    let diallingNumbersInfoUpdate = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: 'ABCD_#$%^1234' }
    );

    try {
      await wrapperStepForQueryAndUpdate(env.SLOTID0, sim.GENERAL_CONTACT, FIXED_DIALING_INFO);
    } catch (error) {
      console.log(`${CASE_NAME} wrapperStepForQueryAndUpdate error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      console.log(`${CASE_NAME} update`);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdate);
      console.log(`${CASE_NAME} test fail.`);
      expect().assertFail();
      done();
      return;
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
    }

    try {
      console.log(`${CASE_NAME} query`);
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      expect(numbers.some(record =>
        record.recordNumber === FIXED_DIALING_INFO.recordNumber
        && record.alphaTag === FIXED_DIALING_INFO.alphaTag
        && record.number === FIXED_DIALING_INFO.number
        && record.pin2 === ''
      )).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_updateIccDiallingNumbers_Promise_2300
   * @tc.name     Test the updateiccdiallingnumbers async callback interface to update the scenario
   *              that the contact has the same name and number as the existing contact
   * @tc.desc     Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_2300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_updateIccDiallingNumbers_Promise_2300';
    const diallingNumbersInfo1 = Object.assign({}, GENERAL_CONTACT_INFO, { recordNumber: 2 });
    const diallingNumbersInfoUpdateLower = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_update', number: '87654321' }
    );
    const diallingNumbersInfoUpdateUpper = Object.assign(
      {}, GENERAL_CONTACT_INFO, { alphaTag: 'test_Update', number: '87654321' }
    );
    try {
      await deleteContact(env.SLOTID0, sim.GENERAL_CONTACT, GENERAL_CONTACT_INFO);
      await deleteContact(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfo1);
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, FIXED_DIALING_INFO);
      await sim.addIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdateLower);
      await sim.updateIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT, diallingNumbersInfoUpdateUpper);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const numbers = await sim.queryIccDiallingNumbers(env.SLOTID0, sim.GENERAL_CONTACT);
      const existRecod1 = numbers.some(record =>
        record.recordNumber === 1
        && record.alphaTag === diallingNumbersInfoUpdateUpper.alphaTag
        && record.number === diallingNumbersInfoUpdateUpper.number
        && record.pin2 === ''
      );
      const existRecod2 = numbers.some(record =>
        record.recordNumber === 2
        && record.alphaTag === diallingNumbersInfoUpdateLower.alphaTag
        && record.number === diallingNumbersInfoUpdateLower.number
        && record.pin2 === ''
      );
      expect(existRecod1 && existRecod2).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} test fail, error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });
});