import sms from '@ohos.telephony.sms'
import Subscriber from '@ohos.commonevent';
import router from '@system.router';
import {smsFormat} from './util/constantAdd.js';

const EventConstants = {
//  EVENT_PACKAGE_ADDED : "usual.event.PACKAGE_ADDED",
//  EVENT_PACKAGE_CHANGED : "usual.event.PACKAGE_CHANGED",
//  EVENT_PACKAGE_REMOVED : "usual.event.PACKAGE_REMOVED",
  EVENT_SMS_RECEIVE : "usual.event.SMS_RECEIVE_COMPLETED",
  EVENT_SOS_BROADCAST:"usual.event.SMS_EMERGENCY_CB_RECEIVE_COMPLETED",
  EVENT_NORMAL_BROADCAST:"usual.event.SMS_CB_RECEIVE_COMPLETED"
}

/*
* //紧急小区广播类型 Action
//旧
ohos.action.telephonySmsETWSCBReceiveFinished
//新
usual.event.telephony.SMS_EMERGENCY_CB_RECEIVE_COMPLETED

//商用小区广播类型 Action
//旧
ohos.action.telephonySmsCBReceiveFinished
//新
usual.event.telephony.SMS_CB_RECEIVE_COMPLETED
*/
let mCommonEventSubscriber = null;
let mCommonEventSubscribeInfo = {
  events: [
//    EventConstants.EVENT_PACKAGE_ADDED,
//  EventConstants.EVENT_PACKAGE_CHANGED,
//  EventConstants.EVENT_PACKAGE_REMOVED,
  EventConstants.EVENT_SMS_RECEIVE,
  EventConstants.EVENT_SOS_BROADCAST,
  EventConstants.EVENT_NORMAL_BROADCAST
  ]
};

