
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
const logTag = "[xtsLog]"

class ServiceExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
        console.info(logTag +" Gesture2D onAbilityConnected");
        console.info(logTag + "Gesture2D onShow End====")
    }

    onAccessibilityEvent(accessibilityEvent) {
        printAccessibilityEvent(accessibilityEvent)

        switch (accessibilityEvent.eventType) {
            case "up":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0210",'B');
                commonEventPublishOnAssistChangeAB("TouchIntercept_0220",'B');
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "down":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0220",'B');
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');

                break;
            case "left":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0220",'B');
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "right":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0220",'B');
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');

                break;
            case "leftThenRight":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "rightThenLeft":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "upThenDown":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "downThenUp":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "leftThenUp":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "leftThenDown":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "rightThenUp":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "rightThenDown":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "upThenLeft":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "upThenRight":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "downThenLeft":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            case "downThenRight":
                commonEventPublishOnAssistChangeAB("TouchIntercept_0230",'B');
                break;
            default:
                break;
        }


    }
}

const commonEventPublishOnAssistChangeAB = (caseName,typename) => {

    function publishCallback(err) {
        console.info(logTag + "on_assist_change_extra onAbilityConnected publish call back result:" + JSON.stringify(err));
    }

    var commonEventPublishData = {
        data: caseName + "_on_assist_change_extra_success_"+typename,
    }
    commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
}

const printAccessibilityEvent = (accessibilityEvent) => {
    console.info(logTag + "Gesture2D onAccessibilityEvent Start");
    console.info(logTag + "Gesture2D onAccessibilityEvent accessibilityEvent=" + JSON.stringify(accessibilityEvent));
    console.info(logTag + "Gesture2D onAccessibilityEvent End");
}


export default ServiceExtAbility