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
                }).catch((err) => {
                    console.info( log + "attributeValue description err:" + JSON.stringify(err));
                })
            }
        }).catch((err) => {
            console.info(log + "attributeNames err=" + JSON.stringify(err));
        });
    }
}

export default ServiceExtAbilityAllAbility