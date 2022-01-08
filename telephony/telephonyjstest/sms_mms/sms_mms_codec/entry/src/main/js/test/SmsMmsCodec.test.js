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
import mms from '@ohos.telephony.sms';
import {
  describe,
  beforeAll,
  beforeEach,
  afterEach,
  afterAll,
  it,
  expect
} from 'deccjsunit/index';

describe('SmsMmsCodecTest', function () {
  var sendReqPath = '/data/telephony/deSrc/SendReq.mms';
  var sendConfPath = '/data/telephony/deSrc/SendConf.mms';
  var notificationIndPath = '/data/telephony/deSrc/NotificationInd.mms';
  var notifyRespIndPath = '/data/telephony/deSrc/NotifyRespInd.mms';
  var retrieveConfPath = '/data/telephony/deSrc/RetrieveConf.mms'
  var acknowledgeIndPath = '/data/telephony/deSrc/AcknowledgeInd.mms';
  var deliveryIndPath = '/data/telephony/deSrc/DeliveryInd.mms';
  var readRecIndPath = '/data/telephony/deSrc/ReadRecInd.mms';
  var readOrigIndPath = '/data/telephony/deSrc/ReadOrigInd.mms';
  var eorroMessagePath = '/data/telephony/deSrc/EorroMessagePath.mms';

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_0100
   * @tc.name     Parse SendReq type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Async_0100', 0, async function (done) {
    mms.decodeMms(sendReqPath, (err, data) => {
      if (err) {
        console.log('Telephony_SmsMms_decodeMms_Async_0100 fail');
        expect().assertFail();
        done();
        return;
      }
      expect(data.messageType === mms.TYPE_MMS_SEND_REQ).assertTrue();
      expect(data.mmsType.from.addressString ===  '2077/TYPE=PLMN').assertTrue();
      expect(data.mmsType.from.charset ===  mms.UTF_8).assertTrue();
      expect(data.mmsType.to.length > 0).assertTrue();
      expect(data.mmsType.to[0].addressString === '+4798682185/TYPE=PLMN').assertTrue();
      expect(data.mmsType.to[0].charset === mms.UTF_8).assertTrue();
      expect(data.mmsType.to[1].addressString === '+8610086/TYPE=PLMN').assertTrue();
      expect(data.mmsType.to[1].charset === mms.UTF_8).assertTrue();
      expect(data.mmsType.transactionId ===  '2077.1427358451410').assertTrue();
      expect(data.mmsType.version ===  mms.MMS_VERSION_1_0).assertTrue();
      expect(data.mmsType.date > 0).assertTrue();
      expect(data.mmsType.cc.length === 0).assertTrue();
      expect(data.mmsType.bcc.length === 0).assertTrue();
      expect(data.mmsType.subject ===  'Test mms').assertTrue();
      expect(data.mmsType.messageClass ===  128).assertTrue();
      expect(data.mmsType.expiry ===  0).assertTrue();
      expect(data.mmsType.priority ===  0).assertTrue();
      expect(data.mmsType.senderVisibility ===  129).assertTrue();
      expect(data.mmsType.deliveryReport ===  129).assertTrue();
      expect(data.mmsType.readReport ===  129).assertTrue();
      expect(data.mmsType.contentType ===  'application/vnd.wap.multipart.related').assertTrue();
      expect(data.attachment.length > 0).assertTrue();
      expect(data.attachment[0].path === '').assertTrue();
      expect(data.attachment[0].contentId === '<0000>').assertTrue();
      expect(data.attachment[0].contentLocation === 'megatron.smil').assertTrue();
      expect(data.attachment[0].contentDisposition === 'megatron.smil').assertTrue();
      expect(data.attachment[0].contentTransferEncoding === 'binary').assertTrue();
      expect(data.attachment[0].contentType === 'application/smil').assertTrue();
      expect(data.attachment[0].isSmil).assertFalse();
      expect(data.attachment[0].inBuff.length > 0).assertTrue();
      expect(data.attachment[0].charset === mms.UTF_8).assertTrue();
      expect(data.attachment[1].path === '').assertTrue();
      expect(data.attachment[1].contentId === '<megatron.txt>').assertTrue();
      expect(data.attachment[1].contentLocation === 'megatron.txt').assertTrue();
      expect(data.attachment[1].contentDisposition === 'megatron.txt').assertTrue();
      expect(data.attachment[1].contentTransferEncoding === 'binary').assertTrue();
      expect(data.attachment[1].contentType === 'text/plain').assertTrue();
      expect(data.attachment[1].isSmil).assertFalse();
      expect(data.attachment[1].inBuff.length > 0).assertTrue();
      expect(data.attachment[1].charset === mms.UTF_8).assertTrue();
      expect(data.attachment[2].path === '').assertTrue();
      expect(data.attachment[2].contentId === '<megatron.png>').assertTrue();
      expect(data.attachment[2].contentLocation === 'megatron.png').assertTrue();
      expect(data.attachment[2].contentDisposition === 'megatron.png').assertTrue();
      expect(data.attachment[2].contentTransferEncoding === 'binary').assertTrue();
      expect(data.attachment[2].contentType === 'image/png').assertTrue();
      expect(data.attachment[2].isSmil).assertFalse();
      expect(data.attachment[2].inBuff.length > 0).assertTrue();
      expect(data.attachment[2].charset === 0).assertTrue();
      expect(data.attachment[3].path === '').assertTrue();
      expect(data.attachment[3].contentId === '<decepticons.png>').assertTrue();
      expect(data.attachment[3].contentLocation === 'decepticons.png').assertTrue();
      expect(data.attachment[3].contentDisposition === 'decepticons.png').assertTrue();
      expect(data.attachment[3].contentTransferEncoding === 'binary').assertTrue();
      expect(data.attachment[3].contentType === 'image/png').assertTrue();
      expect(data.attachment[3].isSmil).assertFalse();
      expect(data.attachment[3].inBuff.length > 0).assertTrue();
      expect(data.attachment[3].charset === 0).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Async_0100 finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_0200
   * @tc.name     Parse SendConf type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Async_0200', 0, async function (done) {
    mms.decodeMms(sendConfPath, (err, data) => {
      if (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_decodeMms_Async_0200 fail');
        done();
        return;
      }
      expect(data.messageType === mms.TYPE_MMS_SEND_CONF).assertTrue();
      expect(data.mmsType.responseState === 128).assertTrue();
      expect(data.mmsType.transactionId === '2077.1427358451410').assertTrue();
      expect(data.mmsType.version === 128).assertTrue();
      expect(data.mmsType.messageId === '').assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Async_0200 finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_0300
   * @tc.name     Parse NotificationInd type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Async_0300', 0, async function (done) {
    mms.decodeMms(notificationIndPath, (err, data) => {
      if (err) {
        console.log('Telephony_SmsMms_decodeMms_Async_0300 fail');
        expect().assertFail();
        done();
        return;
      }
      console.log( "Telephony_SmsMms_decodeMms_Async_0300 pathArr on value = " + JSON.stringify(data));
      expect(data.messageType === mms.TYPE_MMS_NOTIFICATION_IND).assertTrue();
      expect(data.mmsType.transactionId === '2077.1427358451410').assertTrue();
      expect(data.mmsType.messageClass === 128).assertTrue();
      expect(data.mmsType.messageSize === 0).assertTrue();
      expect(data.mmsType.expiry !== 0).assertTrue();;
      expect(data.mmsType.version === 1).assertTrue();
      expect(data.mmsType.from.addressString.length > 0).assertTrue();
      expect(data.mmsType.from.charset === mms.UTF_8).assertTrue();
      expect(data.mmsType.subject === 'Test mms').assertTrue();
      expect(data.mmsType.deliveryReport === 0).assertTrue();
      expect(data.mmsType.contentLocation === 'Test').assertTrue();
      expect(data.mmsType.contentClass === 0).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Async_0300 finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_0400
   * @tc.name     Parse NotifyRespInd type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Async_0400', 0, async function (done) {
    mms.decodeMms(notifyRespIndPath, (err, data) => {
      if (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_decodeMms_Async_0400 fail');
        done();
        return;
      }
      expect(data.messageType === mms.TYPE_MMS_RESP_IND).assertTrue();
      expect(data.mmsType.transactionId === '2077.1427358451410').assertTrue();
      expect(data.mmsType.status === 128).assertTrue();
      expect(data.mmsType.version === 1).assertTrue();
      expect(data.mmsType.reportAllowed === 0).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Async_0400 finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_0500
   * @tc.name     Parse RetrieveConf type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Async_0500', 0, async function (done) {
    mms.decodeMms(retrieveConfPath, (err, data) => {
      if (err) {
        console.log('Telephony_SmsMms_decodeMms_Async_0500 fail');
        expect().assertFail();
        done();
        return;
      }
      expect(data.messageType === mms.TYPE_MMS_RETRIEVE_CONF).assertTrue();
      expect(data.mmsType.transactionId === '2077.1427358451410').assertTrue();
      expect(data.mmsType.messageId === '').assertTrue();
      expect(data.mmsType.date > 0).assertTrue();
      expect(data.mmsType.version === 1).assertTrue();
      expect(data.mmsType.to.length === 0).assertTrue();
      expect(data.mmsType.from.addressString.length > 0).assertTrue();
      expect(data.mmsType.from.charset === 106/*mms.UTF_8*/).assertTrue();
      expect(data.mmsType.cc.length === 0).assertTrue();
      expect(data.mmsType.subject === 'Test mms').assertTrue();
      expect(data.mmsType.priority === 0).assertTrue();
      expect(data.mmsType.deliveryReport === 0).assertTrue();
      expect(data.mmsType.readReport === 0).assertTrue();
      expect(data.mmsType.retrieveStatus === 0).assertTrue();
      expect(data.mmsType.retrieveText === '').assertTrue();
      expect(data.mmsType.contentType === 'application/vnd.wap.multipart.related').assertTrue();
      expect(data.attachment.length > 0).assertTrue();
      expect(data.attachment[0].path === '').assertTrue();
      expect(data.attachment[0].contentId === '<0000>').assertTrue();
      expect(data.attachment[0].contentLocation === '618C0A89.smil').assertTrue();
      expect(data.attachment[0].contentDisposition === '618C0A89.smil').assertTrue();
      expect(data.attachment[0].contentTransferEncoding === 'binary').assertTrue();
      expect(data.attachment[0].contentType === 'application/smil').assertTrue();
      expect(data.attachment[0].isSmil).assertTrue();
      expect(data.attachment[0].inBuff.length > 0).assertTrue();
      expect(data.attachment[0].charset === 0).assertTrue();
      expect(data.attachment[1].path === '').assertTrue();
      expect(data.attachment[1].contentId === '<content.txt>').assertTrue();
      expect(data.attachment[1].contentLocation === 'content.txt').assertTrue();
      expect(data.attachment[1].contentDisposition === 'content.txt').assertTrue();
      expect(data.attachment[1].contentTransferEncoding === 'binary').assertTrue();
      expect(data.attachment[1].contentType === 'txt/plain').assertTrue();
      expect(data.attachment[1].isSmil).assertFalse();
      expect(data.attachment[1].inBuff.length > 0).assertTrue();
      expect(data.attachment[1].charset === 0).assertTrue();
      expect(data.attachment[2].path === '').assertTrue();
      expect(data.attachment[2].contentId === '<picture.gif>').assertTrue();
      expect(data.attachment[2].contentLocation === 'picture.gif').assertTrue();
      expect(data.attachment[2].contentDisposition === 'picture.gif').assertTrue();
      expect(data.attachment[2].contentTransferEncoding === 'binary').assertTrue();
      expect(data.attachment[2].contentType === 'image/gif').assertTrue();
      expect(data.attachment[2].isSmil).assertFalse();
      expect(data.attachment[2].inBuff.length > 0).assertTrue();
      expect(data.attachment[2].charset === 0).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Async_0500 finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_0600
   * @tc.name     Parse AcknowledgeInd type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Async_0600', 0, async function (done) {
    mms.decodeMms(acknowledgeIndPath, (err, data) => {
      if (err) {
        console.log('Telephony_SmsMms_decodeMms_Async_0600 fail');
        expect().assertFail();
        done();
        return;
      }
      expect(data.messageType === mms.TYPE_MMS_ACKNOWLEDGE_IND).assertTrue();
      expect(data.mmsType.transactionId === '2077.1427358451410').assertTrue();
      expect(data.mmsType.version === 1).assertTrue();
      expect(data.mmsType.reportAllowed === 0).assertTrue();
      console.log( "Telephony_SmsMms_decodeMms_Async_0600 pathArr on value = " + JSON.stringify(data));
      console.log('Telephony_SmsMms_decodeMms_Async_0600 finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_0700
   * @tc.name     Parse DeliveryInd type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Async_0700', 0, async function (done) {
    mms.decodeMms(deliveryIndPath, (err, data) => {
      if (err) {
        console.log('Telephony_SmsMms_decodeMms_Async_0700 fail');
        expect().assertFail();
        done();
        return;
      }
      console.log( "Telephony_SmsMms_decodeMms_Async_0700 pathArr on value = " + JSON.stringify(data));
      expect(data.messageType === mms.TYPE_MMS_DELIVERY_IND).assertTrue();
      expect(data.mmsType.messageId === '0001').assertTrue();
      expect(data.mmsType.date > 0).assertTrue();
      expect(data.mmsType.to.length > 0).assertTrue();
      expect(data.mmsType.to[0].addressString.length > 0).assertTrue();
      expect(data.mmsType.to[0].charset == mms.UTF_8).assertTrue();
      expect(data.mmsType.status === 128).assertTrue();
      expect(data.mmsType.version === 1).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Async_0700 finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_0800
   * @tc.name     Parse ReadRecInd type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Async_0800', 0, async function (done) {
    mms.decodeMms(readRecIndPath, (err, data) => {
      if (err) {
        console.log('Telephony_SmsMms_decodeMms_Async_0800 fail');
        expect().assertFail();
        done();
        return;
      }
      console.log( "Telephony_SmsMms_decodeMms_Async_0800 pathArr on value = " + JSON.stringify(data));
      expect(data.messageType === mms.TYPE_MMS_READ_REC_IND).assertTrue();
      expect(data.mmsType.version ===  1).assertTrue();
      expect(data.mmsType.messageId === '0001').assertTrue();
      expect(data.mmsType.date > 0).assertTrue();
      expect(data.mmsType.to.length === 0).assertTrue();
      expect(data.mmsType.from.address.length > 0).assertTrue();
      expect(data.mmsType.from.charset === mms.UTF_8).assertTrue();
      expect(data.mmsType.readStatus === 128).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Async_0800 finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_0900
   * @tc.name     Parse ReadOrigInd type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Async_0900', 0, async function (done) {
    mms.decodeMms(readOrigIndPath, (err, data) => {
      if (err) {
        console.log('Telephony_SmsMms_decodeMms_Async_0900 fail');
        expect().assertFail();
        done();
        return;
      }
      console.log( "Telephony_SmsMms_decodeMms_Async_0900 pathArr on value = " + JSON.stringify(data));
      expect(data.messageType === mms.TYPE_MMS_READ_ORIG_IND).assertTrue();
      expect(data.mmsType.version === 1).assertTrue();
      expect(data.mmsType.messageId === '0001').assertTrue();
      expect(data.mmsType.date > 0).assertTrue();
      expect(data.mmsType.to.length === 0).assertTrue();
      expect(data.mmsType.from.address.length > 0).assertTrue();
      expect(data.mmsType.from.charset === mms.UTF_8).assertTrue();
      expect(data.mmsType.readStatus === 128).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Async_0900 finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Async_1000
   * @tc.name     Passing in the exception path, Parse failure
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Async_1000', 0, async function (done) {
    mms.decodeMms(eorroMessagePath, (err, data) => {
      if (err) {
        console.log('Telephony_SmsMms_decodeMms_Async_1000 finish');
        done();
        return;
      }
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Async_1000 fail');
      done();
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Promise_0100
   * @tc.name     Parse SendReq type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Promise_0100', 0, async function (done) {
    try {
      let promise = await mms.decodeMms(sendReqPath);
      expect(promise.messageType === mms.TYPE_MMS_SEND_REQ).assertTrue();
      expect(promise.mmsType.from.addressString ===  '2077/TYPE=PLMN').assertTrue();
      expect(promise.mmsType.from.charset ===  mms.UTF_8).assertTrue();
      expect(promise.mmsType.to.length > 0).assertTrue();
      expect(promise.mmsType.to[0].addressString === '+4798682185/TYPE=PLMN').assertTrue();
      expect(promise.mmsType.to[0].charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.to[1].addressString === '+8610086/TYPE=PLMN').assertTrue();
      expect(promise.mmsType.to[1].charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.transactionId === '2077.1427358451410').assertTrue();
      expect(promise.mmsType.version === mms.MMS_VERSION_1_0).assertTrue();
      expect(promise.mmsType.date > 0).assertTrue();
      expect(promise.mmsType.cc.length === 0).assertTrue();
      expect(promise.mmsType.bcc.length === 0).assertTrue();
      expect(promise.mmsType.subject === 'Test mms').assertTrue();
      expect(promise.mmsType.messageClass === 128).assertTrue();
      expect(promise.mmsType.expiry === 0).assertTrue();
      expect(promise.mmsType.priority === 0).assertTrue();
      expect(promise.mmsType.senderVisibility === 129).assertTrue();
      expect(promise.mmsType.deliveryReport === 129).assertTrue();
      expect(promise.mmsType.readReport === 129).assertTrue();
      expect(promise.mmsType.contentType === 'application/vnd.wap.multipart.related').assertTrue();
      expect(promise.attachment.length > 0).assertTrue();
      expect(promise.attachment[0].path === '').assertTrue();
      expect(promise.attachment[0].contentId === '<0000>').assertTrue();
      expect(promise.attachment[0].contentLocation === 'megatron.smil').assertTrue();
      expect(promise.attachment[0].contentDisposition === 'megatron.smil').assertTrue();
      expect(promise.attachment[0].contentTransferEncoding === '').assertTrue();
      expect(promise.attachment[0].contentType === 'application/smil').assertTrue();
      expect(promise.attachment[0].isSmil).assertFalse();
      expect(promise.attachment[0].inBuff.length > 0).assertTrue();
      expect(promise.attachment[0].charset === mms.UTF_8).assertTrue();
      expect(promise.attachment[1].path === '').assertTrue();
      expect(promise.attachment[1].contentId === '<megatron.txt>').assertTrue();
      expect(promise.attachment[1].contentLocation === 'megatron.txt').assertTrue();
      expect(promise.attachment[1].contentDisposition === 'megatron.txt').assertTrue();
      expect(promise.attachment[1].contentTransferEncoding === '').assertTrue();
      expect(promise.attachment[1].contentType === 'txt/plain').assertTrue();
      expect(promise.attachment[1].isSmil).assertFalse();
      expect(promise.attachment[1].inBuff.length > 0).assertTrue();
      expect(promise.attachment[1].charset === mms.UTF_8).assertTrue();
      expect(promise.attachment[2].path === '').assertTrue();
      expect(promise.attachment[2].contentId === '<megatron.png>').assertTrue();
      expect(promise.attachment[2].contentLocation === 'megatron.png').assertTrue();
      expect(promise.attachment[2].contentDisposition === 'megatron.png').assertTrue();
      expect(promise.attachment[2].contentTransferEncoding === '').assertTrue();
      expect(promise.attachment[2].contentType === 'image/png').assertTrue();
      expect(promise.attachment[2].isSmil).assertFalse();
      expect(promise.attachment[2].inBuff.length > 0).assertTrue();
      expect(promise.attachment[2].charset === 0).assertTrue();
      expect(promise.attachment[3].path === '').assertTrue();
      expect(promise.attachment[3].contentId === '<decepticons.png>').assertTrue();
      expect(promise.attachment[3].contentLocation === 'decepticons.png').assertTrue();
      expect(promise.attachment[3].contentDisposition === 'decepticons.png').assertTrue();
      expect(promise.attachment[3].contentTransferEncoding === 'binary').assertTrue();
      expect(promise.attachment[3].contentType === 'image/png').assertTrue();
      expect(promise.attachment[3].isSmil).assertFalse();
      expect(promise.attachment[3].inBuff.length > 0).assertTrue();
      expect(promise.attachment[3].charset === 0).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0100 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0100 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Promise_0200
   * @tc.name     Parse SendConf type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Promise_0200', 0, async function (done) {
    try {
      let promise = await mms.decodeMms(sendConfPath);
      expect(promise.messageType === mms.TYPE_MMS_SEND_CONF).assertTrue();
      expect(promise.mmsType.responseState === 128).assertTrue();
      expect(promise.mmsType.transactionId === '2077.1427358451410').assertTrue();
      expect(promise.mmsType.version === 128).assertTrue();
      expect(promise.mmsType.messageId === '').assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0200 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0200 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Promise_0300
   * @tc.name     Parse NotificationInd type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Promise_0300', 0, async function (done) {
    try {
      let promise = await mms.decodeMms(notificationIndPath);
      expect(promise.messageType === mms.TYPE_MMS_NOTIFICATION_IND).assertTrue();
      expect(promise.mmsType.transactionId === '2077.1427358451410').assertTrue();
      expect(promise.mmsType.messageClass === 128).assertTrue();
      expect(promise.mmsType.messageSize === 0).assertTrue();
      expect(promise.mmsType.expiry !== 0).assertTrue();;
      expect(promise.mmsType.version === 1).assertTrue();
      expect(promise.mmsType.from.addressString.length > 0).assertTrue();
      expect(promise.mmsType.from.charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.subject === 'Test mms').assertTrue();
      expect(promise.mmsType.deliveryReport === 0).assertTrue();
      expect(promise.mmsType.contentLocation === 'Test').assertTrue();
      expect(promise.mmsType.contentClass === 0).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0300 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0300 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Promise_0400
   * @tc.name     Parse NotifyRespInd type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Promise_0400', 0, async function (done) {
    try {
      let promise = await mms.decodeMms(notifyRespIndPath);
      expect(promise.messageType === mms.TYPE_MMS_RESP_IND).assertTrue();
      expect(promise.mmsType.transactionId === '2077.1427358451410').assertTrue();
      expect(promise.mmsType.status === 128).assertTrue();
      expect(promise.mmsType.version === 1).assertTrue();
      expect(promise.mmsType.reportAllowed === 0).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0400 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0400 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Promise_0500
   * @tc.name     Parse RetrieveConf type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Promise_0500', 0, async function (done) {
    try {
      let promise = await mms.decodeMms(retrieveConfPath);
      expect(promise.messageType === mms.TYPE_MMS_RETRIEVE_CONF).assertTrue();
      expect(promise.mmsType.transactionId === '2077.1427358451410').assertTrue();
      expect(promise.mmsType.messageId === '').assertTrue();
      expect(promise.mmsType.date > 0).assertTrue();
      expect(promise.mmsType.version === 1).assertTrue();
      expect(promise.mmsType.to.length === 0).assertTrue();
      expect(promise.mmsType.from.addressString.length > 0).assertTrue();
      expect(promise.mmsType.from.charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.cc.length === 0).assertTrue();
      expect(promise.mmsType.subject === 'Test mms').assertTrue();
      expect(promise.mmsType.priority === 0).assertTrue();
      expect(promise.mmsType.deliveryReport === 0).assertTrue();
      expect(promise.mmsType.readReport === 0).assertTrue();
      expect(promise.mmsType.retrieveStatus === 0).assertTrue();
      expect(promise.mmsType.retrieveText === '').assertTrue();
      expect(promise.mmsType.contentType === 'application/vnd.wap.multipart.related').assertTrue();
      expect(promise.attachment.length > 0).assertTrue();
      expect(promise.attachment[0].path === '').assertTrue();
      expect(promise.attachment[0].contentId === '<0000>').assertTrue();
      expect(promise.attachment[0].contentLocation === '618C0A89.smil').assertTrue();
      expect(promise.attachment[0].contentDisposition === '618C0A89.smil').assertTrue();
      expect(promise.attachment[0].contentTransferEncoding === 'binary').assertTrue();
      expect(promise.attachment[0].contentType === 'application/smil').assertTrue();
      expect(promise.attachment[0].isSmil).assertTrue();
      expect(promise.attachment[0].inBuff.length > 0).assertTrue();
      expect(promise.attachment[0].charset === 0).assertTrue();
      expect(promise.attachment[1].path === '').assertTrue();
      expect(promise.attachment[1].contentId === '<content.txt>').assertTrue();
      expect(promise.attachment[1].contentLocation === 'content.txt').assertTrue();
      expect(promise.attachment[1].contentDisposition === 'content.txt').assertTrue();
      expect(promise.attachment[1].contentTransferEncoding === 'binary').assertTrue();
      expect(promise.attachment[1].contentType === 'txt/plain').assertTrue();
      expect(promise.attachment[1].isSmil).assertFalse();
      expect(promise.attachment[1].inBuff.length > 0).assertTrue();
      expect(promise.attachment[1].charset === 0).assertTrue();
      expect(promise.attachment[2].path === '').assertTrue();
      expect(promise.attachment[2].contentId === '<picture.gif>').assertTrue();
      expect(promise.attachment[2].contentLocation === 'picture.gif').assertTrue();
      expect(promise.attachment[2].contentDisposition === 'picture.gif').assertTrue();
      expect(promise.attachment[2].contentTransferEncoding === 'binary').assertTrue();
      expect(promise.attachment[2].contentType === 'image/gif').assertTrue();
      expect(promise.attachment[2].isSmil).assertFalse();
      expect(promise.attachment[2].inBuff.length > 0).assertTrue();
      expect(promise.attachment[2].charset === 0).assertTrue();


      console.log('Telephony_SmsMms_decodeMms_Promise_0500 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0500 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Promise_0600
   * @tc.name     Parse AcknowledgeInd type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Promise_0600', 0, async function (done) {
    try {
      let promise = await mms.decodeMms(acknowledgeIndPath);
      expect(promise.messageType === mms.TYPE_MMS_ACKNOWLEDGE_IND).assertTrue();
      expect(promise.mmsType.transactionId === '2077.1427358451410').assertTrue();
      expect(promise.mmsType.version === 1).assertTrue();
      expect(promise.mmsType.reportAllowed === 0).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0600 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0600 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Promise_0700
   * @tc.name     Parse DeliveryInd type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Promise_0700', 0, async function (done) {
    try {
      let promise = await mms.decodeMms(deliveryIndPath);
      expect(promise.messageType === mms.TYPE_MMS_DELIVERY_IND).assertTrue();
      expect(promise.mmsType.messageId === '0001').assertTrue();
      expect(promise.mmsType.date > 0).assertTrue();
      expect(promise.mmsType.to.length > 0).assertTrue();
      expect(promise.mmsType.to[0].addressString.length > 0).assertTrue();
      expect(promise.mmsType.to[0].charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.status === 128).assertTrue();
      expect(promise.mmsType.version === 1).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0700 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0700 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Promise_0800
   * @tc.name     Parse ReadRecInd type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Promise_0800', 0, async function (done) {
    try {
      let promise = await mms.decodeMms(readRecIndPath);
      expect(promise.messageType === mms.TYPE_MMS_READ_REC_IND).assertTrue();
      expect(promise.mmsType.version === 1).assertTrue();
      expect(promise.mmsType.messageId === '0001').assertTrue();
      expect(promise.mmsType.date > 0).assertTrue();
      expect(promise.mmsType.to.length === 0).assertTrue();
      expect(promise.mmsType.from.addressString.length > 0).assertTrue();
      expect(promise.mmsType.from.charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.readStatus === 128).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0800 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0800 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Promise_0900
   * @tc.name     Parse ReadOrigInd type MMS
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Promise_0900', 0, async function (done) {
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
      console.log('Telephony_SmsMms_decodeMms_Promise_0900 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0900 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_decodeMms_Promise_1000
   * @tc.name     Passing in the exception path, Parse failure
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_decodeMms_Promise_1000', 0, async function (done) {
    try {
      let promise = await mms.decodeMms(eorroMessagePath);
      console.log('Telephony_SmsMms_decodeMms_Promise_0600 fail');
      expect().assertFail();
      done();
    } catch (err) {
      console.log('Telephony_SmsMms_decodeMms_Promise_0600 finish');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Async_0100
   * @tc.name     SendReq type MMS, encoding after decoding, the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Async_0100', 0, async function (done) {
    let mmsType = {
      "from" : {addressString: '+861381234****/TYPE=PLMN', charset: mms.UTF_8},
      to: [{addressString: '+861388888****', charset: mms.UTF_8}],
      transactionId: '2077.1427358451410',
      version: mms.MMS_VERSION_1_2,
      date:1639378126,
      cc: [{addressString: "+861381111****/TYPE=PLMN", charset: mms.UTF_8}],
      bcc: [{addressString: "+861382222****/TYPE=PLMN", charset: mms.UTF_8}],
      subject: "Test mms",
      messageClass: 130,
      expiry: 1639378126,
      priority: mms.MMS_LOW,
      senderVisibility: 129,
      deliveryReport: 128,
      readReport: 129,
      contentType: "application/vnd.wap.multipart.related",
    };
    let attachment = [
        {path: '/data/telephony/enSrc/content.text',
        contentId:'<content.text>',
        contentLocation:'content.text',
        contentDisposition:'content.text',
        contentTransferEncoding: 'base64',
        contentType:'text/plain',
        isSmil: false,
        inBuff: [1,2,3],
        charset: mms.UTF_8}];

    mms.encodeMms({messageType: mms.TYPE_MMS_SEND_REQ, mmsType, attachment}, (err, encodeData) =>{
      if (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_encodeMms_Async_0100 encodeMms fail');
        done();
        return;
      }
      console.log('Telephony_SmsMms_encodeMms_Async_0100 encodeMms finish');
      mms.decodeMms(encodeData, (err, data) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_encodeMms_Async_0100 fail');
          done();
          return;
        }
        expect(data.messageType === mms.TYPE_MMS_SEND_REQ).assertTrue();
        expect(data.mmsType.from.addressString ===  '+861381234****/TYPE=PLMN').assertTrue();
        expect(data.mmsType.from.charset ===  mms.UTF_8).assertTrue();
        expect(data.mmsType.to.length > 0).assertTrue();
        expect(data.mmsType.to[0].addressString === '+861388888****/TYPE=PLMN').assertTrue();
        expect(data.mmsType.to[0].charset === mms.UTF_8).assertTrue();
        expect(data.mmsType.transactionId ===  '2077.1427358451410').assertTrue();
        expect(data.mmsType.version ===  mms.MMS_VERSION_1_2).assertTrue();
        expect(data.mmsType.date > 0).assertTrue();
        expect(data.mmsType.cc.length > 0).assertTrue();
        expect(data.mmsType.cc[0].addressString === '+861381111****/TYPE=PLMN').assertTrue();
        expect(data.mmsType.cc[0].charset === mms.UTF_8).assertTrue();
        expect(data.mmsType.bcc.length > 0).assertTrue();
        expect(data.mmsType.bcc[0].addressString === '+861382222****/TYPE=PLMN').assertTrue();
        expect(data.mmsType.bcc[0].charset === mms.UTF_8).assertTrue();
        expect(data.mmsType.subject ===  'Test mms').assertTrue();
        expect(data.mmsType.messageClass ===  130).assertTrue();
        expect(data.mmsType.expiry > 0).assertTrue();
        expect(data.mmsType.priority ===  mms.MMS_LOW).assertTrue();
        expect(data.mmsType.senderVisibility ===  129).assertTrue();
        expect(data.mmsType.deliveryReport ===  128).assertTrue();
        expect(data.mmsType.readReport ===  129).assertTrue();
        expect(data.mmsType.contentType ===  'application/vnd.wap.multipart.related').assertTrue();
        expect(data.attachment.length > 0).assertTrue();
        expect(data.attachment[0].path === '/data/telephony/enSrc/content.text').assertTrue();
        expect(data.attachment[0].contentId === '<content.text>').assertTrue();
        expect(data.attachment[0].contentLocation === 'content.text').assertTrue();
        expect(data.attachment[0].contentDisposition === 'content.text').assertTrue();
        expect(data.attachment[0].contentTransferEncoding === 'base64').assertTrue();
        expect(data.attachment[0].contentType === 'text/plain').assertTrue();
        expect(data.attachment[0].isSmil).assertFalse();
        expect(data.attachment[0].inBuff.length > 0).assertTrue();
        expect(data.attachment[0].charset === mms.UTF_8).assertTrue();
        console.log('Telephony_SmsMms_encodeMms_Async_0100 finish');
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Async_0200
   * @tc.name     SendConf type MMS, encoding after decoding, the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Async_0200', 0, async function (done) {
    let mmsType = {
      responseState: 128,
      transactionId: '2077.1427358451410',
      version: mms.MMS_VERSION_1_1,
      messageId: '0001',
    };
    mms.encodeMms({messageType: mms.TYPE_MMS_SEND_CONF, mmsType}, (err, encodeData) =>{
      if (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_encodeMms_Async_0200 encodeMms fail');
        done();
        return;
      }
      console.log('Telephony_SmsMms_encodeMms_Async_0200 encodeMms finish');
      mms.decodeMms(encodeData, (err, data) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_encodeMms_Async_0200 fail');
          done();
          return;
        }
        expect(data.messageType === mms.TYPE_MMS_SEND_CONF).assertTrue();
        expect(data.mmsType.responseState ===  128).assertTrue();
        expect(data.mmsType.transactionId ===  '2077.1427358451410').assertTrue();
        expect(data.mmsType.version ===  mms.MMS_VERSION_1_1).assertTrue();
        expect(data.mmsType.messageId ===  '0001').assertTrue();
        console.log('Telephony_SmsMms_encodeMms_Async_0200 finish');
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Async_0300
   * @tc.name     NotificationInd type MMS, encoding after decoding,
   *              the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Async_0300', 0, async function (done) {
    let mmsType = {
      transactionId:"2080.142730",
      messageClass: 128,
      messageSize: 12345678,
      expiry: 1639378126,
      version: mms.MMS_VERSION_1_3,
      "from" : {addressString: '+861381234****/TYPE=PLMN', charset: mms.UTF_8},
      subject: "Test mms",
      deliveryReport: 128,
      contentLocation: "Test",
      contentClass: 128,
    };
    mms.encodeMms({messageType: mms.TYPE_MMS_NOTIFICATION_IND, mmsType}, (err, encodeData) =>{
      if (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_encodeMms_Async_0300 encodeMms fail');
        done();
        return;
      }
      console.log('Telephony_SmsMms_encodeMms_Async_0300 encodeMms finish');
      mms.decodeMms(encodeData, (err, data) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_encodeMms_Async_0300 fail');
          done();
          return;
        }
        expect(data.messageType === mms.TYPE_MMS_NOTIFICATION_IND).assertTrue();
        expect(data.mmsType.transactionId ===  '2080.142730').assertTrue();
        expect(data.mmsType.messageClass ===  128).assertTrue();
        expect(data.mmsType.messageSize ===  12345678).assertTrue();
        expect(data.mmsType.expiry > 0).assertTrue();;
        expect(data.mmsType.version === mms.MMS_VERSION_1_3).assertTrue();
        expect(data.mmsType.from.addressString.length > 0).assertTrue();
        expect(data.mmsType.from.charset ===  mms.UTF_8).assertTrue();
        expect(data.mmsType.subject ===  'Test mms').assertTrue();
        expect(data.mmsType.deliveryReport ===  128).assertTrue();
        expect(data.mmsType.contentLocation ===  'Test').assertTrue();
        expect(data.mmsType.contentClass ===  128).assertTrue();
        console.log('Telephony_SmsMms_encodeMms_Async_0300 finish');
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Async_0400
   * @tc.name     NotifyRespInd type MMS, encoding after decoding,the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Async_0400', 0, async function (done) {
    let mmsType = {
      transactionId: '2920.1410',
      status: 128,
      version: mms.MMS_VERSION_1_0,
      reportAllowed: 128
    };
    mms.encodeMms({messageType: mms.TYPE_MMS_RESP_IND, mmsType}, (err, encodeData) =>{
      if (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_encodeMms_Async_0400 encodeMms fail');
        done();
        return;
      }
      console.log('Telephony_SmsMms_encodeMms_Async_0400 encodeMms finish');
      mms.decodeMms(encodeData, (err, data) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_encodeMms_Async_0400 fail');
          done();
          return;
        }
        expect(data.messageType === mms.TYPE_MMS_RESP_IND).assertTrue();
        expect(data.mmsType.transactionId ===  '2920.1410').assertTrue();
        expect(data.mmsType.status ===  128).assertTrue();
        expect(data.mmsType.version ===  mms.MMS_VERSION_1_0).assertTrue();
        expect(data.mmsType.reportAllowed ===  128).assertTrue();
        console.log('Telephony_SmsMms_encodeMms_Async_0400 finish');
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Async_0500
   * @tc.name     RetrieveConf type MMS, encoding after decoding, the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Async_0500', 0, async function (done) {
    let mmsType = {
      transactionId: "3077.142410",
      messageId: "0001",
      date: 1639378126,
      version: mms.MMS_VERSION_1_2,
      to: [{addressString:"+861388888****/TYPE=PLMN", charset: mms.UTF_8}],
      "from" : {addressString: '+861381234****/TYPE=PLMN', charset: mms.UTF_8},
      cc: [{addressString: '+861381111****/TYPE=PLMN', charset: mms.UTF_8}],
      subject: "Test mms",
      priority: mms.MMS_HIGH,
      deliveryReport: 128,
      readReport: 128,
      retrieveStatus: 128,
      retrieveText: "0002",
      contentType: "application/vnd.wap.multipart.related",
    };
    mms.encodeMms({messageType: mms.TYPE_MMS_RETRIEVE_CONF, mmsType}, (err, encodeData) =>{
      if (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_encodeMms_Async_0500 encodeMms fail');
        done();
        return;
      }
      console.log('Telephony_SmsMms_encodeMms_Async_0500 encodeMms finish');
      mms.decodeMms(encodeData, (err, data) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_encodeMms_Async_0500 fail');
          done();
          return;
        }
        expect(data.messageType === mms.TYPE_MMS_RETRIEVE_CONF).assertTrue();
        expect(data.mmsType.transactionId ===  '3077.142410').assertTrue();
        expect(data.mmsType.messageId ===  '0001').assertTrue();
        expect(data.mmsType.date > 0).assertTrue();
        expect(data.mmsType.version === mms.MMS_VERSION_1_2).assertTrue();
        expect(data.mmsType.to.length > 0).assertTrue();
        expect(data.mmsType.to[0].addressString.length > 0).assertTrue();
        expect(data.mmsType.to[0].charset == mms.UTF_8).assertTrue();
        expect(data.mmsType.from.addressString === '2077/TYPE=PLMN').assertTrue();
        expect(data.mmsType.from.charset === mms.UTF_8).assertTrue();
        expect(data.mmsType.cc.length > 0).assertTrue();
        expect(data.mmsType.cc[0].addressString.length > 0).assertTrue();
        expect(data.mmsType.cc[0].charset == mms.UTF_8).assertTrue();
        expect(data.mmsType.subject === 'Test mms').assertTrue();
        expect(data.mmsType.priority === mms.MMS_HIGH).assertTrue();
        expect(data.mmsType.deliveryReport === 128).assertTrue();
        expect(data.mmsType.readReport === 128).assertTrue();
        expect(data.mmsType.retrieveStatus === 128).assertTrue();
        expect(data.mmsType.retrieveText === '0002').assertTrue();
        expect(data.mmsType.contentType === 'application/vnd.wap.multipart.related').assertTrue();
        console.log('Telephony_SmsMms_encodeMms_Async_0500 finish');
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Async_0600
   * @tc.name     AcknowledgeInd type MMS, encoding after decoding,
   *              the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Async_0600', 0, async function (done) {
    let mmsType = {
      transactionId: "27.14210",
      version: mms.MMS_VERSION_1_2,
      reportAllowed: 128,
    };
    mms.encodeMms({messageType: mms.TYPE_MMS_ACKNOWLEDGE_IND, mmsType}, (err, encodeData) =>{
      if (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_encodeMms_Async_0600 encodeMms fail');
        done();
        return;
      }
      console.log('Telephony_SmsMms_encodeMms_Async_0600 encodeMms finish');
      mms.decodeMms(encodeData, (err, data) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_encodeMms_Async_0600 fail');
          done();
          return;
        }
        expect(data.messageType === mms.TYPE_MMS_ACKNOWLEDGE_IND).assertTrue();
        expect(data.mmsType.transactionId ===  '27.14210').assertTrue();
        expect(data.mmsType.version ===  mms.MMS_VERSION_1_2).assertTrue();
        expect(data.mmsType.reportAllowed ===  128).assertTrue();
        console.log('Telephony_SmsMms_encodeMms_Async_0600 finish');
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Async_0700
   * @tc.name     DeliveryInd type MMS, encoding after decoding, the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Async_0700', 0, async function (done) {
    let mmsType = {
      messageId: "0001",
      date: 1639378126,
      to: [{addressString: "+861388888****/TYPE=PLMN", charset: mms.UTF_8}],
      state: 134,
      version: mms.MMS_VERSION_1_2,
    };
    mms.encodeMms({messageType: mms.TYPE_MMS_DELIVERY_IND, mmsType}, (err, encodeData) =>{
      if (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_encodeMms_Async_0700 encodeMms fail');
        done();
        return;
      }
      console.log('Telephony_SmsMms_encodeMms_Async_0700 encodeMms finish');
      mms.decodeMms(encodeData, (err, data) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_encodeMms_Async_0700 fail');
          done();
          return;
        }
        expect(data.messageType === mms.TYPE_MMS_DELIVERY_IND).assertTrue();
        expect(data.mmsType.messageId ===  '0001').assertTrue();
        expect(data.mmsType.date > 0).assertTrue();
        expect(data.mmsType.to.length > 0).assertTrue();
        expect(data.mmsType.to[0].addressString.length > 0).assertTrue();
        expect(data.mmsType.to[0].charset === mms.UTF_8).assertTrue();
        expect(data.mmsType.status ===  138).assertTrue();
        expect(data.mmsType.version ===  mms.MMS_VERSION_1_2).assertTrue();
        console.log('Telephony_SmsMms_encodeMms_Async_0700 finish');
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Async_0800
   * @tc.name     ReadRecInd type MMS, encoding after decoding, the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Async_0800', 0, async function (done) {
    let mmsType = {
      version: mms.MMS_VERSION_1_0,
      messageId: "0001",
      to: [{addressString: "+861388888****/TYPE=PLMN", charset: mms.UTF_8}],
      "from": {addressString: "+861381234****/TYPE=PLMN", charset: mms.UTF_8},
      readStatus: 128,
      date: 1639378126,
    };
    mms.encodeMms({messageType: mms.TYPE_MMS_READ_REC_IND, mmsType}, (err, encodeData) =>{
      if (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_encodeMms_Async_0700 encodeMms fail');
        done();
        return;
      }
      console.log('Telephony_SmsMms_encodeMms_Async_0700 encodeMms finish');
      mms.decodeMms(encodeData, (err, data) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_encodeMms_Async_0700 fail');
          done();
          return;
        }
        expect(data.messageType === mms.TYPE_MMS_READ_REC_IND).assertTrue();
        expect(data.mmsType.version === mms.MMS_VERSION_1_0).assertTrue();
        expect(data.mmsType.messageId ===  '0001').assertTrue();
        expect(data.mmsType.to.length > 0).assertTrue();
        expect(data.mmsType.to[0].addressString.length > 0).assertTrue();
        expect(data.mmsType.to[0].charset ===  mms.UTF_8).assertTrue();
        expect(data.mmsType.from.addressString.length > 0).assertTrue();
        expect(data.mmsType.from.charset ===  mms.UTF_8).assertTrue();
        expect(data.mmsType.readStatus ===  128).assertTrue();
        expect(data.mmsType.date > 0).assertTrue();
        console.log('Telephony_SmsMms_encodeMms_Async_0700 finish');
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Async_0900
   * @tc.name     ReadOrigInd type MMS, encoding after decoding, the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Async_0900', 0, async function (done) {
    let mmsType = {
      version: mms.MMS_VERSION_1_1,
      messageId: "0001",
      to: [{addressString: "+861388888****/TYPE=PLMN", charset: mms.UTF_8}],
      "from": {addressString: "+861381234****/TYPE=PLMN", charset: mms.UTF_8},
      date: 1639378126,
      readStatus: 129,
    };
    mms.encodeMms({messageType: mms.TYPE_MMS_READ_ORIG_IND, mmsType}, (err, encodeData) =>{
      if (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_encodeMms_Async_0700 encodeMms fail');
        done();
        return;
      }
      console.log('Telephony_SmsMms_encodeMms_Async_0700 encodeMms finish');
      mms.decodeMms(encodeData, (err, data) => {
        if (err) {
          expect().assertFail();
          console.log('Telephony_SmsMms_encodeMms_Async_0700 fail');
          done();
          return;
        }
        expect(data.messageType === mms.TYPE_MMS_READ_ORIG_IND).assertTrue();
        expect(data.mmsType.version ===  mms.MMS_VERSION_1_1).assertTrue();
        expect(data.mmsType.messageId ===  '0001').assertTrue();
        expect(data.mmsType.to.length === 0).assertTrue();
        expect(data.mmsType.from.addressString.length > 0).assertTrue();
        expect(data.mmsType.from.charset ===  mms.UTF_8).assertTrue();
        expect(data.mmsType.date > 0).assertTrue();
        expect(data.mmsType.readStatus ===  129).assertTrue();
        console.log('Telephony_SmsMms_encodeMms_Async_0700 finish');
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Promise_0100
   * @tc.name     SendReq type MMS, encoding after decoding, the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Promise_0100', 0, async function (done) {
    let mmsType = {
      "from" : {addressString: '+861381234****/TYPE=PLMN', charset: mms.UTF_8},
      to: [{addressString: '+861388888****', charset: mms.UTF_8}],
      transactionId: '2077.1427358451410',
      version: mms.MMS_VERSION_1_2,
      date:1639378126,
      cc: [{addressString: "+861381111****/TYPE=PLMN", charset: mms.UTF_8}],
      bcc: [{addressString: "+861382222****/TYPE=PLMN", charset: mms.UTF_8}],
      subject: "Test mms",
      messageClass: 130,
      expiry: 1639378126,
      priority: mms.MMS_LOW,
      senderVisibility: 129,
      deliveryReport: 128,
      readReport: 129,
      contentType: "application/vnd.wap.multipart.related",
    };
    let attachment = [
        {path: '/data/telephony/enSrc/content.text',
          contentId:'<content.text>',
          contentLocation:'content.text',
          contentDisposition:'content.text',
          contentTransferEncoding: 'base64',
          contentType:'text/plain',
          isSmil: false,
          inBuff: [1,2,3],
          charset: mms.UTF_8}];
    try {
      let encodePromise = await mms.encodeMms({messageType: mms.TYPE_MMS_SEND_REQ, mmsType, attachment});
      expect(encodePromise.length > 0).assertTrue();
      console.log('Telephony_SmsMms_encodeMms_Promise_0100 encodeMms finish');
      let promise = await mms.decodeMms(encodePromise);
      expect(promise.messageType === mms.TYPE_MMS_SEND_REQ).assertTrue();
      expect(promise.mmsType.from.addressString ===  '2077/TYPE=PLMN').assertTrue();
      expect(promise.mmsType.from.charset ===  mms.UTF_8).assertTrue();
      expect(promise.mmsType.to.length > 0).assertTrue();
      expect(promise.mmsType.to[0].addressString === '+4798682185/TYPE=PLMN').assertTrue();
      expect(promise.mmsType.to[0].charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.to[1].addressString === '+8610086/TYPE=PLMN').assertTrue();
      expect(promise.mmsType.to[1].charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.transactionId ===  '2077.1427358451410').assertTrue();
      expect(promise.mmsType.version ===  mms.MMS_VERSION_1_0).assertTrue();
      expect(promise.mmsType.date > 0).assertTrue();
      expect(promise.mmsType.cc.length === 0).assertTrue();
      expect(promise.mmsType.bcc.length === 0).assertTrue();
      expect(promise.mmsType.subject ===  'Test mms').assertTrue();
      expect(promise.mmsType.messageClass ===  128).assertTrue();
      expect(promise.mmsType.expiry ===  0).assertTrue();
      expect(promise.mmsType.priority ===  0).assertTrue();
      expect(promise.mmsType.senderVisibility ===  129).assertTrue();
      expect(promise.mmsType.deliveryReport ===  129).assertTrue();
      expect(promise.mmsType.readReport ===  129).assertTrue();
      expect(promise.mmsType.contentType ===  'application/vnd.wap.multipart.related').assertTrue();
      expect(promise.attachment.length > 0).assertTrue();
      expect(promise.attachment[0].path === '').assertTrue();
      expect(promise.attachment[0].contentId === '<megatron.png>').assertTrue();
      expect(promise.attachment[0].contentLocation === 'megatron.png').assertTrue();
      expect(promise.attachment[0].contentDisposition === 'megatron.png').assertTrue();
      expect(promise.attachment[0].contentTransferEncoding === '').assertTrue();
      expect(promise.attachment[0].contentType === 'image/png').assertTrue();
      expect(promise.attachment[0].isSmil).assertFalse();
      expect(promise.attachment[0].inBuff.length > 0).assertTrue();
      expect(promise.attachment[0].charset === 0).assertTrue();
      expect(promise.attachment[1].path === '').assertTrue();
      expect(promise.attachment[1].contentId === '<megatron.txt>').assertTrue();
      expect(promise.attachment[1].contentLocation === 'megatron.txt').assertTrue();
      expect(promise.attachment[1].contentDisposition === 'megatron.txt').assertTrue();
      expect(promise.attachment[1].contentTransferEncoding === '').assertTrue();
      expect(promise.attachment[1].contentType === 'txt/plain').assertTrue();
      expect(promise.attachment[1].isSmil).assertFalse();
      expect(promise.attachment[1].inBuff.length > 0).assertTrue();
      expect(promise.attachment[1].charset === mms.UTF_8).assertTrue();
      expect(promise.attachment[2].path === '').assertTrue();
      expect(promise.attachment[2].contentId === '<0000>').assertTrue();
      expect(promise.attachment[2].contentLocation === 'megatron.smil').assertTrue();
      expect(promise.attachment[2].contentDisposition === 'megatron.smil').assertTrue();
      expect(promise.attachment[2].contentTransferEncoding === '').assertTrue();
      expect(promise.attachment[2].contentType === 'application/smil').assertTrue();
      expect(promise.attachment[2].isSmil).assertFalse();
      expect(promise.attachment[2].inBuff.length > 0).assertTrue();
      expect(promise.attachment[2].charset === mms.UTF_8).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0100 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_encodeMms_Promise_0100 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Promise_0200
   * @tc.name     SendConf type MMS, encoding after decoding, the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Promise_0200', 0, async function (done) {
    let mmsType = {
      responseState: 128,
      transactionId: '2077.1427358451410',
      version: mms.MMS_VERSION_1_1,
      messageId: '0001',
    };
    try {
      let encodePromise = await mms.encodeMms({messageType: mms.TYPE_MMS_SEND_CONF, mmsType});
      expect(encodePromise.length > 0).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0200 encodeMms finish');
      let promise = await mms.decodeMms(encodePromise);
      expect(promise.messageType === mms.TYPE_MMS_SEND_CONF).assertTrue();
      expect(promise.mmsType.responseState === 128).assertTrue();
      expect(promise.mmsType.transactionId === '2077.1427358451410').assertTrue();
      expect(promise.mmsType.version ===  mms.MMS_VERSION_1_1).assertTrue();
      expect(promise.mmsType.messageId === '0001').assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0200 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0200 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Promise_0300
   * @tc.name     NotificationInd type MMS, encoding after decoding,
   *              the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Promise_0300', 0, async function (done) {
    let mmsType = {
      transactionId:"2080.142730",
      messageClass: 128,
      messageSize: 12345678,
      expiry: 1639378126,
      version: mms.MMS_VERSION_1_3,
      "from" : {addressString: '+861381234****/TYPE=PLMN', charset: mms.UTF_8},
      subject: "Test mms",
      deliveryReport: 128,
      contentLocation: "Test",
      contentClass: 128,
    };
    try {
      let encodePromise = await mms.encodeMms({messageType: mms.TYPE_MMS_NOTIFICATION_IND, mmsType});
      expect(encodePromise.length > 0).assertTrue();
      console.log('Telephony_SmsMms_encodeMms_Promise_0300 encodeMms finish');
      let promise = await mms.decodeMms(encodePromise);
      expect(promise.messageType === mms.TYPE_MMS_NOTIFICATION_IND).assertTrue();
      expect(promise.mmsType.transactionId === '2080.142730').assertTrue();
      expect(promise.mmsType.messageClass === 128).assertTrue();
      expect(promise.mmsType.messageSize === 12345678).assertTrue();
      expect(promise.mmsType.expiry > 0).assertTrue();;
      expect(promise.mmsType.version === mms.MMS_VERSION_1_3).assertTrue();
      expect(promise.mmsType.from.addressString.length > 0).assertTrue();
      expect(promise.mmsType.from.charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.subject === 'Test mms').assertTrue();
      expect(promise.mmsType.deliveryReport === 128).assertTrue();
      expect(promise.mmsType.contentLocation === 'Test').assertTrue();
      expect(promise.mmsType.contentClass === 128).assertTrue();
      console.log('Telephony_SmsMms_encodeMms_Promise_0300 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_encodeMms_Promise_0300 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Promise_0400
   * @tc.name     NotifyRespInd type MMS, encoding after decoding,the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Promise_0400', 0, async function (done) {
    let mmsType = {
      transactionId: '2920.1410',
      status: 128,
      version: mms.MMS_VERSION_1_0,
      reportAllowed: 128
    };
    try {
      let encodePromise = await mms.encodeMms({messageType: mms.TYPE_MMS_RESP_IND, mmsType});
      expect(encodePromise.length > 0).assertTrue();
      console.log('Telephony_SmsMms_encodeMms_Promise_0400 encodeMms finish');
      let promise = await mms.decodeMms(encodePromise);
      expect(promise.messageType === mms.TYPE_MMS_RESP_IND).assertTrue();
      expect(promise.mmsType.transactionId === '2920.1410').assertTrue();
      expect(promise.mmsType.status === 128).assertTrue();
      expect(promise.mmsType.version === mms.MMS_VERSION_1_0).assertTrue();
      expect(promise.mmsType.reportAllowed === 128).assertTrue();
      console.log('Telephony_SmsMms_encodeMms_Promise_0400 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_encodeMms_Promise_0400 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Promise_0500
   * @tc.name     RetrieveConf type MMS, encoding after decoding, the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Promise_0500', 0, async function (done) {
    let mmsType = {
      transactionId: "3077.142410",
      messageId: "0001",
      date: 1639378126,
      version: mms.MMS_VERSION_1_2,
      to: [{addressString:"+861388888****/TYPE=PLMN", charset: mms.UTF_8}],
      "from" : {addressString: '+861381234****/TYPE=PLMN', charset: mms.UTF_8},
      cc: [{addressString: '+861381111****/TYPE=PLMN', charset: mms.UTF_8}],
      subject: "Test mms",
      priority: mms.MMS_HIGH,
      deliveryReport: 128,
      readReport: 128,
      retrieveStatus: 128,
      retrieveText: "0002",
      contentType: "application/vnd.wap.multipart.related",
    };
    try {
      let encodePromise = await mms.encodeMms({messageType: mms.TYPE_MMS_RETRIEVE_CONF, mmsType});
      expect(encodePromise.length > 0).assertTrue();
      console.log('Telephony_SmsMms_encodeMms_Promise_0500 encodeMms finish');
      let promise = await mms.decodeMms(encodePromise);
      expect(promise.messageType === mms.TYPE_MMS_RETRIEVE_CONF).assertTrue();
      expect(promise.mmsType.transactionId === '3077.142410').assertTrue();
      expect(promise.mmsType.messageId === '0001').assertTrue();
      expect(promise.mmsType.date > 0).assertTrue();
      expect(promise.mmsType.version === mms.MMS_VERSION_1_2).assertTrue();
      expect(promise.mmsType.to.length > 0).assertTrue();
      expect(promise.mmsType.to[0].addressString.length > 0).assertTrue();
      expect(promise.mmsType.to[0].charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.from.addressString.length > 0).assertTrue();
      expect(promise.mmsType.from.charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.cc.length > 0).assertTrue();
      expect(promise.mmsType.cc[0].addressString.length > 0).assertTrue();
      expect(promise.mmsType.cc[0].charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.subject === 'Test mms').assertTrue();
      expect(promise.mmsType.priority === mms.MMS_HIGH).assertTrue();
      expect(promise.mmsType.deliveryReport === 128).assertTrue();
      expect(promise.mmsType.readReport === 128).assertTrue();
      expect(promise.mmsType.retrieveStatus === 128).assertTrue();
      expect(promise.mmsType.retrieveText === '0002').assertTrue();
      expect(promise.mmsType.contentType === 'application/vnd.wap.multipart.related').assertTrue();
      console.log('Telephony_SmsMms_encodeMms_Promise_0500 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_encodeMms_Promise_0500 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Promise_0600
   * @tc.name     AcknowledgeInd type MMS, encoding after decoding,
   *              the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Promise_0600', 0, async function (done) {
    let mmsType = {
      transactionId: "27.14210",
      version: mms.MMS_VERSION_1_2,
      reportAllowed: 128,
    };
    try {
      let encodePromise = await mms.encodeMms({messageType: mms.TYPE_MMS_ACKNOWLEDGE_IND, mmsType});
      expect(encodePromise.length > 0).assertTrue();
      console.log('Telephony_SmsMms_encodeMms_Promise_0600 encodeMms finish');
      let promise = await mms.decodeMms(encodePromise);
      expect(promise.messageType === mms.TYPE_MMS_ACKNOWLEDGE_IND).assertTrue();
      expect(promise.mmsType.transactionId === '27.14210').assertTrue();
      expect(promise.mmsType.version === mms.MMS_VERSION_1_2).assertTrue();
      expect(promise.mmsType.reportAllowed === 128).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0600 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0600 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Promise_0700
   * @tc.name     DeliveryInd type MMS, encoding after decoding, the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Promise_0700', 0, async function (done) {
    let mmsType = {
      messageId: "0001",
      date: 1639378126,
      to: [{addressString: "+861388888****/TYPE=PLMN", charset: mms.UTF_8}],
      state: 134,
      version: mms.MMS_VERSION_1_2,
    };
    try {
      let encodePromise = await mms.encodeMms({messageType: mms.TYPE_MMS_DELIVERY_IND, mmsType});
      expect(encodePromise.length > 0).assertTrue();
      console.log('Telephony_SmsMms_encodeMms_Promise_0700 encodeMms finish');
      let promise = await mms.decodeMms(encodePromise);
      expect(promise.messageType === mms.TYPE_MMS_DELIVERY_IND).assertTrue();
      expect(promise.mmsType.messageId ===  '0001').assertTrue();
      expect(promise.mmsType.date > 0).assertTrue();
      expect(promise.mmsType.to.length > 0).assertTrue();
      expect(promise.mmsType.to[0].addressString.length > 0).assertTrue();
      expect(promise.mmsType.to[0].charset === mms.UTF_8).assertTrue();
      expect(promise.mmsType.version === mms.MMS_VERSION_1_2).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0700 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0700 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Promise_0800
   * @tc.name     ReadRecInd type MMS, encoding after decoding, the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Promise_0800', 0, async function (done) {
    let mmsType = {
      version: mms.MMS_VERSION_1_0,
      messageId: "0001",
      to: [{addressString: "+861388888****/TYPE=PLMN", charset: mms.UTF_8}],
      "from": {addressString: "+861381234****/TYPE=PLMN", charset: mms.UTF_8},
      readStatus: 128,
      date: 1639378126,
    };
    try {
      let encodePromise = await mms.encodeMms({messageType: mms.TYPE_MMS_READ_REC_IND, mmsType});
      expect(encodePromise.length > 0).assertTrue();
      console.log('Telephony_SmsMms_encodeMms_Promise_0800 encodeMms finish');
      let promise = await mms.decodeMms(encodePromise);
      expect(promise.messageType === mms.TYPE_MMS_READ_REC_IND).assertTrue();
      expect(promise.mmsType.version ===  mms.MMS_VERSION_1_0).assertTrue();
      expect(promise.mmsType.messageId ===  '0001').assertTrue();
      expect(promise.mmsType.to.length === 0).assertTrue();
      expect(promise.mmsType.to[0].addressString.length > 0).assertTrue();
      expect(promise.mmsType.to[0].charset ===  mms.UTF_8).assertTrue();
      expect(promise.mmsType.from.addressString.length > 0).assertTrue();
      expect(promise.mmsType.from.charset ===  mms.UTF_8).assertTrue();
      expect(promise.mmsType.readStatus ===  128).assertTrue();
      expect(promise.mmsType.date > 0).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0800 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0800 fail');
      done();
    }
  });

  /**
   * @tc.number   Telephony_SmsMms_encodeMms_Promise_0900
   * @tc.name     ReadOrigInd type MMS, encoding after decoding, the content after decoding and coding before the same
   * @tc.desc     Function test
   */
  it('Telephony_SmsMms_encodeMms_Promise_0900', 0, async function (done) {
    let mmsType = {
      version: mms.MMS_VERSION_1_1,
      messageId: "0001",
      to: [{addressString: "+861388888****/TYPE=PLMN", charset: mms.UTF_8}],
      "from": {addressString: "+861381234****/TYPE=PLMN", charset: mms.UTF_8},
      date: 1639378126,
      readStatus: 129,
    };
    try {
      let encodePromise = await mms.encodeMms({messageType: mms.TYPE_MMS_READ_ORIG_IND, mmsType});
      expect(encodePromise.length > 0).assertTrue();
      console.log('Telephony_SmsMms_encodeMms_Promise_0900 encodeMms finish');
      let promise = await mms.decodeMms(encodePromise);
      expect(promise.messageType === mms.TYPE_MMS_READ_ORIG_IND).assertTrue();
      expect(promise.mmsType.version === mms.MMS_VERSION_1_1).assertTrue();
      expect(promise.mmsType.messageId === '0001').assertTrue();
      expect(promise.mmsType.to.length === 0).assertTrue();
      expect(promise.mmsType.to[0].addressString.length > 0).assertTrue();
      expect(promise.mmsType.to[0].charset ===  mms.UTF_8).assertTrue();
      expect(promise.mmsType.from.addressString.length > 0).assertTrue();
      expect(promise.mmsType.from.charset ===  mms.UTF_8).assertTrue();
      expect(promise.mmsType.date > 0).assertTrue();
      expect(promise.mmsType.readStatus ===  129).assertTrue();
      console.log('Telephony_SmsMms_decodeMms_Promise_0900 finish');
      done();
    } catch (err) {
      expect().assertFail();
      console.log('Telephony_SmsMms_decodeMms_Promise_0900 fail');
      done();
    }
  });


  //******************************Reliability  Performance **********************
  const TEST_RUN_TIME = 10;
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
        expect(data.mmsType.version ===  1/*mms.MMS_VERSION_1_0*/).assertTrue();
        expect(data.mmsType.messageId ===  '0001').assertTrue();
        expect(data.mmsType.date > 0).assertTrue();
        expect(data.mmsType.to.length === 0).assertTrue();
        expect(data.mmsType.from.addressString.length > 0).assertTrue();
        expect(data.mmsType.from.charset ===  mms.UTF_8).assertTrue();
        expect(data.mmsType.readStatus ===  128).assertTrue();
        recursive(n - 1);
      });
    }
    recursive(TEST_RUN_TIME);
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
        expect(totalTime).assertLess(5);
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
        expect(promise.mmsType.version ===  1/*mms.MMS_VERSION_1_0*/).assertTrue();
        expect(promise.mmsType.messageId ===  '0001').assertTrue();
        expect(promise.mmsType.date > 0).assertTrue();
        expect(promise.mmsType.to.length === 0).assertTrue();
        expect(promise.mmsType.from.addressString.length > 0).assertTrue();
        expect(promise.mmsType.from.charset ===  mms.UTF_8).assertTrue();
        expect(promise.mmsType.readStatus ===  128).assertTrue();
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
    expect(totalTime).assertLess(5);
    console.log(`Telephony_SmsMms_decodeMms_Promise_1200 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_decodeMms_Promise_1200 finish');
    done();
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
          expect(data.mmsType.version ===  mms.MMS_VERSION_1_1).assertTrue();
          expect(data.mmsType.messageId ===  '0001').assertTrue();
          expect(data.mmsType.to.length === 0).assertTrue();
          expect(data.mmsType.from.addressString.length > 0).assertTrue();
          expect(data.mmsType.from.charset ===  mms.UTF_8).assertTrue();
          expect(data.mmsType.date > 0).assertTrue();
          expect(data.mmsType.readStatus ===  129).assertTrue();
          console.log('Telephony_SmsMms_encodeMms_Async_1000 finish');
          done();
        });
      });
    }
    recursive(TEST_RUN_TIME);
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
        expect(totalTime).assertLess(5);
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
        expect(promise.mmsType.to[0].charset ===  mms.UTF_8).assertTrue();
        expect(promise.mmsType.from.addressString.length > 0).assertTrue();
        expect(promise.mmsType.from.charset ===  mms.UTF_8).assertTrue();
        expect(promise.mmsType.date > 0).assertTrue();
        expect(promise.mmsType.readStatus ===  129).assertTrue();
        console.log('Telephony_SmsMms_encodeMms_Promise_1000 finish');
        done();
      } catch (err) {
        expect().assertFail();
        console.log('Telephony_SmsMms_encodeMms_Promise_1000 fail');
        done();
      }
    }
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
    expect(totalTime).assertLess(5);
    console.log(`Telephony_SmsMms_decodeMms_Promise_1200 exec done useTime:${totalTime}`);
    console.log('Telephony_SmsMms_encodeMms_Promise_1100 finish');
    done();
  });
});