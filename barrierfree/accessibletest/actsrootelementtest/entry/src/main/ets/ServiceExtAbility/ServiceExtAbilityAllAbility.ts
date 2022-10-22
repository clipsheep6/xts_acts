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
class ServiceExtAbilityAllAbility extends AccessibilityExtensionAbility {
    onConnect() {
        let context = this.context
        var subscriberInfo = {
            events: ["on_assist_change"],
        };
        var Subscriber;
        commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
            console.info("WindowInfoGet====>Create Subscriber====>");
            Subscriber = data;
            await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        function SubscribeCallBack(err, data) {
            console.info(log + " ====>Subscribe CallBack data:====>" + JSON.stringify(data));
            switch (data.data) {
                case "RootElementGet_0070":
                    getWindowRootElementCallback_0070(context, data.data);
                    break;
                case "RootElementGet_0090":
                    getWindowRootElementCallback(context, data.data);
                    break;
                case "RootElementGet_0071":
                    getWindowRootElementCallback2_0071(context, data.data);
                    break;
                case "RootElementGet_0080":
                    getWindowRootElementPromise_0080(context, data.data);
                    break;
                case "RootElementGet_0091":
                    getWindowRootElementCallback2_0091(context, data.data);
                    break;
                case "RootElementGet_0092":
                case "RootElementGet_0101":
                    getWindowRootElementCallback_RootElement(context, data.data);
                    break;
                case "RootElementGet_0093":
                case "RootElementGet_0102":
                    getWindowRootElementCallback2_RootElement(context, data.data);
                    break;
                case "RootElementGet_0094":
                case "RootElementGet_0103":
                    getWindowRootElementPromise_RootElement(context, data.data);
                    break;
                case "RootElementGet_0095":
                case "RootElementGet_0104":
                    getWindowRootElementCallback_Parent(context, data.data);
                    break;
                case "RootElementGet_0096":
                case "RootElementGet_0105":
                    getWindowRootElementCallback2_Parent(context, data.data);
                    break;
                case "RootElementGet_0097":
                case "RootElementGet_0106":
                    getWindowRootElementPromise_Parent(context, data.data);
                    break;
                case "RootElementGet_0100":
                    getWindowRootElementPromise(context, data.data);
                    break;
                case "RootElementGet_0110":
                case "RootElementGet_0111":
                case "RootElementGet_0113":
                case "RootElementGet_0114":
                case "RootElementGet_0115":
                case "RootElementGet_0116":
                case "RootElementGet_0117":
                case "RootElementGet_0118":
                case "RootElementGet_0119":
                case "RootElementGet_0120":
                case "RootElementGet_0122":
                case "RootElementGet_0123":
                case "RootElementGet_0124":
                case "RootElementGet_0125":
                case "RootElementGet_0126":
                case "RootElementGet_0127":
                case "RootElementGet_0128":
                case "RootElementGet_0129":
                case "RootElementGet_0130":
                case "RootElementGet_0131":
                case "RootElementGet_0132":
                case "RootElementGet_0133":
                case "RootElementGet_0134":
                case "RootElementGet_0136":
                case "RootElementGet_0138":
                case "RootElementGet_0140":
                case "RootElementGet_0141":
                case "RootElementGet_0142":
                case "RootElementGet_0143":
                case "RootElementGet_0149":
                case "RootElementGet_0153":
                case "RootElementGet_0154":
                case "RootElementGet_0155":
                case "RootElementGet_0160":
                case "RootElementGet_0161":
                case "RootElementGet_0163":
                case "RootElementGet_0164":
                case "RootElementGet_0165":
                    getWindowRootElement_AttributeValues(context, data.data);
                    break;
                case "RootElementGet_0162":
                    getWindowRootElement_AttributeValuesCallBack(context, data.data);
                    break;
                case "ReceiveEventsFilter_0010":
                    setEventTypeFilter(context, ['click'], data.data);
                    break;
                case "ReceiveEventsFilter_0020":
                    setEventTypeFilter(context, ['longClick'], data.data);
                    break;
                case "ReceiveEventsFilter_0030":
                    setEventTypeFilter(context, ['select'], data.data);
                    break;
                case "ReceiveEventsFilter_0040":
                    setEventTypeFilter(context, ['focus'], data.data);
                    break;
                case "ReceiveEventsFilter_0050":
                    setEventTypeFilter(context, ['textUpdate'], data.data);
                    break;
                case "ReceiveEventsFilter_0070":
                    setEventTypeFilter(context, ['scroll'], data.data);
                    break;
                case "ReceiveEventsFilter_0080":
                    setEventTypeFilter(context, ['textSelectionUpdate'], data.data);
                    break;
                case "ReceiveEventsFilter_0090":
                    setEventTypeFilter(context, ['accessibilityFocus'], data.data);
                    break;
                case "ReceiveEventsFilter_0100":
                    setEventTypeFilter(context, ['accessibilityFocusClear'], data.data);
                    break;
                case "ReceiveEventsFilter_0120":
                    let eventTypeArr = [
                        'click',
                        'longClick',
                        'select',
                        'focus',
                        'scroll',
                        'textUpdate',
                        'textSelectionUpdate',
                        'accessibilityFocus',
                        'accessibilityFocusClear'
                    ];
                    setEventTypeFilter(context, eventTypeArr, data.data);
                    break;
                case "ReceiveEventsFilter_0130":
                    setEventTypeFilter(context, ['click'], data.data);
                    break;
                case "ReceiveEventsFilter_0150":
                    setEventTypeFilter(context, ['hoverEnter'], data.data);
                    break;
                case "ReceiveEventsFilter_0160":
                    setEventTypeFilter(context, ['hoverExit'], data.data);
                    break;
                case "ReceiveEventsFilter_0180":
                    setEventTypeFilter(context, ['touchGuideEnd'], data.data);
                    break;
                case "ReceiveEventsFilter_0210":
                    setEventTypeFilter(context, ['textMoveUnit'], data.data);
                    break;
                case "ReceiveEventsFilter_0230":
                    setEventTypeFilter(context, ['touchGuideGestureEnd'], data.data);
                    break;
                case "ReceiveEventsFilter_0260":
                    setEventTypeFilter(context, ['gesture'], data.data);
                    break;
                case "ReceiveEventsFilter_0270":
                    setEventTypeFilter(context, ['click','select'], data.data);
                    setEventTypeFilter(context, ['click'], data.data);
                    break;
                case "ReceiveEventsFilter_0280":
                    setTargetBundleName(context, ['com.example.myapplicationxtsd', 'com.example.accessibilityall2.hmservice'], data.data);
                    setEventTypeFilter(context, ['click'], data.data);
                    break;
                case "ReceiveEventsFilter_0310":
                    setEventTypeFilter(context, ['undefined'], data.data);
                    break;
                case "ReceiveEventsFilter_0320":
                    setTargetBundleName(context, [""], data.data);
                    setEventTypeFilter(context, ['click','select'], data.data);
                    break;
                case "ReceiveEventsFilter_0330":
                    setTargetBundleName(context, ['com.example.myapplicationxtsd'], data.data);
                    setEventTypeFilterPromise(context, ['click'], data.data);
                    break;
                case "ReceiveEventsFilter_0340":
                    setEventTypeFilterPromise(context, ['longClick'], data.data);
                    break;
                case "ReceiveEventsFilter_0350":
                    setEventTypeFilterPromise(context, ['select'], data.data);
                    break;
                case "ReceiveEventsFilter_0360":
                    setEventTypeFilterPromise(context, ['focus'], data.data);
                    break;
                case "ReceiveEventsFilter_0370":
                    setEventTypeFilterPromise(context, ['textUpdate'], data.data);
                    break;
                case "ReceiveEventsFilter_0390":
                    setEventTypeFilterPromise(context, ['scroll'], data.data);
                    break;
                case "ReceiveEventsFilter_0400":
                    setEventTypeFilterPromise(context, ['textSelectionUpdate'], data.data);
                    break;
                case "ReceiveEventsFilter_0410":
                    setEventTypeFilterPromise(context, ['accessibilityFocus'], data.data);
                    break;
                case "ReceiveEventsFilter_0420":
                    setEventTypeFilterPromise(context, ['accessibilityFocusClear'], data.data);
                    break;
                case "ReceiveEventsFilter_0440":
                    let eventTypeArr2 = [
                        'click',
                        'longClick',
                        'select',
                        'focus',
                        'scroll',
                        'textUpdate',
                        'textSelectionUpdate',
                        'accessibilityFocus',
                        'accessibilityFocusClear'
                    ];
                    setEventTypeFilterPromise(context, eventTypeArr2, data.data);
                    break;
                case "ReceiveEventsFilter_0450":
                    setEventTypeFilterPromise(context, ['click'], data.data);
                    break;
                case "ReceiveEventsFilter_0470":
                    setEventTypeFilterPromise(context, ['hoverEnter'], data.data);
                    break;
                case "ReceiveEventsFilter_0480":
                    setEventTypeFilterPromise(context, ['hoverExit'], data.data);
                    break;
                case "ReceiveEventsFilter_0590":
                    setEventTypeFilterPromise(context, ['click','select'], data.data);
                    setEventTypeFilterPromise(context, ['click'], data.data);
                    break;
                case "ReceiveEventsFilter_0600":
                    setEventTypeFilterPromise(context, ['click'], data.data);
                    break;
                case "ReceiveEventsFilter_0630":
                    setEventTypeFilterPromise(context, ['undefined'], data.data);
                    break;
                case "ReceiveEventsFilter_0640":
                    setTargetBundleName(context, [""], data.data);
                    setEventTypeFilterPromise(context, ['click','select'], data.data);
                    break;
                case "RootElementGet_0010":
                case "RootElementGet_0030":
                case "RootElementGet_0050":
                    getWindowRootElementCallback(context, data.data);
                    break;
                case "RootElementGet_0011":
                case "RootElementGet_0031":
                    getWindowRootElementCallback2(context, data.data);
                    break;
                case "RootElementGet_0051":
                    getWindowRootElementCallback2_0051(context,data.data);
                    break;
                case "RootElementGet_0020":
                case "RootElementGet_0040":
                    getWindowRootElementPromise(context, data.data);
                    break;
                case "RootElementGet_0060":
                    getWindowRootElementPromise_0060(context, data.data);
                    break;
                default:
                    break;
            }
        }
    }

