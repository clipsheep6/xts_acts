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
            case "AssistApp_0040" + "_on_assist_change_success":
                AssistApp_0040(context, "AssistApp_0040_onConnect_B",typename)
                break;
            case "AssistApp_0050" + "_on_assist_change_success":
                AssistApp_0050(context, "AssistApp_0050_onDisconnect_B",typename)
                break;
        }
    }
}

const AssistApp_0040 = (context, caseName,typename) => {
    commonEventPublishOnAssistChangeAndAB(caseName,'B')
    plintMethod(caseName,typename)
}

const AssistApp_0050 = (context, caseName,typename) => {
    commonEventPublishOnAssistChangeAndAB(caseName,'B')
    plintMethod(caseName,typename)
}

const plintMethod = (caseName,typename) => {
    if(typename==='onConnect'){
       console.info(logTag+caseName + "====>AssistAppB onConnect success");
    }else{
       console.info(logTag+caseName + "====>AssistAppB onDisconnect success");
    }
}

class ServiceExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
        let context = this.context
       console.info(logTag + "AssistAppB onConnect");
        var commonEventSubscribeInfo = {
            events: ["on_assist_change"]
        }
        function subscriberCallback(err, data) {
           console.info(logTag + "====>AssistAppB subscriberCallback start");
           console.info(logTag + "====>AssistAppB receive event err:" + JSON.stringify(err));
           console.info(logTag + "====>AssistAppB receive event data:" + JSON.stringify(data));
            excuteMethod(context, data.data,'onConnect');
           console.info(logTag + "====>AssistAppB subscriberCallback end");
        }
        var subscriber
        commonEvent.createSubscriber(commonEventSubscribeInfo).then(function (data) {
           console.info(logTag + "====> AssistAppB createSubscriber Start====")
            subscriber = data;
            commonEvent.subscribe(subscriber, subscriberCallback);
           console.info(logTag + "====> AssistAppB createSubscriber End====")
        })
       console.info(logTag + "====> AssistAppB onShow End====")
    }

    onDisconnect(){
       console.info(logTag +"AssistAppA onDisconnect");
       let context = this.context
        var commonEventSubscribeInfo = {
            events: ["on_assist_change"]
        }

        function subscriberCallback(err, data) {
           console.info(logTag + "====>AssistAppB subscriberCallback start");
           console.info(logTag + "====>AssistAppB receive event err:" + JSON.stringify(err));
           console.info(logTag + "====>AssistAppB receive event data:" + JSON.stringify(data));
            excuteMethod(context, data.data,'onDisconnect');
           console.info(logTag + "====>AssistAppB subscriberCallback end");
        }

        var subscriber
        commonEvent.createSubscriber(commonEventSubscribeInfo).then(function (data) {
           console.info(logTag + "====> AssistAppB createSubscriber Start====")
            subscriber = data;
            commonEvent.subscribe(subscriber, subscriberCallback);
           console.info(logTag + "====> AssistAppB createSubscriber End====")
        })
       console.info(logTag + "====> AssistAppB onShow End====")
    }

    onAccessibilityEvent(accessibilityEvent) {
       console.info("AssistAppB onAccessibilityEvent");
    }

    onKeyPressEvent(keyEvent) {
       console.info("AssistAppB onKeyPressEvent");
        return true;
    }
}

const commonEventPublishOnAssistChangeAndAB = (caseName,AB) => {

    function publishCallback(err) {
       console.info(logTag + "on_assist_change_extra onAbilityConnected publish call back result:" + JSON.stringify(err));
    }

    var commonEventPublishData = {
        data: caseName + "_on_assist_change_extra_success"+"_"+AB,
    }
    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
}

export default ServiceExtAbility