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
const commonEventPublishOnAssistChange = (caseName) => {
    function publishCallback(err) {
        console.info(logTag + "on_assist_change_extra onAbilityConnected publish call back result:" + JSON.stringify(err));
    }
    var commonEventPublishData = {
        data: caseName + "_on_assist_change_extra_success",
    }
    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
}

function ReportNodeInfo_0070(logTag, context, searchText, caseName) {
    executePerformActionPromise(logTag + caseName, context, caseName, 'focus');
    setTimeout(() => {
        let element = undefined;
        context.getFocusElement((err, data) => {
            if (err?.code) {
                console.info(logTag + caseName + 'Failed to getFocusElement. Code:  ' + JSON.stringify(err));
            }
            element = data;
            console.info(logTag + caseName + 'Succeeded getFocusElement. Data:' + JSON.stringify(data));
        })

        setTimeout(() => {
            context.getWindowRootElement().then((res) => {
                if (res) {
                    res.findElement('content', searchText).then((AccessibilityElementArray) => {
                        console.info(logTag + "findElement Promise res=" + JSON.stringify(AccessibilityElementArray));
                        if (AccessibilityElementArray[0]) {
                            console.info(logTag + caseName + 'AccessibilityElementArray[0]:  ' + JSON.stringify(AccessibilityElementArray[0]));
                            if (element == AccessibilityElementArray[0]) {
                                commonEventPublishOnAssistChange(caseName);
                            }

                        }
                    }).catch((AccessibilityElementArrayErr) => {
                        console.info(logTag + "AccessibilityElementArray[0] Promise err=" + JSON.stringify(AccessibilityElementArrayErr));
                    });

                }
            }).catch((getWindowRootElementError) => {
                console.info(logTag + "getWindowRootElementError Promise err=" + JSON.stringify(getWindowRootElementError));
            });
        }, 3000)
    }, 3000)

}

function ReportNodeInfo_0071(logTag, context, searchText, caseName) {
    executePerformActionPromise(logTag + caseName, context, caseName, 'focus');
    setTimeout(() => {
        let element = undefined;
        context.getFocusElement((err, data) => {
            if (err?.code) {
                console.info(logTag + caseName + 'Failed to getFocusElement. Code:  ' + JSON.stringify(err));
            }
            element = data;
            console.info(logTag + caseName + 'Succeeded getFocusElement. Data:' + JSON.stringify(data));
        })
        setTimeout(() => {
            context.getWindowRootElement().then((res) => {
                if (res) {
                    res.findElement('content', searchText,(err, res) => {
                        if (res[0]) {
                            console.info(logTag + caseName + 'getWindowRootElementAndfindElementCallBack res[0]:  ' + JSON.stringify(res[0]));
                            if (element == res[0]) {
                                commonEventPublishOnAssistChange(caseName);
                            }
                        }
                    })
                }
            }).catch((getWindowRootElementError) => {
                console.info(logTag + "getWindowRootElementError Promise err=" + JSON.stringify(getWindowRootElementError));
            });
        }, 3000)
    }, 3000)

}
function ReportNodeInfo_0051(logTag, context, searchText, caseName) {
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        let displayId = data.id
        context.getWindows(displayId).then((res) => {
            if (res) {
                context.getWindowRootElement((err, res) => {
                    if (err?.code) {
                        console.info(logTag + "getWindowRootElement err=" + JSON.stringify(err));
                        return;
                    }
                    if (res) {
                        res.findElement('content', searchText,(err, res) => {
                            if (res[0]) {
                                console.info(logTag + caseName + 'getWindowRootElementAndfindElementCallBack res[0]:  ' + JSON.stringify(res[0]));
                                commonEventPublishOnAssistChange(caseName);
                            }
                        })
                    }
                })
            }
        }).catch((err) => {
            console.info(logTag + "execute err=" + JSON.stringify(err));
        });
    });
}

