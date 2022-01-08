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

describe('SmsMmsMessageTest', function () {
  const DIVIDE_MESSAGE_INTO_1 = 1;
  const DIVIDE_MESSAGE_INTO_2 = 2;
  const DIVIDE_MESSAGE_INTO_18 = 18;
  const MAX_CHAR_MESSAGE_LENTH = 146;
  const MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH = 137;
  const MAX_CHINESE_MESSAGE_LENTH = 63;
  const MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH = 60;
  const MAX_MESSAGE_LENTH = 2401;

  //****************createMessage CDMA************************
  var rawArrayNull = [];

  /** Indicates the SMS message body. */
  //visibleMessageBody: 'A';
  /** Indicates the address of the sender, which is to be displayed on the UI. */
  //visibleRawAddress: '153*922****';
  /** Indicates the SMS type. */
  //messageClass: sms.UNKNOWN;
  /** Indicates the protocol identifier. */
  //protocolId: 0;
  /** Indicates the short message service center (SMSC) address. */
  //scAddress: '';
  /** Indicates the SMSC timestamp. */
  //scTimestamp: 1312482177;
  /** Indicates whether the received SMS is a "replace short message". */
  //isReplaceMessage: false;
  /** Indicates whether the received SMS contains "TP-Reply-Path". */
  //hasReplyPath: false;
  /** Indicates Protocol Data Units (PDUs) from an SMS message. */
  //pdu: Array<number>;
  /**
     * Indicates the SMS message status from the SMS-STATUS-REPORT message sent by the
     * Short Message Service Center (SMSC).
     */
  //status: 0;
  /** Indicates whether the current message is SMS-STATUS-REPORT. */
  //isSmsStatusReportMessage: false;
  var OtherPduCDMA = [0x00, 0x00, 0x02, 0x10, 0x02, 0x02, 0x07, 0x02, 0xC5, 0x4E, 0xA4, 0x88,
    0x64, 0x9C, 0x06, 0x01, 0xFC, 0x08, 0x12, 0x00, 0x03, 0x10, 0x1B, 0xB0, 0x01, 0x03, 0x10, 0x0C, 0x10,
    0x03, 0x06, 0x11, 0x08, 0x04, 0x18, 0x22, 0x57
  ];
  const OTHER_BODY = 'A';
  const CDMA_OTHER_RAWADDR = '153*922****';
  const PDU_SC_TIMESTAMP = 1312482177;

  /** Indicates the SMS message body. */
  //visibleMessageBody: 'hello';
  /** Indicates the address of the sender, which is to be displayed on the UI. */
  //visibleRawAddress: '1**86';
  /** Indicates the SMS type. */
  //messageClass: sms.FORWARD_MESSAGE;
  /** Indicates the protocol identifier. */
  //protocolId: 0;
  /** Indicates the short message service center (SMSC) address. */
  //scAddress: '';
  /** Indicates the SMSC timestamp. */
  //scTimestamp: 943920000;
  /** Indicates whether the received SMS is a "replace short message". */
  //isReplaceMessage: false;
  /** Indicates whether the received SMS contains "TP-Reply-Path". */
  //hasReplyPath: false;
  /** Indicates Protocol Data Units (PDUs) from an SMS message. */
  //pdu: Array<number>;
  /**
     * Indicates the SMS message status from the SMS-STATUS-REPORT message sent by the
     * Short Message Service Center (SMSC).
     */
  //status: 0;
  /** Indicates whether the current message is SMS-STATUS-REPORT. */
  //isSmsStatusReportMessage: false;
  var pduCdma = [0x00,0x00,0x02,0x10,0x02,0x04,0x04,0x01,0x46,0xaa,0x18,0x06,0x01,0xfc,
    0x08,0x18,0x00,0x03,0x20,0x00,0x10,0x01,0x06,0x10,0x2e,0x8c,0xbb,0x36,0x6f,0x03,
    0x06,0x21,0x09,0x09,0x15,0x04,0x20,0x08,0x01,0x00
  ]
  const CDMA_BODY = 'hello';
  const CDMA_RAWADDR = '1**86';
  const CDMA_SC_TIMESTAMP = 943920000;

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_0100
   * @tc.name    set message to plain Chinese with a length of MAX_CHINESE_MESSAGE_LENTH(63) characters,
   *             and view the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_0100', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH;index++) {
      message += '中';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_0100 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_0100 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_0100 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_0100 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_0200
   * @tc.name    set message to pure Chinese and longer than MAX_CHINESE_MESSAGE_LENTH(64) characters,
   *             and view the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_0200', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 1;index++) {
      message += '中';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_0200 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_0200 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_0200 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_2).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_0200 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_0300
   * @tc.name    set message to pure Chinese and longer than MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH(60) characters,
   *             and view the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_0300', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += '中';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_0300 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_0300 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_0300 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_0300 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_0400
   * @tc.name    Set message to English and longer than MAX_CHAR_MESSAGE_LENTH (147). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_0400', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH + 1;index++) {
      message += 'a';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_0400 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_0400 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_0400 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_2).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_0400 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_0500
   * @tc.name    set message to pure English and MAX_CHAR_MESSAGE_LENTH (146) long, and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_0500', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += 'a';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_0500 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_0500 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_0500 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_0500 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_0600
   * @tc.name    set message to pure English and MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH (137) long,
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_0600', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += 'a';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_0600 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_0600 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_0600 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_0600 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_0700
   * @tc.name    Set message to number and longer than MAX_CHAR_MESSAGE_LENTH(147). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_0700', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH + 1;index++) {
      message += '2';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_0700 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_0700 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_0700 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_2).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_0700 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_0800
   * @tc.name    set message to a pure number of MAX_CHAR_MESSAGE_LENTH(146), and see what is returned
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_0800', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += '2';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_0800 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_0800 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_0800 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_0800 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_0900
   * @tc.name    set message to a pure number of MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH(137), and see what is returned
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_0900', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += '2';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_0900 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_0900 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_0900 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_0900 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_1000
   * @tc.name    Set message to special characters and longer than MAX_CHAR_MESSAGE_LENTH(147). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_1000', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH + 1;index++) {
      message += '?';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_1000 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_1000 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_1000 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_2).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_1000 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_1100
   * @tc.name    set message to a pure special character of MAX_CHAR_MESSAGE_LENTH(146), and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_1100', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += '?';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_1100 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_1100 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_1100 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_1100 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_1200
   * @tc.name    set message to a pure special character of MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH(137), and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_1200', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += '?';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_1200 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_1200 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_1200 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_1200 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_1300
   * @tc.name    Set message to a mixed character of MAX_CHINESE_MESSAGE_LENTH(63) characters and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_1300', 0, async function (done) {
    let message = '汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1A';
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_1300 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_1300 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_1300 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_1300 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_1400
   * @tc.name    Set message to Mixed character and longer than MAX_CHINESE_MESSAGE_LENTH(64). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_1400', 0, async function (done) {
    let message = '汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1A汉';
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_1400 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_1400 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_1400 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_2).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_1400 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_1500
   * @tc.name    Set message to a mixed character of MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH(60). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_1500', 0, async function (done) {
    let message = '汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#';
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_1500 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_1500 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_1500 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_1500 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_1600
   * @tc.name    Call the interface, set message to empty, and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_1600', 0, async function (done) {
    let message = '';
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_1600 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_1600 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_1600 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === 0).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_1600 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_1700
   * @tc.name    set message to pure English and MAX_MESSAGE_LENTH (2401), and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_1700', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_MESSAGE_LENTH;index++) {
      message += 'a';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_1700 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_1700 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_1700 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_18).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_1700 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_1800
   * @tc.name    Set message to a length greater than MAX_MESSAGE_LENTH(2402) ，and view the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Async_1800', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_MESSAGE_LENTH + 1;index++) {
      message += 'a';
    }
    sms.splitMessage(message, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_splitMessage_Async_1800 splitMessage on error because " + error.message);
        console.log('Telephony_SmsMms_splitMessage_Async_1800 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_splitMessage_Async_1800 splitMessage on value = " + JSON.stringify(result));
        expect(result.length === DIVIDE_MESSAGE_INTO_18).assertTrue();
        let getMessage = result.join('');
        let bodyMessage = message.substring(0, MAX_MESSAGE_LENTH);
        expect(getMessage === bodyMessage).assertTrue();
        console.log('Telephony_SmsMms_splitMessage_Async_1800 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_0100
   * @tc.name    set message to plain Chinese with a length of MAX_CHINESE_MESSAGE_LENTH(63) characters,
   *             and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_0100', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH;index++) {
      message += '中';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_0100 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log("Telephony_SmsMms_splitMessage_Promise_0100 splitMessage on err because " + err.message);
      console.log('Telephony_SmsMms_splitMessage_Promise_0100 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_0200
   * @tc.name    set message to pure Chinese and longer than MAX_CHINESE_MESSAGE_LENTH(64) characters,
   *             and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_0200', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 1;index++) {
      message += '中';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_0200 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_2).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log("Telephony_SmsMms_splitMessage_Promise_0200 splitMessage on err because " + err.message);
      console.log('Telephony_SmsMms_splitMessage_Promise_0200 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_0300
   * @tc.name    set message to pure Chinese and longer than MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH(60) characters,
   *             and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_0300', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += '中';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_0300 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log("Telephony_SmsMms_splitMessage_Promise_0300 splitMessage on err because " + err.message);
      console.log('Telephony_SmsMms_splitMessage_Promise_0300 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_0400
   * @tc.name    Set message to English and longer than MAX_CHAR_MESSAGE_LENTH (147). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_0400', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH + 1;index++) {
      message += 'a';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_0400 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_2).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_0400 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_0500
   * @tc.name    set message to pure English and MAX_CHAR_MESSAGE_LENTH (146) long, and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_0500', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += 'a';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_0500 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_0500 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_0600
   * @tc.name    set message to pure English and MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH (137) long, and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_0600', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += 'a';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_0600 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_0600 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_0700
   * @tc.name    Set message to number and longer than MAX_CHAR_MESSAGE_LENTH(147). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_0700', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH + 1;index++) {
      message += '2';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_0700 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_2).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_0700 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_0800
   * @tc.name    set message to a pure number of MAX_CHAR_MESSAGE_LENTH(146), and see what is returned
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_0800', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += '2';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_0800 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_0800 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_0900
   * @tc.name    set message to a pure number of MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH(137), and see what is returned
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_0900', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += '2';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_0900 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_0900 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_1000
   * @tc.name    Set message to special characters and longer than MAX_CHAR_MESSAGE_LENTH(147).
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_1000', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH + 1;index++) {
      message += '?';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_1000 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_2).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_1000 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_1100
   * @tc.name    set message to a pure special character of MAX_CHAR_MESSAGE_LENTH(146), and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_1100', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += '?';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_1100 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_1100 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_1200
   * @tc.name    set message to a pure special character of MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH(137), and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_1200', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += '?';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_1200 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_1200 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_1300
   * @tc.name    Set message to a mixed character of MAX_CHINESE_MESSAGE_LENTH(63) characters and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_1300', 0, async function (done) {
    let message = '汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1A';
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_1300 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_1300 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_1400
   * @tc.name    Set message to Mixed character and longer than MAX_CHINESE_MESSAGE_LENTH(64). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_1400', 0, async function (done) {
    let message = '汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1A汉';
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_1400 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_2).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_1400 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_1500
   * @tc.name    Set message to a mixed character of MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH(60). and see the result.
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_1500', 0, async function (done) {
    let message = '汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#';
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_1500 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_1).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_1500 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_1600
   * @tc.name    Call the interface, set message to empty, and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_1600', 0, async function (done) {
    let message = '';
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_1600 finish');
      expect(result.length === 0).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_1600 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_1700
   * @tc.name    set message to pure English and MAX_MESSAGE_LENTH (2401), and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_1700', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_MESSAGE_LENTH;index++) {
      message += 'a';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_1700 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_18).assertTrue();
      let getMessage = result.join('');
      expect(getMessage === message).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_1700 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_1800
   * @tc.name    Set message to a length greater than MAX_MESSAGE_LENTH(2402) ，and view the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_splitMessage_Promise_1800', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_MESSAGE_LENTH;index++) {
      message += 'a';
    }
    try {
      let result = await sms.splitMessage(message);
      console.log('Telephony_SmsMms_splitMessage_Promise_1800 finish');
      expect(result.length === DIVIDE_MESSAGE_INTO_18).assertTrue();
      let getMessage = result.join('');
      let bodyMessage = message.substring(0, MAX_MESSAGE_LENTH);
      expect(getMessage === bodyMessage).assertTrue();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_splitMessage_Promise_1800 fail');
    }
    done();
  });

  //*******************createMessage CDMA************************
  /*
   * @tc.number  Telephony_SmsMms_createMessage_Async_0600
   * @tc.name    Call interface CreateMessage,
   *             pass in the PDU(pduCDMA) in line with the coding specification, the specification is 3GPP2,
   *             shortMessage Don't empty
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_createMessage_Async_0600', 0, async function (done) {
    sms.createMessage(pduCdma, "3gpp2", (err, shortMessage) => {
      if (err) {
        expect().assertFail();
        console.log("Telephony_SmsMms_createMessage_Async_0600 fail");
        done();
        return;
      }
      expect(shortMessage.visibleMessageBody === CDMA_BODY).assertTrue();
      expect(shortMessage.visibleRawAddress.length === CDMA_RAWADDR.length).assertTrue();
      expect(shortMessage.messageClass === sms.FORWARD_MESSAGE).assertTrue();
      expect(shortMessage.protocolId === 0).assertTrue();
      expect(shortMessage.scAddress.length === 0).assertTrue();
      expect(shortMessage.scTimestamp === CDMA_SC_TIMESTAMP).assertTrue();
      expect(shortMessage.isReplaceMessage).assertFalse();
      expect(shortMessage.hasReplyPath).assertFalse();
      expect(shortMessage.pdu.length > 0).assertTrue();
      expect(shortMessage.status === 0).assertTrue();
      expect(shortMessage.isSmsStatusReportMessage).assertFalse();
      console.log("Telephony_SmsMms_createMessage_Async_0600 finish");
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_createMessage_Async_0700
   * @tc.name    Call interface CreateMessage,
   *             pass in the PDU(pduCDMA) in line with the coding specification, the specification is 3GPP2,
   *             shortMessage empty
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_createMessage_Async_0700', 0, async function (done) {
    sms.createMessage(rawArrayNull, "3gpp2", (err, shortMessage) => {
      if (err) {
        console.log("Telephony_SmsMms_createMessage_Async_0200 finish");
        done();
        return;
      }
      expect().assertFail();
      console.log("Telephony_SmsMms_createMessage_Async_0200 fail");
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_createMessage_Async_0800
   * @tc.name    Call interface CreateMessage,
   *             pass in the PDU(OtherPduCDMA) in line with the coding specification, the specification is 3GPP2,
   *             shortMessage Don't empty
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_createMessage_Async_0800', 0, async function (done) {
    sms.createMessage(OtherPduCDMA, "3gpp2", (err, shortMessage) => {
      if (err) {
        expect().assertFail();
        console.log("Telephony_SmsMms_createMessage_Async_0800 fail");
        done();
        return;
      }
      expect(shortMessage.visibleMessageBody === OTHER_BODY).assertTrue();
      expect(shortMessage.visibleRawAddress.length === CDMA_OTHER_RAWADDR.length).assertTrue();
      expect(shortMessage.messageClass === sms.UNKNOWN).assertTrue();
      expect(shortMessage.protocolId === 0).assertTrue();
      expect(shortMessage.scAddress.length === 0).assertTrue();
      expect(shortMessage.scTimestamp === PDU_SC_TIMESTAMP).assertTrue();
      expect(shortMessage.isReplaceMessage).assertFalse();
      expect(shortMessage.hasReplyPath).assertFalse();
      expect(shortMessage.pdu.length > 0).assertTrue();
      expect(shortMessage.status === 0).assertTrue();
      expect(shortMessage.isSmsStatusReportMessage).assertFalse();
      console.log("Telephony_SmsMms_createMessage_Async_0800 finish");
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_createMessage_Promise_0600
   * @tc.name    Call interface CreateMessage,
   *             pass in the PDU(pduCDMA) in line with the coding specification, the specification is 3GPP2,
   *             shortMessage Don't empty
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_createMessage_Promise_0600', 0, async function (done) {
    try {
      var promise = await sms.createMessage(pduCdma, '3gpp2');
      expect(promise.visibleMessageBody === CDMA_BODY).assertTrue();
      expect(promise.visibleRawAddress.length === CDMA_RAWADDR.length).assertTrue();
      expect(promise.messageClass === sms.FORWARD_MESSAGE).assertTrue();
      expect(promise.protocolId === 0).assertTrue();
      expect(promise.scAddress.length === 0).assertTrue();;
      expect(promise.scTimestamp === CDMA_SC_TIMESTAMP).assertTrue();
      expect(promise.isReplaceMessage).assertFalse();
      expect(promise.hasReplyPath).assertFalse();
      expect(promise.pdu.length > 0).assertTrue();
      expect(promise.status === 0).assertTrue();
      expect(promise.isSmsStatusReportMessage).assertFalse();
      console.log("Telephony_SmsMms_createMessage_Promise_0600 finish");
      done();
    } catch (err) {
      expect().assertFail();
      console.log("Telephony_SmsMms_createMessage_Promise_0600 fail");
      done();
    }
  });

  /*
   * @tc.number  Telephony_SmsMms_createMessage_Promise_0700
   * @tc.name    Call interface CreateMessage,
   *             The incoming PDU is empty, the specification is 3GPP2, The results for the err
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_createMessage_Promise_0700', 0, async function (done) {
    try {
      await sms.createMessage(rawArrayNull, '3gpp2');
      expect().assertFail();
      console.log("Telephony_SmsMms_createMessage_Promise_0400 fail");
      done();
    } catch (err) {
      console.log("Telephony_SmsMms_createMessage_Promise_0400 finish");
      done();
    }
  });

  /*
   * @tc.number  Telephony_SmsMms_createMessage_Promise_0800
   * @tc.name    Call interface CreateMessage,
   *             pass in the PDU(OtherPduCDMA) in line with the coding specification, the specification is 3GPP2,
   *             shortMessage Don't empty
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_createMessage_Promise_0800', 0, async function (done) {
    try {
      var promise = await sms.createMessage(OtherPduCDMA, '3gpp2');
      expect(promise.visibleMessageBody === OTHER_BODY).assertTrue();
      expect(promise.visibleRawAddress.length === CDMA_OTHER_RAWADDR.length).assertTrue();
      expect(promise.messageClass === sms.UNKNOWN).assertTrue();
      expect(promise.protocolId === 0).assertTrue();
      expect(promise.scAddress.length === 0).assertTrue();;
      expect(promise.scTimestamp === PDU_SC_TIMESTAMP).assertTrue();
      expect(promise.isReplaceMessage).assertFalse();
      expect(promise.hasReplyPath).assertFalse();
      expect(promise.pdu.length > 0).assertTrue();
      expect(promise.status === 0).assertTrue();
      expect(promise.isSmsStatusReportMessage).assertFalse();
      console.log("Telephony_SmsMms_createMessage_Promise_0800 finish");
      done();
    } catch (err) {
      expect().assertFail();
      console.log("Telephony_SmsMms_createMessage_Promise_0800 fail");
      done();
    }
  });

});