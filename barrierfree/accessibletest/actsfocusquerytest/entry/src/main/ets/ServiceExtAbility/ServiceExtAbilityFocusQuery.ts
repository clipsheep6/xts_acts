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
import AccessibilityExtensionAbility from '@ohos.application.AccessibilityExtensionAbility'
import commonEvent from '@ohos.commonEvent';

const log = "[xtsLog] "
class ServiceExtAbilityFocusQuery extends AccessibilityExtensionAbility {
    onConnect() {
        let context = this.context
        var subscriberInfo = {
            events: ["on_assist_change"],
        };
        var Subscriber;
        commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
            console.info(log + "AccessibleFocusQuery====>Create Subscriber====>");
            Subscriber = data;
            await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })
        function SubscribeCallBack(err, data) {
            console.info(log + "====>AccessibleFocusQuery CallBack data:====>" + JSON.stringify(data));
            switch (data.data) {
                case "FocusQuery_0010":
                    AccessibleFocusQueryCallBack1(context, 'Test7', data.data, 'focus');
                    break;
                case "FocusQuery_0011":
                    AccessibleFocusQueryIsAccessibilityFocus(context, 'Test7', data.data, 'focus', false);
                    break;
                case "FocusQuery_0020":
                    AccessibleFocusQueryPromiseIsAccessibilityFocus(context, 'Test7', data.data, 'focus', false);
                    break;
                case "FocusQuery_0030":
                    AccessibleFocusQueryPromise2(context, 'Test7', data.data, 'focus', 'normal');
                    break;
                case "FocusQuery_0031":
                    AccessibleFocusQueryFindElementCallBack(context, 'Test7', data.data, 'focus', 'normal');
                    break;
                case "FocusQuery_0040":
                    AccessibleFocusQueryPromiseDirectionFocus(context, 'Test7', data.data, 'focus', 'up');
                    break;
                case "FocusQuery_0041":
                    AccessibleFocusQueryPromiseDirectionCallBackFocus(context, 'Test7', data.data, 'focus', 'up');
                    break;
                case "FocusQuery_0060":
                    AccessibleFocusQueryPromiseDirectionFocus(context, 'Test7', data.data, 'focus', 'down');
                    break;
                case "FocusQuery_0061":
                    AccessibleFocusQueryPromiseDirectionCallBackFocus(context, 'Test7', data.data, 'focus', 'down');
                    break;
                case "FocusQuery_0070":
                    AccessibleFocusQueryCallBackGetElementFocus(context, 'Test7', data.data, 'focus', 'parent');
                    break;
                case "FocusQuery_0080":
                    AccessibleFocusQueryPromiseDirectionFocus(context, 'Test7', data.data, 'focus', 'left');
                    break;
                case "FocusQuery_0081":
                    AccessibleFocusQueryPromiseDirectionCallBackFocus(context, 'Test7', data.data, 'focus', 'left');
                    break;
                case "FocusQuery_0090":
                    AccessibleFocusQueryCallBackGetElementFocus(context, 'Test7', data.data, 'focus', 'children');
                    break;
                case "FocusQuery_0091":
                    AccessibleFocusQueryActionNamesFocus(context, 'Test7', data.data, 'focus');
                    break;
                case "FocusQuery_0092":
                    AccessibleFocusQueryActionNamesCallBackFocus(context, 'Test7', data.data, 'focus');
                    break;
                case "FocusQuery_0100":
                    AccessibleFocusQueryPromiseDirectionFocus(context, 'Test7', data.data, 'focus', 'right');
                    break;
                case "FocusQuery_0101":
                    AccessibleFocusQueryPromiseDirectionCallBackFocus(context, 'Test7', data.data, 'focus', 'right');
                    break;
                case "FocusQuery_0120":
                    AccessibleFocusQueryPromiseDirectionFocus(context, 'Test7', data.data, 'focus', 'forward');
                    break;
                case "FocusQuery_0121":
                    AccessibleFocusQueryPromiseDirectionCallBackFocus(context, 'Test7', data.data, 'focus', 'forward');
                    break;
                case "FocusQuery_0130":
                    AccessibleFocusQueryCallBack1(context, '历史记录', data.data, 'focus');
                    break;
                case "FocusQuery_0139":
                    AccessibleFocusQueryPromiseDirectionCallBackFocus(context, 'Test7', data.data, 'focus', 'backward');
                    break;
                case "FocusQuery_0140":
                    AccessibleFocusQueryPromiseDirectionFocus(context, 'Test7', data.data, 'focus', 'backward');
                    break;
                case "FocusQuery_0141":
                    AccessibleFocusQueryIsAccessibilityFocus(context, '历史记录', data.data, 'focus', false);
                    break;
                case "FocusQuery_0142":
                    AccessibleFocusQueryPromiseIsAccessibilityFocus(context, '历史记录', data.data, 'focus', false);
                    break;
                case "FocusQuery_0144":
                    AccessibleFocusQueryCallBackGetElementFocus(context, '历史记录', data.data, 'focus', 'parent');
                    break;
                case "FocusQuery_0145":
                    AccessibleFocusQueryCallBackGetElementFocus(context, '历史记录', data.data, 'focus', 'children');
                    break;
                case "FocusQuery_0150":
                    AccessibleFocusQueryCallBackAccessibilityFocus(context, 'Test7', data.data, 'accessibilityFocus');
                    break;
                case "FocusQuery_0151":
                    AccessibleFocusQueryIsAccessibilityFocus(context, 'Test7', data.data, 'accessibilityFocus', true);
                    break;
                case "FocusQuery_0160":
                    AccessibleFocusQueryPromiseIsAccessibilityFocus(context, 'Test7', data.data, 'accessibilityFocus', true);
                    break;
                case "FocusQuery_0170":
                    AccessibleFocusQueryPromise2(context, 'Test7', data.data, 'accessibilityFocus', 'accessibility');
                    break;
                case "FocusQuery_0171":
                    AccessibleFocusQueryFindElementCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'accessibility');
                    break;
                case "FocusQuery_0180":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', 'up');
                    break;
                case "FocusQuery_0181":
                    AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'up');
                    break;
                case "FocusQuery_0190":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'rootElement');
                    break;
                case "FocusQuery_0200":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', 'down');
                    break;
                case "FocusQuery_0201":
                    AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'down');
                    break;
                case "FocusQuery_0210":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'parent');
                    break;
                case "FocusQuery_0220":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', 'left');
                    break;
                case "FocusQuery_0221":
                    AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'left');
                    break;
                case "FocusQuery_0230":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'children');
                    break;
                case "FocusQuery_0231":
                    AccessibleFocusQueryActionNames(context, 'Test7', data.data, 'accessibilityFocus');
                    break;
                case "FocusQuery_0232":
                    AccessibleFocusQueryActionNamesCallBack(context, 'Test7', data.data, 'accessibilityFocus');
                    break;
                case "FocusQuery_0240":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', 'right');
                    break;
                case "FocusQuery_0241":
                    AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'right');
                    break;
                case "FocusQuery_0260":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', 'forward');
                    break;
                case "FocusQuery_0261":
                    AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'forward');
                    break;
                case "FocusQuery_0270":
                    AccessibleFocusQueryCallBackAccessibilityFocus(context, '信息', data.data, 'accessibilityFocus');
                    break;
                case "FocusQuery_0279":
                    AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'backward');
                    break;
                case "FocusQuery_0280":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', 'backward');
                    break;
                case "FocusQuery_0281":
                    AccessibleFocusQueryIsAccessibilityFocus(context, '信息', data.data, 'accessibilityFocus', true);
                    break;
                case "FocusQuery_0282":
                    AccessibleFocusQueryPromiseIsAccessibilityFocus(context, '信息', data.data, 'accessibilityFocus', true);
                    break;
                case "FocusQuery_0284":
                    AccessibleFocusQueryCallBackGetElement(context, '信息', data.data, 'accessibilityFocus', 'parent');
                    break;
                case "FocusQuery_0285":
                    AccessibleFocusQueryCallBackGetElement(context, '信息', data.data, 'accessibilityFocus', 'children');
                    break;
                case "FocusQuery_0290":
                    AccessibleFocusQuery_0290(context, 'Test7', data.data, 'accessibilityFocus');
                    break;
                case "FocusQuery_0300":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', '');
                    break;
                case "FocusQuery_0310":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'windowId');
                    break;
                case "FocusQuery_0311":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'pageId');
                    break;
                case "FocusQuery_0312":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'checked');
                    break;
                case "FocusQuery_0313":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'inspectorKey');
                    break;
                case "FocusQuery_0314":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'bundleName');
                    break;
                case "FocusQuery_0315":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'componentType');
                    break;
                case "FocusQuery_0316":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'inputType');
                    break;
                case "FocusQuery_0317":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'text');
                    break;
                case "FocusQuery_0318":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'hintText');
                    break;
                case "FocusQuery_0319":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'description');
                    break;
                case "FocusQuery_0320":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'resourceName');
                    break;
                case "FocusQuery_0322":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'textLengthLimit');
                    break;
                case "FocusQuery_0323":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'rect');
                    break;
                case "FocusQuery_0324":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'checkable');
                    break;
                case "FocusQuery_0325":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'focusable');
                    break;
                case "FocusQuery_0326":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'isVisible');
                    break;
                case "FocusQuery_0327":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'accessibilityFocused');
                    break;
                case "FocusQuery_0328":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'selected'); ;
                    break;
                case "FocusQuery_0329":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'clickable');
                    break;
                case "FocusQuery_0330":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'longClickable');
                    break;
                case "FocusQuery_0331":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'isEnable');
                    break;
                case "FocusQuery_0332":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'isPassword');
                    break;
                case "FocusQuery_0333":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'scrollable');
                    break;
                case "FocusQuery_0334":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'editable');
                    break;
                case "FocusQuery_0336":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'pluralLineSupported');
                    break;
                case "FocusQuery_0338":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'isHint');
                    break;
                case "FocusQuery_0340":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'itemCount');
                    break;
                case "FocusQuery_0341":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'currentIndex');
                    break;
                case "FocusQuery_0342":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'startIndex');
                    break;
                case "FocusQuery_0343":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'endIndex');
                    break;
                case "FocusQuery_0349":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'error');
                    break;
                case "FocusQuery_0353":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'textMoveUnit');
                    break;
                case "FocusQuery_0354":
                    AccessibleFocusQueryCallBackGetSlider(context, data.data, 'accessibilityFocus', 'valueMax');
                    break;
                case "FocusQuery_0355":
                    AccessibleFocusQueryCallBackGetSlider(context, data.data, 'accessibilityFocus', 'valueMin');
                    break;
                case "FocusQuery_0356":
                    AccessibleFocusQueryCallBackGetSlider(context, data.data, 'accessibilityFocus', 'valueNow');
                    break;
                default:
                    break;
            }
        }
    }

    onDisconnect() {
        console.info("Accessibility AccessibilityAll onAbilityDisconnected");
    }

    onAccessibilityEvent(accessibilityEvent) {
        console.info(log + "onAccessibilityEvent=" + JSON.stringify(accessibilityEvent))
    }
}

