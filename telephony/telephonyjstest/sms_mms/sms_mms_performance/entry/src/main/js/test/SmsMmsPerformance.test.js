/*
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
import sms from '@ohos.telephony.sms';
import {
  describe,
  beforeAll,
  beforeEach,
  afterEach,
  afterAll,
  it,
  expect
} from 'deccjsunit/index';

describe('SmsMmsPreTest', function () {
  let readOrigIndPath = '/data/telephony/deSrc/ReadOrigInd.mms';
  const SMS_SEND_DST_NUMBER = '';
  const MAX_CHINESE_MESSAGE_LENTH = 63;
  const TEST_RUN_TIME = 10;
  const TIME_SPAN = 5 * 2;
  const TRUE_SLOT_ID = 0;

  const IDENTIFIER_MIN = 0;
  const IDENTIFIER_MAX = 0xFFFF;
  const RANTYPE_GSM = 1;
  var rawArray = [
    0x30, 0x00, 0x01, 0x00, 0x0D, 0x91, 0x68, 0x71, 0x26, 0x30,
    0x37, 0x25, 0xF7, 0x00, 0x08, 0x10, 0x54, 0xC8, 0x7F, 0x57,
    0xFF, 0x01, 0x00, 0x7A, 0x00, 0x65, 0x00, 0x73, 0x00, 0x74, 0x30, 0x02
  ];

  const OTHER_SMSC_NUMBER = '+8613800755***';
  const USABLE_SMSC_NUMBER = '+8613800512***';
  const CORRECT_SMS_PDU = '01000F9168683106019196F400080A00680065006C006C006F';
  const RECEIVE_SMS_PDU = '240D91689141468496F600001270721142432302B319';

  var dataScAddr = '';
  var defaultSmsSlotid = 0;
  beforeAll(async function () {
    sms.getSmscAddr(TRUE_SLOT_ID, (geterr, getresult) => {
      if (geterr) {
        return;
      }
      dataScAddr = getresult
    });
    sms.getDefaultSmsSlotId((geterr, getresult) => {
      if (geterr) {
        return;
      }
      defaultSmsSlotid = getresult;
    });
    //Delete all SMS messages from the SIM card
    sms.getAllSimMessages(TRUE_SLOT_ID, (geterr, getresult) => {
      if (geterr) {
        return;
      }
      if (getresult.length !== 0) {
        for (let index = 0; index < getresult.length; ++index) {
          sms.delSimMessage(TRUE_SLOT_ID, getresult[index].indexOnSim, (err) => {});
        }
      }
    });
  });

  beforeEach(async function () {
    sms.setSmscAddr(TRUE_SLOT_ID, dataScAddr, (err) => {});
    sms.setDefaultSmsSlotId(defaultSmsSlotid, (err) => {});
    //Delete all SMS messages from the SIM card
    sms.getAllSimMessages(TRUE_SLOT_ID, (geterr, getresult) => {
      if (geterr) {
        return;
      }
      if (getresult.length !== 0) {
        for (let index = 0; index < getresult.length; ++index) {
          sms.delSimMessage(TRUE_SLOT_ID, getresult[index].indexOnSim, (err) => {});
        }
      }
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_sendMessage_1500
   * @tc.name    The loop calls the interface SendMessage10 times,
   *             Delay < TIME_SPAN
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_sendMessage_1500', 0, async function (done) {
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;

    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_sendMessage_1500 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_sendMessage_1500 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.sendMessage({
        slotId: TRUE_SLOT_ID,
        destinationHost: SMS_SEND_DST_NUMBER,
        content: 'hello',
        sendCallback: (err, value) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            expect().assertFail();
            console.log('Telephony_SmsMms_sendMessage_1500 fail');
            done();
            return;
          }
          recursive(n - 1);
        },
        deliveryCallback: (err, value) => {
          if (err) {
            expect().assertFail();
            console.log('Telephony_SmsMms_sendMessage_1500 fail');
            done()
            return;
          }
          console.log(`deliveryCallback success sendResult = ${value.pdu}`);
        }
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /*
   * @tc.number  Telephony_SmsMms_createMessage_Async_0400
   * @tc.name    Loop through the createMessage() TEST_RUN_TIME times,
   *             Time delay < TIME_SPAN
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_createMessage_Async_0400', 0, async function (done) {
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_createMessage_Async_0400 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_createMessage_Async_0400 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.createMessage(rawArray, '3gpp', (err, shortMessage) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /*
   * @tc.number  Telephony_SmsMms_createMessage_Promise_0400
   * @tc.name    Loop through the createMessage() TEST_RUN_TIME times promise,
   *             Time delay < TIME_SPAN
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_createMessage_Promise_0400', 0, async function (done) {
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.createMessage(rawArray, '3gpp');
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_createMessage_Promise_0400 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_createMessage_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number   Telephony_SmsMms_setSmscAddr_Async_1100
   * @tc.name     The loop calls SetSmscAddr() TEST_RUN_TIME times,
   *              Determine that the running time is less than TIME_SPAN
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_setSmscAddr_Async_1100', 0, async function (done) {
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    let curAddr = USABLE_SMSC_NUMBER;

    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_setSmscAddr_Async_1100 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_setSmscAddr_Async_1100 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.setSmscAddr(TRUE_SLOT_ID, curAddr, (err) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /**
   * @tc.number   Telephony_SmsMms_getDefaultSmsSlotId_Async_0400
   * @tc.name     The loop calls GetDefaultSmsSlotId() TEST_RUN_TIME times,
   *              Determine that the running time is less than TIME_SPAN
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_getDefaultSmsSlotId_Async_0300', 0, async function (done) {
    let slotId = TRUE_SLOT_ID;
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_getDefaultSmsSlotId_Async_0300 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_getDefaultSmsSlotId_Async_0300 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.getDefaultSmsSlotId((err, result) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /**
   * @tc.number   Telephony_SmsMms_setDefaultSmsSlotId_Promise_0400
   * @tc.name     The loop calls setDefaultSmsSlotId() TEST_RUN_TIME times,
   *              Determine that the running time is less than TIME_USEC_500
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_setDefaultSmsSlotId_Promise_0400', 0, async function (done) {
    let slotId = TRUE_SLOT_ID;
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.setDefaultSmsSlotId(slotId);
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_setDefaultSmsSlotId_Promise_0400 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_setDefaultSmsSlotId_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number   Telephony_SmsMms_setDefaultSmsSlotId_Async_0400
   * @tc.name     The loop calls setDefaultSmsSlotId() TEST_RUN_TIME times,
   *              Determine that the running time is less than TIME_SPAN
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_setDefaultSmsSlotId_Async_0400', 0, async function (done) {
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;

    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_setDefaultSmsSlotId_Async_0400 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_setDefaultSmsSlotId_Async_0400 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.setDefaultSmsSlotId(TRUE_SLOT_ID, (err) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /**
   * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_1200
   * @tc.name     The loop calls setCBRangeConfig() TEST_RUN_TIME times,
   *              Determine that the running time is less than TIME_USEC_500
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_setCBRangeConfig_Promise_1200', 0, async function (done) {
    let data = {
      slotId: TRUE_SLOT_ID,
      enable: true,
      startMessageId: IDENTIFIER_MIN,
      endMessageId: IDENTIFIER_MAX,
      ranType: RANTYPE_GSM
    };
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.setCBRangeConfig(data);
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_setCBRangeConfig_Promise_1200 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_setCBRangeConfig_Promise_1200 finish');
    done();
  });

  /**
   * @tc.number   Telephony_SmsMms_setCBConfig_Promise_1400
   * @tc.name     The loop calls SetCBConfig() LOOP_MULTITUDE_NUMBER times,
   *              Determine that the running time is less than TIME_USEC_500
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_setCBConfig_Promise_1400', 0, async function (done) {
    let data = {
      slotId: TRUE_SLOT_ID,
      enable: true,
      identifier: IDENTIFIER_MIN,
      ranType: RANTYPE_GSM
    };
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.setCBConfig(data);
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_setCBConfig_Promise_1400 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_setCBConfig_Promise_1400 finish');
    done();
  });

  /**
   * @tc.number   Telephony_SmsMms_setCBConfig_Async_1400
   * @tc.name     The loop calls SetCBConfig() TEST_RUN_TIME times,
   *              Determine that the running time is less than TIME_USEC_500
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_setCBConfig_Async_1400', 0, async function (done) {
    let data = {
      slotId: TRUE_SLOT_ID,
      enable: true,
      startMessageId: IDENTIFIER_MIN,
      endMessageId: IDENTIFIER_MAX,
      ranType: RANTYPE_GSM
    };
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_setCBConfig_Async_1400 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_setCBConfig_Async_1400 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.setCBConfig(data, (err) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /**
   * @tc.number   Telephony_SmsMms_getSmscAddr_Promise_0400
   * @tc.name     The loop calls getSmscAddr() LOOP_MULTITUDE_NUMBER times,
   *              Determine that the running time is less than TIME_USEC_500
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_getSmscAddr_Promise_0400', 0, async function (done) {
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.getSmscAddr(TRUE_SLOT_ID);
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_getSmscAddr_Promise_0400 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_getSmscAddr_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number   Telephony_SmsMms_getSmscAddr_Async_0400
   * @tc.name     The loop calls getSmscAddr() LOOP_MULTITUDE_NUMBER times,
   *              Determine that the running time is less than TIME_USEC_500
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_getSmscAddr_Async_0400', 0, async function (done) {
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;

    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_getSmscAddr_Async_0400 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_getSmscAddr_Async_0400 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.getSmscAddr(TRUE_SLOT_ID, (err, result) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /**
   * @tc.number   Telephony_SmsMms_setSmscAddr_Promise_1100
   * @tc.name     The loop calls SetSmscAddr() TEST_RUN_TIME times,
   *              Determine that the running time is less than TIME_SPAN
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_setSmscAddr_Promise_1100', 0, async function (done) {
    const startTime = (new Date).getTime();
    let curAddr = OTHER_SMSC_NUMBER;
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.setSmscAddr(TRUE_SLOT_ID, curAddr);
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_setSmscAddr_Promise_1100 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_setSmscAddr_Promise_1100 finish');
    done();
  });

  /**
   * @tc.number   Telephony_SmsMms_getDefaultSmsSlotId_Promise_0400
   * @tc.name     The loop calls GetDefaultSmsSlotId() TEST_RUN_TIME times,
   *              Determine that the running time is less than TIME_SPAN
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_getDefaultSmsSlotId_Promise_0300', 0, async function (done) {
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.getDefaultSmsSlotId();
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_getDefaultSmsSlotId_Promise_0300 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_getDefaultSmsSlotId_Promise_0300 finish');
    done();
  });

  /**
   * @tc.number   Telephony_SmsMms_getAllSIMMessages_Promise_0400
   * @tc.name     The loop calls getAllSimMessages() TEST_RUN_TIME times,
   *              Determine that the running time is less than TIME_SPAN
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_getAllSIMMessages_Promise_0400', 0, async function (done) {
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.getAllSimMessages(TRUE_SLOT_ID);
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_getAllSIMMessages_Promise_0400 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_getAllSIMMessages_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number   Telephony_SmsMms_getAllSIMMessages_Async_0400
   * @tc.name     The loop calls getAllSimMessages() TEST_RUN_TIME times,
   *              Determine that the running time is less than TIME_SPAN
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_getAllSIMMessages_Async_0400', 0, async function (done) {
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;

    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_getAllSIMMessages_Async_0400 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_getAllSIMMessages_Async_0400 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.getAllSimMessages(TRUE_SLOT_ID, (err, result) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /**
   * @tc.number   Telephony_SmsMms_updateSimMessage_Async_2500
   * @tc.name     The loop calls updateSIMMessage() TEST_RUN_TIME times,
   *              Determine that the running time is less than TIME_USEC_500
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_updateSimMessage_Async_2500', 0, async function (done) {
    let upData = {
      slotId: TRUE_SLOT_ID,
      msgIndex: 0,
      newStatus: sms.MESSAGE_HAVE_READ,
      pdu: RECEIVE_SMS_PDU,
      smsc: ''
    };
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;

    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_updateSimMessage_Async_2500 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_updateSimMessage_Async_2500 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.updateSimMessage(upData, (err) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /**
   * @tc.number   Telephony_SmsMms_updateSimMessage_Promise_2300
   * @tc.name     The loop calls updateSIMMessage() TEST_RUN_TIME times,
   *              Determine that the running time is less than TIME_USEC_500
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_updateSimMessage_Promise_2300', 0, async function (done) {
    let upData = {
      slotId: TRUE_SLOT_ID,
      msgIndex: 0,
      newStatus: sms.MESSAGE_HAS_BEEN_SENT,
      pdu: RECEIVE_SMS_PDU,
      smsc: ''
    };
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.updateSimMessage(upData);
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_updateSimMessage_Promise_2300 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_updateSimMessage_Promise_2300 finish');
    done();
  });

  /**
   * @tc.number   Telephony_SmsMms_addSimMessage_Async_2000
   * @tc.name     loops Failed to save SMS to SIM LOOP_MULTITUDE_NUMBER,
   *              Determine that the running time is less than TIME_USEC_500
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_addSimMessage_Async_2000', 0, async function (done) {
    let data = {
      slotId: TRUE_SLOT_ID,
      smsc: '',
      pdu: CORRECT_SMS_PDU,
      status: sms.MESSAGE_NOT_SENT
    };
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;

    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_addSimMessage_Async_2000 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_addSimMessage_Async_2000 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.addSimMessage(data, (err) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /**
   * @tc.number   Telephony_SmsMms_addSimMessage_Promise_2000
   * @tc.name     loops Failed to save SMS to SIM LOOP_MULTITUDE_NUMBER,
   *              Determine that the running time is less than TIME_USEC_500
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_addSimMessage_Promise_2000', 0, async function (done) {
    const startTime = (new Date).getTime();
    let data = {
      slotId: TRUE_SLOT_ID,
      smsc: '',
      pdu: CORRECT_SMS_PDU,
      status: sms.MESSAGE_NOT_SENT
    };
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.addSimMessage(data);
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_addSimMessage_Promise_2000 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_addSimMessage_Promise_2000 finish');
    done();
  });

  /**
   * @tc.number   Telephony_SmsMms_delSimMessage_Async_0600
   * @tc.name     loops Deletes a text message from the SIM card LOOP_MULTITUDE_NUMBER,
   *              Determine that the running time is less than TIME_USEC_500
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_delSimMessage_Async_0600', 0, async function (done) {
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;

    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_delSimMessage_Async_0600 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_delSimMessage_Async_0600 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.delSimMessage(TRUE_SLOT_ID, 0, (err) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /**
   * @tc.number   Telephony_SmsMms_delSimMessage_Promise_0600
   * @tc.name     loops Deletes a text message from the SIM card TEST_RUN_TIME,
   *              Determine that the running time is less than TIME_USEC_500
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_delSimMessage_Promise_0600', 0, async function (done) {
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.delSimMessage(TRUE_SLOT_ID, 0);
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_delSimMessage_Promise_0600 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_delSimMessage_Promise_0600 finish');
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_2000
   * @tc.name    Loop through the splitMessage interface 10 times, check the average return time. 500 mu s
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_splitMessage_Async_2000', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 2;index++) {
      message += '中';
    }
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_splitMessage_Async_2000 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_splitMessage_Async_2000 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.splitMessage(message, (error, result) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_2000
   * @tc.name    Loop through the splitMessage interface 10 times, check the average return time. 500 mu s
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_splitMessage_Promise_2000', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 1;index++) {
      message += '中';
    }
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.splitMessage(message);
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_splitMessage_Promise_2000 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_splitMessage_Promise_2000 finish');
    done();
  });


  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_1200
   * @tc.name     Loop through the decodeMms() TEST_RUN_TIME times, Time delay < TIME_SPAN
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_decodeMms_Async_1200', 0, async function (done) {
    var readOrigIndPath = '/data/telephony/deSrc/ReadOrigInd.mms';
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_decodeMms_Async_1200 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_decodeMms_Async_1200 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.decodeMms(readOrigIndPath, (err, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Promise_1200
   * @tc.name     Loop through the decodeMms() TEST_RUN_TIME times, Time delay < TIME_SPAN
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_decodeMms_Promise_1200', 0, async function (done) {
    var readOrigIndPath = '/data/telephony/deSrc/ReadOrigInd.mms';
    let startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.decodeMms(readOrigIndPath);
    }
    let endTime = (new Date).getTime();
    let totalTime = endTime - startTime;
    expect(totalTime).assertLess(TIME_SPAN);
    console.log(`Telephony_SmsMms_decodeMms_Promise_1200 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_decodeMms_Promise_1200 finish');
    done();
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Async_1100
   * @tc.name     Loop through the encodeMms() TEST_RUN_TIME times, Time delay < TIME_SPAN
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_encodeMms_Async_1100', 0, async function (done) {
    let mmsType = {
      version: sms.MMS_VERSION_1_1,
      messageId: "0001",
      to: [{address: "+861388888****/TYPE=PLMN", charset: sms.UTF_8}],
      "from": {address: "+861381234****/TYPE=PLMN", charset: sms.UTF_8},
      date: 1639378126,
      readStatus: 129,
    };
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_encodeMms_Async_1100 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_encodeMms_Async_1100 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.encodeMms({messageType: sms.TYPE_MMS_READ_ORIG_IND, mmsType}, (err, encodeData) =>{
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Promise_1100
   * @tc.name     Loop through the encodeMms() TEST_RUN_TIME times, Time delay < TIME_SPAN
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_encodeMms_Promise_1100', 0, async function (done) {
    let mmsType = {
      version: sms.MMS_VERSION_1_1,
      messageId: "0001",
      to: [{address: "+861388888****/TYPE=PLMN", charset: sms.UTF_8}],
      "from": {address: "+861381234****/TYPE=PLMN", charset: sms.UTF_8},
      date: 1639378126,
      readStatus: 129,
    };
    let startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.encodeMms({messageType: sms.TYPE_MMS_READ_ORIG_IND, mmsType});
    }
    let endTime = (new Date).getTime();
    let totalTime = endTime - startTime;
    expect(totalTime).assertLess(TIME_SPAN);
    console.log(`Telephony_SmsMms_encodeMms_Promise_1100 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_encodeMms_Promise_1100 finish');
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_hasSmsCapability_0300
   * @tc.name    Loop through the hasSmsCapability() interface TEST_RUN_TIME times,
   *             The average inspection time does not exceed TIME_SPAN
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_hasSmsCapability_0300', 0, async function (done) {
    let startTime = new Date().getTime();
    for(let i = 0; i < TEST_RUN_TIME; ++i) {
      sms.hasSmsCapability();
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_hasSmsCapability_0300 exec done useTime:${totalTime}`);
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_2200
   * @tc.name    Loop through the getSmsSegmentsInfo() interface TEST_RUN_TIME times,
   *             The average inspection time does not exceed TIME_SPAN
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_2200', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 1;index++) {
      message += '中';
    }
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_getSmsSegmentsInfo_Async_2200 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_2200 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_2200
   * @tc.name    Loop through the getSmsSegmentsInfo() interface TEST_RUN_TIME times,
   *             The average inspection time does not exceed TIME_SPAN
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_2200', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 1;index++) {
      message += '中';
    }
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
      await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_getSmsSegmentsInfo_Promise_2200 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_2200 finish');
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_isImsSmsSupported_Async_0300
   * @tc.name    Loop through the isImsSmsSupported() interface TEST_RUN_TIME times,
   *             The average inspection time does not exceed TIME_SPAN
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_isImsSmsSupported_Async_0300', 0, async function (done) {
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_isImsSmsSupported_Async_0300 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_isImsSmsSupported_Async_0300 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.isImsSmsSupported((error, result) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /*
   * @tc.number  Telephony_SmsMms_isImsSmsSupported_Promise_0300
   * @tc.name    Loop through the isImsSmsSupported() interface TEST_RUN_TIME times,
   *             The average inspection time does not exceed TIME_SPAN
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_isImsSmsSupported_Promise_0300', 0, async function (done) {
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.isImsSmsSupported();
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_isImsSmsSupported_Promise_0300 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_isImsSmsSupported_Promise_0300 finish');
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getImsShortMessageFormat_Async_0400
   * @tc.name    Loop through the getImsShortMessageFormat() interface TEST_RUN_TIME times,
   *             The average inspection time does not exceed TIME_SPAN
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_getImsShortMessageFormat_Async_0400', 0, async function (done) {
    let totalTime = 0;
    let startTime = 0;
    let endTime = 0;
    function recursive (n) {
      if (n <= 0) {
        console.log(`Telephony_SmsMms_getImsShortMessageFormat_Async_0400 exec done useTime:${totalTime}`);
        console.log('Telephony_SmsMms_getImsShortMessageFormat_Async_0400 finish');
        expect(totalTime).assertLess(TIME_SPAN);
        done();
        return;
      }
      startTime = new Date().getTime();
      sms.getImsShortMessageFormat((error, result) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /*
   * @tc.number  Telephony_SmsMms_getImsShortMessageFormat_Promise_0400
   * @tc.name    Loop through the getImsShortMessageFormat() interface TEST_RUN_TIME times,
   *             The average inspection time does not exceed TIME_SPAN
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_getImsShortMessageFormat_Promise_0400', 0, async function (done) {
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
        await sms.getImsShortMessageFormat();
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    let totalTime = endTime - startTime;
    console.log(`Telephony_SmsMms_getImsShortMessageFormat_Promise_0400 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_getImsShortMessageFormat_Promise_0400 finish');
    done();
  });
});