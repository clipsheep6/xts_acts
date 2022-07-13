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
import {Core, ExpectExtend, InstrumentLog, ReportExtend} from "deccjsunit/index"
import testsuite from '../test/List.test'
import file from '@system.file';
import commonEvent from '@ohos.commonEvent'
import accessibility from '@ohos.accessibility';

export { };
const LOG: string = "[xtsLog]";

const CaptionConfiguration_0010 = () => {
  const caseName = "CaptionConfiguration_0010"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  let before =captionsManager.enabled;

  console.info(logTag + "captionsManager before modification. enabled=" + before);
  captionsManager.enabled = !captionsManager.enabled;
  let after = captionsManager.enabled;
  console.info(logTag + "captionsManager after modification. enabled=" + after);
  if (before != after) {
    commonEventPublishOnTargetChangeExtra(caseName);
  }

}

const printCaptionsManagerStyle = (logTag, captionsManager) => {
  const back = "{\"fontFamily\":\"" + captionsManager.style.fontFamily +
  "\",\"fontScale\":" + captionsManager.style.fontScale +
  ",\"fontColor\":\"" + captionsManager.style.fontColor +
  "\",\"fontEdgeType\":\"" + captionsManager.style.fontEdgeType +
  "\",\"backgroundColor\":\"" + captionsManager.style.backgroundColor +
  "\",\"windowColor\":\"" + captionsManager.style.windowColor + "\"}";
  console.info(logTag +back);
  return back;
};

const printCaptionStyle = (logTag, CaptionStyle) => {
  const back = "{\"fontFamily\":\"" + CaptionStyle.fontFamily +
  "\",\"fontScale\":" + CaptionStyle.fontScale +
  ",\"fontColor\":\"" + CaptionStyle.fontColor +
  "\",\"fontEdgeType\":\"" + CaptionStyle.fontEdgeType +
  "\",\"backgroundColor\":\"" + CaptionStyle.backgroundColor +
  "\",\"windowColor\":\"" + CaptionStyle.windowColor + "\"}";
  console.info(logTag + back);
  return back;
};

const foreachList = (currValue, array) => {
  if (!currValue || currValue.length < 1) {
    return array[0];
  }
  let result = array[0];
  array.forEach((value, index) => {
    if (currValue === value) {
      if (array.length > index + 1) {
        result = array[index+1];
      }
    }
  });
  return result;
}

const CaptionConfiguration_0020 = () => {
  const caseName = "CaptionConfiguration_0020"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  const before = printCaptionsManagerStyle(logTag + "captionsManager before modification. style=", captionsManager);
  captionsManager.style.fontFamily = foreachList(captionsManager.style.fontFamily, ['default', 'monospacedSerif', 'serif',
  'monospacedSansSerif', 'sansSerif', 'casual', 'cursive', 'smallCapitals']);
  const after = printCaptionsManagerStyle(logTag + "captionsManager after modification. style=", captionsManager);
  if(before!=after){
    commonEventPublishOnTargetChangeExtra(caseName);
  }

};

const CaptionConfiguration_0030 = () => {
  const caseName = "CaptionConfiguration_0030"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  let before =(captionsManager.enabled);

  console.info(logTag + "captionsManager before modification. enabled=" + before);
  captionsManager.enabled = !captionsManager.enabled;
  let after = captionsManager.enabled;
  console.info(logTag + "captionsManager after modification. enabled=" + after);
  if (before != after) {
    commonEventPublishOnTargetChangeExtra(caseName );
  }
}

const CaptionConfiguration_0040 = () => {
  const caseName = "CaptionConfiguration_0040"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  const before = printCaptionsManagerStyle(logTag + "captionsManager before modification. style=", captionsManager);
  captionsManager.style.fontFamily = foreachList(captionsManager.style.fontFamily, ['default', 'monospacedSerif', 'serif',
  'monospacedSansSerif', 'sansSerif', 'casual', 'cursive', 'smallCapitals']);
  const after = printCaptionsManagerStyle(logTag + "captionsManager after modification. style=", captionsManager);
  if(before!=after){
    commonEventPublishOnTargetChangeExtra(caseName);
  }
};

