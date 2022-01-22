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
  const TRUE_SLOT_ID = 0;
  const DIVIDE_MESSAGE_INTO_2 = 2;
  const MAX_CHINESE_MESSAGE_LENTH = 63;
  const MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH = 60;
  const TEST_RUN_TIME = 10;
  let readOrigIndPath = '/data/telephony/deSrc/ReadOrigInd.mms';

  /*
   * @tc.number  Telephony_SmsMms_hasSmsCapability_0200
   * @tc.name    Loop through the hasSmsCapability() interface TEST_RUN_TIME times and check the result
   * @tc.desc    Reliability test
   */
  it('Telephony_SmsMms_hasSmsCapability_0200', 0, async function (done) {
    for(let i = 0; i < TEST_RUN_TIME; ++i) {
      let result = sms.hasSmsCapability();
      expect(result).assertTrue();
    }
    done();
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Async_2100
   * @tc.name    Loop through the getSmsSegmentsInfo() interface TEST_RUN_TIME times and check the result
   * @tc.desc    Reliability test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Async_2100', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 1;index++) {
      message += '中';
    }
    function recursive (n) {
      if (n <= 0) {
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_2100 finish');
        done();
        return;
      }
      sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, false, (error, result) => {
        if (error) {
          console.log("Telephony_SmsMms_getSmsSegmentsInfo_Async_2100 getSmsSegmentsInfoon error " + error.message);
          console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_2100 fail');
          expect().assertFail();
        } else {
          expect(result.splitCount === DIVIDE_MESSAGE_INTO_2).assertTrue();
          expect(result.encodeCount === MAX_CHINESE_MESSAGE_LENTH + 1).assertTrue();
          let remaining = result.splitCount * MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
          expect(result.encodeCountRemaining === remaining).assertTrue();
          expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
          console.log('Telephony_SmsMms_getSmsSegmentsInfo_Async_2100 finish');
        }
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /*
   * @tc.number  Telephony_SmsMms_getSmsSegmentsInfo_Promise_2100
   * @tc.name    Loop through the getSmsSegmentsInfo() interface TEST_RUN_TIME times and check the result
   * @tc.desc    Reliability test
   */
  it('Telephony_SmsMms_getSmsSegmentsInfo_Promise_2100', 0, async function (done) {
    let message = '';
    for (let index = 0;index < MAX_CHINESE_MESSAGE_LENTH + 1;index++) {
      message += '中';
    }
    for (let index = 0;index < TEST_RUN_TIME;index++) {
      try {
        let result = await sms.getSmsSegmentsInfo(TRUE_SLOT_ID, message, true);
        expect(result.splitCount === DIVIDE_MESSAGE_INTO_2).assertTrue();
        expect(result.encodeCount === MAX_CHINESE_MESSAGE_LENTH + 1).assertTrue();
        let remaining = result.splitCount * MAX_CHINESE_MESSAGE_PARAGRAPJ_LENTH - result.encodeCount;
        expect(result.encodeCountRemaining === remaining).assertTrue();
        expect(result.scheme === sms.SMS_ENCODING_16BIT).assertTrue();
        if (index === TEST_RUN_TIME - 1) {
          console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_2100  finish');
          done();
        }
      } catch (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_getSmsSegmentsInfo_Promise_2100  fail');
        done();
        return;
      }
    }
  });

  /*
   * @tc.number  Telephony_SmsMms_isImsSmsSupported_Async_0200
   * @tc.name    Loop through the getSmsSegmentsInfo() interface TEST_RUN_TIME times and check the result
   * @tc.desc    Reliability test
   */
  it('Telephony_SmsMms_isImsSmsSupported_Async_0200', 0, async function (done) {
    function recursive (n) {
      if (n <= 0) {
        console.log('Telephony_SmsMms_isImsSmsSupported_Async_0200 finish');
        done();
        return;
      }
      sms.isImsSmsSupported((error, result) => {
        if (error) {
          console.log('Telephony_SmsMms_isImsSmsSupported_Async_0200 fail');
          expect().assertFail();
        } else {
          expect(result).assertFalse();
          console.log('Telephony_SmsMms_isImsSmsSupported_Async_0200 finish');
        }
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /*
   * @tc.number  Telephony_SmsMms_isImsSmsSupported_Promise_0200
   * @tc.name    Loop through the isImsSmsSupported() interface TEST_RUN_TIME times and check the result
   * @tc.desc    Reliability test
   */
  it('Telephony_SmsMms_isImsSmsSupported_Promise_0200', 0, async function (done) {
    for (let index = 0;index < TEST_RUN_TIME;index++) {
      try {
        let result = await sms.isImsSmsSupported();
        expect(result).assertFalse();
        if (index === TEST_RUN_TIME - 1) {
          console.log('Telephony_SmsMms_isImsSmsSupported_Promise_0200 finish');
          done();
        }
      } catch (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_isImsSmsSupported_Promise_0200 fail');
        done();
        return;
      }
    }
  });

  /*
   * @tc.number  Telephony_SmsMms_getImsShortMessageFormat_Async_0300
   * @tc.name    Loop through the getImsShortMessageFormat() interface TEST_RUN_TIME times and check the result
   * @tc.desc    Reliability test
   */
  it('Telephony_SmsMms_getImsShortMessageFormat_Async_0300', 0, async function (done) {
    function recursive (n) {
      if (n <= 0) {
        console.log('Telephony_SmsMms_isImsSmsSupported_Async_0200 finish');
        done();
        return;
      }
      sms.getImsShortMessageFormat((error, result) => {
        if (error) {
          console.log('Telephony_SmsMms_isImsSmsSupported_Async_0200 fail');
          expect().assertFail();
        } else {
          expect(result === '3gpp').assertTrue();
          console.log('Telephony_SmsMms_isImsSmsSupported_Async_0200 finish');
        }
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /*
   * @tc.number  Telephony_SmsMms_getImsShortMessageFormat_Promise_0300
   * @tc.name    Loop through the getImsShortMessageFormat() interface TEST_RUN_TIME times and check the result
   * @tc.desc    Reliability test
   */
  it('Telephony_SmsMms_getImsShortMessageFormat_Promise_0300', 0, async function (done) {
    for (let index = 0;index < TEST_RUN_TIME;index++) {
      try {
        let result = await sms.getImsShortMessageFormat();
        expect(result === '3gpp').assertTrue();
        if (index === TEST_RUN_TIME - 1) {
          console.log('Telephony_SmsMms_getImsShortMessageFormat_Promise_0300 finish');
          done();
        }
      } catch (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_getImsShortMessageFormat_Promise_0300 fail');
        done();
        return;
      }
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_1100
   * @tc.name     The decodeMms() interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
   *              and all parameters are normal. Check the returned result
   * @tc.desc     Reliability test
   */
  it('Telephony_SmsMms_decodeMms_Async_1100', 0, async function (done) {
    function recursive (n) {
      if (n <= 0) {
        console.log('Telephony_SmsMms_decodeMms_Async_1100 finish');
        done();
        return;
      }
      mms.decodeMms(readOrigIndPath, (err, data) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_decodeMms_Async_1100 fail');
          done();
          return;
        }
        expect(data.messageType === mms.TYPE_MMS_READ_ORIG_IND).assertTrue();
        expect(data.mmsType.version === 1).assertTrue();
        expect(data.mmsType.messageId === '0001').assertTrue();
        expect(data.mmsType.date > 0).assertTrue();
        expect(data.mmsType.to.length === 0).assertTrue();
        expect(data.mmsType.from.addressString.length > 0).assertTrue();
        expect(data.mmsType.from.charset === mms.UTF_8).assertTrue();
        expect(data.mmsType.readStatus === 128).assertTrue();
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Promise_1100
   * @tc.name     The decodeMms() interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
   *              and all parameters are normal. Check the returned result
   * @tc.desc     Reliability test
   */
  it('Telephony_SmsMms_decodeMms_Promise_1100', 0, async function (done) {
    for (let index = 0;index < TEST_RUN_TIME;index++) {
      try {
        let promise = await mms.decodeMms(readOrigIndPath);
        expect(promise.messageType === mms.TYPE_MMS_READ_ORIG_IND).assertTrue();
        expect(promise.mmsType.version === 1).assertTrue();
        expect(promise.mmsType.messageId === '0001').assertTrue();
        expect(promise.mmsType.date > 0).assertTrue();
        expect(promise.mmsType.to.length === 0).assertTrue();
        expect(promise.mmsType.from.addressString.length > 0).assertTrue();
        expect(promise.mmsType.from.charset === mms.UTF_8).assertTrue();
        expect(promise.mmsType.readStatus === 128).assertTrue();
        console.log('Telephony_SmsMms_decodeMms_Promise_1100 finish');
        done();
      } catch (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_decodeMms_Promise_1100 fail');
        done();
      }
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Async_1000
   * @tc.name     The encodeMms() interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
   *              and all parameters are normal. Check the returned result
   * @tc.desc     Reliability test
   */
  it('Telephony_SmsMms_encodeMms_Async_1000', 0, async function (done) {
    let mmsType = {
      version: mms.MMS_VERSION_1_1,
      messageId: "0001",
      to: [{addressString: "+861388888****/TYPE=PLMN", charset: mms.UTF_8}],
      "from": {addressString: "+861381234****/TYPE=PLMN", charset: mms.UTF_8},
      date: 1639378126,
      readStatus: 129,
    };
    function recursive (n) {
      if (n <= 0) {
        console.log('Telephony_SmsMms_encodeMms_Async_1000 finish');
        done();
        return;
      }
      mms.encodeMms({messageType: mms.TYPE_MMS_READ_ORIG_IND, mmsType}, (err, encodeData) =>{
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_encodeMms_Async_1000 encodeMms fail');
          done();
          return;
        }
        console.log('Telephony_SmsMms_encodeMms_Async_1000 encodeMms finish');
        mms.decodeMms(encodeData, (err, data) => {
          if (err) {
            expect().assertFail();
            console.log('Telephony_SmsMms_encodeMms_Async_1000 fail');
            done();
            return;
          }
          expect(data.messageType === mms.TYPE_MMS_READ_ORIG_IND).assertTrue();
          expect(data.mmsType.version === mms.MMS_VERSION_1_1).assertTrue();
          expect(data.mmsType.messageId === '0001').assertTrue();
          expect(data.mmsType.to.length === 0).assertTrue();
          expect(data.mmsType.from.addressString.length > 0).assertTrue();
          expect(data.mmsType.from.charset === mms.UTF_8).assertTrue();
          expect(data.mmsType.date > 0).assertTrue();
          expect(data.mmsType.readStatus === 129).assertTrue();
          console.log('Telephony_SmsMms_encodeMms_Async_1000 finish');
          done();
        });
      });
    }
    recursive(TEST_RUN_TIME);
  });

    /**
   * @tc.number   Telephony_SmsMms_encodeMms_Promise_1000
   * @tc.name     The encodeMms() interface is called repeatedly for LOOP_MULTITUDE_NUMBER times,
   *              and all parameters are normal. Check the returned result
   * @tc.desc     Reliability test
   */
  it('Telephony_SmsMms_encodeMms_Promise_1000', 0, async function (done) {
    let mmsType = {
      version: mms.MMS_VERSION_1_1,
      messageId: "0001",
      to: [{addressString: "+861388888****/TYPE=PLMN", charset: mms.UTF_8}],
      "from": {addressString: "+861381234****/TYPE=PLMN", charset: mms.UTF_8},
      date: 1639378126,
      readStatus: 129,
    };
    for (let index = 0;index < TEST_RUN_TIME;index++) {
      try {
        let encodePromise = await mms.encodeMms({messageType: mms.TYPE_MMS_READ_ORIG_IND, mmsType});
        expect(encodePromise.length > 0).assertTrue();
        console.log('Telephony_SmsMms_encodeMms_Promise_1000 encodeMms finish');
        let promise = await mms.decodeMms(encodePromise);
        expect(promise.messageType === mms.TYPE_MMS_READ_ORIG_IND).assertTrue();
        expect(promise.mmsType.version === mms.MMS_VERSION_1_1).assertTrue();
        expect(promise.mmsType.messageId === '0001').assertTrue();
        expect(promise.mmsType.to.length === 0).assertTrue();
        expect(promise.mmsType.to[0].addressString.length > 0).assertTrue();
        expect(promise.mmsType.to[0].charset === mms.UTF_8).assertTrue();
        expect(promise.mmsType.from.addressString.length > 0).assertTrue();
        expect(promise.mmsType.from.charset === mms.UTF_8).assertTrue();
        expect(promise.mmsType.date > 0).assertTrue();
        expect(promise.mmsType.readStatus === 129).assertTrue();
        console.log('Telephony_SmsMms_encodeMms_Promise_1000 finish');
        done();
      } catch (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_encodeMms_Promise_1000 fail');
        done();
      }
    }
  });

});