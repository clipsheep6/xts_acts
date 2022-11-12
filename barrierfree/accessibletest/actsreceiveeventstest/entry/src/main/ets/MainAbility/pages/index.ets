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
import commonEvent from '@ohos.commonEvent'
import accessibility from '@ohos.accessibility'

const Log :string= "[xtsLog] "
const accessibility_all_bundleName = 'com.example.myapplicationxtsd';

const ThreadSleep = (ms) => {
  return new Promise(resolve => setTimeout(resolve, ms));
}

const publishCallback = (result) => {
  console.info("====>on_target_change_extra publish call back result:" + JSON.stringify(result));
}

const ReceiveEventsFilter_0290 = () => {
  const logTag = Log +" ReceiveEventsFilter_0290 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0290', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0300 = () => {
  const logTag = Log +" ReceiveEventsFilter_0300 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0300', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0610 = () => {
  const logTag = Log +" ReceiveEventsFilter_0610 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0610', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const ReceiveEventsFilter_0620 = () => {
  const logTag = Log +" ReceiveEventsFilter_0620 ";
  let sendEventClick = createClick('ReceiveEventsFilter_0620', accessibility_all_bundleName);
  ThreadSleep(1000).then(() => {
    sendEventCallback(logTag, sendEventClick);
  });
  var commonEventPublishData = {
    data: "on_target_change_extra_success"
  }
  commonEvent.publish("on_target_change_extra", commonEventPublishData, publishCallback)
};

const sendEventCallback = (logTag, sendEventInfo) => {
  accessibility.sendEvent(sendEventInfo, (err, result) => {
    if (err?.code) {
      console.info(logTag + "sendEvent Callback err=" + JSON.stringify(err));
      return;
    }
    console.info(logTag + "sendEvent Callback res=" + result);
  });
};

function createClick(description, bundleName) {
  let sendEventInfo = new accessibility.EventInfo({});
  sendEventInfo.type = 'click';
  sendEventInfo.bundleName = bundleName;
  sendEventInfo.triggerAction = 'click';
  sendEventInfo.description = description;
  return sendEventInfo;
}

const executeAbility = (data) => {
  switch (data) {
    case "ReceiveEventsFilter_0290":
      ReceiveEventsFilter_0290();
      break;
    case "ReceiveEventsFilter_0300":
      ReceiveEventsFilter_0300();
      break;
    case "ReceiveEventsFilter_0610":
      ReceiveEventsFilter_0610();
      break;
    case "ReceiveEventsFilter_0620":
      ReceiveEventsFilter_0620();
      break;
    default:
      break;
  }
}

@Entry
@Component
struct Index {
  @State message: string = 'Accessibility XTS'
  private subScriber = undefined;

  onPageShow() {
    console.info('TargetApp onPageShow start');
  }
  /**
   *
   */
  aboutToAppear() {
    console.info('TargetApp aboutToAppear');
    commonEvent.createSubscriber({ events: ['on_target_change']}).then((subScriber) => {
      console.info('TargetApp createSubscriber on_target_change');
      this.subScriber = subScriber;
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info('TargetApp on_target_change subscribe callback: ' + JSON.stringify(data));
        if (data.data) {
          executeAbility(data.data);
        }
      });
    });
  }

  aboutToDisappear() {
    console.info('TargetApp aboutToDisappear');
    commonEvent.unsubscribe(this.subScriber);
    this.subScriber = undefined;
  }

  build() {
    Row() {
      Column() {
        Button('Test4')
          .width(100)
          .type(ButtonType.Capsule)
          .stateEffect(false)
          .fontColor(Color.Yellow)
          .fontSize(15)
          .fontWeight(FontWeight.Bold)
          .fontStyle(FontStyle.Italic)
          .enabled(true)
          .focusable(true)
          .visibility(Visibility.Visible)
          .bindPopup(true, {message: 'popUp'})
          .margin(25)
        Button('Test5')
          .width(400)
          .margin(25)
        Flex({ direction: FlexDirection.Row, alignItems: ItemAlign.Center }) {
          Button('Test6')
            .width(100)
            .margin(25)
          Button('Test7')
            .width(100)
            .margin(25)
          Button('Test8')
            .width(100)
            .margin(25)
        }
        Button('Test9')
          .width(400)
          .margin(25)
        Text('Hello World')
          .fontColor(Color.Blue)
          .fontStyle(FontStyle.Normal)
          .fontSize(20)
          .fontWeight(FontWeight.Bold)
          .textAlign(TextAlign.Center)
          .lineHeight(30)
          .textOverflow({overflow: TextOverflow.Ellipsis})
          .maxLines(30)
          .decoration({ type: TextDecorationType.Underline, color: Color.Red })
          .letterSpacing(10)
          .textCase(TextCase.UpperCase)
          .baselineOffset(20)

        Select([{value:'select1'},{value: 'select2'},{value: 'select3'},{value: 'select4'}])
          .margin(5)
          .selected(2)
          .value('select3')
          .font({size: 30, weight: FontWeight.Lighter})
          .fontColor(Color.Blue)
          .selectedOptionBgColor(Color.Gray)
          .selectedOptionFont({size: 30, weight: FontWeight.Lighter})
          .selectedOptionFontColor(Color.White)
          .optionBgColor(Color.Yellow)
          .optionFontColor(Color.Brown)

        Checkbox({name: 'checkbox1'})
          .select(true)
          .selectedColor(Color.Green)
          .margin(5)

        TextInput({text: 'input1'})
          .type(InputType.Password)
          .width(200)
          .margin(5)

        Slider({value:50, min: 10, max:100})
          .focusable(true)
          .showSteps(true)
          .width(300)
          .margin(5)
      }
      .width('100%')
    }
    .height('100%')
  }
}