const CaptionConfiguration_0050 = () => {
  const caseName = "CaptionConfiguration_0050"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  const before = printCaptionsManagerStyle(logTag + "captionsManager before modification. style=", captionsManager);
  captionsManager.style.fontFamily = foreachList(captionsManager.style.fontFamily, ['default', 'monospacedSerif', 'serif',
  'monospacedSansSerif', 'sansSerif', 'casual', 'cursive', 'smallCapitals']);
  const after =printCaptionsManagerStyle(logTag + "captionsManager after modification. style=", captionsManager);
  if(before!=after){
    commonEventPublishOnTargetChangeExtra(caseName);
  }
};

const CaptionConfiguration_0060 = () => {
  const caseName = "CaptionConfiguration_0060"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  const before = printCaptionsManagerStyle(logTag + "captionsManager before modification. style=", captionsManager);
  captionsManager.style.fontScale = (captionsManager.style.fontScale ?? 0) + 1;
  const after =printCaptionsManagerStyle(logTag + "captionsManager after modification. style=", captionsManager);
  if(before!=after){
    commonEventPublishOnTargetChangeExtra(caseName);
  }
};

const CaptionConfiguration_0070 = () => {
  const caseName = "CaptionConfiguration_0070"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  const before =printCaptionsManagerStyle(logTag + "captionsManager before modification. style=", captionsManager);
  captionsManager.style.fontColor = foreachList(captionsManager.style.fontColor, ['red', 'yellow', 'blue', '#ff0000ff', '##ff000000', 'black', 'white']);
  const after =printCaptionsManagerStyle(logTag + "captionsManager after modification. style=", captionsManager);
  if(before!=after){
    commonEventPublishOnTargetChangeExtra(caseName);
  }
};

const CaptionConfiguration_0080 = () => {
  const caseName = "CaptionConfiguration_0080"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  const before =printCaptionsManagerStyle(logTag + "captionsManager before modification. style=", captionsManager);
  captionsManager.style.fontEdgeType = foreachList(captionsManager.style.fontEdgeType, ['none', 'raised', 'depressed', 'uniform', 'dropShadow']);
  const after =printCaptionsManagerStyle(logTag + "captionsManager after modification. style=", captionsManager);
  if(before!=after){
    commonEventPublishOnTargetChangeExtra(caseName);
  }
};

const CaptionConfiguration_0090 = () => {
  const caseName = "CaptionConfiguration_0090"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  const before =printCaptionsManagerStyle(logTag + "captionsManager before modification. style=", captionsManager);
  captionsManager.style.backgroundColor = foreachList(captionsManager.style.backgroundColor, ['red', 'yellow', 'blue', '#ff0000ff', '##ff000000', 'black', 'white']);
  const after = printCaptionsManagerStyle(logTag + "captionsManager after modification. style=", captionsManager);
  if(before!=after){
    commonEventPublishOnTargetChangeExtra(caseName);
  }
};

const CaptionConfiguration_0100 = () => {
  const caseName = "CaptionConfiguration_0100"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  const before =printCaptionsManagerStyle(logTag + "captionsManager before modification. style=", captionsManager);
  captionsManager.style.windowColor = foreachList(captionsManager.style.windowColor, ['red', 'yellow', 'blue', '#ff0000ff', '#ff000000', 'black', 'white']);
  const after = printCaptionsManagerStyle(logTag + "captionsManager after modification. style=", captionsManager);
  if(before!=after){
    commonEventPublishOnTargetChangeExtra(caseName);
  }
};

const CaptionConfiguration_0110 = () => {
  const caseName = "CaptionConfiguration_0110"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  const before =printCaptionsManagerStyle(logTag + "captionsManager before modification. style=", captionsManager);
  for (let index = 0;index < 3; index++) {
    printCaptionsManagerStyle(logTag + "captionsManager before modification. times=" + index + ". style=", captionsManager);
    captionsManager.style.windowColor = foreachList(captionsManager.style.windowColor, ['red', 'yellow', 'blue', '#ff0000ff', '#ff000000','#00000000','#f0000000', 'black', 'white']);
    printCaptionsManagerStyle(logTag + "captionsManager after modification. times=" + index + ". style=", captionsManager);
  }

  setTimeout(()=>{
    const after = printCaptionsManagerStyle(logTag + "captionsManager after modification. style=", captionsManager);
    if(before!=after) {
      commonEventPublishOnTargetChangeExtra(caseName);
    }
  },2000)

};

