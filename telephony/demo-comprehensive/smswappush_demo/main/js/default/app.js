import sms from '@ohos.telephony.sms'
import Subscriber from '@ohos.commonevent';
import router from '@system.router';
import {MessageTypeTxt, MsgContentType, MsgType} from './utils/smsInfo.js'

const EventConstants = {
  EVENT_SMS_WAPPUSH_RECEIVE:"usual.event.SMS_WAPPUSH_RECEIVE_COMPLETED"
}

let mCommonEventSubscriber = null;
let mCommonEventSubscribeInfo = {
  events: [
    EventConstants.EVENT_SMS_WAPPUSH_RECEIVE
  ]
};

export default {
  data: {
    smsList:[]
  },
  onCreate() {
    console.log('telephony app onCreate end');
    this.registerAppListEvent()

  },
  onDestroy() {
    console.info('AceApplication onDestroy');
    this.unregisterAppListEvent()
  },
  installationSubscriberCallBack(err, jsonData){
    console.log('installationSubscriberCallBack get ');
    if (err.code == 0) {
      console.log('==========================>installationSubscriberCallBack 1111111111');
      console.log('==========================>SubscriberCallBack  callbackData = ' + JSON.stringify(jsonData));
      console.log('==========================>SubscriberCallBack  callbackData = ' + jsonData.data);
      console.log('==========================>SubscriberCallBack  parameters = ' + JSON.stringify(jsonData.parameters));
      let innerData =  jsonData.parameters;
      const data = innerData.rawData;
      const numary = this.convertStrArray(data);

      const msgContentType = innerData.contentType;
      if (msgContentType === MsgContentType.MMS_CONTENT_TYPE_MESSAGE) {
        this.decodeSms(numary, msgContentType);
      } else {
        let msgObj = {
          'contentType': MsgType[msgContentType],
          'rawData': JSON.stringify(innerData, null, '\n')
        }
        console.log('解析后的数据：' + JSON.stringify(msgObj));
        this.data.smsList.push(msgObj);
      }

      router.push({
        uri: 'pages/index/index'
      });
      console.log('==========================>hasSmsCapability  end');
    } else {
      console.log("installationSubscriberCallBack list change failed --- err = " + JSON.stringify(err));
    }
  },
  createInstallationSubscriberCallBack(err, data){
    console.info("Launcher AppModel createInstallationSubscriberCallBack");
    mCommonEventSubscriber = data;
    Subscriber.subscribe(mCommonEventSubscriber, this.installationSubscriberCallBack.bind(this));
  },
  registerAppListEvent() {
    Subscriber.createSubscriber(
      mCommonEventSubscribeInfo,
      this.createInstallationSubscriberCallBack.bind(this)
    );
  },
  unregisterAppListEvent() {
    Subscriber.unsubscribe(mCommonEventSubscriber, () => {
      console.info("Launcher AppModel unregisterAppListEvent");
    });
  },
  // 解码彩信
  decodeSms (data, contentType) {
    console.log(`decodeSms DATA: ${data}`);
    sms.decodeMms(data).then((value) => {
      console.log(`decodeMms on value = ${JSON.stringify(value)}`);
      let msgObj = {
        'contentType': MsgType[contentType],
        'messageType': `${value.messageType} | ${MessageTypeTxt[value.messageType]}`,
        'mmsType': JSON.stringify(value.mmsType, null, '\n'),
        'attachment': JSON.stringify(value.attachment, null, '\n'),
      }
      console.log('解析后的数据：' + JSON.stringify(msgObj));
      this.data.smsList.push(msgObj);
    }).catch((error) => {
      console.log(`decodeMms on on error because = ${error.message}`);
    });
  },


//截取广播返回的带冒号的pdu，根据冒号截取成数组，保存到strArr
  testSplitString(pdudata){
    console.log('pdudata'+JSON.stringify(pdudata))
    //    var strArr = pdudata.split(':');
    var strArr = pdudata.pdus
    console.log('testSplitString: '+strArr.length)
    if (strArr.length > 0) {
      this.testCreateMessage(protocol,strArr);
    }
  },
  convertStrArray(sourceStr) {
    let wby = new String(sourceStr);
    let length = wby.length;
    let isDouble = (length % 2) == 0;
    let halfSize = parseInt(length / 2);
    if (isDouble) {
      let number0xArray = new Array(halfSize);
      for (let i = 0;i < halfSize; i++) {
        number0xArray[i] = "0x" + wby.substr(i * 2, 2);
      }
      let numberArray = new Array(halfSize);
      for (let i = 0;i < halfSize; i++) {
        numberArray[i] = parseInt(number0xArray[i], 16);
      }

      return numberArray;
    } else {
      console.log("pdu error...");
      let number0xArray = new Array(halfSize + 1);
      for (let i = 0;i < halfSize; i++) {
        number0xArray[i] = "0x" + wby.substr(i * 2, 2);
      }
      number0xArray[halfSize] = "0x" + wby.substr((halfSize * 2) + 1, 1);
      let numberArray = new Array(halfSize + 1);
      for (let i = 0;i < halfSize; i++) {
        numberArray[i] = parseInt(number0xArray[i], 16);
      }
      let last0x = "0x" + wby.substr(wby.length - 1, 1);
      numberArray[halfSize] = parseInt(last0x);
      return numberArray;
    }
  },
// 时间戳转日期
  getLocalTime(nS) {
    return new Date(parseInt(nS) * 1000).toLocaleString().replace(/:\d{1,2}$/, ' ');
  },
  dealSerialNum(val) {
    var num = val & 0xffff;
    let geoScope = (num >>0x0E) & 0x03;
    let msgCode = (num >> 0x04) & 0x03FF;
    let updateNum = num & 0x0F;

    console.log("num =" + num);
    console.log("geoScope =" + geoScope);
    console.log("msgCode =" + msgCode);
    console.log("updateNum =" + updateNum);
    return `${num}-- geoScope: ${geoScope} | msgCode: ${msgCode} | updateNum: ${updateNum} `;
  },
};