    onDisconnect() {
        console.info( log + "AccessibilityAll onDisconnected");
    }

    onAccessibilityEvent(accessibilityEvent) {
        console.info( log + "accessibilityEvent " + JSON.stringify(accessibilityEvent));
        let target = accessibilityEvent.target
        target.attributeNames().then((names) => {
            if(-1 != names.indexOf("description")) {
                target.attributeValue("description").then((value) => {
                    console.info( log + "attributeValue description:" + JSON.stringify(value));
                    AccessibleReceiveEvents(accessibilityEvent.eventType, value);
                }).catch((err) => {
                    console.info( log + "attributeValue description err:" + JSON.stringify(err));
                })
            }
        }).catch((err) => {
            console.info(log + "attributeNames err=" + JSON.stringify(err));
        });
    }
}

const AccessibleReceiveEvents = (eventType, description) => {
    switch (description) {
        case "ReceiveEventsFilter_0010":
        case "ReceiveEventsFilter_0330":
            if (eventType == "click") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0020":
        case "ReceiveEventsFilter_0340":
            if (eventType == "longClick") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0030":
        case "ReceiveEventsFilter_0350":
            if (eventType == "select") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0040":
        case "ReceiveEventsFilter_0360":
            if (eventType == "focus") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0050":
        case "ReceiveEventsFilter_0370":
            if (eventType == "textUpdate") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0070":
        case "ReceiveEventsFilter_0390":
            if (eventType == "scroll") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0080":
        case "ReceiveEventsFilter_0400":
            if (eventType == "textSelectionUpdate") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0090":
        case "ReceiveEventsFilter_0410":
            if (eventType == "accessibilityFocus") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0100":
        case "ReceiveEventsFilter_0420":
            if (eventType == "accessibilityFocusClear") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0120":
        case "ReceiveEventsFilter_0440":
            if (eventType == "click" ||
                eventType == "longClick" ||
                eventType == "select" ||
                eventType == "focus" ||
                eventType == "scroll" ||
                eventType == "textUpdate" ||
                eventType == "textSelectionUpdate" ||
                eventType == "accessibilityFocus" ||
                eventType == "accessibilityFocusClear") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0130":
        case "ReceiveEventsFilter_0450":
            if (eventType == "click") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0150":
        case "ReceiveEventsFilter_0470":
            if (eventType == "hoverEnter") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0160":
        case "ReceiveEventsFilter_0480":
            if (eventType == "hoverExit") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break; ;
        case "ReceiveEventsFilter_0270":
        case "ReceiveEventsFilter_0590":
            if (eventType == "click") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0280":
        case "ReceiveEventsFilter_0600":
            if (eventType == "click") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0310":
        case "ReceiveEventsFilter_0630":
            if (eventType == "click" || eventType == "select") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0320":
        case "ReceiveEventsFilter_0640":
            if (eventType == "click" || eventType == "select") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        default:
            break;
    }
}

