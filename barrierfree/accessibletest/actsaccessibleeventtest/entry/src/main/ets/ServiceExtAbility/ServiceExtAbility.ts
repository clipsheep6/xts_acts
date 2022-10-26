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
import AccessibilityExtensionAbility from '@ohos.application.AccessibilityExtensionAbility'

const ASSIST_CODE = 2;
var countClick = 0;
const excuteMethod = (context, data) => {
    if (data) {
        switch (data) {
            case 'SendEventAccessibilityFocus_0030':
                executePerformActionPromise(data, context, data, 'accessibilityFocus');
                break;
            case 'SendEventAccessibilityFocusClear_0030':
                executePerformActionPromise(data, context, data, 'accessibilityFocus');
                executePerformActionPromise(data, context, data, 'clearAccessibilityFocus');
                break;
            case 'SendEventClick_0030':
                executePerformActionPromise(data, context, data, 'click');
                break;
            case 'SendEventFocus_0030':
                executePerformActionPromise(data, context, data, 'focus');
                break;
            case 'SendEventSelect_0030':
                executePerformActionPromise(data, context, data, 'select', {
                    selectTextBegin: 1,
                    selectTextEnd: 3
                });
                break;
            case 'SendEventHoverEnter_0030':
                executePerformActionPromise(data, context, data, 'focus');
                break;
            case 'SendEventHoverExit_0030':
                executePerformActionPromise(data, context, data, 'focus');
                break;
            case 'SendEventTextUpdate_0030':
                executePerformActionPromise(data, context, data, 'cut');
                break;
            case 'SendEventTextSelectionUpdate_0030':
                executePerformActionPromise(data, context, data, 'setSelection', {
                    selectTextBegin: 1,
                    selectTextEnd: 3
                });
                executePerformActionPromise(data, context, data, 'cut');
                break;
            case 'SendEventScroll_0030':
                executePerformActionPromise(data, context, data, 'delete');
                break;
            case 'SendEventClickFocusLongClick_0010':
                countClick = 0;
                executePerformActionPromise(data, context, data, 'click');
                setTimeout(() => {
                    executePerformActionPromise(data, context, data, 'click');
                }, 3000);
                break;
            case 'SendEventClickFocusLongClick_0020':
                executePerformActionPromise(data, context, data, 'focus');
                executePerformActionPromise(data, context, data, 'click');
                executePerformActionPromise(data, context, data, 'longClick');
                break;
            case 'SendEventClickFocusLongClick_0030':
                executePerformActionPromise(data, context, data, 'click');
                break;
            case 'SendEventClickFocusLongClick_0040':
                executePerformActionPromise(data, context, data, 'click');
                executePerformActionPromise(data, context, data, 'longClick');
                break;
            case 'SendEventClick_0060':
                executePerformActionPromise(data, context, data, 'click');
                break;
            case 'SendEventClick_0070':
                let defGesturePath = {
                    points: [{ positionX: 170, positionY: 170 }],
                    durationTime: 200
                }
                gestureInjectCallback(data, context, defGesturePath);
                break;
            case 'SendEventClick_0080':
                executePerformActionPromise(data, context, data, 'accessibilityFocus');
                setTimeout(() => {
                    let defDoubleGesturePath = {
                        points: [{ positionX: 170, positionY: 170 }, { positionX: 170, positionY: 170 }],
                        durationTime: 200
                    }
                    gestureInjectCallback(data, context, defDoubleGesturePath);
                }, 200);
                setTimeout(() => {
                    executePerformActionPromise(data, context, data, 'clearAccessibilityFocus');
                }, 200);
                break;
        }
    }
}
function gestureInjectCallback(caseName, context, gesturePathDefineList) {
    context.injectGesture(gesturePathDefineList, (err, res) => {
        if (err?.code) {
            console.info(caseName + " gestureInject Callback err=" + JSON.stringify(err));
            return;
        }
        console.info(caseName + " gestureInject Callback res=" + JSON.stringify(res));
    });
}

