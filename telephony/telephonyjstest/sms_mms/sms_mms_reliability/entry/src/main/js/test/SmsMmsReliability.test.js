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

describe('SmsMmsRelTest', function () {
  const TEST_RUN_TIME = 10;
  const MAX_CHINESE_MESSAGE_LENTH = 63;
  const DIVIDE_MESSAGE_INTO_2 = 2;

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Async_1900
   * @tc.name    Loop through the splitMessage interface 10 times and check the result
   * @tc.desc    Reliability test
   */
  it('Telephony_SmsMms_splitMessage_Async_1100', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 2;index++) {
      message += '中';
    }
    function recursive (n) {
      if (n <= 0) {
        console.log('Telephony_SmsMms_splitMessage_Async_1900 finish');
        done();
        return;
      }
      sms.splitMessage(message, (error, result) => {
        if (error) {
          console.log("Telephony_SmsMms_splitMessage_Async_1900 splitMessage on error because " + error.message);
          console.log('Telephony_SmsMms_splitMessage_Async_1900 fail');
          expect().assertFail();
        } else {
          console.log("Telephony_SmsMms_splitMessage_Async_1900 splitMessage on value = " + JSON.stringify(result));
          expect(result.length === DIVIDE_MESSAGE_INTO_2).assertTrue();
          let getMessage = result.join('');
          expect(getMessage === message).assertTrue();
        }
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /*
   * @tc.number  Telephony_SmsMms_splitMessage_Promise_1900
   * @tc.name    Loop through the splitMessage interface 10 times and check the result
   * @tc.desc    Reliability test
   */
  it('Telephony_SmsMms_splitMessage_Promise_1900', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 1;index++) {
      message += '中';
    }
    for (let index = 0;index < TEST_RUN_TIME;index++) {
      try {
        let result = await sms.splitMessage(message);
        expect(result.length === DIVIDE_MESSAGE_INTO_2).assertTrue();
        let getMessage = result.join('');
        expect(getMessage === message).assertTrue();
        if (index === TEST_RUN_TIME - 1) {
          console.log('Telephony_SmsMms_splitMessage_Promise_1900  finish');
          done();
        }
      } catch (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_splitMessage_Promise_1900  fail');
        done();
        return;
      }
    }
  });
});