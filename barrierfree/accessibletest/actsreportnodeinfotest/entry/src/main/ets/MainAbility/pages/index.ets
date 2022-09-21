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
import file from '@system.file';
import commonEvent from '@ohos.commonEvent'
import prompt from '@ohos.prompt'

const ThreadSleep = (ms) => {
  return new Promise(resolve => setTimeout(resolve, ms));
}
const LOG: string = "[xtsLog]";

const ReportNodeInfo = (caseName) => {
  commonEventPublishOnTargetChangeExtra(caseName);
  ThreadSleep(2000).then(() => {
    commonEventPublishExecuteAccessibilityEvent(caseName)
  });
}

const commonEventPublishOnTargetChangeExtra = (caseName) => {
  function publishCallback(err) {
    console.info(LOG + caseName + " on_target_change_extra  publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseName + "_on_target_change_extra_success",
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback);
}

const commonEventPublishExecuteAccessibilityEvent = (caseName) => {
  function publishCallback(err) {
    console.info(LOG + " execute_accessibility_event  publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseName + "_execute_accessibility_event_success",
  }
  commonEvent.publish("execute_accessibility_event", commonEventPublishData, publishCallback);
}



const excuteAbility = (data) => {
  switch (data) {
    case "ReportNodeInfo_0010" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0010")
      break;
    case "ReportNodeInfo_0011" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0011")
      break;
    case "ReportNodeInfo_0020" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0020")
      break;
    case "ReportNodeInfo_0021" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0021")
      break;
    case "ReportNodeInfo_0030" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0030")
      break;
    case "ReportNodeInfo_0031" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0031")
      break;
    case "ReportNodeInfo_0040" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0040")
      break;
    case "ReportNodeInfo_0041" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0041")
      break;
    case "ReportNodeInfo_0050" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0050")
      break;
    case "ReportNodeInfo_0051" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0051")
      break;
    case "ReportNodeInfo_0060" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0060")
      break;
    case "ReportNodeInfo_0061" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0061")
      break;
    case "ReportNodeInfo_0070" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0070")
      break;
    case "ReportNodeInfo_0071" + "_AccessibilityApp_start":
      ReportNodeInfo("ReportNodeInfo_0071")
      break;
    default:
      break;
  }
}

@Entry
@Component
struct Index {
  private subScriber = undefined;
  aboutToAppear() {
    var commonEventSubscribeInfo = {
      events: ["on_target_change"]
    }
    function subscriberCallback(err, data) {
      console.info(LOG + "====>Target subscriberCallback start");
      console.info(LOG + "====>Target receive event err:" + JSON.stringify(err));
      console.info(LOG + "====>Target receive event data:" + JSON.stringify(data));
      excuteAbility(data.data);
      console.info(LOG + "====>Target subscriberCallback end");
    }

    var subscriber
    commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
      console.info(LOG + "====> Target createSubscriber Start====")
      this.subScriber = subscriber;
      commonEvent.subscribe(subscriber, subscriberCallback);
      console.info(LOG + "====> Target createSubscriber End====")
    })
  }

  aboutToDisappear() {
    console.info('TargetApp aboutToDisappear');
    commonEvent.unsubscribe(this.subScriber);
    this.subScriber = undefined;
  }

  build() {
    Row() {
      Column() {
        Text('ReportNodeInfo')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(50)
        Text('ReportNodeInfo_0010')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .border({ width: 2 })
        Text('ReportNodeInfo_0011')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .border({ width: 2 })
        Text('ReportNodeInfo_0020')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .border({ width: 2 })
        Text('ReportNodeInfo_0021')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .border({ width: 2 })
        Button('ReportNodeInfo_0040')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick(() => {
            prompt.showToast({ message: "点击ReportNodeInfo_0040成功" });
          })
        Button('ReportNodeInfo_0041')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick(() => {
            prompt.showToast({ message: "点击ReportNodeInfo_0041成功" });
          })
        Button('ReportNodeInfo_0030')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick(() => {
            prompt.showToast({ message: "点击ReportNodeInfo_0030成功" });
          })
        Button('ReportNodeInfo_0031')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick(() => {
            prompt.showToast({ message: "点击ReportNodeInfo_0031成功" });
          })
        Button('ReportNodeInfo_0050')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick(() => {
            prompt.showToast({ message: "点击ReportNodeInfo_0050成功" });
          })
        Button('ReportNodeInfo_0051')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick(() => {
            prompt.showToast({ message: "点击ReportNodeInfo_0051成功" });
          })
        Button('ReportNodeInfo_0070')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick(() => {
            prompt.showToast({ message: "点击ReportNodeInfo_0070成功" });
          })
        Button('ReportNodeInfo_0071')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick(() => {
            prompt.showToast({ message: "点击ReportNodeInfo_0071成功" });
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}