const setEventTypeFilterCallBack = (eventType, description) => {
    const logTag = log + " " + eventType + " " + description;
    console.info(logTag);
    let commonEventPublishData = {
        data: "on_assist_change_extra_success"
    }

    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

    function publishCallback(err) {
        console.info(logTag + " commonEvent result:" + JSON.stringify(err));
    }
}

const setEventTypeFilter = (context, eventTypeArr, description) => {
    const logTag = log + " setEventTypeFilter " + description;
    context.setEventTypeFilter(eventTypeArr, (err, result) => {
        if (err?.code) {
            console.info(logTag + " setEventTypeFilter callback err=" + JSON.stringify(err));
        } else {
            console.info(logTag + " setEventTypeFilter callback res=" + result);
        }
    });
}

const setEventTypeFilterPromise = (context, eventTypeArr, description) => {
    const logTag = log + " setEventTypeFilterPromise " + description;
    context.setEventTypeFilter(eventTypeArr).then((res) => {
        console.info(logTag + " setEventTypeFilterPromise res:" + JSON.stringify(res));
    }).catch((err) => {
        console.info(logTag + " setEventTypeFilterPromise err=" + JSON.stringify(err));
    });
}

const setTargetBundleName = (context, targetNamesArr, description) => {
    const logTag = log + "targetNamesArr " + JSON.stringify(targetNamesArr) + description;
    context.setTargetBundleName(targetNamesArr, (err) => {
        if (err?.code) {
            console.info(logTag + " setTargetBundleName err=" + JSON.stringify(err));
        } else {
            console.info(logTag + " setTargetBundleName success");
        }
    });
}

