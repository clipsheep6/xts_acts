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
import display from '@ohos.display';

const logTag = "[xtsLog]"

const getWindowsByIdCallback = (context, displayId, caseName) => {
    const Log = logTag + caseName + "   getWindowsByIdCallback ";
    let success = 0;
    let times = 1
    let id = setInterval(() => {
        context.getWindows(displayId, (err, res) => {
            if (err?.code) {
                console.info(Log + "times: " + times + "execute err=" + JSON.stringify(err));
            }
            printLongText(Log + "times: " + times + "execute ", res);
            success++;
        });
        times++;
        if (times > 100) {
            clearInterval(id)
            setTimeout(() => {
                console.info(Log + " success: " + success);
                if (success >= 100) {
                    commonEventPublishOnAssistChange(caseName);
                }
            }, 1000)
        }
    }, 50);
}
const getWindowsByIdPromise = (context, displayId, caseName) => {
    const Log = logTag + caseName + "   getWindowsByIdPromise ";
    let success = 0;
    let times = 1
    let id = setInterval(() => {
        context.getWindows(displayId).then((res) => {
            printLongText(Log + "times: " + times + "execute ", res);
            success++;
            console.info(logTag + " success: " + success);
        }).catch((err) => {
            console.info(Log + "times: " + times + "execute err=" + JSON.stringify(err));
        });
        times++;
        if (times > 100) {
            clearInterval(id)
            setTimeout(() => {
                console.info(Log + " success: " + success);
                if (success >= 100) {
                    commonEventPublishOnAssistChange(caseName);
                }
            }, 1000)
        }
    }, 50);
}

const getWindowRootElementCallback = (context, caseName) => {
    const Log = logTag + caseName + "   getWindowRootElementCallback ";
    console.info(Log + "Start");
    let success = 0;
    let times = 1
    let id = setInterval(() => {
        context.getWindowRootElement((err, res) => {
            if (err?.code) {
                console.info(Log + "execute err=" + JSON.stringify(err));
                return;
            }
            success++
            printLongText(Log + "execute ", res);
        });
        times++;
        if (times > 100) {
            clearInterval(id)
            setTimeout(() => {
                console.info(Log + " success: " + success);
                if (success >= 100) {
                    commonEventPublishOnAssistChange(caseName);
                }
            }, 1000)
        }
    }, 50);
}


const getWindowRootElementPromise = (context, caseName) => {
    const Log = logTag + caseName + "   getWindowRootElementPromise ";
    let success = 0;
    let times = 1
    let id = setInterval(() => {
        context.getWindowRootElement().then((res) => {
            printLongText(Log + " times: " + times + " execute ", res);
            success++;
            console.info(Log + " success: " + success);
            if (times > 100) {
                clearInterval(id)
                setTimeout(() => {
                    console.info(Log + " success: " + success);
                    if (success >= 100) {
                        commonEventPublishOnAssistChange(caseName);
                    }
                }, 1000)
            }
        }).catch((err) => {
            console.info(Log + " times: " + times + +JSON.stringify(err));
        });
        times++;
    }, 50);
}

function executePerformActionPromiseAndGetFocusElementCallBack(caseName, logTag, context, searchText, action, args?: object) {
    let success = 0;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + "  getWindowRootElement err=" + JSON.stringify(err));
            return;
        }
        printLongText(logTag + "  getWindowRootElement ", res);
        if (res) {
            res.findElement('content', searchText).then((AccessibilityElementArray) => {
                console.info(logTag + caseName + "  AccessibilityElementArray Promise res=" + JSON.stringify(AccessibilityElementArray));
                AccessibilityElementArray[0].performAction(action, args).then(() => {
                    console.info(logTag + caseName + "  performActionBack Promise success");
                    let times = 1
                    let id = setInterval(() => {
                        context.getFocusElement(true,(err, res) => {
                            if (err?.code) {
                                console.info(logTag + " times: " + times + "  FocusElement CallBack err=" + JSON.stringify(err));
                                return;
                            }
                            success++;
                            console.info(logTag + " success: " + success);
                            console.info(logTag + " times: " + times + "   FocusElement CallBack success=" + JSON.stringify(res));
                        });
                        times++;
                        if (times > 100) {
                            clearInterval(id)
                            setTimeout(() => {
                                console.info(logTag + " success: " + success);
                                if (success >= 100) {
                                    commonEventPublishOnAssistChange(caseName);
                                }
                            }, 1000)
                        }
                    }, 50);
                }).catch((actionNamesErr) => {
                    console.info(logTag + "  performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                });

            }).catch((AccessibilityElementArrayErr) => {
                console.info(logTag + "  AccessibilityElementArray Promise err=" + JSON.stringify(AccessibilityElementArrayErr));
            });

        }
    })
}

