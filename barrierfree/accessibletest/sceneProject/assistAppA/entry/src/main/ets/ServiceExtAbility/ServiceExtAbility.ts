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
const logTag = "[xtsLog]"
const excuteMethod = (context, data,typename) => {
    if (data) {
        switch (data) {
            case "AssistApp_0010" + "_on_assist_change_success":
                AssistApp_0010(context, "AssistApp_0010_onConnect",typename)
                break;
            case "AssistApp_0020" + "_on_assist_change_success":
                AssistApp_0020(context, "AssistApp_0020_onDisconnect",typename)
                break;
            case "AssistApp_0030" + "_on_assist_change_success":
                AssistApp_0030(context, "AssistApp_0030_onConnect",typename)
                break;
            case "AssistApp_0040" + "_on_assist_change_success":
                AssistApp_0040(context, "AssistApp_0040_onConnect_A",typename)
                break;
            case "AssistApp_0050" + "_on_assist_change_success":
                AssistApp_0050(context, "AssistApp_0050_onDisconnect_A",typename)
                break;
            case "AssistApp_0060" + "_on_assist_change_success":
                AssistApp_0060(context, "AssistApp_0060_onConnect",typename)
                break;
            case "AssistApp_0070" + "_on_assist_change_success":
                AssistApp_0070(context, "AssistApp_0070_onDisconnect",typename)
                break;
        }
    }
}

const AssistApp_0010 = (context, caseName,typename) => {
    commonEventPublishOnAssistChange(caseName)
    plintMethod(caseName,typename)

}
const AssistApp_0020 = (context, caseName,typename) => {
    commonEventPublishOnAssistChange(caseName)
    plintMethod(caseName,typename)
}
const AssistApp_0030 = (context, caseName,typename) => {
    commonEventPublishOnAssistChange(caseName)
    plintMethod(caseName,typename)
}
const AssistApp_0040 = (context, caseName,typename) => {
    commonEventPublishOnAssistChangeAndAB(caseName,'A')
    plintMethod(caseName,typename)
}

const AssistApp_0050 = (context, caseName,typename) => {
    commonEventPublishOnAssistChangeAndAB(caseName,'A')
    plintMethod(caseName,typename)
}

const AssistApp_0060 = (context, caseName,typename) => {
    commonEventPublishOnAssistChange(caseName)
    plintMethod(caseName,typename)

}
const AssistApp_0070 = (context, caseName,typename) => {
    commonEventPublishOnAssistChange(caseName)
    plintMethod(caseName,typename)
}
const plintMethod = (caseName,typename) => {
    if(typename==='onConnect'){
        console.info(logTag+caseName + "====>AssistAppA onConnect success");
    }else{
        console.info(logTag+caseName + "====>AssistAppA onDisconnect success");
    }
}


class ServiceExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
        let context = this.context
        console.info(logTag + "AssistAppA onConnect");
        var commonEventSubscribeInfo = {
            events: ["on_assist_change"]
        }

        function subscriberCallback(err, data) {
            console.info(logTag + "====>AssistAppA subscriberCallback start");
            console.info(logTag + "====>AssistAppA receive event err:" + JSON.stringify(err));
            console.info(logTag + "====>AssistAppA receive event data:" + JSON.stringify(data));
            excuteMethod(context, data.data,'onConnect');
            console.info(logTag + "====>AssistAppA subscriberCallback end");
        }

        var subscriber
        commonEvent.createSubscriber(commonEventSubscribeInfo).then(function (data) {
            console.info(logTag + "====> AssistAppA createSubscriber Start====")
            subscriber = data;
            commonEvent.subscribe(subscriber, subscriberCallback);
            console.info(logTag + "====> AssistAppA createSubscriber End====")
        })
        console.info(logTag + "====> AssistAppA onShow End====")
    }

    onDisconnect(){
        let context = this.context
        console.info("AssistAppA onDisconnect");
        var commonEventSubscribeInfo = {
            events: ["on_assist_change"]
        }

        function subscriberCallback(err, data) {
            console.info(logTag + "====>AssistAppA subscriberCallback start");
            console.info(logTag + "====>AssistAppA receive event err:" + JSON.stringify(err));
            console.info(logTag + "====>AssistAppA receive event data:" + JSON.stringify(data));
            excuteMethod(context, data.data,'onDisconnect');
            console.info(logTag + "====>AssistAppA subscriberCallback end");
        }

        var subscriber
        commonEvent.createSubscriber(commonEventSubscribeInfo).then(function (data) {
            console.info(logTag + "====> AssistAppA createSubscriber Start====")
            subscriber = data;
            commonEvent.subscribe(subscriber, subscriberCallback);
            console.info(logTag + "====> AssistAppA createSubscriber End====")
        })
        console.info(logTag + "====> AssistAppA onShow End====")
    }

    onAccessibilityEvent(accessibilityEvent) {
        console.info("AssistAppA onAccessibilityEvent");
    }

    onKeyPressEvent(keyEvent) {
        console.info("AssistAppA onKeyPressEvent");
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

const commonEventPublishOnAssistChangeAndAB = (caseName,AB) => {
    function publishCallback(err) {
        console.info(logTag + "on_assist_change_extra onAbilityConnected publish call back result:" + JSON.stringify(err));
    }

    var commonEventPublishData = {
        data: caseName + "_on_assist_change_extra_success_"+AB,
    }
    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
}


export default ServiceExtAbility