function ReportNodeInfo_0050(logTag, context, searchText, caseName) {
    display.getDefaultDisplay((err, data) => {
        if (err?.code) {
            console.info(logTag + caseName + 'Failed to obtain the default display object. Code:  ' + JSON.stringify(err));
        }
        console.info(logTag + caseName + 'Succeeded in obtaining the default display object. Data:' + JSON.stringify(data));
        let displayId = data.id
        context.getWindows(displayId).then((res) => {
            if (res) {
                context.getWindowRootElement((err, res) => {
                    if (err?.code) {
                        console.info(logTag + "getWindowRootElement err=" + JSON.stringify(err));
                        return;
                    }
                    if (res) {
                        res.findElement('content', searchText,(err, res) => {
                            if (res[0]) {
                                console.info(logTag + caseName + 'getWindowRootElementAndfindElementCallBack res[0]:  ' + JSON.stringify(res[0]));
                                commonEventPublishOnAssistChange(caseName);
                            }
                        })
                    }
                })

            }
        }).catch((err) => {
            console.info(logTag + "execute err=" + JSON.stringify(err));
        });
    });
}

function getWindowRootElementAndfindElementCallBack(logTag, context, searchText, caseName) {
    context.getWindowRootElement().then((res) => {
        if (res) {
            res.findElement('content', searchText,(err, res) => {
                if (res[0]) {
                    console.info(logTag + caseName + 'getWindowRootElementAndfindElementCallBack res[0]:  ' + JSON.stringify(res[0]));
                    commonEventPublishOnAssistChange(caseName);
                }
            })
        }
    }).catch((getWindowRootElementError) => {
        console.info(logTag + "getWindowRootElementError Promise err=" + JSON.stringify(getWindowRootElementError));
    });

}

function getWindowRootElementAndfindElement(logTag, context, searchText, caseName) {
    context.getWindowRootElement().then((res) => {
        if (res) {
            res.findElement('content', searchText).then((AccessibilityElementArray) => {
                console.info(logTag + "findElement Promise res=" + JSON.stringify(AccessibilityElementArray));
                if (AccessibilityElementArray[0]) {
                    commonEventPublishOnAssistChange(caseName);
                }
            }).catch((AccessibilityElementArrayErr) => {
                console.info(logTag + "AccessibilityElementArray Promise err=" + JSON.stringify(AccessibilityElementArrayErr));
            });

        }
    }).catch((getWindowRootElementError) => {
        console.info(logTag + "getWindowRootElementError Promise err=" + JSON.stringify(getWindowRootElementError));
    });

}

