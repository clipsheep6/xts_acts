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

const log = "[xtsLogB] ";
const buldNameMain = "com.example.myapplicationxtsd";
const buldNameOther = "com.example.myapplicationevent"
class ServiceExtAbilityReceiveEvent extends AccessibilityExtensionAbility {
    onConnect() {
        console.info(log + "ReceiveEvent onConnect");
        let context = this.context
        var subscriberInfo = {
            events: ["on_assist_change"],
        };
        var Subscriber;
        commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
            Subscriber = data;
            await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        function SubscribeCallBack(err, data) {
            console.info(log + " ====>Subscribe CallBack data:====>" + JSON.stringify(data));
            switch (data.data) {
                case "ReceiveEventsFilter_0290":
                    setTargetBundleName(context, [buldNameMain, buldNameOther], data.data);
                    break;
                case "ReceiveEventsFilter_0300":
                    setTargetBundleName(context, [buldNameMain], data.data);
                    break;
                case "ReceiveEventsFilter_0320":
                    setTargetBundleName(context, [""], data.data);
                    break;
                case "ReceiveEventsFilter_0610":
                    setTargetBundleNamePromise(context, [buldNameMain, buldNameOther], data.data);
                    break;
                case "ReceiveEventsFilter_0620":
                    setTargetBundleNamePromise(context, [buldNameMain], data.data);
                    break;
                case "ReceiveEventsFilter_0640":
                    setTargetBundleNamePromise(context, [""], data.data);
                    break;
                default:
                    break;
            }
        }
    }

    onDisconnect() {
    }

    onAccessibilityEvent(accessibilityEvent) {
        console.info( log + "accessibilityEvent " + JSON.stringify(accessibilityEvent));
        if (accessibilityEvent.eventType) {
            accessibilityEvent?.target && accessibilityEvent?.target.attributeNames().then((names) => {
	        if(-1 != names.indexOf("description")) {
		    accessibilityEvent?.target.attributeValue("description").then((value) => {
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
}

const AccessibleReceiveEvents = (eventType, description) => {
    switch (description) {
        case "ReceiveEventsFilter_0290":
        case "ReceiveEventsFilter_0610":
            if (eventType == "click" || eventType == "select") {
                setEventTypeFilterCallBack(eventType, description);
            }
            break;
        case "ReceiveEventsFilter_0300":
        case "ReceiveEventsFilter_0620":
            if (eventType == "click") {
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
    let commonEventPublishData;
    if (eventType == "click") {
        commonEventPublishData = {
            data: "on_assist_change_extra_click"
        }
    }
    else if (eventType == "select") {
        commonEventPublishData = {
            data: "on_assist_change_extra_select"
        }
    }

    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);

    function publishCallback(err) {
        console.info(logTag + " commonEvent result:" + JSON.stringify(err));
    }
}

const setTargetBundleName = (context, targetNamesArr, description) => {
    const logTag = log + "targetNamesArr " + JSON.stringify(targetNamesArr) + description;
    context.setTargetBundleName(targetNamesArr, (err) => {
        if (err?.code) {
            console.info(logTag + " setTargetBundleName err=" + JSON.stringify(err));
        } else {
            console.info(logTag + " setTargetBundleName success.");
        }
    })
}

const setTargetBundleNamePromise = (context, targetNamesArr, description) => {
    const logTag = log + "targetNamesArr " + JSON.stringify(targetNamesArr) + description;
    context.setTargetBundleName(targetNamesArr).then(() => {
        console.info(logTag + " setTargetBundleName success." );
    }).catch((err) => {
        console.info(logTag + " setTargetBundleName err=" + JSON.stringify(err));
    })
}

export default ServiceExtAbilityReceiveEvent
