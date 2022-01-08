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

  const MAX_CHINESE_MESSAGE_LENTH = 63;
  const TEST_RUN_TIME = 10;
  const TIME_SPAN = 5;

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
        if (error) {
          console.log("Telephony_SmsMms_splitMessage_Async_2000 splitMessage on error because " + error.message);
          console.log('Telephony_SmsMms_splitMessage_Async_2000 fail');
          expect().assertFail();
          done();
          return;
        }
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
      try {
        await sms.splitMessage(message);
      } catch (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_splitMessage_Promise_2000 fail');
        done();
        return;
      }
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    console.log('Telephony_SmsMms_splitMessage_Promise_2000 finish');
    done();
  });
});