const getWindowRootElementCallback = (context, description) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + "execute err=" + JSON.stringify(err));
            return;
        }
        console.info(logTag + "====>getWindowRootElementCallback res:" + JSON.stringify(res));
        var commonEventPublishData;
        res.attributeValue("bundleName").then((ElementAttributeValues) => {
            console.info(logTag + " attributeValue bundleName=",ElementAttributeValues)
            if (ElementAttributeValues == 'ohos.samples.clock') {
                commonEventPublishData = {
                    data: "on_assist_change_extra_undefined"
                }
            }
            else {
                commonEventPublishData = {
                    data: "on_assist_change_extra_success"
                }
            }
            commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
        })
        function publishCallback(err) {
            console.info(logTag + "====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
        }
    });
}

const getWindowRootElementCallback_0070 = (context, description) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + "execute err=" + JSON.stringify(err));
            return;
        }
        console.info(logTag + "====>getWindowRootElementCallback res:" + JSON.stringify(res));
        var commonEventPublishData;
        res.attributeValue("bundleName").then((ElementAttributeValues) => {
            console.info(logTag + " attributeValue bundleName=",ElementAttributeValues)
            if (ElementAttributeValues != 'ohos.samples.clock') {
                commonEventPublishData = {
                    data: "on_assist_change_extra_success"
                }
            }
            else {
                commonEventPublishData = {
                    data: "on_assist_change_extra_undefined"
                }
            }
            commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
        })
        function publishCallback(err) {
            console.info(logTag + "====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
        }
    });
}

const getWindowRootElementCallback2 = (context, description) => {
    const logTag = log+ " getWindowRootElementCallback2 " + description;
    context.getWindows().then((res) => {
        let index = res.length - 1
        res[index].attributeValue("windowId").then((ElementAttributeValues) => {
            console.info(logTag + " attributeValue res=" + JSON.stringify(ElementAttributeValues));
            let windowId = ElementAttributeValues;
            console.info(logTag + " windowId=" + windowId);
            context.getWindowRootElement(windowId, (err, elements) => {
                if (err?.code) {
                    console.info(logTag + "execute err=" + JSON.stringify(err));
                    return;
                }
                console.info(log +"====>getWindowRootElementCallback2 elements:" + JSON.stringify(elements));
                printElements(logTag, elements)
                var commonEventPublishData;
                if (JSON.stringify(elements) != undefined) {
                    commonEventPublishData = {
                        data: "on_assist_change_extra_success"
                    }
                }
                else {
                    commonEventPublishData = {
                        data: "on_assist_change_extra_undefined"
                    }
                }
                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

                function publishCallback(err) {
                    console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
                }
            });
        })
    }).catch((err) => {
        console.info(logTag + "getWindows err=" + JSON.stringify(err));
    });
}

