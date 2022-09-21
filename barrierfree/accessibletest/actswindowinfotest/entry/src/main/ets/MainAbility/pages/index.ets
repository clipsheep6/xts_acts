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

const ThreadSleep = (ms) => {
  return new Promise(resolve => setTimeout(resolve, ms));
}
const LOG: string = "[xtsLog]";

const WindowInfoGet = (caseName) => {

  commonEventPublishOnTargetChangeExtra(caseName);
  ThreadSleep(2000).then(() => {
    commonEventPublishOnAssistChangeWindowInfo(caseName)
  });
}

const commonEventPublishOnAssistChangeWindowInfo = (caseName) => {
  function publishCallback(err) {
    const logTag = LOG + caseName;
    console.info(logTag + "on_assist_change_windowinfo onAbilityConnected publish call back result:" + JSON.stringify(err));
  }

  var commonEventPublishData = {
    data: caseName + "_on_assist_change_success",
  }
  commonEvent.publish("on_assist_change", commonEventPublishData, publishCallback);
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

const excuteAbility = (data) => {
  switch (data) {
    case "WindowInfoGet_0010" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0010")
      break;
    case "WindowInfoGet_0011" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0011")
      break;
    case "WindowInfoGet_0020" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0020")
      break;
    case "WindowInfoGet_0030" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0030")
      break;
    case "WindowInfoGet_0031" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0031")
      break;
    case "WindowInfoGet_0040" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0040")
      break;
    case "WindowInfoGet_0050" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0050")
      break;
    case "WindowInfoGet_0051" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0051")
      break;
    case "WindowInfoGet_0060" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0060")
      break;
    case "WindowInfoGet_0070" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0070")
      break;
    case "WindowInfoGet_0071" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0071")
      break;
    case "WindowInfoGet_0080" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0080")
      break;
    case "WindowInfoGet_0090" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0090")
      break;
    case "WindowInfoGet_0091" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0091")
      break;
    case "WindowInfoGet_0100" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0100")
      break;
    case "WindowInfoGet_0110" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0110")
      break;
    case "WindowInfoGet_0111" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0111")
      break;
    case "WindowInfoGet_0120" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0120")
      break;
    case "WindowInfoGet_0130" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0130")
      break;
    case "WindowInfoGet_0131" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0131")
      break;
    case "WindowInfoGet_0140" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0140")
      break;
    case "WindowInfoGet_0150" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0150")
      break;
    case "WindowInfoGet_0151" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0151")
      break;
    case "WindowInfoGet_0160" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0160")
      break;
    case "WindowInfoGet_0190" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0190")
      break;
    case "WindowInfoGet_0200" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0200")
      break;
    case "WindowInfoGet_0210" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0210")
      break;
    case "WindowInfoGet_0220" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0220")
      break;
    case "WindowInfoGet_0230" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0230")
      break;
    case "WindowInfoGet_0240" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0240")
      break;
    case "WindowInfoGet_0250" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0250")
      break;
    case "WindowInfoGet_0260" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0260")
      break;
    case "WindowInfoGet_0270" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0270")
      break;
    case "WindowInfoGet_0280" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0280")
      break;
    case "WindowInfoGet_0290" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0290")
      break;
    case "WindowInfoGet_0300" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0300")
      break;
    case "WindowInfoGet_0301" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0301")
      break;
    case "WindowInfoGet_0302" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0302")
      break;
    case "WindowInfoGet_0303" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0303")
      break;
    case "WindowInfoGet_0304" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0304")
      break;
    case "WindowInfoGet_0305" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0305")
      break;
    case "WindowInfoGet_0306" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0306")
      break;
    case "WindowInfoGet_0307" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0307")
      break;
    case "WindowInfoGet_0308" + "_AccessibilityApp_start":
      WindowInfoGet("WindowInfoGet_0308")
      break;
    default:
      break;
  }
}

@Entry
@Component
struct Index {
  private subScriber = undefined
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
    commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
      console.info(LOG + "====> Target createSubscriber Start====")
      this.subScriber = subscriber;
      commonEvent.subscribe(subscriber, subscriberCallback);
      console.info(LOG + "====> Target createSubscriber End====")
    })
    console.info("start run testcase!!!!")
  }

  aboutToDisappear() {
    console.info('TargetApp aboutToDisappear')
    commonEvent.unsubscribe(this.subScriber)
    this.subScriber = undefined
  }

  build() {
    Row() {
      Column() {
        Button('WindowInfo')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick((e) => {
            console.info("WindowInfo onClick")
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}