function executePerformActionPromise(caseName, logTag, context, searchText, action, args?: object) {
    let success = 0;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + "  getWindowRootElement err=" + JSON.stringify(err));
            return;
        }
        printLongText(logTag + "  getWindowRootElement ", res);
        if (res) {
            res.findElement('content', searchText).then((AccessibilityElementArray) => {
                console.info(logTag + "  AccessibilityElementArray Promise res=" + JSON.stringify(AccessibilityElementArray));
                let times = 1
                let id = setInterval(() => {
                    AccessibilityElementArray[0].performAction(action, args).then(() => {
                        console.info(logTag + times + " accessibilityFocus  performActionBack Promise success");
                        setTimeout(()=>{
                            AccessibilityElementArray[0].performAction('clearAccessibilityFocus', args).then(() => {
                                console.info(logTag + times + " clearAccessibilityFocus performActionBack Promise success");
                                success++;
                                console.info(logTag + " success: " + success);
                            }).catch((actionNamesErr) => {
                                console.info(logTag + " times: " + times + " clearAccessibilityFocus  performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                            });
                        },100)
                    }).catch((actionNamesErr) => {
                        console.info(logTag + " times: " + times + " accessibilityFocus  performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                    });
                    if (times > 100) {
                        clearInterval(id)
                        setTimeout(() => {
                            console.info(logTag + " success: " + success);
                            if (success >= 100) {
                                commonEventPublishOnAssistChange(caseName);
                            }
                        }, 1000)
                    }
                    times++;
                }, 200);
            }).catch((AccessibilityElementArrayErr) => {
                console.info(logTag + "  AccessibilityElementArray Promise err=" + JSON.stringify(AccessibilityElementArrayErr));
            });
        }
    })
}

function executePerformActionPromiseAndGetFocusElementPromise(caseName, logTag, context, searchText, action, args?: object) {
    let success = 0;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + "  getWindowRootElement err=" + JSON.stringify(err));
            return;
        }
        printLongText(logTag + "getWindowRootElement ", res);
        if (res) {
            res.findElement('content', searchText).then((AccessibilityElementArray) => {
                console.info(logTag + "  AccessibilityElementArray Promise res=" + JSON.stringify(AccessibilityElementArray));
                AccessibilityElementArray[0].performAction(action, args).then(() => {
                    console.info(logTag + "  performActionBack Promise success");
                    let times = 1
                    let id = setInterval(() => {
                        context.getFocusElement(true).then((FocusElement) => {
                            if (FocusElement) {
                                console.info(logTag + " times: " + times + "  FocusElement Promise success=" + JSON.stringify(FocusElement));
                                success++
                                console.info(logTag + " success: " + success);
                            } else {
                                console.info(logTag + " times: " + times + "  FocusElement Promise err=");
                            }

                        }).catch((actionNamesErr) => {
                            console.info(logTag + " times: " + times + "  performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                        });
                        times++;
                        if (times > 100) {
                            clearInterval(id)
                            setTimeout(() => {
                                console.info(logTag + " success: " + success);
                                if (success >= 100) {
                                    commonEventPublishOnAssistChange(caseName);
                                }
                            }, 1000)
                        }
                    }, 50);
                }).catch((actionNamesErr) => {
                    console.info(logTag + "  performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                });

            }).catch((AccessibilityElementArrayErr) => {
                console.info(logTag + "  AccessibilityElementArray Promise err=" + JSON.stringify(AccessibilityElementArrayErr));
            });
        }
    })
}

function gestureInjectCallback(logTag, caseName, context, gesturePathDefineList) {
    const log = logTag + caseName
    let success = 0;
    let times = 1
    let id = setInterval(() => {
        context.injectGesture(gesturePathDefineList,(err) => {
            if (err?.code) {
                console.info(log + "times: " + times + " gestureInject Callback err=" + JSON.stringify(err));
            }
            success++
            console.info(log + "times: " + times + " gestureInject success");
        });
        times++;
        if (times > 100) {
            clearInterval(id)
            setTimeout(() => {
                console.info(logTag + " success: " + success);
                if (success >= 100) {
                    commonEventPublishOnAssistChange(caseName);
                }
            }, 1000)
        }
    }, 50);
}
function gestureInjectPromise(logTag, caseName, context, gesturePathDefineList) {
    const log = logTag + caseName
    let success = 0;
    let times = 1
    let id = setInterval(() => {
        context.injectGesture(gesturePathDefineList).then((res) => {
            success++
            console.info(log + " times: " + times + " gestureInject Promise res=" + JSON.stringify(res));
            if (times > 100) {
                clearInterval(id)
                setTimeout(() => {
                    if (success >= 100) {
                        commonEventPublishOnAssistChange(caseName);
                    }
                }, 1000)
            }
        }).catch((err) => {
            console.info(log + "times: " + times + " gestureInject Promise err=" + JSON.stringify(err));
        });
        times++;
    }, 50);
}

const excuteMethod = (context, data) => {

    if (data) {
        switch (data) {
            case "Dfx_0070" + "_execute_accessibility_event_success":
                Dfx_0070(context, "Dfx_0070")
                break;
            case "Dfx_0080" + "_execute_accessibility_event_success":
                Dfx_0080(context, "Dfx_0080")
                break;
            case "Dfx_0090" + "_execute_accessibility_event_success":
                Dfx_0090(context, "Dfx_0090")
                break;
            case "Dfx_0100" + "_execute_accessibility_event_success":
                Dfx_0100(context, "Dfx_0100")
                break;
            case "Dfx_0110" + "_execute_accessibility_event_success":
                Dfx_0110(context, "Dfx_0110")
                break;
            case "Dfx_0120" + "_execute_accessibility_event_success":
                Dfx_0120(context, "Dfx_0120")
                break;
            case "Dfx_0170" + "_execute_accessibility_event_success":
                Dfx_0170(context, "Dfx_0170")
                break;
            case "Dfx_0180" + "_execute_accessibility_event_success":
                Dfx_0180(context, "Dfx_0180")
                break;
            case "Dfx_0190" + "_execute_accessibility_event_success":
                Dfx_0190(context, "Dfx_0190")
                break;
        }
    }
}

const Dfx_0070 = (context, caseName) => {
    getWindowRootElementCallback(context, caseName);
}

const Dfx_0080 = (context, caseName) => {
    getWindowRootElementPromise(context, caseName);
}

const Dfx_0090 = (context, caseName) => {
    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdCallback(context, displayId, caseName);
    });
}

const Dfx_0100 = (context, caseName) => {
    var displayId = null;
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        displayId = data.id;
        getWindowsByIdPromise(context, displayId, caseName);
    });
}

const Dfx_0110 = (context, caseName) => {
    executePerformActionPromiseAndGetFocusElementCallBack(caseName, logTag + 'Dfx_0110', context, 'Dfx_0110', 'accessibilityFocus');
}

const Dfx_0120 = (context, caseName) => {
    executePerformActionPromiseAndGetFocusElementPromise(caseName, logTag + 'Dfx_0120', context, 'Dfx_0120', 'accessibilityFocus');
}

const Dfx_0170 = (context, caseName) => {
    executePerformActionPromise(caseName, logTag + 'Dfx_0170', context, 'Dfx_0170', 'accessibilityFocus');
}
const Dfx_0180 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 378, positionY: 956 },
            { positionX: 385, positionY: 121 }
        ],
        durationTime: 300
    }
    gestureInjectCallback(logTag, caseName, context, GesturePath);
}
const Dfx_0190 = (context, caseName) => {
    let GesturePath = {
        points: [
            { positionX: 322, positionY: 250 },
            { positionX: 321, positionY: 462 },
        ],
        durationTime: 300
    }
    gestureInjectPromise(logTag, caseName, context, GesturePath);
}

class ServiceExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
        let context = this.context;
        console.info(logTag + "ServiceDfx onConnect");
        var commonEventSubscribeInfo = {
            events: ["execute_accessibility_event"]
        }
        function subscriberCallback(err, data) {
            console.info(logTag + "====>AccessibilityDfx subscriberCallback start");
            console.info(logTag + "====>AccessibilityDfx receive event err:" + JSON.stringify(err));
            console.info(logTag + "====>AccessibilityDfx receive event data:" + JSON.stringify(data));
            excuteMethod(context, data.data);
            console.info(logTag + "====>AccessibilityDfx subscriberCallback end");
        }
        var subscriber
        commonEvent.createSubscriber(commonEventSubscribeInfo).then(function (data) {
            console.info(logTag + "====> AccessibilityDfx createSubscriber Start====")
            subscriber = data;
            commonEvent.subscribe(subscriber, subscriberCallback);
            console.info(logTag + "====> AccessibilityDfx createSubscriber End====")
        })
        console.info(logTag + "====> AccessibilityDfx onConnect End====")
    }

    onDisconnect() {
        console.info(logTag + "AccessibilityDfx onDisconnect");
    }

    onAccessibilityEvent(accessibilityEvent) {
        console.info(logTag + "AccessibilityDfx onAccessibilityEvent");
    }

    onKeyEvent(keyEvent) {
        console.info(logTag + "AccessibilityDfx onKeyPressEvent");
        return true;
    }
}

const commonEventPublishOnAssistChange = (caseName) => {

    function publishCallback(err) {
        console.info(logTag + "on_assist_change_extra onAbilityConnected publish call back result:" + JSON.stringify(err));
    }

    var commonEventPublishData = {
        data: caseName + "_on_assist_change_extra_success",
    }
    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
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

export default ServiceExtAbility