const getWindowRootElementCallback2_0051 = (context, description) => {
    const logTag = log + description;
    context.getWindows().then((res) => {
        let index = res.length - 1
        res[index].attributeValue("windowId").then((ElementAttributeValues) => {
            console.info(logTag + " attributeValue res=" + JSON.stringify(ElementAttributeValues));
            let windowId = ElementAttributeValues;
            console.info(logTag + " windowId=" + windowId);
            context.getWindowRootElement(windowId, (err, elements) => {
                if (err?.code) {
                    console.info(logTag + " execute err=" + JSON.stringify(err));
                    return;
                }
                printElements(logTag, elements)
                elements.attributeValue("bundleName").then((value) => {
                    var commonEventPublishData;
                    console.info(logTag + " attributeValue bundleName=",value)
                    if (value == 'ohos.samples.clock') {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_undefined"
                        }
                    }
                    else {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_success"
                        }
                    }
                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                }).catch((err) => {
                    console.info(logTag + "attributeValue bundleName err=" + JSON.stringify(err));
                })
                function publishCallback(err) {
                    console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
                }
            });
        })

    }).catch((err) => {
        console.info(logTag + "getWindows err=" + JSON.stringify(err));
    });
}

const getWindowRootElementCallback2_0071 = (context, description) => {
    const logTag = log + "getWindowRootElementCallback2 " + description;
    context.getWindows().then((res) => {
        let index = res.length - 1;
        res[index].attributeValue("windowId").then((ElementAttributeValues) => {
            console.info(logTag + " attributeValue res=" + JSON.stringify(ElementAttributeValues));
            let windowId = ElementAttributeValues;
            console.info(logTag + " windowId=" + windowId);
            context.getWindowRootElement(windowId, (err, elements) => {
                if (err?.code) {
                    console.info(logTag + " execute err=" + JSON.stringify(err));
                    return;
                }
                elements.attributeValue("bundleName").then((value) => {
                    var commonEventPublishData;
                    console.info(logTag + " attributeValue bundleName=",value)
                    if (value != 'ohos.samples.clock') {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_success"
                        }
                    }
                    else {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_undefined"
                        }
                    }
                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                }).catch((err) => {
                    console.info(logTag + "attributeValue bundleName err=" + JSON.stringify(err));
                })
                function publishCallback(err) {
                    console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
                }
            });
        })
    }).catch((err) => {
        console.info(logTag + "getWindows err=" + JSON.stringify(err));
    });
}

const getWindowRootElementCallback2_0091 = (context, description) => {
    const logTag = log + " getWindowRootElementCallback2 " + description;
    context.getWindows().then((res) => {
        console.info(logTag + " getWindows res:" + JSON.stringify(res));
        let index = res.length - 1
        res[index].attributeValue("windowId").then((ElementAttributeValues) => {
            console.info(logTag + "attributeValue res=" + JSON.stringify(ElementAttributeValues));
            let windowId = ElementAttributeValues;
            console.info(logTag + "windowId=" + windowId);
            context.getWindowRootElement(windowId, (err, elements) => {
                if (err?.code) {
                    console.info(logTag + "execute err=" + JSON.stringify(err));
                    return;
                }
                printElements(logTag, elements)
                var commonEventPublishData;
                if (JSON.stringify(elements) != undefined) {
                    commonEventPublishData = {
                        data: "on_assist_change_extra_success"
                    }
                }
                else {
                    commonEventPublishData = {
                        data: "on_assist_change_extra_undefined"
                    }
                }
                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

                function publishCallback(err) {
                    console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
                }
            });
        }).catch((err) => {
            console.info(logTag + "attributeValue err=" + JSON.stringify(err));
        });
    }).catch((err) => {
        console.info(logTag + "getWindows err=" + JSON.stringify(err));
    });
}

const getWindowRootElementCallback_RootElement = (context, description) => {
    const logTag = log + " getWindowRootElementCallback " + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + "execute err=" + JSON.stringify(err));
            return;
        }
        printElements(logTag, res)
        res.attributeValue("rootElement").then((ElementAttributeValues) => {
            console.info(logTag + " attributeValue res=" + JSON.stringify(ElementAttributeValues));
            let rootElement = ElementAttributeValues;
            var commonEventPublishData;
            if (JSON.stringify(rootElement) != undefined) {
                commonEventPublishData = {
                    data: "on_assist_change_extra_success"
                }
            }
            else {
                commonEventPublishData = {
                    data: "on_assist_change_extra_undefined"
                }
            }
            commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

            function publishCallback(err) {
                console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
            }
        }).catch((err) => {
            console.info(logTag + " attributeValue err=" + JSON.stringify(err));
        });
    });
}

