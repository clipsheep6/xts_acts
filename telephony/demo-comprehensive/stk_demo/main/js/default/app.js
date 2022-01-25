/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
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


import Subscriber from '@ohos.commonevent';
import router from '@system.router';

const EventConstants = {
  EVENT_STK_COMMAND : 'usual.event.telpnony.STK_COMMAND',
  EVENT_STK_CARD_STATUS_INFORM: 'usual.event.telpnony.STK_CARD_STATUS_INFORM'
}

let mCommonEventSubscriber = null;
let mCommonEventSubscribeInfo = {
  events: [
    EventConstants.EVENT_STK_COMMAND,
    EventConstants.EVENT_STK_CARD_STATUS_INFORM
  ]
};

export default {
  data: {
  },
  onCreate() {
    this.registerAppListEvent();
    console.log('telephony app onCreate end');
  },
  onDestroy() {
    console.info('AceApplication onDestroy');
    this.unregisterAppListEvent();
  },
  installationSubscriberCallBack(err, jsonData){
    console.log('installationSubscriberCallBack get ');
    if (err.code == 0) {
      console.log('=>installationSubscriberCallBack');
      console.log(`=>callbackData = ${JSON.stringify(jsonData)}`);
      console.log(`=>SjsonData.data = ${jsonData.data}`);
      console.log(`=>jsonData.parameters = ${JSON.stringify(jsonData.parameters)}`);

      let innerData =  jsonData.parameters;
      let slotID = innerData.slotID;
      let msgCmd = innerData.msgCmd;
      let cardStatus = innerData.cardStatus; // 0 CARD_ABSENT, 1 CARD_PRESENT
      router.push({
        uri: 'pages/index/index',
        params: {
          slotID,
          msgCmd,
          cardStatus
        }
      })
    } else {
      console.log(`installationSubscriberCallBack list change failed --- err = ${JSON.stringify(err)}` );
    }
  },
  createInstallationSubscriberCallBack(err, data){
    console.info('Launcher AppModel createInstallationSubscriberCallBack');
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
      console.info('Launcher AppModel unregisterAppListEvent');
    });
  }
};
