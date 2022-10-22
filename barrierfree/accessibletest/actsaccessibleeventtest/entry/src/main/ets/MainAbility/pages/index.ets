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
import accessibility from '@ohos.accessibility'
import commonEvent from '@ohos.commonEvent'
import prompt from '@system.prompt'

const COMMON_EVENT = 'on_target_change_extra';
const COMMON_CODE = 1;
const executeAbility = (data) => {
  console.info('TargetApp executeAbility: ' + data);
  switch (data) {
    case "SendEventAccessibilityFocus_0010":
      sendEventAccessibilityFocusCallback();
      break;
    case "SendEventAccessibilityFocus_0020":
      sendEventAccessibilityFocusPromise();
      break;
    case "SendEventAccessibilityFocusClear_0010":
      sendEventAccessibilityFocusClearCallback();
      break;
    case "SendEventAccessibilityFocusClear_0020":
      sendEventAccessibilityFocusClearPromise();
      break;
    case "SendEventClick_0010":
      sendEventClickCallback();
      break;
    case "SendEventClick_0020":
      sendEventClickPromise();
      break;
    case "SendEventLongClick_0010":
      sendEventLongClickCallback();
      break;
    case "SendEventLongClick_0020":
      sendEventLongClickPromise();
      break;
    case "SendEventFocus_0010":
      sendEventFocusCallback();
      break;
    case "SendEventFocus_0020":
      sendEventFocusPromise();
      break;
    case "SendEventSelect_0010":
      sendEventSelectCallback();
      break;
    case "SendEventSelect_0020":
      sendEventSelectPromise();
      break;
    case "SendEventHoverEnter_0010":
      sendEventHoverEnterCallback();
      break;
    case "SendEventHoverEnter_0020":
      sendEventHoverEnterPromise();
      break;
    case "SendEventHoverExit_0010":
      sendEventHoverExitCallback();
      break;
    case "SendEventHoverExit_0020":
      sendEventHoverExitPromise();
      break;
    case "SendEventTextUpdate_0010":
      sendEventTextUpdateCallback();
      break;
    case "SendEventTextUpdate_0020":
      sendEventTextUpdatePromise();
      break;
    case "SendEventTextSelectionUpdate_0010":
      sendEventTextSelectionUpdateCallback();
      break;
    case "SendEventTextSelectionUpdate_0020":
      sendEventTextSelectionUpdatePromise();
      break;
    case "SendEventScroll_0010":
      sendEventScrollCallback();
      break;
    case "SendEventScroll_0020":
      sendEventScrollPromise();
      break;
    case "SendEventErrorEv_0010":
      sendEventErrorEvCallback();
      break;
    case "SendEventErrorEv_0020":
      sendEventErrorEvPromise();
      break;
    case "SendEventScroll_0030":
    case "SendEventHoverExit_0030":
    case "SendEventTextSelectionUpdate_0030":
    case "SendEventTextUpdate_0030":
    case "SendEventHoverEnter_0030":
    case "SendEventSelect_0030":
    case "SendEventFocus_0030":
    case "SendEventAccessibilityFocus_0030":
    case "SendEventAccessibilityFocusClear_0030":
    case "SendEventClick_0030":
    case "SendEventLongClick_0030":
    case "SendEventClickFocusLongClick_0010":
    case "SendEventClickFocusLongClick_0020":
    case "SendEventClickFocusLongClick_0030":
    case "SendEventClickFocusLongClick_0040":
    case "SendEventClick_0070":
    case "SendEventClick_0080":
      executePublishEvent(data);
      break;
    case "SendEventElement_0010":
      sendWindowUpdateType(data, 'add');
      break;
    case "SendEventElement_0020":
      sendWindowUpdateType(data, 'remove');
      break;
    case "SendEventElement_0030":
      sendWindowUpdateType(data, 'active');
      break;
    case "SendEventElement_0040":
      sendWindowUpdateType(data, 'bounds');
      break;
    case "SendEventElement_0050":
      sendWindowUpdateType(data, 'focus');
      break;
    case "SendEventElement_0060":
      setRequiredAttribute(data, 'com.example.myapplication');
      break;
    case "SendEventElement_0070":
      sendEventElement_0070(data, 'button');
      break;
    case "SendEventElement_0080":
      sendEventElement_0080(data, 521);
      break;
    case "SendEventElement_0090":
      setRequiredAttribute(data, data);
      break;
    case "SendEventElement_0100":
      sendTextMoveUnit(data, 'char');
      break;
    case "SendEventElement_0110":
      sendTextMoveUnit(data, 'word');
      break;
    case "SendEventElement_0120":
      sendTextMoveUnit(data, 'line');
      break;
    case "SendEventElement_0130":
      sendTextMoveUnit(data, 'page');
      break;
    case "SendEventElement_0140":
      sendTextMoveUnit(data, 'paragraph');
      break;
    case "SendEventElement_0150":
      sendEventElement_0150(data, ['paragraph', 'click', 'aabbcc']);
      break;
    case "SendEventElement_0160":
      sendEventWithLastContent(data, 'last text');
      break;
    case "SendEventElement_0170":
      sendEventWithBeginIndex(data, 1);
      break;
    case "SendEventElement_0180":
      sendEventWithCurrentIndex(data, 2);
      break;
    case "SendEventElement_0190":
      sendEventWithEndIndex(data, 0);
      break;
    case "SendEventElement_0200":
      sendEventWithItemCount(data, 0);
      break;
    case "SendEventElement_0210":
      sendEventWithTriggerAction(data, 'accessibilityFocus');
      break;
    case "SendEventElement_0220":
      sendEventWithTriggerAction(data, 'clearAccessibilityFocus');
      break;
    case "SendEventElement_0230":
      sendEventWithTriggerAction(data, 'focus');
      break;
    case "SendEventElement_0240":
      sendEventWithTriggerAction(data, 'clearFocus');
      break;
    case "SendEventElement_0250":
      sendEventWithTriggerAction(data, 'clearSelection');
      break;
    case "SendEventElement_0260":
      sendEventWithTriggerAction(data, 'click');
      break;
    case "SendEventElement_0270":
      sendEventWithTriggerAction(data, 'longClick');
      break;
    case "SendEventElement_0280":
      sendEventWithTriggerAction(data, 'cut');
      break;
    case "SendEventElement_0290":
      sendEventWithTriggerAction(data, 'copy');
      break;
    case "SendEventElement_0300":
      sendEventWithTriggerAction(data, 'paste');
      break;
    case "SendEventElement_0310":
      sendEventWithTriggerAction(data, 'select');
      break;
    case "SendEventElement_0320":
      sendEventWithTriggerAction(data, 'setText');
      break;
    case "SendEventElement_0330":
      sendEventWithTriggerAction(data, 'delete');
      break;
    case "SendEventElement_0340":
      sendEventWithTriggerAction(data, 'scrollForward');
      break;
    case "SendEventElement_0350":
      sendEventWithTriggerAction(data, 'scrollBackward');
      break;
    case "SendEventElement_0360":
      sendEventWithTriggerAction(data, 'setSelection');
      break;
    default:
      break;
  }
}
const sendEventWithTriggerAction = (caseName, expectValue) => {
  let sendInfo = createEventInfoForElement(caseName);
  sendInfo.triggerAction = expectValue;
  sendEventElement(caseName, sendInfo, expectValue);
}
const sendEventWithItemCount = (caseName, expectValue) => {
  let sendInfo = createEventInfoForElement(caseName);
  sendInfo.itemCount = expectValue;
  sendEventElement(caseName, sendInfo, expectValue);
}
const sendEventWithEndIndex = (caseName, expectValue) => {
  let sendInfo = createEventInfoForElement(caseName);
  sendInfo.endIndex = expectValue;
  sendEventElement(caseName, sendInfo, expectValue);
}
const sendEventWithCurrentIndex = (caseName, expectValue) => {
  let sendInfo = createEventInfoForElement(caseName);
  sendInfo.currentIndex = expectValue;
  sendEventElement(caseName, sendInfo, expectValue);
}
const sendEventWithBeginIndex = (caseName, expectValue) => {
  let sendInfo = createEventInfoForElement(caseName);
  sendInfo.beginIndex = expectValue;
  sendEventElement(caseName, sendInfo, expectValue);
}
const sendEventWithLastContent = (caseName, expectValue) => {
  let sendInfo = createEventInfoForElement(caseName);
  sendInfo.lastContent = expectValue;
  sendEventElement(caseName, sendInfo, expectValue);
}
const sendEventElement_0150 = (caseName, expectValue) => {
  let sendInfo = createEventInfoForElement(caseName);
  sendInfo.contents = expectValue;
  sendEventElement(caseName, sendInfo, JSON.stringify(expectValue));
}
const sendTextMoveUnit = (caseName, expectValue) => {
  let sendInfo = createEventInfoForElement(caseName);
  sendInfo.textMoveUnit = expectValue;
  sendEventElement(caseName, sendInfo, expectValue);
}
const sendEventElement_0080 = (caseName, expectValue) => {
  let sendInfo = createEventInfoForElement(caseName);
  sendInfo.pageId = expectValue;
  sendEventElement(caseName, sendInfo, expectValue);
}
const sendEventElement_0070 = (caseName, expectValue) => {
  let sendInfo = createEventInfoForElement(caseName);
  sendInfo.componentType = expectValue;
  sendEventElement(caseName, sendInfo, expectValue);
}
const setRequiredAttribute = (caseName, expectValue) => {
  let sendInfo = createEventInfoForElement(caseName);
  sendEventElement(caseName, sendInfo, expectValue);
}
const sendWindowUpdateType = (caseName, expectValue) => {
  let sendInfo = createEventInfoForElement(caseName);
  sendInfo.windowUpdateType = expectValue;
  sendEventElement(caseName, sendInfo, expectValue);
}
const sendEventErrorEvCallback = () => {
  const caseName = "SendEventErrorEv_0010";
  console.info('TargetApp sendEventCallback: undefined');
  accessibility.sendEvent(undefined, (err) => {
    if (err?.code) {
      console.info(caseName + " sendEvent Callback err=" + JSON.stringify(err));
      publishCommonEvent(COMMON_EVENT, caseName + "_on_target_change_extra_success");
      return;
    }
    console.info(caseName + " sendEvent Callback success.");
  });
}
const sendEventErrorEvPromise = () => {
  const caseName = "SendEventErrorEv_0020";
  console.info('TargetApp sendEventPromise: undefined');
  accessibility.sendEvent(undefined).then(() => {
    console.info(caseName + " sendEvent Promise success.");
  }).catch((err) => {
    console.info(caseName +" sendEvent Promise err=" + JSON.stringify(err));
    publishCommonEvent(COMMON_EVENT, caseName + "_on_target_change_extra_success");
  });
}
const executePublishEvent = (caseName) => {
  publishCommonEvent(COMMON_EVENT, caseName + "_on_target_change_extra_success");
  setTimeout(() => {
    publishCommonEvent('on_assist_change', caseName);
  }, 1000);
}
const sendEventScrollCallback = () => {
  const caseName = "SendEventScroll_0010";
  const eventName = 'scroll';
  const targetAction = 'scrollForward';
  sendEventCallback(caseName, eventName, targetAction);
}
const sendEventScrollPromise = () => {
  const caseName = "SendEventScroll_0020";
  const eventName = 'scroll';
  const targetAction = 'scrollForward';
  sendEventPromise(caseName, eventName, targetAction);
}
const sendEventTextSelectionUpdateCallback = () => {
  const caseName = "SendEventTextSelectionUpdate_0010";
  const eventName = 'textSelectionUpdate';
  const targetAction = 'setSelection';
  sendEventCallback(caseName, eventName, targetAction);
}
const sendEventTextSelectionUpdatePromise = () => {
  const caseName = "SendEventTextSelectionUpdate_0020";
  const eventName = 'textSelectionUpdate';
  const targetAction = 'setSelection';
  sendEventPromise(caseName, eventName, targetAction);
}
const sendEventTextUpdateCallback = () => {
  const caseName = "SendEventTextUpdate_0010";
  const eventName = 'textUpdate';
  const targetAction = 'cut';
  sendEventCallback(caseName, eventName, targetAction);
}
const sendEventTextUpdatePromise = () => {
  const caseName = "SendEventTextUpdate_0020";
  const eventName = 'textUpdate';
  const targetAction = 'cut';
  sendEventPromise(caseName, eventName, targetAction);
}
const sendEventHoverExitCallback = () => {
  const caseName = "SendEventHoverExit_0010";
  const eventName = 'hoverExit';
  const targetAction = 'focus';
  sendEventCallback(caseName, eventName, targetAction);
}
const sendEventHoverExitPromise = () => {
  const caseName = "SendEventHoverExit_0020";
  const eventName = 'hoverExit';
  const targetAction = 'focus';
  sendEventPromise(caseName, eventName, targetAction);
}
const sendEventHoverEnterCallback = () => {
  const caseName = "SendEventHoverEnter_0010";
  const eventName = 'hoverEnter';
  const targetAction = 'focus';
  sendEventCallback(caseName, eventName, targetAction);
}
const sendEventHoverEnterPromise = () => {
  const caseName = "SendEventHoverEnter_0020";
  const eventName = 'hoverEnter';
  const targetAction = 'focus';
  sendEventPromise(caseName, eventName, targetAction);
}
const sendEventSelectCallback = () => {
  const caseName = "SendEventSelect_0010";
  const eventName = 'select';
  const targetAction = 'select';
  sendEventCallback(caseName, eventName, targetAction);
}
const sendEventSelectPromise = () => {
  const caseName = "SendEventSelect_0020";
  const eventName = 'select';
  const targetAction = 'select';
  sendEventPromise(caseName, eventName, targetAction);
}
const sendEventFocusCallback = () => {
  const caseName = "SendEventFocus_0010";
  const eventName = 'focus';
  const targetAction = 'focus';
  sendEventCallback(caseName, eventName, targetAction);
}
const sendEventFocusPromise = () => {
  const caseName = "SendEventFocus_0020";
  const eventName = 'focus';
  const targetAction = 'focus';
  sendEventPromise(caseName, eventName, targetAction);
}
const sendEventLongClickCallback = () => {
  const caseName = "SendEventLongClick_0010";
  const eventName = 'longClick';
  const targetAction = 'longClick';
  sendEventCallback(caseName, eventName, targetAction);
}
const sendEventLongClickPromise = () => {
  const caseName = "SendEventLongClick_0020";
  const eventName = 'longClick';
  const targetAction = 'longClick';
  sendEventPromise(caseName, eventName, targetAction);
}
const sendEventClickCallback = () => {
  const caseName = "SendEventClick_0010";
  const eventName = 'click';
  const targetAction = 'click';
  sendEventCallback(caseName, eventName, targetAction);
}
const sendEventClickPromise = () => {
  const caseName = "SendEventClick_0020";
  const eventName = 'click';
  const targetAction = 'click';
  sendEventPromise(caseName, eventName, targetAction);
}
const sendEventAccessibilityFocusClearCallback = () => {
  const caseName = "SendEventAccessibilityFocusClear_0010";
  const eventName = 'accessibilityFocusClear';
  const targetAction = 'clearAccessibilityFocus';
  sendEventCallback(caseName, eventName, targetAction);
}
const sendEventAccessibilityFocusClearPromise = () => {
  const caseName = "SendEventAccessibilityFocusClear_0020";
  const eventName = 'accessibilityFocusClear';
  const targetAction = 'clearAccessibilityFocus';
  sendEventPromise(caseName, eventName, targetAction);
}
const sendEventAccessibilityFocusCallback = () => {
  const caseName = "SendEventAccessibilityFocus_0010";
  const eventName = 'accessibilityFocus';
  const targetAction = 'accessibilityFocus';
  sendEventCallback(caseName, eventName, targetAction);
}
const sendEventAccessibilityFocusPromise = () => {
  const caseName = "SendEventAccessibilityFocus_0020";
  const eventName = 'accessibilityFocus';
  const targetAction = 'accessibilityFocus';
  sendEventPromise(caseName, eventName, targetAction);
}
const publishCommonEvent = (event, caseName) => {
  let commonEventPublishData = {
    data: caseName
  }
  commonEvent.publish(event, commonEventPublishData, (err) => {
    console.info(caseName + " publish event: " + JSON.stringify(event));
  });
}

