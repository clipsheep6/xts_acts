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
import commonEvent from '@ohos.commonEvent'

class ServiceExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
        console.info(" Accessibility touchGuide onAbilityConnected");
    }

    onAccessibilityEvent(accessibilityEvent) {
        const logTag = "AccessibilityAll touchGuide onAccessibilityEvent: ";
        console.info(logTag + JSON.stringify(accessibilityEvent));
        switch (accessibilityEvent.eventType) {
            case "hoverEnter":
                accessibilityEvent?.target.attributeValue('text')?.then((vales) => {
                    console.info(logTag + " text attributeValue: ", vales);
                    commonEventPublishOnAssistChange(vales);
                }).catch((err) => {
                    console.info(logTag + " attributeValue text err=" + JSON.stringify(err));
                });
                break;
            default:
                break;
        }
    }
}

const commonEventPublishOnAssistChange = (caseName) => {
    function publishCallback(err) {
        console.info(caseName + "on_assist_change_extra onAbilityConnected publish call back result:" + JSON.stringify(err));
    }
    var commonEventPublishData = {
        code: 2,
        data: 'true',
    }
    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
}

export default ServiceExtAbility