var subscriber;
class ServiceExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
        console.info("AccessibilityAll onConnect");
        const context = this.context;

        commonEvent.createSubscriber({events: ['on_assist_change']}).then(function (data) {
            console.info("AccessibilityAll createSubscriber")
            subscriber = data;
            commonEvent.subscribe(subscriber,  (err, data) => {
                console.info("AccessibilityAll subscriberCallback data:" + JSON.stringify(data));
                excuteMethod(context, data.data);
            });
        })
    }

    onDisconnect() {
        console.info('AccessibilityAll onDisconnect');
        commonEvent.unsubscribe(subscriber);
    }

    onAccessibilityEvent(accessibilityEvent) {
        const logTag = "AccessibilityAll onAccessibilityEvent: ";
        console.info(logTag + JSON.stringify(accessibilityEvent));
        if (subscriber.data == "SendEventClick_0070") {
            if (accessibilityEvent.eventType == 'hoverEnter') {
                commonEvent.publish("on_assist_change_extra", {data: "SendEventClick_0070_on_assist_change_extra_success"}, 
                    (err, data) => {
                        console.info(logTag + " publish on_assist_change_extra event result: " + JSON.stringify(data));
                    });
            }
            return;
        }
        if (subscriber.data == "SendEventClickFocusLongClick_0010") {
            if (accessibilityEvent.eventType == 'click') {
                countClick = countClick + 1;
                if (countClick == 2) { 
		    commonEvent.publish("on_assist_change_extra", {data: "SendEventClickFocusLongClick_0010_on_assist_change_extra_success"}, 
		    (err, data) => {
		        console.info(logTag + " publish on_assist_change_extra event result: " + JSON.stringify(data));
		    });
                }
            }
            return;
        }
        if (accessibilityEvent.eventType) {
            accessibilityEvent?.target && accessibilityEvent?.target.attributeNames().then((names) => {
                for (var val of names) {
                    console.info(logTag + "attributeName: " + val);
                    if (val == 'description') {
                        accessibilityEvent?.target.attributeValue('description')?.then((vales) => {
                            console.info(logTag + " description attributeValue: ", vales);
                            commonEventPublishOnAssistChange(vales, accessibilityEvent.eventType);
                            publishResult(vales, accessibilityEvent);
                        }).catch((err) => {
                            console.info(logTag + " attributeValue description err=" + JSON.stringify(err));
                        });
                    }
                    if (val == 'text') {
                        accessibilityEvent?.target.attributeValue('text')?.then((vales) => {
                            console.info(logTag + " text attributeValue: ", vales);
                            commonEventPublishOnAssistChange(vales, accessibilityEvent.eventType);
                        }).catch((err) => {
                            console.info(logTag + " attributeValue text err=" + JSON.stringify(err));
                        });
                    }
                }
            }).catch((err) => {
                console.info(logTag + "attributeNames err=" + JSON.stringify(err));
            });
        }
    }

    onKeyEvent(keyEvent) {
        console.info("AccessibilityAll onKeyEvent " + JSON.stringify(keyEvent));
        return true;
    }
}
const publishResult = (currentCase, accessibilityEvent) => {
    switch (currentCase) {
        case "SendEventElement_0010":
        case "SendEventElement_0020":
        case "SendEventElement_0030":
        case "SendEventElement_0040":
        case "SendEventElement_0050":
            commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + accessibilityEvent.eventType}, (err, data) => {
                console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
            });
            break;
        case "SendEventElement_0060":
            accessibilityEvent?.target.attributeValue('bundleName')?.then((vales) => {
                console.info("AccessibilityAll bundleName attributeValue: ", vales);
                commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + vales}, (err, data) => {
                    console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
                });
            }).catch((err) => {
                console.info("AccessibilityAll attributeValue bundleName err=" + JSON.stringify(err));
            });
            break;
        case "SendEventElement_0070":
            accessibilityEvent?.target.attributeValue('componentType')?.then((vales) => {
                console.info("AccessibilityAll componentType attributeValue: ", vales);
                commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + vales}, (err, data) => {
                    console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
                });
            }).catch((err) => {
                console.info("AccessibilityAll attributeValue componentType err=" + JSON.stringify(err));
            });
            break;
        case "SendEventElement_0080":
            accessibilityEvent?.target.attributeValue('pageId')?.then((vales) => {
                console.info("AccessibilityAll pageId attributeValue: ", vales);
                commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + vales}, (err, data) => {
                    console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
                });
            }).catch((err) => {
                console.info("AccessibilityAll attributeValue pageId err=" + JSON.stringify(err));
            });
            break;
        case "SendEventElement_0090":
            commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + currentCase}, (err, data) => {
                console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
            });
            break;
        case "SendEventElement_0100":
        case "SendEventElement_0110":
        case "SendEventElement_0120":
        case "SendEventElement_0130":
        case "SendEventElement_0140":
            accessibilityEvent?.target.attributeValue('textMoveUnit')?.then((vales) => {
                console.info("AccessibilityAll textMoveUnit attributeValue: ", vales);
                commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + vales}, (err, data) => {
                    console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
                });
            }).catch((err) => {
                console.info("AccessibilityAll attributeValue textMoveUnit err=" + JSON.stringify(err));
            });
            break;
        case "SendEventElement_0150":
            accessibilityEvent?.target.attributeValue('contents')?.then((vales) => {
                console.info("AccessibilityAll contents attributeValue: ", vales);
                commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + JSON.stringify(vales)}, (err, data) => {
                    console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
                });
            }).catch((err) => {
                console.info("AccessibilityAll attributeValue contents err=" + JSON.stringify(err));
            });
            break;
        case "SendEventElement_0160":
            accessibilityEvent?.target.attributeValue('lastContent')?.then((vales) => {
                console.info("AccessibilityAll lastContent attributeValue: ", vales);
                commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + vales}, (err, data) => {
                    console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
                });
            }).catch((err) => {
                console.info("AccessibilityAll attributeValue lastContent err=" + JSON.stringify(err));
            });
            break;
        case "SendEventElement_0170":
            accessibilityEvent?.target.attributeValue('startIndex')?.then((vales) => {
                console.info("AccessibilityAll beginIndex attributeValue: ", vales);
                commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + vales}, (err, data) => {
                    console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
                });
            }).catch((err) => {
                console.info("AccessibilityAll attributeValue beginIndex err=" + JSON.stringify(err));
            });
            break;
        case "SendEventElement_0180":
            accessibilityEvent?.target.attributeValue('currentIndex')?.then((vales) => {
                console.info("AccessibilityAll currentIndex attributeValue: ", vales);
                commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + vales}, (err, data) => {
                    console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
                });
            }).catch((err) => {
                console.info("AccessibilityAll attributeValue currentIndex err=" + JSON.stringify(err));
            });
            break;
        case "SendEventElement_0190":
            accessibilityEvent?.target.attributeValue('endIndex')?.then((vales) => {
                console.info("AccessibilityAll endIndex attributeValue: ", vales);
                commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + vales}, (err, data) => {
                    console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
                });
            }).catch((err) => {
                console.info("AccessibilityAll attributeValue endIndex err=" + JSON.stringify(err));
            });
            break;
        case "SendEventElement_0200":
            accessibilityEvent?.target.attributeValue('itemCount')?.then((vales) => {
                console.info("AccessibilityAll itemCount attributeValue: ", vales);
                commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + vales}, (err, data) => {
                    console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
                });
            }).catch((err) => {
                console.info("AccessibilityAll attributeValue itemCount err=" + JSON.stringify(err));
            });
            break;
        case "SendEventElement_0210":
        case "SendEventElement_0220":
        case "SendEventElement_0230":
        case "SendEventElement_0240":
        case "SendEventElement_0250":
        case "SendEventElement_0260":
        case "SendEventElement_0270":
        case "SendEventElement_0280":
        case "SendEventElement_0290":
        case "SendEventElement_0300":
        case "SendEventElement_0310":
        case "SendEventElement_0320":
        case "SendEventElement_0330":
        case "SendEventElement_0340":
        case "SendEventElement_0350":
        case "SendEventElement_0360":
            accessibilityEvent?.target.attributeValue('triggerAction')?.then((vales) => {
                console.info("AccessibilityAll triggerAction attributeValue: ", vales);
                commonEvent.publish("on_assist_change_extra", {code: ASSIST_CODE, data: currentCase + vales}, (err, data) => {
                    console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
                });
            }).catch((err) => {
                console.info("AccessibilityAll attributeValue triggerAction err=" + JSON.stringify(err));
            });
            break;
        default:
            break;
    }
}
const commonEventPublishOnAssistChange = (currentCase, eventType) => {
    switch (currentCase) {
        case "SendEventAccessibilityFocus_0010":
        case "SendEventAccessibilityFocus_0020":
        case "SendEventAccessibilityFocus_0030":
        case "SendEventAccessibilityFocusClear_0010":
        case "SendEventAccessibilityFocusClear_0020":
        case "SendEventAccessibilityFocusClear_0030":
        case "SendEventClick_0010":
        case "SendEventClick_0020":
        case "SendEventClick_0030":
        case "SendEventLongClick_0010":
        case "SendEventLongClick_0020":
        case "SendEventLongClick_0030":
        case "SendEventFocus_0010":
        case "SendEventFocus_0020":
        case "SendEventFocus_0030":
        case "SendEventSelect_0010":
        case "SendEventSelect_0020":
        case "SendEventSelect_0030":
        case "SendEventHoverEnter_0010":
        case "SendEventHoverEnter_0020":
        case "SendEventHoverEnter_0030":
        case "SendEventHoverExit_0010":
        case "SendEventHoverExit_0020":
        case "SendEventHoverExit_0030":
        case "SendEventTextUpdate_0010":
        case "SendEventTextUpdate_0020":
        case "SendEventTextUpdate_0030":
        case "SendEventTextSelectionUpdate_0010":
        case "SendEventTextSelectionUpdate_0020":
        case "SendEventTextSelectionUpdate_0030":
        case "SendEventScroll_0010":
        case "SendEventScroll_0020":
        case "SendEventScroll_0030":
        case "SendEventAccessibilityFocus_0040":
        case "SendEventAccessibilityFocus_0050":
        case "SendEventAccessibilityFocusClear_0040":
        case "SendEventAccessibilityFocusClear_0050":
        case "SendEventClick_0040":
        case "SendEventClick_0050":
        case "SendEventLongClick_0040":
        case "SendEventLongClick_0050":
        case "SendEventFocus_0040":
        case "SendEventFocus_0050":
        case "SendEventSelect_0040":
        case "SendEventSelect_0050":
        case "SendEventHoverEnter_0040":
        case "SendEventHoverEnter_0050":
        case "SendEventHoverExit_0040":
        case "SendEventHoverExit_0050":
        case "SendEventTextUpdate_0040":
        case "SendEventTextUpdate_0050":
        case "SendEventTextSelectionUpdate_0040":
        case "SendEventTextSelectionUpdate_0050":
        case "SendEventScroll_0040":
        case "SendEventScroll_0050":
            commonEvent.publish("on_assist_change_extra", {data: currentCase + "_on_assist_change_extra_success"}, (err, data) => {
                console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
            });
            break;
        case "SendEventClickFocusLongClick_0010":
            countClick = countClick + 1;
            if (countClick == 2) {
                commonEvent.publish("on_assist_change_extra", {data: currentCase + "_on_assist_change_extra_success"}, (err, data) => {
                    console.info("AccessibilityAll onAccessibilityEvent: publish on_assist_change_extra event result: " + JSON.stringify(data));
                });
            } 
            break;
        default:
            break;
    }
}

function executePerformActionPromise(logTag, context, searchText, action, args?: object) {
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement err=" + JSON.stringify(err));
            return;
        }
        if (res) {
            res.findElement('content', searchText).then((AccessibilityElementArray) => {
                console.info(logTag + " findElement start");
                AccessibilityElementArray[0].performAction(action, args).then((performActionBack) => {
                    console.info(logTag + " performActionBack Promise success=" + JSON.stringify(performActionBack));
                }).catch((actionNamesErr) => {
                    console.info(logTag + " performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                });
            }).catch((AccessibilityElementArrayErr) => {
                console.info(logTag + " findElement Promise err=" + JSON.stringify(AccessibilityElementArrayErr));
            });
        }
    })
}

export default ServiceExtAbility
