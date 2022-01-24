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

describe('SmsMmsTest', function () {
  const SMS_SEND_DST_NUMBER = '13632862140';
  const MAX_TEST = 160;

  const TRUE_SLOT_ID = 0;
  const FALSE_SLOT_ID = 9;

  /*
   * @tc.number  Telephony_SmsMms_sendMessage_1800
   * @tc.name    In THE CDMA network system, call SendMessage, enter it as normal, and check the return result
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_sendMessage_1800', 0, async function (done) {
    sms.sendMessage({
      slotId: TRUE_SLOT_ID,
      destinationHost: SMS_SEND_DST_NUMBER,
      content: '111111',
      sendCallback: (err, value) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_sendMessage_1800 sendCallback fail');
          done();
          return;
        }
        console.log(`sendCallback success sendResult = ${value.result}`);
        expect(value.result === sms.SEND_SMS_SUCCESS).assertTrue();
        console.log('Telephony_SmsMms_sendMessage_1800 sendCallback finish');
        done()
      },
      deliveryCallback: () => {}
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_sendMessage_1900
   * @tc.name    In THE CDMA network system,
   *             Call the interface SendMessage and set the length of "Content" to the maximum(MAX_TEST),
   *             and send a short message successfully
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_sendMessage_1900', 0, async function (done) {
    const COUNT = MAX_TEST;
    let str = '';
    for (let index = 0;index < COUNT;index++) {
      str += 't';
    }
    sms.sendMessage({
      slotId: TRUE_SLOT_ID,
      destinationHost: SMS_SEND_DST_NUMBER,
      content: str,
      sendCallback: (err, value) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_sendMessage_1900 sendCallback fail');
          done();
          return;
        }
        console.log(`sendCallback success sendResult = ${value.result}`);
        expect(value.result === sms.SEND_SMS_SUCCESS).assertTrue();
        console.log('Telephony_SmsMms_sendMessage_1900 sendCallback finish');
        done()
      },
      deliveryCallback: () => {}
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_sendMessage_2000
   * @tc.name    In THE CDMA network system,
   *             Call the SendMessage interface and set the length of "Content" to exceed the maximum value,
   *             and send a short message successfully
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_sendMessage_2000', 0, async function (done) {
    const COUNT = MAX_TEST + 1;
    let str = '';
    for (let index = 0;index < COUNT;index++) {
      str += 't';
    }
    sms.sendMessage({
      slotId: TRUE_SLOT_ID,
      destinationHost: SMS_SEND_DST_NUMBER,
      content: str,
      sendCallback: (err, value) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_sendMessage_2000 sendCallback fail');
          done();
          return;
        }
        console.log(`sendCallback success sendResult = ${value.result}`);
        expect(value.result === sms.SEND_SMS_SUCCESS).assertTrue();
        console.log('Telephony_SmsMms_sendMessage_2000 sendCallback finish');
        done()
      },
      deliveryCallback: () => {}
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_sendMessage_2100
   * @tc.name    Call the interface SendMessage,In THE CDMA network system,
   *             set the content "Content" as the content of Chinese character type,
   *             and send a short message successfully
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_sendMessage_2100', 0, async function (done) {
    sms.sendMessage({
      slotId: TRUE_SLOT_ID,
      destinationHost: SMS_SEND_DST_NUMBER,
      content: '中文',
      sendCallback: (err, value) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_sendMessage_2100 sendCallback fail');
          done();
          return;
        }
        console.log(`sendCallback success sendResult = ${value.result}`);
        expect(value.result === sms.SEND_SMS_SUCCESS).assertTrue();
        console.log('Telephony_SmsMms_sendMessage_2100 sendCallback finish');
        done()
      },
      deliveryCallback: () => {}
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_sendMessage_2200
   * @tc.name    Call the interface sendMessage,In THE CDMA network system,
   *             set the content "content" to a single byte character (English alphabet or number) type of content,
   *             send a short message successfully
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_sendMessage_2200', 0, async function (done) {
    sms.sendMessage({
      slotId: TRUE_SLOT_ID,
      destinationHost: SMS_SEND_DST_NUMBER,
      content: 'hhhAAA112089',
      sendCallback: (err, value) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_sendMessage_2200 sendCallback fail');
          done();
          return;
        }
        console.log(`sendCallback success sendResult = ${value.result}`);
        expect(value.result === sms.SEND_SMS_SUCCESS).assertTrue();
        console.log('Telephony_SmsMms_sendMessage_2200 sendCallback finish');
        done()
      },
      deliveryCallback: () => {}
    });
  });

  /*
   * @tc.number  Telephony_SmsMms_sendMessage_2300
   * @tc.name    Call the interface sendMessage,In THE CDMA network system,
   *             set the content "content" to the content of special character type,
   *             and send the short message successfully
   * @tc.desc    Function test
   */
  it('Telephony_SmsMms_sendMessage_2300', 0, async function (done) {
    sms.sendMessage({
      slotId: TRUE_SLOT_ID,
      destinationHost: SMS_SEND_DST_NUMBER,
      content: 'ㄅㄆ$￡á ǎ㊊↑◎┴%@&*^#',
      sendCallback: (err, value) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_sendMessage_2300 sendCallback fail');
          done();
          return;
        }
        console.log(`sendCallback success sendResult = ${value.result}`);
        expect(value.result === sms.SEND_SMS_SUCCESS).assertTrue();
        console.log('Telephony_SmsMms_sendMessage_2300 sendCallback finish');
        done()
      },
      deliveryCallback: () => {}
    });
  });
});