const getWindowRootElementCallback2_RootElement = (context, description) => {
    const logTag = log + description;
    context.getWindows().then((res) => {
        console.info(logTag + " getWindows res:" + JSON.stringify(res));
        let index = res.length - 1
        res[index].attributeValue("windowId").then((ElementAttributeValues) => {
            console.info(logTag + "attributeValue res=" + JSON.stringify(ElementAttributeValues));
            let windowId = ElementAttributeValues;
            console.info(logTag + " windowId=" + windowId);
            context.getWindowRootElement(windowId, (err, elements) => {
                if (err?.code) {
                    console.info(logTag + " execute err=" + JSON.stringify(err));
                    return;
                }
                printElements(logTag, elements)
                elements.attributeValue("rootElement").then((eles) => {
                    console.info(logTag + "attributeValue rootElement res=" + JSON.stringify(eles));
                    let rootElement = eles;
                    var commonEventPublishData;
                    if (JSON.stringify(rootElement) != undefined) {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_success"
                        }
                    }
                    else {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_undefined"
                        }
                    }
                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

                    function publishCallback(err) {
                        console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
                    }
                }).catch((err) => {
                    console.info(logTag + " attributeValue rootElement err=" + JSON.stringify(err));
                })
            });
        }).catch((err) => {
            console.info(logTag + "attributeValue windowId err=" + JSON.stringify(err));
        });
    }).catch((err) => {
        console.info(logTag + " getWindows err=" + JSON.stringify(err));
    });
}

const getWindowRootElementCallback_Parent = (context, description) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " execute err=" + JSON.stringify(err));
            return;
        }
        console.info(logTag + "====> getWindowRootElementCallback res:" + JSON.stringify(res));
        res.attributeValue("parent").then((ElementAttributeValues) => {
            printElements(logTag + " parent info", ElementAttributeValues);
            let parent = ElementAttributeValues;
            var commonEventPublishData;
            if (parent) {
                commonEventPublishData = {
                    data: "on_assist_change_extra_success"
                }
            }
            commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

            function publishCallback(err) {
                console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
            }
        }).catch((err) => {
            console.info(logTag + " attributeValue parent err=" + JSON.stringify(err));
        });
    });
}

const getWindowRootElementCallback2_Parent = (context, description) => {
    const logTag = log +  description;
    context.getWindows().then((res) => {
        let index = res.length - 1
        res[index].attributeValue("windowId").then((ElementAttributeValues) => {
            console.info(logTag + " attributeValue windowId res=" + JSON.stringify(ElementAttributeValues));
            let windowId = ElementAttributeValues;
            context.getWindowRootElement(windowId, (err, elements) => {
                if (err?.code) {
                    console.info(logTag + " execute err=" + JSON.stringify(err));
                    return;
                }
                console.info(logTag + "====>getWindowRootElementCallback2 elements:" + JSON.stringify(elements));
                elements.attributeValue("parent").then((eles) => {
                    printElements(logTag, eles);
                    var commonEventPublishData;
                    if (eles) {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_success"
                        }
                    }

                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

                    function publishCallback(err) {
                        console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
                    }
                }).catch((err) => {
                    console.info(logTag + " attributeValue parent err=" + JSON.stringify(err));
                })
            });
        }).catch((err) => {
            console.info(logTag + " attributeValue windowId err=" + JSON.stringify(err));
        });
    }).catch((err) => {
        console.info(logTag + " getWindows err=" + JSON.stringify(err));
    });
}

const getWindowRootElementPromise = (context, description) => {
    const logTag = log + " getWindowRootElementPromise " + description;
    context.getWindows().then((res) => {
        let index = res.length - 1
        res[index].attributeValue("windowId").then((ElementAttributeValues) => {
            console.info(logTag + " attributeValue res=" + JSON.stringify(ElementAttributeValues));
            let windowId = ElementAttributeValues;
            console.info(logTag + " windowId =" + windowId);
            context.getWindowRootElement(windowId).then((elements) => {
                console.info(logTag + "====> getWindowRootElementPromise elements:" + JSON.stringify(elements));
                printElements(logTag, elements)
                var commonEventPublishData;
                if (JSON.stringify(elements) != undefined) {
                    commonEventPublishData = {
                        data: "on_assist_change_extra_success"
                    }
                }
                else {
                    commonEventPublishData = {
                        data: "on_assist_change_extra_undefined"
                    }
                }
                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

                function publishCallback(err) {
                    console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
                }
            }).catch((err) => {
                console.info(logTag + "getWindowRootElement err=" + JSON.stringify(err));
            });
        })
    }).catch((err) => {
        console.info(logTag + "getWindows err=" + JSON.stringify(err));
    });
}