export default {
  data: {
    smsList:[]
  },
  onCreate() {
    this.registerAppListEvent()
  },
  onDestroy() {
    this.unregisterAppListEvent()
  },
  installationSubscriberCallBack(err, jsonData){
    if (err.code == 0) {
      console.log('==========================>installationSubscriberCallBack 1111111111');
      console.log('==========================>SubscriberCallBack  callbackData = ' + JSON.stringify(jsonData));
      console.log('==========================>SubscriberCallBack  callbackData = ' + jsonData.data);
      console.log('==========================>SubscriberCallBack  callbackData = ' + JSON.stringify(jsonData.parameters));
      console.log("SubscriberCallBack-start:"+new Date().getTime())
      //      分为普通的短信接收内容和小区广播短信接收到的内容 （广播分为普通广播和紧急广播 sos是紧急广播normal是普通广播）
      if(jsonData.event == EventConstants.EVENT_SOS_BROADCAST || jsonData.event == EventConstants.EVENT_NORMAL_BROADCAST){
        let data =  jsonData
        console.log("data"+ JSON.stringify(data))
        let innerData =  jsonData.parameters
        let broadcastType = (jsonData.event == EventConstants.EVENT_SOS_BROADCAST) ? '紧急广播':'普通广播'
        console.log("broadcast-parameters"+JSON.stringify(innerData))
        console.log("innerData"+innerData.msgBody +'msgbody')
        let msgObj = {
          'format': smsFormat[innerData.format],
          'isCmasMessage': innerData.isCmasMessage === true ? '是': '否',
          'isEtwsMessage': innerData.isEtwsMessage === true ? '是': '否',
          'isEtwsPrimary': innerData.isEtwsPrimary === true ? '是': '否',
          'visibleMessageBody': innerData.msgBody,
          'msgId':  parseInt(innerData.msgId),
          'recvTime': this.getLocalTime(innerData.recvTime),
          'serialNum': this.dealSerialNum(innerData.serialNum), //-16384
          'serviceCategory': 50,
          'visibleRawAddress': '广播类型'
        }
        console.log('解析后的数据：' + JSON.stringify(msgObj));
        this.data.smsList.push(msgObj);
      }else{
//        采用那种协议 1 3gpp 2 3gpp2
        let protocol = 0
        if(jsonData.parameters.isCdma){
          protocol = 2
        }else{
          protocol  = 1
        }
        this.testSplitString(protocol,jsonData.parameters);
      }
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
//截取广播返回的带冒号的pdu，根据冒号截取成数组，保存到strArr
  testSplitString(protocol,pdudata){
    console.log('pdudata'+JSON.stringify(pdudata))
    //    var strArr = pdudata.split(':');
    var strArr = pdudata.pdus
    console.log('testSplitString: '+strArr.length)
    if (strArr.length > 0) {
      this.testCreateMessage(protocol,strArr);
    }
  },
//通过for循环，将strArr中的pdu创建短信，还原短信内容，短信内容在回调的 "visibleMessageBody" 字段
  testCreateMessage(protocol,strArr){
    console.log("strArr: "+JSON.stringify(strArr))
    let msgInfo = '';
    let visibleRawAddress = '';
    let dealProtocol = '3gpp'
    let smsStandard = ''
    if(protocol == 1){
      dealProtocol = '3gpp'
      smsStandard = 'GSM'
    }else{
      dealProtocol = '3gpp2'
      smsStandard = 'CDMA'
    }
    console.log("dealProtocol"+dealProtocol)
    console.log('smsStandard'+smsStandard)
    if (strArr.length <= 1) {
      let createMessagePromise = sms.createMessage(this.convertStrArray(strArr[0]), dealProtocol);
      createMessagePromise.then((shortMessage) => {
        console.log("receiveSms-createMseesge text-time"+new Date().getTime())
        console.log("visibleMessageBody = " + shortMessage.visibleMessageBody);
        console.log("visibleRawAddress = " + shortMessage.visibleRawAddress);
        console.log("messageClass = " + shortMessage.messageClass);
        console.log("protocolId = " + shortMessage.protocolId);
        console.log("scAddress = " + shortMessage.scAddress);
        console.log("scTimestamp = " + shortMessage.scTimestamp);
        console.log("isReplaceMessage = " + shortMessage.isReplaceMessage);
        console.log("hasReplyPath = " + shortMessage.hasReplyPath);
        console.log("pdu = " + shortMessage.pdu);
        console.log("status = " + shortMessage.status);
        console.log("isSmsStatusReportMessage = " + shortMessage.isSmsStatusReportMessage);
        this.data.smsList.push({visibleMessageBody: shortMessage.visibleMessageBody, visibleRawAddress: shortMessage.visibleRawAddress,smsType:smsStandard});
        router.push({
          uri: 'pages/msgList/msgList'
        })
      }).catch((err) => {
        console.log("createShortMessage err " + err.message);
      });
    } else {
      let count = 0;
      for (var i = 0; i < strArr.length; i++) {
        let createMessagePromise = sms.createMessage(this.convertStrArray(strArr[i]), dealProtocol);
        createMessagePromise.then((shortMessage) => {
          console.log("receiveSms-createMseesge text-time-long"+new Date().getTime())
          console.log("visibleMessageBody = " + shortMessage.visibleMessageBody);
          console.log("visibleRawAddress = " + shortMessage.visibleRawAddress);
          console.log("messageClass = " + shortMessage.messageClass);
          console.log("protocolId = " + shortMessage.protocolId);
          console.log("scAddress = " + shortMessage.scAddress);
          console.log("scTimestamp = " + shortMessage.scTimestamp);
          console.log("isReplaceMessage = " + shortMessage.isReplaceMessage);
          console.log("hasReplyPath = " + shortMessage.hasReplyPath);
          console.log("pdu = " + shortMessage.pdu);
          console.log("status = " + shortMessage.status);
          console.log("isSmsStatusReportMessage = " + shortMessage.isSmsStatusReportMessage);
          visibleRawAddress = shortMessage.visibleRawAddress;
          msgInfo += shortMessage.visibleMessageBody
          count ++;
          console.log('count value:'+count);
          if (count === strArr.length ) {
            this.data.smsList.push({visibleMessageBody: msgInfo, visibleRawAddress: visibleRawAddress,smsType:smsStandard});
            router.push({
              uri: 'pages/msgList/msgList'
            })
          }
        }).catch((err) => {
          console.log("createShortMessage err " + err.message);
        });
      }
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

