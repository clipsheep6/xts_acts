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
  const TRUE_SLOT_ID = 0;
  const MAX_CHINESE_MESSAGE_LENTH = 63;
  const TEST_RUN_TIME = 10;
  const TIME_SPAN = 5;

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
        if (error) {
          console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_2200 getSmsSegmentsInfo on error " + error.message);
          console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_2200 fail');
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
        if (error) {
          console.log('Telephony_SmsMms_isImsSmsSupported_Async_0300 fail');
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
   * @tc.number  Telephony_SmsMms_isImsSmsSupported_Promise_0300
   * @tc.name    Loop through the isImsSmsSupported() interface TEST_RUN_TIME times,
   *             The average inspection time does not exceed TIME_SPAN
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_isImsSmsSupported_Promise_0300', 0, async function (done) {
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
      try {
        await sms.isImsSmsSupported();
      } catch (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_isImsSmsSupported_Promise_0300 fail');
        done();
        return;
      }
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
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
        if (error) {
          console.log('Telephony_SmsMms_getImsShortMessageFormat_Async_0400 fail');
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
   * @tc.number  Telephony_SmsMms_getImsShortMessageFormat_Promise_0400
   * @tc.name    Loop through the getImsShortMessageFormat() interface TEST_RUN_TIME times,
   *             The average inspection time does not exceed TIME_SPAN
   * @tc.desc    Performance test
   */
  it('Telephony_SmsMms_getImsShortMessageFormat_Promise_0400', 0, async function (done) {
    const startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
      try {
        await sms.getImsShortMessageFormat();
      } catch (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_getImsShortMessageFormat_Promise_0400 fail');
        done();
        return;
      }
    }
    const endTime = (new Date).getTime();
    expect(endTime - startTime).assertLess(TIME_SPAN);
    console.log('Telephony_SmsMms_getImsShortMessageFormat_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_1200
   * @tc.name     Loop through the decodeMms() TEST_RUN_TIME times, Time delay < TIME_SPAN
   * @tc.desc     Performance test
   */
  it('Telephony_SmsMms_decodeMms_Async_1200', 0, async function (done) {
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
      mms.decodeMms(readOrigIndPath, (err, data) => {
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_decodeMms_Async_1200 fail');
          done();
          return;
        }
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
    let startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
      try {
        await mms.decodeMms(readOrigIndPath);
      } catch (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_decodeMms_Promise_1200 fail');
        done();
        return;
      }
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
      version: mms.MMS_VERSION_1_1,
      messageId: "0001",
      to: [{addressString: "+861388888****/TYPE=PLMN", charset: mms.UTF_8}],
      "from": {addressString: "+861381234****/TYPE=PLMN", charset: mms.UTF_8},
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
      mms.encodeMms({messageType: mms.TYPE_MMS_READ_ORIG_IND, mmsType}, (err, encodeData) =>{
        endTime = new Date().getTime();
        totalTime += endTime - startTime;
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_encodeMms_Async_1100 encodeMms fail');
          done();
          return;
        }
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
      version: mms.MMS_VERSION_1_1,
      messageId: "0001",
      to: [{addressString: "+861388888****/TYPE=PLMN", charset: mms.UTF_8}],
      "from": {addressString: "+861381234****/TYPE=PLMN", charset: mms.UTF_8},
      date: 1639378126,
      readStatus: 129,
    };
    let startTime = (new Date).getTime();
    for (let index = 0;index < TEST_RUN_TIME;index++) {
      try {
        await mms.encodeMms({messageType: mms.TYPE_MMS_READ_ORIG_IND, mmsType});
      } catch (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_encodeMms_Promise_1100 fail');
        done();
        return;
      }
    }
    let endTime = (new Date).getTime();
    let totalTime = endTime - startTime;
    expect(totalTime).assertLess(TIME_SPAN);
    console.log(`Telephony_SmsMms_encodeMms_Promise_1100 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_encodeMms_Promise_1100 finish');
    done();
  });
});