function createEventInfo(caseName, eventName, action) {
  console.info("TargetApp new accessibility.EventInfo: " + eventName);
  let eventInfo = new accessibility.EventInfo({});
  eventInfo.type = eventName;
  eventInfo.bundleName = 'com.example.myapplication';
  eventInfo.triggerAction = action;
  eventInfo.description = caseName;
  return eventInfo;
}
const sendEventCallback = (caseName, eventName, action) => {
  console.info('TargetApp sendEventCallback: ' + eventName);
  let sendInfo = createEventInfo(caseName, eventName, action);
  accessibility.sendEvent(sendInfo, (err) => {
    if (err?.code) {
      console.info(caseName +JSON.stringify(sendInfo) +"sendEvent Callback err=" + JSON.stringify(err));
      return;
    }
    console.info(caseName + JSON.stringify(sendInfo) +"sendEvent Callback success.");
    publishCommonEvent(COMMON_EVENT, caseName + "_on_target_change_extra_success");
  });
};
const sendEventPromise = (caseName, eventName, action) => {
  console.info('TargetApp sendEventPromise: ' + eventName);
  let sendInfo = createEventInfo(caseName, eventName, action);
  accessibility.sendEvent(sendInfo).then(() => {
    console.info(caseName + JSON.stringify(sendInfo) +"sendEvent Promise success.");
    publishCommonEvent(COMMON_EVENT, caseName + "_on_target_change_extra_success");
  }).catch((err) => {
    console.info(caseName +JSON.stringify(sendInfo) +"sendEvent Promise err=" + JSON.stringify(err));
  });
};
function createEventInfoForElement(caseName) {
  console.info("TargetApp new accessibility.EventInfo: click");
  let eventInfo = new accessibility.EventInfo({});
  eventInfo.type = 'click';
  eventInfo.bundleName = 'com.example.myapplication';
  eventInfo.triggerAction = 'click';
  eventInfo.description = caseName;
  return eventInfo;
}
const sendEventElement = (caseName, eventInfo, value) => {
  console.info('TargetApp sendEventElement: ' + caseName);
  accessibility.sendEvent(eventInfo).then(() => {
    console.info(caseName + JSON.stringify(eventInfo) +"sendEvent Promise success.");
    let commonEventPublishData = {
      code: COMMON_CODE,
      data: caseName + value
    }
    commonEvent.publish(COMMON_EVENT, commonEventPublishData, (err) => {
      console.info(caseName + " publish event: " + COMMON_EVENT);
    });
  }).catch((err) => {
    console.info(caseName +JSON.stringify(eventInfo) +"sendEvent Promise err=" + JSON.stringify(err));
  });
};
@Entry
@Component
struct Index {
  @State message: string = 'Accessibility XTS'
  private subScriber = undefined;