const printElements = (logTag, res) => {
    res.attributeNames().then((names) => {
        printLongText(logTag + " actionNames ", JSON.stringify(names));
    }).catch((err) => {
        console.info(logTag + "attributeNames err=" + JSON.stringify(err));
    });
}

function printLongText(logTag, res) {
    let resJson = JSON.stringify(res);
    if (resJson && resJson.length > 1000) {
        console.info(logTag + "result is too long");
        for (let index = 0;index < resJson.length / 1000; index++) {
            let outJson = resJson.slice(index * 1000, (index + 1) * 1000);
            console.info(logTag + "result paragraph " + (index + 1) + "=" + outJson);
        }
    } else {
        console.info(logTag + "res=" + resJson);
    }
}

const publishCallback = (result) => {
    console.info("====>on_assist_change_extra publish call back result:" + JSON.stringify(result));
}

const excuteClearAccessibilityFocus = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement err=" + JSON.stringify(err));
            return;
        }
        if (res) {
            res.findElement('content', searchText).then((AccessibilityElementArray) => {
                console.info(logTag + " findElement start");
                AccessibilityElementArray[0].performAction(focusType).then(() => {
                    console.info(logTag + " performActionBack Promise success");
                }).catch((actionNamesErr) => {
                    console.info(logTag + " performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                });
            }).catch((AccessibilityElementArrayErr) => {
                console.info(logTag + " findElement Promise err=" + JSON.stringify(AccessibilityElementArrayErr));
            });
        }
    })
}

