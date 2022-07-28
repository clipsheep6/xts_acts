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
import AccessibilityExtensionAbility from '@ohos.application.AccessibilityExtensionAbility';
import commonEvent from '@ohos.commonEvent';

class AccessibilityExtAbility extends AccessibilityExtensionAbility {
    onConnect() {
        console.info("[Demo] AccessibilityExtAbility onConnect");
        let commonEventPublishData = {
            data: 'connect'
        }
        commonEvent.publish('onConnectState', commonEventPublishData, publishCallback);

        function publishCallback(err) {
            console.info("[Demo] onConnect====>onConnect publish call back result:" + JSON.stringify(err));
        }

        this.context.setEventTypeFilter([
            'accessibilityFocus', 'accessibilityFocusClear', 'click', 'longClick', 'focus', 'select', 'hoverEnter',
            'hoverExit', 'textUpdate', 'textSelectionUpdate', 'scroll'
        ]);
    }

    onDisconnect() {
        console.info("[Demo] AccessibilityExtAbility onDisconnect");
        let commonEventPublishData = {
            data: 'disconnect'
        }
        commonEvent.publish('onConnectState', commonEventPublishData, publishCallback);

        function publishCallback(err) {
            console.info("[Demo] onDisconnect====>onConnect publish call back result:" + JSON.stringify(err));
        }
    }

    onAccessibilityEvent(accessibilityEvent) {
        console.info("[Demo] AccessibilityExtAbility onAccessibilityEvent: " + accessibilityEvent.eventType);
        let commonEventPublishData = {
            data: 'accessibilityEvent',
            parameters: {
                eventType: accessibilityEvent.eventType,
                haveTarget: (typeof(accessibilityEvent.target) == 'object'),
                timeStamp: accessibilityEvent.timeStamp
            }
        }
        commonEvent.publish('accessibilityEvent', commonEventPublishData, publishCallback);

        function publishCallback(err) {
            console.info("[Demo] onAccessibilityEvent====>accessibilityEvent publish call back result:" + JSON.stringify(err));
        }
    }
}
export default AccessibilityExtAbility;