  aboutToAppear() {
    console.info('TargetApp aboutToAppear');
    commonEvent.createSubscriber({ events: ['on_target_change']}).then((subscriber) => {
      console.info('TargetApp createSubscriber on_target_change');
      this.subScriber = subscriber;
      commonEvent.subscribe(subscriber, (err, data) => {
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
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)

          Button('SendEventAccessibilityFocus_0030')
            .fontSize(15)
            .margin(5)
            .onClick(() => {
              prompt.showToast({ message: 'Click Button SendEventAccessibilityFocus_0030' });
            })

          Button('SendEventAccessibilityFocusClear_0030')
            .fontSize(15)
            .margin(5)
            .onClick((e) => {
              prompt.showToast({ message: 'Click Button SendEventAccessibilityFocusClear_0030' });
            })

          Button('SendEventClick_0030')
            .fontSize(15)
            .margin(5)
            .onClick((e) => {
              prompt.showToast({ message: 'Click Button SendEventClick_0030' });
            })
          Button('SendEventLongClick_0030')
            .fontSize(15)
            .margin(5)
            .onClick((e) => {
              prompt.showToast({ message: 'Click Button SendEventLongClick_0030' });
            })

          TextInput({ placeholder: 'input your word SendEventFocus_0030', text: 'SendEventFocus_0030' })
            .type(InputType.Normal)
            .enterKeyType(EnterKeyType.Next)
            .fontSize(15)
            .margin(5)
            .maxLength(100)
            .onChange((value: string) => {
              console.info('TargetApp onChange SendEventFocus_0030');
            })

          TextInput({ placeholder: 'input your word SendEventSelect_0030', text: 'SendEventSelect_0030' })
            .type(InputType.Normal)
            .enterKeyType(EnterKeyType.Next)
            .fontSize(15)
            .margin(5)
            .maxLength(100)
            .onChange((value: string) => {
              console.info('TargetApp onChange SendEventSelect_0030');
            })
          TextInput({ placeholder: 'input your word SendEventHoverEnter_0030', text: 'SendEventHoverEnter_0030' })
            .type(InputType.Normal)
            .enterKeyType(EnterKeyType.Next)
            .fontSize(15)
            .margin(5)
            .maxLength(100)
            .onChange((value: string) => {
              console.info('TargetApp onChange SendEventHoverEnter_0030');
            })

          TextInput({ placeholder: 'input your word SendEventHoverExit_0030', text: 'SendEventHoverExit_0030' })
            .type(InputType.Normal)
            .enterKeyType(EnterKeyType.Next)
            .fontSize(15)
            .margin(5)
            .maxLength(100)
            .onChange((value: string) => {
              console.info('TargetApp onChange SendEventHoverExit_0030');
            })

          TextInput({ placeholder: 'input your word SendEventTextUpdate_0030', text: 'SendEventTextUpdate_0030' })
            .type(InputType.Normal)
            .enterKeyType(EnterKeyType.Next)
            .fontSize(15)
            .margin(5)
            .maxLength(100)
            .onChange((value: string) => {
              console.info('TargetApp onChange SendEventTextUpdate_0030');
            })

          TextInput({
            placeholder: 'input your word SendEventTextSelectionUpdate_0030',
            text: 'SendEventTextSelectionUpdate_0030'
          })
            .type(InputType.Normal)
            .enterKeyType(EnterKeyType.Next)
            .fontSize(15)
            .margin(5)
            .maxLength(100)
            .onChange((value: string) => {
              console.info('TargetApp onChange SendEventTextSelectionUpdate_0030');
            })

          Button('SendEventClickFocusLongClick_0010')
            .fontSize(15)
            .margin(5)
            .onClick((e) => {
              prompt.showToast({ message: 'Click Button SendEventClickFocusLongClick_0010' });
            })

          Button('SendEventClickFocusLongClick_0020')
            .fontSize(15)
            .margin(5)
            .onClick((e) => {
              prompt.showToast({ message: 'Click Button SendEventClickFocusLongClick_0020' });
            })

          Button('SendEventClickFocusLongClick_0030')
            .fontSize(15)
            .margin(5)
            .onClick((e) => {
              prompt.showToast({ message: 'Click Button SendEventClickFocusLongClick_0030' });
            })

          Button('SendEventClickFocusLongClick_0040')
            .fontSize(15)
            .margin(5)
            .onClick((e) => {
              prompt.showToast({ message: 'Click Button SendEventClickFocusLongClick_0040' });
            })
          Button('SendEventClick_0060')
            .fontSize(15)
            .margin(5)
            .onClick((e) => {
              prompt.showToast({ message: 'Click Button SendEventClick_0060' });
            })
          Button('SendEventClick_0070')
            .fontSize(15)
            .margin(5)
            .onClick((e) => {
              prompt.showToast({ message: 'Click Button SendEventClick_0070' });
            })
          Button('SendEventClick_0080')
            .fontSize(15)
            .margin(5)
            .onClick((e) => {
              prompt.showToast({ message: 'Click Button SendEventClick_0080' });
            })
      }
      .width('100%')
    }
    .height('100%')
  }
}