const AccessibleFocusQueryCallBack1 = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then(() => {
                    console.info(logTag + " performAction accessibilityFocus success");
                    setTimeout(() => {
                        context.getFocusElement((err, res) => {
                            if (err?.code) {
                                console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                                return;
                            }
                            printElements(logTag, res)
                            if (res) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                excuteClearAccessibilityFocus(context, searchText, description, 'clearFocus');
                            }
                        })
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryCallBackAccessibilityFocus = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                console.info(logTag + " AccessibilityElement.length: " + AccessibilityElement.length);
                let ele = AccessibilityElement[AccessibilityElement.length - 1];
                ele.performAction(focusType).then(() => {
                    console.info(logTag + " performAction accessibilityFocus true");
                    setTimeout(() => {
                        context.getFocusElement(true, (err, res) => {
                            if (err?.code) {
                                console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                                return;
                            }
                            printElements(logTag, res)
                            if (res) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                ele.performAction('clearAccessibilityFocus').then(() => {
                                    console.info(logTag + " performAction clearAccessibilityFocus success");
                                }).catch((err) => {
                                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                                });
                            }
                        })
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryIsAccessibilityFocus = (context, searchText, description, focusType, isAccessibilityFocus) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[AccessibilityElement.length - 1];
                ele.performAction(focusType).then(() => {
                    console.info(logTag + " performAction accessibilityFocus success");
                    setTimeout(() => {
                        context.getFocusElement(isAccessibilityFocus, (err, res) => {
                            if (err?.code) {
                                console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                                return;
                            }
                            printElements(logTag, res)
                            if (res) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                if (isAccessibilityFocus == false) {
                                    ele.performAction('clearFocus').then(() => {
                                        console.info(logTag + " performAction clearFocus success");
                                    }).catch((err) => {
                                        console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                                    });
                                }
                                else {
                                    ele.performAction('clearAccessibilityFocus').then(() => {
                                        console.info(logTag + " performAction clearAccessibilityFocus success");
                                    }).catch((err) => {
                                        console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                                    });
                                }
                            }
                        })
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryPromiseIsAccessibilityFocus = (context, searchText, description, focusType, isAccessibilityFocus) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[AccessibilityElement.length -1];
                ele.performAction(focusType).then(() => {
                    console.info(logTag + " performAction accessibilityFocus success");
                    setTimeout(() => {
                        context.getFocusElement(isAccessibilityFocus).then((res) => {
                            printElements(logTag, res)
                            if (res) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                if (isAccessibilityFocus == false) {
                                    ele.performAction('clearFocus').then(() => {
                                        console.info(logTag + " performAction clearFocus success");
                                    }).catch((err) => {
                                        console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                                    });
                                }
                                else {
                                    ele.performAction('clearAccessibilityFocus').then(() => {
                                        console.info(logTag + " performAction clearAccessibilityFocus success");
                                    }).catch((err) => {
                                        console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                                    });
                                }
                            }
                        })
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryPromise2 = (context, searchText, description, focus, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focus).then(() => {
                    console.info(logTag + " performAction accessibilityFocus success");
                    setTimeout(() => {
                        ele.findElement('focusType',focusType).then((element) => {
                            printElements(logTag, element)
                            if (element) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                if (focus == 'focus') {
                                    excuteClearAccessibilityFocus(context, searchText, description, 'clearFocus');
                                }
                                else {
                                    excuteClearAccessibilityFocus(context, searchText, description, 'clearAccessibilityFocus');
                                }
                            }
                        }).catch((err) => {
                            console.info(logTag + "findElement err=" + JSON.stringify(err));
                        });
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}
const AccessibleFocusQueryFindElementCallBack = (context, searchText, description, focus, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focus).then(() => {
                    console.info(logTag + " performAction accessibilityFocus success");
                    setTimeout(() => {
                        ele.findElement('focusType',focusType, (err, result) => {
                            if (err?.code) {
                                console.info(logTag + " findElement execute err=" + JSON.stringify(err));
                                return;
                            }
                            printElements(logTag, result)
                            if (result) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                if (focus == 'focus') {
                                    excuteClearAccessibilityFocus(context, searchText,description, 'clearFocus');
                                }
                                else {
                                    excuteClearAccessibilityFocus(context, searchText, description, 'clearAccessibilityFocus');
                                }
                            }
                        })
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQuery_0290 = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then(() => {
                    console.info(logTag + " performAction accessibilityFocus success");
                    setTimeout(() => {
                        context.getFocusElement(true).then((res) => {
                            res.findElement('focusType','').then((element) => {
                                printElements(logTag, element)
                                if (element) {
                                    var commonEventPublishData = {
                                        data: "on_assist_change_extra_success"
                                    }
                                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                    excuteClearAccessibilityFocus(context, searchText, description, 'clearAccessibilityFocus');
                                }
                            }).catch((err) => {
                                console.info(logTag + "findElement err=" + JSON.stringify(err));
                            });
                        })
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryPromiseDirectionFocus = (context, searchText, description, focusType, direction) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then(() => {
                    console.info(logTag + " performAction accessibilityFocus success");
                    setTimeout(() => {
                        context.getFocusElement().then((ele) => {
                            console.info(logTag + " focusDirection:" + direction);
                            ele.findElement('focusDirection', direction).then((element) => {
                                printElements(logTag, element)
                                if (element) {
                                    var commonEventPublishData = {
                                        data: "on_assist_change_extra_success"
                                    }
                                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                    excuteClearAccessibilityFocus(context, searchText, description, 'clearFocus');
                                }
                            }).catch((err) => {
                                console.info(logTag + " findElement focusDirection execute err=" + JSON.stringify(err));
                            });
                        })
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryPromiseDirection = (context, searchText, description, focusType, direction) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then(() => {
                    console.info(logTag + " performAction accessibilityFocus success");
                    setTimeout(() => {
                        context.getFocusElement(true).then((ele) => {
                            console.info(logTag + " focusDirection:" + direction);
                            ele.findElement('focusDirection', direction).then((element) => {
                                printElements(logTag, element)
                                if (element) {
                                    var commonEventPublishData = {
                                        data: "on_assist_change_extra_success"
                                    }
                                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                    excuteClearAccessibilityFocus(context, searchText, description, 'clearAccessibilityFocus');
                                }
                            }).catch((err) => {
                                console.info(logTag + " findElement focusDirection execute err=" + JSON.stringify(err));
                            });
                        })
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryPromiseDirectionCallBackFocus = (context, searchText, description, focusType, direction) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then(() => {
                    console.info(logTag + " performAction accessibilityFocus success");
                    setTimeout(() => {
                        context.getFocusElement().then((ele) => {
                            console.info(logTag + " focusDirection:" + direction);
                            ele.findElement('focusDirection', direction, (err, result) => {
                                if (err?.code) {
                                    console.info(logTag + " findElement execute err=" + JSON.stringify(err));
                                    return;
                                }
                                printElements(logTag, result)
                                if (result) {
                                    var commonEventPublishData = {
                                        data: "on_assist_change_extra_success"
                                    }
                                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                    excuteClearAccessibilityFocus(context, searchText, description, 'clearFocus');
                                }
                            });
                        })
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryPromiseDirectionCallBack = (context, searchText, description, focusType, direction) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then(() => {
                    console.info(logTag + " performAction accessibilityFocus success");
                    setTimeout(() => {
                        context.getFocusElement(true).then((ele) => {
                            console.info(logTag + " focusDirection:" + direction);
                            ele.findElement('focusDirection', direction, (err, result) => {
                                if (err?.code) {
                                    console.info(logTag + " findElement execute err=" + JSON.stringify(err));
                                    return;
                                }
                                printElements(logTag, result)
                                if (result) {
                                    var commonEventPublishData = {
                                        data: "on_assist_change_extra_success"
                                    }
                                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                    excuteClearAccessibilityFocus(context, searchText, description, 'clearAccessibilityFocus');
                                }
                            });
                        })
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryCallBackGetElementFocus = (context, searchText, description, focusType, attributeName) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[AccessibilityElement.length - 1];
                ele.performAction(focusType).then(() => {
                    console.info(logTag + " performAction accessibilityFocus success");
                    setTimeout(() => {
                        context.getFocusElement((err, ele) => {
                            if (err?.code) {
                                console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                                return;
                            }
                            printElements(logTag, ele)
                            ele.attributeValue(attributeName).then((element) => {
                                if (description == 'FocusQuery_0210' || description == 'FocusQuery_0284') {
                                    printElements(logTag, element)
                                }
                                else {
                                    console.info(logTag + " " + attributeName + ":" + JSON.stringify(element))
                                }
                                if (JSON.stringify(element) != undefined) {
                                    var commonEventPublishData = {
                                        data: "on_assist_change_extra_success"
                                    }
                                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                    excuteClearAccessibilityFocus(context, searchText, description, 'clearFocus');
                                }
                            }).catch((err) => {
                                console.info(logTag + " attributeValue err=" + JSON.stringify(err));
                            })
                        })
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryCallBackGetElement = (context, searchText, description, focusType, attributeName) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[AccessibilityElement.length -1 ];
                ele.performAction(focusType).then(() => {
                    console.info(logTag + " performAction accessibilityFocus success");
                    setTimeout(() => {
                        context.getFocusElement(true,(err, ele) => {
                            if (err?.code) {
                                console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                                return;
                            }
                            printElements(logTag, ele)
                            ele.attributeValue(attributeName).then((element) => {
                                if (description == 'FocusQuery_0210' || description == 'FocusQuery_0284') {
                                    printElements(logTag, element)
                                }
                                else {
                                    console.info(logTag + " " + attributeName + ":" + JSON.stringify(element))
                                }
                                if (JSON.stringify(element) != undefined) {
                                    var commonEventPublishData = {
                                        data: "on_assist_change_extra_success"
                                    }
                                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                    ele.performAction('clearAccessibilityFocus').then(() => {
                                        console.info(logTag + " performAction clearAccessibilityFocus success");
                                    }).catch((err) => {
                                        console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                                    });
                                }
                            }).catch((err) => {
                                console.info(logTag + " attributeValue err=" + JSON.stringify(err));
                            })
                        })
                    }, 2000);
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryCallBackGetSlider = (context, description, focusType, attributeName) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.attributeValue("children").then((values) => {
         for (let index0 = 0; index0 < values.length; index0++) {
            values[index0].attributeValue("children").then((values1) => {
                for (let index1 = 0; index1 < values1.length; index1++) {
                values1[index1].attributeValue("children").then((values2) => {
                    console.info(logTag + " children length: " + values2.length);
                    for (let index = 0; index < values2.length; index++) {
                        values2[index].attributeValue("componentType").then((componentType) => {
                            console.info(logTag + " attributeValue componentType: " + componentType);
                            if (componentType == 'Slider') {
                                values2[index].performAction(focusType).then(() => {
                                    console.info(logTag + " performAction accessibilityFocus success");
                                    setTimeout(() => {
                                        context.getFocusElement(true, (err, ele) => {
                                            if (err?.code) {
                                                console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                                                return;
                                            }
                                            ele.attributeValue(attributeName).then((element) => {
                                                console.info(logTag + " attributeValue " + attributeName + ":" + JSON.stringify(element))
                                                if (element == 10 || element == 50 || element == 100) {
                                                    var commonEventPublishData = {
                                                        data: "on_assist_change_extra_success"
                                                    }
                                                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                                }
                                            }).catch((err) => {
                                                console.info(logTag + " attributeValue " + attributeName + " err=" + JSON.stringify(err));
                                            })
                                            ele.performAction('clearAccessibilityFocus').then(() => {
                                                console.info(logTag + " performActionBack Promise success");
                                            }).catch((actionNamesErr) => {
                                                console.info(logTag + " performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                                            });
                                        })
                                    }, 2000);
                                }).catch((err) => {
                                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                                });
                            }
                        }).catch((err) => {
                            console.info(logTag + " attributeValue componentType err=" + JSON.stringify(err));
                        });
                    }

                })
                }
            })
         }
        })
    });
}

const AccessibleFocusQueryActionNamesFocus = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((ele) => {
            ele[0].performAction(focusType).then(() => {
                console.info(logTag + " accessibilityFocus execute success");
                setTimeout(() => {
                    context.getFocusElement((err, ele) => {
                        if (err?.code) {
                            console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                            return;
                        }
                        ele.actionNames().then((value) => {
                            console.info(logTag + " actionNames execute res=" + JSON.stringify(value));
                            if (value.length > 0) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                excuteClearAccessibilityFocus(context, searchText, description, 'clearFocus');
                            }
                        }).catch((err) => {
                            console.info(logTag + " actionNames execute err=" + JSON.stringify(err));
                        });
                    })
                }, 2000);
            }).catch((err) => {
                console.info(logTag + " accessibilityFocus err:" + JSON.stringify(err));
            });
        }).catch((err) => {
            console.info(logTag + " findElement err:" + JSON.stringify(err));
        })
    })
}

const AccessibleFocusQueryActionNames = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((ele) => {
            ele[0].performAction(focusType).then(() => {
                console.info(logTag + " accessibilityFocus execute success");
                setTimeout(() => {
                    context.getFocusElement(true, (err, ele) => {
                        if (err?.code) {
                            console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                            return;
                        }
                        ele.actionNames().then((value) => {
                            console.info(logTag + " actionNames execute res=" + JSON.stringify(value));
                            if (value.length > 0) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                excuteClearAccessibilityFocus(context, searchText, description, 'clearAccessibilityFocus');
                            }
                        }).catch((err) => {
                            console.info(logTag + " actionNames execute err=" + JSON.stringify(err));
                        });
                    })
                }, 2000);
            }).catch((err) => {
                console.info(logTag + " accessibilityFocus err:" + JSON.stringify(err));
            });
        }).catch((err) => {
            console.info(logTag + " findElement err:" + JSON.stringify(err));
        })
    })
}

const AccessibleFocusQueryActionNamesCallBackFocus = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((ele) => {
            ele[0].performAction(focusType).then(() => {
                console.info(logTag + " accessibilityFocus execute success");
                setTimeout(() => {
                    context.getFocusElement((err, ele) => {
                        if (err?.code) {
                            console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                            return;
                        }
                        ele.actionNames((err, result) => {
                            if (err?.code) {
                                console.info(logTag + " actionNames execute err=" + JSON.stringify(err));
                                return;
                            }
                            console.info(logTag + " actionNames execute res=" + JSON.stringify(result));
                            if (result.length > 0) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                excuteClearAccessibilityFocus(context, searchText, description, 'clearFocus');
                            }
                        });
                    })
                }, 2000);
            }).catch((err) => {
                console.info(logTag + " accessibilityFocus err:" + JSON.stringify(err));
            });
        }).catch((err) => {
            console.info(logTag + " findElement err:" + JSON.stringify(err));
        })
    })
}

const AccessibleFocusQueryActionNamesCallBack = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((ele) => {
            ele[0].performAction(focusType).then(() => {
                console.info(logTag + " accessibilityFocus execute success");
                setTimeout(() => {
                    context.getFocusElement(true, (err, ele) => {
                        if (err?.code) {
                            console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                            return;
                        }
                        ele.actionNames((err, result) => {
                            if (err?.code) {
                                console.info(logTag + " actionNames execute err=" + JSON.stringify(err));
                                return;
                            }
                            console.info(logTag + " actionNames execute res=" + JSON.stringify(result));
                            if (result.length > 0) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                                excuteClearAccessibilityFocus(context, searchText, description, 'clearAccessibilityFocus');
                            }
                        });
                    })
                }, 2000);
            }).catch((err) => {
                console.info(logTag + " accessibilityFocus err:" + JSON.stringify(err));
            });
        }).catch((err) => {
            console.info(logTag + " findElement err:" + JSON.stringify(err));
        })
    })
}

export default ServiceExtAbilityFocusQuery
