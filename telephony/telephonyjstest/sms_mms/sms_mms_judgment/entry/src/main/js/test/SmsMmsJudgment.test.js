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

describe('SmsMmsJudgmentTest', function () {
  const TRUE_SLOT_ID = 0;
  const FALSE_SLOT_ID = 9;
  const DIVIDE_MESSAGE_INTO_1 = 1;
  const DIVIDE_MESSAGE_INTO_2 = 2;
  const DIVIDE_MESSAGE_INTO_18 = 18;
  const MAX_CHAR_MESSAGE_LENTH = 146;
  const MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH = 137;
  const MAX_CHINESE_MESSAGE_LENTH = 63;
  const MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH = 60;
  const MAX_MESSAGE_LENTH = 2401;

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_0100
   * @tc.name    set message to plain Chinese with a length of MAX_CHINESE_MESSAGE_LENTH(63) characters,
   *             and view the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_0100', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH;index++) {
      message += '中';
    }
    let force7BitCode = true;
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, force7BitCode, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0100 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0100 fail');
        expect().assertFail();
      } else {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0100   splitCount " + result.splitCount);
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0100   encodeCount " + result.encodeCount);
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0100   encodeCountRemaining " +
            result.encodeCountRemaining);
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0100   scheme " + result.scheme);

        expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
        expect(result.encodeCount === MAX_CHINESE_MESSAGE_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0100   remaining " + remaining);
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0100 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_0200
   * @tc.name    set message to plain Chinese with a length of MAX_CHINESE_MESSAGE_LENTH(63) characters,
   *             force7BitCode is false, and view the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_0200', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH;index++) {
      message += '中';
    }
    let force7BitCode = false;
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, force7BitCode, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0200 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0200 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
        expect(result.encodeCount === MAX_CHINESE_MESSAGE_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHINESE_MESSAGE_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0200 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_0300
   * @tc.name    set message to pure Chinese and longer than MAX_CHINESE_MESSAGE_LENTH(64) characters,
   *             and view the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_0300', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 1;index++) {
      message += '中';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0300 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0300 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_2).assertTrue();
        expect(result.encodeCount === MAX_CHINESE_MESSAGE_LENTH + 1).assertTrue();
        let remaining = result.splitCount * MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0300 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_0400
   * @tc.name    set message to pure Chinese and longer than MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH(60) characters,
   *             and view the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_0400', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += '中';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0400 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0400 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
        expect(result.encodeCount === MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHINESE_MESSAGE_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0400 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_0500
   * @tc.name    Set message to English and longer than MAX_CHAR_MESSAGE_LENTH (147). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_0500', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH + 1;index++) {
      message += 'a';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0500 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0500 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_2).assertTrue();
        expect(result.encodeCount === MAX_CHAR_MESSAGE_LENTH + 1).assertTrue();
        let remaining = result.splitCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0500 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_0600
   * @tc.name    set message to pure English and MAX_CHAR_MESSAGE_LENTH (146) long, and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_0600', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += 'a';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0600 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0600 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
        expect(result.encodeCount === MAX_CHAR_MESSAGE_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0600 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_0700
   * @tc.name    set message to pure English and MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH (137) long,
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_0700', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += 'a';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0700 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0700 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
        expect(result.encodeCount === MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0700 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_0800
   * @tc.name    Set message to number and longer than MAX_CHAR_MESSAGE_LENTH(147). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_0800', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH + 1;index++) {
      message += '2';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0800 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0800 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_2).assertTrue();
        expect(result.encodeCount === MAX_CHAR_MESSAGE_LENTH + 1).assertTrue();
        let remaining = result.splitCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0800 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_0900
   * @tc.name    set message to a pure number of MAX_CHAR_MESSAGE_LENTH(146), and see what is returned
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_0900', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += '2';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_0900 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0900 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
        expect(result.encodeCount === MAX_CHAR_MESSAGE_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_0900 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_1000
   * @tc.name    set message to a pure number of MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH(137), and see what is returned
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_1000', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += '2';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_1000 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1000 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
        expect(result.encodeCount === MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1000 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_1100
   * @tc.name    Set message to special characters and longer than MAX_CHAR_MESSAGE_LENTH(147). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_1100', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH + 1;index++) {
      message += '?';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_1100 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1100 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_2).assertTrue();
        expect(result.encodeCount === MAX_CHAR_MESSAGE_LENTH + 1).assertTrue();
        let remaining = result.splitCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1100 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_1200
   * @tc.name    set message to a pure special character of MAX_CHAR_MESSAGE_LENTH(146), and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_1200', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += '?';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_1200 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1200 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
        expect(result.encodeCount === MAX_CHAR_MESSAGE_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1200 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_1300
   * @tc.name    set message to a pure special character of MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH(137), and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_1300', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += '?';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_1300 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1300 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
        expect(result.encodeCount === MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1300 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_1400
   * @tc.name    Set message to a mixed character of MAX_CHINESE_MESSAGE_LENTH(63) characters and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_1400', 0, async function (done) {
    let message = '汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1A';
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_1400 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1400 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
        expect(result.encodeCount === MAX_CHINESE_MESSAGE_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHINESE_MESSAGE_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1400 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_1500
   * @tc.name    Set message to Mixed character and longer than MAX_CHINESE_MESSAGE_LENTH(64). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_1500', 0, async function (done) {
    let message = '汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1A汉';
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_1500 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1500 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_2).assertTrue();
        expect(result.encodeCount === MAX_CHINESE_MESSAGE_LENTH + 1).assertTrue();
        let remaining = result.splitCount * MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1500 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_1600
   * @tc.name    Set message to a mixed character of MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH(60). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_1600', 0, async function (done) {
    let message = '汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#';
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_1600 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1600 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
        expect(result.encodeCount === MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHINESE_MESSAGE_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1600 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_1700
   * @tc.name    Call the interface, set message to empty, and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_1700', 0, async function (done) {
    let message = '';
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_1700 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1700 finish');
      } else {
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1700 fail');
        expect().assertFail();
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_1800
   * @tc.name    set message to pure English and MAX_MESSAGE_LENTH (2401), and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_1800', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_MESSAGE_LENTH;index++) {
      message += 'a';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_1800 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1800 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_18).assertTrue();
        expect(result.encodeCount === MAX_MESSAGE_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1800 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_1900
   * @tc.name    Set message to a length greater than MAX_MESSAGE_LENTH(2402) ，and view the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_1900', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_MESSAGE_LENTH + 1;index++) {
      message += 'a';
    }
    sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_1900 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1900 fail');
        expect().assertFail();
      } else {
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_18).assertTrue();
        expect(result.encodeCount === MAX_MESSAGE_LENTH).assertTrue();
        let remaining = result.splitCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_1900 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_2000
   * @tc.name    The passed argument is an error slotId, view the results
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_2000', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 1;index++) {
      message += '中';
    }
    sms.getSmsSegmentsInfo(FALSE_SLOT_ID, message, true, (error, result) => {
      if (error) {
        console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_2000 getSmsSegmentsInfoon error " + error.message);
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_2000 finish');
      } else {
        expect().assertFail();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_2000 fail');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_0100
   * @tc.name    set message to plain Chinese with a length of MAX_CHINESE_MESSAGE_LENTH(63) characters,
   *             and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0100', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH;index++) {
      message += '中';
    }
    let force7BitCode = true;
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, force7BitCode);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
      expect(result.encodeCount === MAX_CHINESE_MESSAGE_LENTH).assertTrue();
      let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0100 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0100 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_0200
   * @tc.name    set message to plain Chinese with a length of MAX_CHINESE_MESSAGE_LENTH(63) characters,
   *             force7BitCode is false, and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0200', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH;index++) {
      message += '中';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
      expect(result.encodeCount === MAX_CHINESE_MESSAGE_LENTH).assertTrue();
      let remaining = result.splitCount * MAX_CHINESE_MESSAGE_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0200 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0200 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_0300
   * @tc.name    set message to pure Chinese and longer than MAX_CHINESE_MESSAGE_LENTH(64) characters,
   *             and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0300', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 1;index++) {
      message += '中';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_2).assertTrue();
      expect(result.encodeCount === MAX_CHINESE_MESSAGE_LENTH + 1).assertTrue();
      let remaining = result.splitCount * MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0300 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0300 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_0400
   * @tc.name    set message to pure Chinese and longer than MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH(60) characters,
   *             and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0400', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += '中';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
      expect(result.encodeCount === MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH ).assertTrue();
      let remaining = result.splitCount * MAX_CHINESE_MESSAGE_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0400 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0400 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_0500
   * @tc.name    Set message to English and longer than MAX_CHAR_MESSAGE_LENTH (147). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0500', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH + 1;index++) {
      message += 'a';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_2).assertTrue();
      expect(result.encodeCount === MAX_CHAR_MESSAGE_LENTH + 1).assertTrue();
      let remaining = result.splitCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0500 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0500 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_0600
   * @tc.name    set message to pure English and MAX_CHAR_MESSAGE_LENTH (146) long, and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0600', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += 'a';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
      expect(result.encodeCount === MAX_CHAR_MESSAGE_LENTH).assertTrue();
      let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0600 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0600 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_0700
   * @tc.name    set message to pure English and MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH (137) long, and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0700', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += 'a';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
      expect(result.encodeCount === MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH).assertTrue();
      let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0700 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0700 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_0800
   * @tc.name    Set message to number and longer than MAX_CHAR_MESSAGE_LENTH(147). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0800', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH + 1;index++) {
      message += '2';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_2).assertTrue();
      expect(result.encodeCount === MAX_CHAR_MESSAGE_LENTH + 1).assertTrue();
      let remaining = result.splitCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0800 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0800 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_0900
   * @tc.name    set message to a pure number of MAX_CHAR_MESSAGE_LENTH(146), and see what is returned
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0900', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += '2';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
      expect(result.encodeCount === MAX_CHAR_MESSAGE_LENTH).assertTrue();
      let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0900 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_0900 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_1000
   * @tc.name    set message to a pure number of MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH(137), and see what is returned
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1000', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += '2';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
      expect(result.encodeCount === MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH).assertTrue();
      let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1000 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1000 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_1100
   * @tc.name    Set message to special characters and longer than MAX_CHAR_MESSAGE_LENTH(147).
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1100', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH + 1;index++) {
      message += '?';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_2).assertTrue();
      expect(result.encodeCount === MAX_CHAR_MESSAGE_LENTH + 1).assertTrue();
      let remaining = result.splitCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1100 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1100 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_1200
   * @tc.name    set message to a pure special character of MAX_CHAR_MESSAGE_LENTH(146), and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1200', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_LENTH;index++) {
      message += '?';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
      expect(result.encodeCount === MAX_CHAR_MESSAGE_LENTH).assertTrue();
      let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1200 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1200 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_1300
   * @tc.name    set message to a pure special character of MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH(137), and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1300', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH;index++) {
      message += '?';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
      expect(result.encodeCount === MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH).assertTrue();
      let remaining = result.splitCount * MAX_CHAR_MESSAGE_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1300 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1300 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_1400
   * @tc.name    Set message to a mixed character of MAX_CHINESE_MESSAGE_LENTH(63) characters and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1400', 0, async function (done) {
    let message = '汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1A';
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
      expect(result.encodeCount === MAX_CHINESE_MESSAGE_LENTH).assertTrue();
      let remaining = result.splitCount * MAX_CHINESE_MESSAGE_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1400 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1400 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_1500
   * @tc.name    Set message to Mixed character and longer than MAX_CHINESE_MESSAGE_LENTH(64). and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1500', 0, async function (done) {
    let message = '汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1A汉';
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_2).assertTrue();
      expect(result.encodeCount === MAX_CHINESE_MESSAGE_LENTH + 1).assertTrue();
      let remaining = result.splitCount * MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1500 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1500 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_1600
   * @tc.name    Set message to a mixed character of MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH(60). and see the result.
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1600', 0, async function (done) {
    let message = '汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#汉1Aa#';
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_1).assertTrue();
      expect(result.encodeCount === MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH).assertTrue();
      let remaining = result.splitCount * MAX_CHINESE_MESSAGE_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1600 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1600 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_1700
   * @tc.name    Call the interface, set message to empty, and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1700', 0, async function (done) {
    let message = '';
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1700 fail');
      expect().assertFail();
    } catch (err) {
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1700 finish');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_1800
   * @tc.name    set message to pure English and MAX_MESSAGE_LENTH (2401), and see the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1800', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_MESSAGE_LENTH;index++) {
      message += 'a';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_18).assertTrue();
      expect(result.encodeCount === MAX_MESSAGE_LENTH).assertTrue();
      let remaining = result.splitCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1800 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1800 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_1900
   * @tc.name    Set message to a length greater than MAX_MESSAGE_LENTH(2402) ，and view the result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1900', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_MESSAGE_LENTH;index++) {
      message += 'a';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false);
      expect(result.splitCount === DIVIDE_MESSAGE_INTO_18).assertTrue();
      expect(result.encodeCount === MAX_MESSAGE_LENTH).assertTrue();
      let remaining = result.splitCount * MAX_CHAR_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
      expect(result.encodeCountRemaining === remaining).assertTrue();
      expect(result.scheme === sms.SMS_ENCODING_7BIT).assertTrue();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1800 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_1900 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_2000
   * @tc.name    The passed argument is an error slotId, view the results
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_2000', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_MESSAGE_LENTH;index++) {
      message += 'a';
    }
    try {
      let result = await sms.getSmsSegmentsInfo(FALSE_SLOT_ID, message, true);
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_2000 fail');
      expect().assertFail();
    } catch (err) {
      console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_2000 finish');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_isImsSmsSupported_Async_0100
   * @tc.name    Check whether the Ims SMS function is supported
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_isImsSmsSupported_Async_0100', 0, async function (done) {
    sms.isImsSmsSupported((error, result) => {
      if (error) {
        console.log('Telephony_SmsMms_isImsSmsSupported_Async_0100 fail');
        expect().assertFail();
      } else {
        expect(result === true || result === false).assertFalse();
        console.log('Telephony_SmsMms_isImsSmsSupported_Async_0100 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_isImsSmsSupported_Promise_0100
   * @tc.name    Check whether the Ims SMS function is supported
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_isImsSmsSupported_Promise_0100', 0, async function (done) {
    try {
      let result = await sms.isImsSmsSupported();
      expect(result === true || result === false).assertFalse();
      console.log('Telephony_SmsMms_isImsSmsSupported_Promise_0100 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_isImsSmsSupported_Promise_0100 fail');
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_hasSmsCapability_0100
   * @tc.name    Check whether the Ims SMS function is supported
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_hasSmsCapability_0100', 0, async function (done) {
    let result = sms.hasSmsCapability();
    console.log('Telephony_SmsMms_hasSmsCapability_0100 result : ' + result);
    expect(result).assertTrue();
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getImsShortMessageFormat_Async_0100
   * @tc.name    call the interface to obtain SMS system
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getImsShortMessageFormat_Async_0100', 0, async function (done) {
    sms.getImsShortMessageFormat((error, result) => {
      if (error) {
        console.log('Telephony_SmsMms_getImsShortMessageFormat_Async_0100 fail');
        expect().assertFail();
      } else {
        expect(result === '3gpp').assertTrue();
        console.log('Telephony_SmsMms_getImsShortMessageFormat_Async_0100 finish');
      }
      done();
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_getImsShortMessageFormat_Promise_0100
   * @tc.name    call the interface to obtain SMS system
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_getImsShortMessageFormat_Promise_0100', 0, async function (done) {
    try {
      let result = await sms.getImsShortMessageFormat();
      expect(result === '3gpp').assertTrue();
      console.log('Telephony_SmsMms_getImsShortMessageFormat_Promise_0100 finish');
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_getImsShortMessageFormat_Promise_0100 fail');
    }
    done();
  });
});