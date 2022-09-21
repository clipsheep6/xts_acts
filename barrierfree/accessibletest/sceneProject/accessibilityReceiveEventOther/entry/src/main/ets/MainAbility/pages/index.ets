/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import commonevent from '@ohos.commonEvent'
import accessibility from '@ohos.accessibility';

const accessibility_receiveEvent_budleName = 'com.example.myapplicationevent';
const Log :string= "[xtsLogB1] ";

const ThreadSleep = (ms) => {
  return new Promise(resolve => setTimeout(resolve, ms));
}

const excuteActionByCase = (data) => {
  switch (data) {
    case "ReceiveEventsFilter_0290":
      ReceiveEventsFilter_0290();
      break;
    case "ReceiveEventsFilter_0300":
      ReceiveEventsFilter_0300();
      break;
    case "ReceiveEventsFilter_0320":
      ReceiveEventsFilter_0320();
      break;
    case "ReceiveEventsFilter_0610":
      ReceiveEventsFilter_0610();
      break;
    case "ReceiveEventsFilter_0620":
      ReceiveEventsFilter_0620();
      break;
    case "ReceiveEventsFilter_0640":
      ReceiveEventsFilter_0640();
      break;
    default:
      break;
  }
}
const ReceiveEventsFilter_0290 = () => {
  const logTag = Log + " ReceiveEventsFilter_0290 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0290', accessibility_receiveEvent_budleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  var commonEventPublishData = {
    data: "on_target_change_b_extra_success"
  }
  commonevent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};
const ReceiveEventsFilter_0300 = () => {
  const logTag = Log + " ReceiveEventsFilter_0300 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0300', accessibility_receiveEvent_budleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  var commonEventPublishData = {
    data: "on_target_change_b_extra_success"
  }
  commonevent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};
const ReceiveEventsFilter_0320 = () => {
  const logTag = Log +" ReceiveEventsFilter_0320 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0320', accessibility_receiveEvent_budleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  let sendEventClick = createClick('ReceiveEventsFilter_0320', accessibility_receiveEvent_budleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_b_extra_success"
  }
  commonevent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};
const ReceiveEventsFilter_0610 = () => {
  const logTag = Log + " ReceiveEventsFilter_0610 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0610', accessibility_receiveEvent_budleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  var commonEventPublishData = {
    data: "on_target_change_b_extra_success"
  }
  commonevent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};
const ReceiveEventsFilter_0620 = () => {
  const logTag = Log + " ReceiveEventsFilter_0620 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0620', accessibility_receiveEvent_budleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  var commonEventPublishData = {
    data: "on_target_change_b_extra_success"
  }
  commonevent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};
const ReceiveEventsFilter_0640 = () => {
  const logTag = Log +" ReceiveEventsFilter_0640 ";
  let sendEventSelect = createSelect('ReceiveEventsFilter_0640', accessibility_receiveEvent_budleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventSelect);
  });
  let sendEventClick = createClick('ReceiveEventsFilter_0640', accessibility_receiveEvent_budleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_b_extra_success"
  }
  commonevent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};
const publishCallback = (result) => {
  console.info(Log + "====>on_target_change_extra publish call back result:" + JSON.stringify(result));
}
function createSelect(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'select';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'select';
  sendEventInfo.description = description;
  return sendEventInfo;
}
function createClick(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'click';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'click';
  sendEventInfo.description = description;
  return sendEventInfo;
}
const sendEventCallback = (logTag, sendEventInfo) => {
  accessibility.sendEvent(sendEventInfo, (err, result) => {
    if (err?.code) {
      console.log(logTag + "sendEvent Callback err=" + JSON.stringify(err));
      return;
    }
    console.log(logTag + "sendEvent Callback res=" + result);
  });
};
export {};
@Entry
@Component
struct Index {
  @State message: string = 'Receive Event'

  /**
   *
   */
  aboutToAppear() {
    var commonEventSubscribeInfo = {
      events: ["on_target_change_b"]
    }

    function subscriberCallback(err, data) {
      console.info(Log + "excuteActionByCase Receive Event:" + JSON.stringify(data));
      excuteActionByCase(data.data);
    }

    var subscriber
    commonevent.createSubscriber(commonEventSubscribeInfo).then(function (data) {
      console.info(Log + "====> Target createSubscriber Start====")
      subscriber = data;
      commonevent.subscribe(subscriber, subscriberCallback);
      console.info(Log + "====> Target createSubscriber End====")
    })
  }

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
      }
      .width('100%')
    }
    .height('100%')
  }
}