const getWindowRootElementPromise_0060 = (context, description) => {
    const logTag = log + description;
    context.getWindows().then((res) => {
        let index = res.length - 1
        res[index].attributeValue("windowId").then((ElementAttributeValues) => {
            console.info(logTag + " attributeValue windowId res=" + JSON.stringify(ElementAttributeValues));
            let windowId = ElementAttributeValues;
            context.getWindowRootElement(windowId).then((elements) => {
                printElements(logTag, elements)
                elements.attributeValue("bundleName").then((value) => {
                    console.info(logTag + " attributeValue bundleName res=" + value);
                    var commonEventPublishData;
                    if (value == 'ohos.samples.clock') {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_undefined"
                        }
                    }
                    else {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_success"
                        }
                    }
                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                })
                function publishCallback(err) {
                    console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
                }
            }).catch((err) => {
                console.info(logTag + "getWindowRootElement err=" + JSON.stringify(err));
            });
        }).catch((err) => {
            console.info(logTag + "attributeNames err=" + JSON.stringify(err));
        });
    }).catch((err) => {
        console.info(logTag + "getWindows err=" + JSON.stringify(err));
    });

    console.info(logTag + "End");
}

const getWindowRootElementPromise_0080 = (context, description) => {
    const logTag = log + "getWindowRootElementPromise " + description;
    context.getWindows().then((res) => {
        let index = res.length -1
        res[index].attributeValue("windowId").then((ElementAttributeValues) => {
            console.info(logTag + " attributeValue windowId res=" + JSON.stringify(ElementAttributeValues));
            let windowId = ElementAttributeValues;
            context.getWindowRootElement(windowId).then((elements) => {
                printElements(logTag, elements)
                elements.attributeValue("bundleName").then((value) => {
                    console.info(logTag + " attributeValue bundleName res=" + value);
                    var commonEventPublishData;
                    if (value != 'ohos.samples.clock') {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_success"
                        }
                    }
                    else {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_undefined"
                        }
                    }
                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                })
                function publishCallback(err) {
                    console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
                }
            }).catch((err) => {
                console.info(logTag + "getWindowRootElement err=" + JSON.stringify(err));
            });
        }).catch((err) => {
            console.info(logTag + "attributeNames err=" + JSON.stringify(err));
        });
    }).catch((err) => {
        console.info(logTag + "getWindows err=" + JSON.stringify(err));
    });
}

const getWindowRootElementPromise_RootElement = (context, description) => {
    const logTag = log + description;
    context.getWindows().then((res) => {
        let index = res.length - 1
        res[index].attributeValue("windowId").then((ElementAttributeValues) => {
            console.info(logTag + "attributeValue windowId res=" + JSON.stringify(ElementAttributeValues));
            let windowId = ElementAttributeValues;
            console.info(logTag + "windowId=" + windowId);
            context.getWindowRootElement(windowId).then((elements) => {
                printElements(logTag, elements)
                elements.attributeValue("rootElement").then((eles) => {
                    console.info(logTag + "attributeValue rootElement res=" + JSON.stringify(eles));
                    let rootElement = eles;
                    var commonEventPublishData;
                    if (JSON.stringify(rootElement) != undefined) {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_success"
                        }
                    }
                    else {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_undefined"
                        }
                    }
                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

                    function publishCallback(err) {
                        console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
                    }
                }).catch((err) => {
                    console.info(logTag + "attributeValue rootElement err=" + JSON.stringify(err));
                })
            }).catch((err) => {
                console.info(logTag + "getWindowRootElement err=" + JSON.stringify(err));
            });
        }).catch((err) => {
            console.info(logTag + "attributeNames err=" + JSON.stringify(err));
        });
    }).catch((err) => {
        console.info(logTag + "getWindows err=" + JSON.stringify(err));
    });
}

const getWindowRootElementPromise_Parent = (context, description) => {
    const logTag = log + description;
    context.getWindows().then((res) => {
        let index = res.length - 1
        res[index].attributeValue("windowId").then((ElementAttributeValues) => {
            console.info(logTag + " attributeValue windowId res=" + JSON.stringify(ElementAttributeValues));
            let windowId = ElementAttributeValues;
            context.getWindowRootElement(windowId).then((elements) => {
                elements.attributeValue("parent").then((eles) => {
                    printElements(logTag, eles);
                    var commonEventPublishData;
                    if (eles) {
                        commonEventPublishData = {
                            data: "on_assist_change_extra_success"
                        }
                    }
                    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

                    function publishCallback(err) {
                        console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
                    }
                }).catch((err) => {
                    console.info(logTag + " attributeValue parent err=" + JSON.stringify(err));
                })
            }).catch((err) => {
                console.info(logTag + " getWindowRootElement err=" + JSON.stringify(err));
            });
        }).catch((err) => {
            console.info(logTag + " attributeValue winddowId err=" + JSON.stringify(err));
        });
    }).catch((err) => {
        console.info(logTag + " getWindows err=" + JSON.stringify(err));
    });
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

const getWindowRootElement_AttributeValuesCallBack = (context, description) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.attributeValue("componentId",(err, result) => {
            if (err?.code) {
                console.info(logTag + " attributeValue callback err=" + JSON.stringify(err));
            } else {
                console.info(logTag + " attributeValue callback res=" + result);
                var commonEventPublishData;
                if (JSON.stringify(result) != undefined) {
                    commonEventPublishData = {
                        data: "on_assist_change_extra_success"
                    }
                }
                else {
                    commonEventPublishData = {
                        data: "on_assist_change_extra_undefined"
                    }
                }
                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

                function publishCallback(err) {
                    console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
                }
            }
        })
    })
}