function executePerformActionPromise(logTag, context, searchText, action, args?: object) {
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + "getWindowRootElement err=" + JSON.stringify(err));
            return;
        }
        if (res) {
            res.findElement('content', searchText).then((AccessibilityElementArray) => {
                console.info(logTag + "AccessibilityElementArray Promise res=" + JSON.stringify(AccessibilityElementArray));
                AccessibilityElementArray[0].performAction(action, args).then(() => {
                    console.info(logTag + "performActionBack Promise success");
                }).catch((actionNamesErr) => {
                    console.info(logTag + "performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                });

            }).catch((AccessibilityElementArrayErr) => {
                console.info(logTag + "AccessibilityElementArray Promise err=" + JSON.stringify(AccessibilityElementArrayErr));
            });

        }
    })
}
const excuteMethod = (context, data) => {
    if (data) {
        switch (data) {
            case 'ReportNodeInfo_0020' + "_execute_accessibility_event_success":
                getWindowRootElementAndfindElement(logTag + 'ReportNodeInfo_0020', context, 'ReportNodeInfo_0020', 'ReportNodeInfo_0020');
                break;
            case 'ReportNodeInfo_0021' + "_execute_accessibility_event_success":
                getWindowRootElementAndfindElementCallBack(logTag + 'ReportNodeInfo_0021', context, 'ReportNodeInfo_0021', 'ReportNodeInfo_0021');
                break;
            case 'ReportNodeInfo_0040' + "_execute_accessibility_event_success":
                getWindowRootElementAndfindElement(logTag + 'ReportNodeInfo_0040', context, 'ReportNodeInfo_0040', 'ReportNodeInfo_0040');
                break;
            case 'ReportNodeInfo_0041' + "_execute_accessibility_event_success":
                getWindowRootElementAndfindElementCallBack(logTag + 'ReportNodeInfo_0041', context, 'ReportNodeInfo_0041', 'ReportNodeInfo_0041');
                break;
            case 'ReportNodeInfo_0060' + "_execute_accessibility_event_success":
                getWindowRootElementAndfindElement(logTag + 'ReportNodeInfo_0060', context, 'ReportNodeInfo_0060', 'ReportNodeInfo_0060');
                break;
            case 'ReportNodeInfo_0061' + "_execute_accessibility_event_success":
                getWindowRootElementAndfindElementCallBack(logTag + 'ReportNodeInfo_0061', context, 'ReportNodeInfo_0061', 'ReportNodeInfo_0061');
                break;
            case 'ReportNodeInfo_0030' + "_execute_accessibility_event_success":
                getWindowRootElementAndfindElement(logTag + 'ReportNodeInfo_0030', context, 'ReportNodeInfo_0030', 'ReportNodeInfo_0030');
                break;
            case 'ReportNodeInfo_0031' + "_execute_accessibility_event_success":
                getWindowRootElementAndfindElementCallBack(logTag + 'ReportNodeInfo_0031', context, 'ReportNodeInfo_0031', 'ReportNodeInfo_0031');
                break;
            case 'ReportNodeInfo_0050' + "_execute_accessibility_event_success":
                ReportNodeInfo_0050(logTag + 'ReportNodeInfo_0050', context, 'ReportNodeInfo_0050', 'ReportNodeInfo_0050');
                break;
            case 'ReportNodeInfo_0051' + "_execute_accessibility_event_success":
                ReportNodeInfo_0051(logTag + 'ReportNodeInfo_0051', context, 'ReportNodeInfo_0051', 'ReportNodeInfo_0051');
                break;
            case 'ReportNodeInfo_0070' + "_execute_accessibility_event_success":
                ReportNodeInfo_0070(logTag + 'ReportNodeInfo_0070', context, 'ReportNodeInfo_0070', 'ReportNodeInfo_0070');
                break;
            case 'ReportNodeInfo_0071' + "_execute_accessibility_event_success":
                ReportNodeInfo_0071(logTag + 'ReportNodeInfo_0071', context, 'ReportNodeInfo_0071', 'ReportNodeInfo_0071');
                break;
            case 'ReportNodeInfo_0010' + "_execute_accessibility_event_success":
                getWindowRootElementAndfindElement(logTag + 'ReportNodeInfo_0010', context, 'ReportNodeInfo_0010', 'ReportNodeInfo_0010');
                break;
            case 'ReportNodeInfo_0011' + "_execute_accessibility_event_success":
                getWindowRootElementAndfindElementCallBack(logTag + 'ReportNodeInfo_0011', context, 'ReportNodeInfo_0011', 'ReportNodeInfo_0011');
                break;
        }
    }
}


class ServiceExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
        const context = this.context;
        console.info(logTag + "AccessibilityAll onAbilityConnected");
        var commonEventSubscribeInfo = {
            events: ["on_assist_change", "execute_accessibility_event"]
        }
        function subscriberCallback(err, data) {
            console.info(logTag + "AccessibilityALLD subscriberCallback start");
            console.info(logTag + "AccessibilityALLD receive event err:" + JSON.stringify(err));
            console.info(logTag + "AccessibilityALLD receive event data:" + JSON.stringify(data));
            try {
                excuteMethod(context, data.data);
            } catch (e) {
                console.info(logTag + "excuteMethod error " + JSON.stringify(e))
            }
            console.info(logTag + "AccessibilityALLD subscriberCallback end");
        }
        var subscriber
        commonEvent.createSubscriber(commonEventSubscribeInfo).then(function (data) {
            console.info(logTag + " AccessibilityALLD createSubscriber Start====")
            subscriber = data;
            commonEvent.subscribe(subscriber, subscriberCallback);
            console.info(logTag + " AccessibilityALLD createSubscriber End====")
        })
        console.info(logTag + " AccessibilityALLD onShow End====")
    }

    onAccessibilityEvent(accessibilityEvent) {   
    }

    onKeyEvent(keyEvent) {
        console.info(" onKeyEvent");
        console.info(logTag + "onKeyEvent KeyInterception AccessibilityAllD: " + JSON.stringify(keyEvent));
        return true;
    }
}

export default ServiceExtAbility