const CaptionConfiguration_0120 = () => {
  const caseName = "CaptionConfiguration_0120"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  const before =console.info(logTag + "captionsManager before modification. enabled=" + captionsManager.enabled);
  captionsManager.enabled = !captionsManager.enabled;
  const after =console.info(logTag + "captionsManager after modification. enabled=" + captionsManager.enabled);
  if(before!=after) {
    commonEventPublishOnTargetChangeExtra(caseName);
  }
};

const CaptionConfiguration_0130 = () => {
  const caseName = "CaptionConfiguration_0130"
  const logTag = LOG + caseName;
  let captionsManager = accessibility.getCaptionsManager();
  if (!captionsManager) {
    console.info(logTag + "captionsManager is undefined");
    return;
  }
  const before = printCaptionsManagerStyle(logTag + "captionsManager before modification. style=", captionsManager);
  captionsManager.style.fontEdgeType = undefined;
  const after =printCaptionsManagerStyle(logTag + "captionsManager after modification. style=", captionsManager);
  if(before!=after) {
    commonEventPublishOnTargetChangeExtra(caseName);
  }
};

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

    case "CaptionConfiguration_0010" + "_AccessibilityApp_start":
      CaptionConfiguration_0010()
      break;
    case "CaptionConfiguration_0020" + "_AccessibilityApp_start":
      CaptionConfiguration_0020()
      break;
    case "CaptionConfiguration_0030" + "_AccessibilityApp_start":
      CaptionConfiguration_0030()
      break;
    case "CaptionConfiguration_0040" + "_AccessibilityApp_start":
      CaptionConfiguration_0040()
      break;
    case "CaptionConfiguration_0050" + "_AccessibilityApp_start":
      CaptionConfiguration_0050()
      break;
    case "CaptionConfiguration_0060" + "_AccessibilityApp_start":
      CaptionConfiguration_0060()
      break;
    case "CaptionConfiguration_0070" + "_AccessibilityApp_start":
      CaptionConfiguration_0070()
      break;
    case "CaptionConfiguration_0080" + "_AccessibilityApp_start":
      CaptionConfiguration_0080()
      break;
    case "CaptionConfiguration_0090" + "_AccessibilityApp_start":
      CaptionConfiguration_0090()
      break;
    case "CaptionConfiguration_0100" + "_AccessibilityApp_start":
      CaptionConfiguration_0100()
      break;
    case "CaptionConfiguration_0110" + "_AccessibilityApp_start":
      CaptionConfiguration_0110()
      break;
    case "CaptionConfiguration_0120" + "_AccessibilityApp_start":
      CaptionConfiguration_0120()
      break;
    case "CaptionConfiguration_0130" + "_AccessibilityApp_start":
      CaptionConfiguration_0130()
      break;
    default:
      break;
  }
}



@Entry
@Component
struct Index {
  @State message: string = 'Hello XTS'
  /**
   *
   */
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
    commonEvent.createSubscriber(commonEventSubscribeInfo).then(function (data) {
      console.info(LOG + "====> Target createSubscriber Start====")
      subscriber = data;
      commonEvent.subscribe(subscriber, subscriberCallback);
      console.info(LOG + "====> Target createSubscriber End====")
    })

    console.info("start run testcase!!!!");
    const core = Core.getInstance();
    const expectExtend = new ExpectExtend({
      'id': 'extend'
    });
    core.addService('expect', expectExtend);
    const reportExtend = new ReportExtend(file);

    core.addService('report', reportExtend);
    core.init();
    core.subscribeEvent('task', reportExtend);
    const configService = core.getDefaultService('config');
    console.info('parameters---->' + JSON.stringify(globalThis.abilityWant.parameters));
    globalThis.abilityWant.parameters.timeout = 70000;
    configService.setConfig(globalThis.abilityWant.parameters);
    testsuite(globalThis.abilityContext);
    core.execute();
  }

  onPageShow() {
    console.info(LOG + "Target onShow start");

    console.info(LOG + "====> Target onShow End====")
  }

  build() {
    Row() {
      Column() {
        Button('CaptionConfiguration')
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .margin(5)
          .onClick((e) => {
            console.info("CaptionConfiguration onClick")
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}