const getWindowRootElement_AttributeValues = (context, description) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        printElements(logTag, res)

        let attributeName = ''
        switch (description) {
            case "RootElementGet_0110":
                attributeName = "windowId";
                break;
            case "RootElementGet_0111":
                attributeName = "pageId";
                break;
            case "RootElementGet_0113":
                attributeName = "inspectorKey";
                break;
            case "RootElementGet_0114":
                attributeName = "bundleName";
                break;
            case "RootElementGet_0115":
                attributeName = "componentType";
                break;
            case "RootElementGet_0116":
                attributeName = "inputType";
                break;
            case "RootElementGet_0117":
                attributeName = "text";
                break;
            case "RootElementGet_0118":
                attributeName = "hintText";
                break;
            case "RootElementGet_0119":
                attributeName = "description";
                break;
            case "RootElementGet_0120":
                attributeName = "resourceName";
                break;
            case "RootElementGet_0122":
                attributeName = "textLengthLimit";
                break;
            case "RootElementGet_0123":
                attributeName = "rect";
                break;
            case "RootElementGet_0124":
                attributeName = "checkable";
                break;
            case "RootElementGet_0125":
                attributeName = "focusable";
                break;
            case "RootElementGet_0126":
                attributeName = "isVisible";
                break;
            case "RootElementGet_0127":
                attributeName = "accessibilityFocused";
                break;
            case "RootElementGet_0128":
                attributeName = "selected";
                break;
            case "RootElementGet_0129":
                attributeName = "clickable";
                break;
            case "RootElementGet_0130":
                attributeName = "longClickable";
                break;
            case "RootElementGet_0131":
                attributeName = "isEnable";
                break;
            case "RootElementGet_0132":
                attributeName = "isPassword";
                break;
            case "RootElementGet_0133":
                attributeName = "scrollable";
                break;
            case "RootElementGet_0134":
                attributeName = "editable";
                break;
            case "RootElementGet_0136":
                attributeName = "pluralLineSupported";
                break;
            case "RootElementGet_0138":
                attributeName = "isHint";
                break;
            case "RootElementGet_0140":
                attributeName = "itemCount";
                break;
            case "RootElementGet_0141":
                attributeName = "currentIndex";
                break;
            case "RootElementGet_0142":
                attributeName = "startIndex";
                break;
            case "RootElementGet_0143":
                attributeName = "endIndex";
                break;
            case "RootElementGet_0149":
                attributeName = "error";
                break;
            case "RootElementGet_0153":
                attributeName = "textMoveUnit";
                break;
            case "RootElementGet_0154":
                attributeName = "children";
                break;
            case "RootElementGet_0155":
                attributeName = "checked";
                break;
            case "RootElementGet_0160":
                attributeName = "isFocused";
                break;
            case "RootElementGet_0161":
                attributeName = "componentId";
                break;
            case "RootElementGet_0163":
                attributeName = "valueMax";
                break;
            case "RootElementGet_0164":
                attributeName = "valueMin";
                break;
            case "RootElementGet_0165":
                attributeName = "valueNow";
                break;
            default:
                break;
        }
        res.attributeValue(attributeName).then((ElementAttributeValues) => {
            console.info(logTag + " attributeValue " +attributeName+ " res=" + JSON.stringify(ElementAttributeValues));
            var commonEventPublishData;
            if (JSON.stringify(ElementAttributeValues) != undefined) {
                commonEventPublishData = {
                    data: "on_assist_change_extra_success"
                }
            }
            else {
                commonEventPublishData = {
                    data: "on_assist_change_extra_undefined"
                }
            }
            commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

            function publishCallback(err) {
                console.info("====>on_assist_change_extra getWindowRootElement publish call back result:" + JSON.stringify(err));
            }
        }).catch((err) => {
            console.info(logTag + " attributeValue err=" + JSON.stringify(err));
        });
    })
    ;
}

export default ServiceExtAbilityAllAbility