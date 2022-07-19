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
class ServiceExtAbilityFocusQuery extends AccessibilityExtensionAbility {
    onConnect() {
        let context = this.context
        var subscriberInfo = {
            events: ["on_assist_change"],
        };
        var Subscriber;
        commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
            console.info(log + "AccessibleFocusQuery====>Create Subscriber====>");
            Subscriber = data;
            await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })
        function SubscribeCallBack(err, data) {
            console.info(log + "====>AccessibleFocusQuery CallBack data:====>" + JSON.stringify(data));
            switch (data.data) {
                case "FocusQuery_0010":
                    AccessibleFocusQueryCallBack1(context, 'Test7', data.data, 'focus');
                    break;
                case "FocusQuery_0011":
                    AccessibleFocusQueryIsAccessibilityFocus(context, 'Test7', data.data, 'focus', false);
                    break;
                case "FocusQuery_0020":
                    AccessibleFocusQueryPromiseIsAccessibilityFocus(context, 'Test7', data.data, 'focus', false);
                    break;
                case "FocusQuery_0030":
                    AccessibleFocusQueryPromise2(context, 'Test7', data.data, 'focus', 'normal');
                    break;
                case "FocusQuery_0031":
                    AccessibleFocusQueryFindElementCallBack(context, 'Test7', data.data, 'focus', 'normal');
                    break;
                case "FocusQuery_0040":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'focus', 'up');
                    break;
                case "FocusQuery_0041":
                    AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'focus', 'up');
                    break;
                case "FocusQuery_0050":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'focus', 'rootElement');
                    break;
                case "FocusQuery_0060":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'focus', 'down');
                    break;
                case "FocusQuery_0061":
                    AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'focus', 'down');
                    break;
                case "FocusQuery_0070":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'focus', 'parent');
                    break;
                case "FocusQuery_0080":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'focus', 'left');
                    break;
                case "FocusQuery_0081":
                    AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'focus', 'left');
                    break;
                case "FocusQuery_0090":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'focus', 'childs');
                    break;
                case "FocusQuery_0091":
                    AccessibleFocusQueryActionNames(context, 'Test7', data.data, 'focus');
                    break;
                case "FocusQuery_0092":
                    AccessibleFocusQueryActionNamesCallBack(context, 'Test7', data.data, 'focus');
                    break;
                case "FocusQuery_0100":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'focus', 'right');
                    break;
                case "FocusQuery_0101":
                    AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'focus', 'right');
                    break;
                case "FocusQuery_0110":
                    AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'focus', 'anchor');
                    break;
                case "FocusQuery_0120":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'focus', 'forward');
                    break;
                case "FocusQuery_0121":
                    AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'focus', 'forward');
                    break;
                case "FocusQuery_0130":
                    AccessibleFocusQueryCallBack1(context, '历史记录', data.data, 'focus');
                    break;
                case "FocusQuery_0139":
                    AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'focus', 'backward');
                    break;
                case "FocusQuery_0140":
                    AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'focus', 'backward');
                    break;
                case "FocusQuery_0141":
                    AccessibleFocusQueryIsAccessibilityFocus(context, '历史记录', data.data, 'focus', false);
                    break;
                case "FocusQuery_0142":
                    AccessibleFocusQueryPromiseIsAccessibilityFocus(context, '历史记录', data.data, 'focus', false);
                    break;
                case "FocusQuery_0143":
                    AccessibleFocusQueryCallBackGetElement(context, '历史记录', data.data, 'focus', 'rootElement');
                    break;
                case "FocusQuery_0144":
                    AccessibleFocusQueryCallBackGetElement(context, '历史记录', data.data, 'focus', 'parent');
                    break;
                case "FocusQuery_0145":
                    AccessibleFocusQueryCallBackGetElement(context, '历史记录', data.data, 'focus', 'childs');
                    break;
                case "FocusQuery_0146":
                    AccessibleFocusQueryCallBackGetElement(context, '历史记录', data.data, 'focus', 'anchor');
                    break;
                case "FocusQuery_0150":
                    AccessibleFocusQueryCallBack1(context, 'Test7', data.data, 'accessibilityFocus');
                    break;
                case "FocusQuery_0151":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryIsAccessibilityFocus(context, 'Test7', data.data, 'accessibilityFocus', true);
                    }, 1000);
                    break;
                case "FocusQuery_0160":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseIsAccessibilityFocus(context, 'Test7', data.data, 'accessibilityFocus', true);
                    }, 1000);
                    break;
                case "FocusQuery_0170":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromise2(context, 'Test7', data.data, 'accessibilityFocus', 'accessibility');
                    }, 1000);
                    break;
                case "FocusQuery_0171":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryFindElementCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'accessibility');
                    }, 1000);
                    break;
                case "FocusQuery_0180":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', 'up');
                    }, 1000);
                    break;
                case "FocusQuery_0181":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'up');
                    }, 1000);
                    break;
                case "FocusQuery_0190":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'rootElement');
                    }, 1000);
                    break;
                case "FocusQuery_0200":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', 'down');
                    }, 1000);
                    break;
                case "FocusQuery_0201":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'down');
                    }, 1000);
                    break;
                case "FocusQuery_0210":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'parent');
                    }, 1000);
                    break;
                case "FocusQuery_0220":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', 'left');
                    }, 1000);
                    break;
                case "FocusQuery_0221":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'left');
                    }, 1000);
                    break;
                case "FocusQuery_0230":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'childs');
                    }, 1000);
                    break;
                case "FocusQuery_0231":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryActionNames(context, 'Test7', data.data, 'accessibilityFocus');
                    }, 1000);
                    break;
                case "FocusQuery_0232":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryActionNamesCallBack(context, 'Test7', data.data, 'accessibilityFocus');
                    }, 1000);
                    break;
                case "FocusQuery_0240":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', 'right');
                    }, 1000);
                    break;
                case "FocusQuery_0241":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'right');
                    }, 1000);
                    break;
                case "FocusQuery_0250":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'anchor');
                    }, 1000);
                    break;
                case "FocusQuery_0260":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', 'forward');
                    }, 1000);
                    break;
                case "FocusQuery_0261":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'forward');
                    }, 1000);
                    break;
                case "FocusQuery_0270":
                    AccessibleFocusQueryCallBack1(context, '历史记录', data.data, 'accessibilityFocus');
                    break;
                case "FocusQuery_0279":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirectionCallBack(context, 'Test7', data.data, 'accessibilityFocus', 'backward');
                    }, 1000);
                    break;
                case "FocusQuery_0280":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', 'backward');
                    }, 1000);
                    break;
                case "FocusQuery_0281":
                    excuteClearAccessibilityFocus(context, '历史记录', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryIsAccessibilityFocus(context, '历史记录', data.data, 'accessibilityFocus', true);
                    }, 1000);
                    break;
                case "FocusQuery_0282":
                    excuteClearAccessibilityFocus(context, '历史记录', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseIsAccessibilityFocus(context, '历史记录', data.data, 'accessibilityFocus', true);
                    }, 1000);
                    break;
                case "FocusQuery_0283":
                    excuteClearAccessibilityFocus(context, '历史记录', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, '历史记录', data.data, 'accessibilityFocus', 'rootElement');
                    }, 1000);
                    break;
                case "FocusQuery_0284":
                    excuteClearAccessibilityFocus(context, '历史记录', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, '历史记录', data.data, 'accessibilityFocus', 'parent');
                    }, 1000);
                    break;
                case "FocusQuery_0285":
                    excuteClearAccessibilityFocus(context, '历史记录', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, '历史记录', data.data, 'accessibilityFocus', 'childs');
                    }, 1000);
                    break;
                case "FocusQuery_0286":
                    excuteClearAccessibilityFocus(context, '历史记录', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, '历史记录', data.data, 'accessibilityFocus', 'anchor');
                    }, 1000);
                    break;
                case "FocusQuery_0290":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQuery_0290(context, 'Test7', data.data, 'accessibilityFocus');
                    }, 1000);
                    break;
                case "FocusQuery_0300":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryPromiseDirection(context, 'Test7', data.data, 'accessibilityFocus', '');
                    }, 1000);
                    break;
                case "FocusQuery_0310":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'windowId');
                    }, 1000);
                    break;
                case "FocusQuery_0311":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'pageId');
                    }, 1000);
                    break;
                case "FocusQuery_0312":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'checked');
                    }, 1000);
                    break;
                case "FocusQuery_0313":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'inspectorKey');
                    }, 1000);
                    break;
                case "FocusQuery_0314":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'bundleName');
                    }, 1000);
                    break;
                case "FocusQuery_0315":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'componentType');
                    }, 1000);
                    break;
                case "FocusQuery_0316":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'inputType');
                    }, 1000);
                    break;
                case "FocusQuery_0317":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'text');
                    }, 1000);
                    break;
                case "FocusQuery_0318":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'hintText');
                    }, 1000);
                    break;
                case "FocusQuery_0319":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'description');
                    }, 1000);
                    break;
                case "FocusQuery_0320":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'resourceName');
                    }, 1000);
                    break;
                case "FocusQuery_0321":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'childNodeIds');
                    }, 1000);
                    break;
                case "FocusQuery_0322":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'textLengthLimit');
                    }, 1000);
                    break;
                case "FocusQuery_0323":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'rect');
                    }, 1000);
                    break;
                case "FocusQuery_0324":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'checkable');
                    }, 1000);
                    break;
                case "FocusQuery_0325":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'focusable');
                    }, 1000);
                    break;
                case "FocusQuery_0326":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'isVisible');
                    }, 1000);
                    break;
                case "FocusQuery_0327":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'accessibilityFocused');
                    }, 1000);
                    break;
                case "FocusQuery_0328":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'selected');
                    }, 1000);
                    break;
                case "FocusQuery_0329":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'clickable');
                    }, 1000);
                    break;
                case "FocusQuery_0330":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'longClickable');
                    }, 1000);
                    break;
                case "FocusQuery_0331":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'isEnable');
                    }, 1000);
                    break;
                case "FocusQuery_0332":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'isPassword');
                    }, 1000);
                    break;
                case "FocusQuery_0333":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'scrollable');
                    }, 1000);
                    break;
                case "FocusQuery_0334":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'editable');
                    }, 1000);
                    break;
                case "FocusQuery_0335":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'popupSupported');
                    }, 1000);
                    break;
                case "FocusQuery_0336":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'pluralLineSupported');
                    }, 1000);
                    break;
                case "FocusQuery_0337":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'deleteable');
                    }, 1000);
                    break;
                case "FocusQuery_0338":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'isHint');
                    }, 1000);
                    break;
                case "FocusQuery_0339":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'isEssential');
                    }, 1000);
                    break;
                case "FocusQuery_0340":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'itemCount');
                    }, 1000);
                    break;
                case "FocusQuery_0341":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'currentIndex');
                    }, 1000);
                    break;
                case "FocusQuery_0342":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'startIndex');
                    }, 1000);
                    break;
                case "FocusQuery_0343":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'endIndex');
                    }, 1000);
                    break;
                case "FocusQuery_0344":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'rangeInfo');
                    }, 1000);
                    break;
                case "FocusQuery_0345":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'grid');
                    }, 1000);
                    break;
                case "FocusQuery_0346":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'gridItem');
                    }, 1000);
                    break;
                case "FocusQuery_0347":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'activeRegion');
                    }, 1000);
                    break;
                case "FocusQuery_0348":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'isContentInvalid');
                    }, 1000);
                    break;
                case "FocusQuery_0349":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'error');
                    }, 1000);
                    break;
                case "FocusQuery_0350":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'label');
                    }, 1000);
                    break;
                case "FocusQuery_0351":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'beginSelected');
                    }, 1000);
                    break;
                case "FocusQuery_0352":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'endSelected');
                    }, 1000);
                    break;
                case "FocusQuery_0353":
                    excuteClearAccessibilityFocus(context, 'Test7', data.data, 'clearAccessibilityFocus');
                    setTimeout(() => {
                        AccessibleFocusQueryCallBackGetElement(context, 'Test7', data.data, 'accessibilityFocus', 'textMoveUnit');
                    }, 1000);
                    break;
                default:
                    break;
            }
        }
    }

    onDisconnect() {
        console.info("Accessibility AccessibilityAll onAbilityDisconnected");
    }

    onAccessibilityEvent(accessibilityEvent) {
        console.info(log + "onAccessibilityEvent=" + JSON.stringify(accessibilityEvent))
    }
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

const publishCallback = (result) => {
    console.info("====>on_target_change_extra publish call back result:" + JSON.stringify(result));
}

const excuteClearAccessibilityFocus = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement err=" + JSON.stringify(err));
            return;
        }
        if (res) {
            res.findElement('content', searchText).then((AccessibilityElementArray) => {
                console.info(logTag + " findElement start");
                AccessibilityElementArray[0].performAction(focusType).then((performActionBack) => {
                    console.info(logTag + " performActionBack Promise success=" + JSON.stringify(performActionBack));
                }).catch((actionNamesErr) => {
                    console.info(logTag + " performActionBack Promise err=" + JSON.stringify(actionNamesErr));
                });
            }).catch((AccessibilityElementArrayErr) => {
                console.info(logTag + " findElement Promise err=" + JSON.stringify(AccessibilityElementArrayErr));
            });
        }
    })
}

const AccessibleFocusQueryCallBack1 = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then((res) => {
                    console.info(logTag + " performAction accessibilityFocus res:" + res);
                    context.getFocusElement((err, res) => {
                        if (err?.code) {
                            console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                            return;
                        }
                        printElements(logTag, res)
                        if (res) {
                            var commonEventPublishData = {
                                data: "on_assist_change_extra_success"
                            }
                            commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                        }
                    })
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryIsAccessibilityFocus = (context, searchText, description, focusType, isAccessibilityFocus) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then((res) => {
                    console.info(logTag + " performAction accessibilityFocus res:" + res);
                    context.getFocusElement(isAccessibilityFocus, (err, res) => {
                        if (err?.code) {
                            console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                            return;
                        }
                        printElements(logTag, res)
                        if (res) {
                            var commonEventPublishData = {
                                data: "on_assist_change_extra_success"
                            }
                            commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                        }
                    })
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryPromiseIsAccessibilityFocus = (context, searchText, description, focusType, isAccessibilityFocus) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then((res) => {
                    console.info(logTag + " performAction accessibilityFocus res:" + res);
                    context.getFocusElement(isAccessibilityFocus).then((res) => {
                        printElements(logTag, res)
                        if (res) {
                            var commonEventPublishData = {
                                data: "on_assist_change_extra_success"
                            }
                            commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                        }
                    })
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryPromise2 = (context, searchText, description, focus, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focus).then((eles) => {
                    console.info(logTag + " performAction accessibilityFocus res:" + eles);
                    ele.findElement('focusType',focusType).then((element) => {
                        printElements(logTag, element)
                        if (element) {
                            var commonEventPublishData = {
                                data: "on_assist_change_extra_success"
                            }
                            commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                        }
                    }).catch((err) => {
                        console.info(logTag + "findElement err=" + JSON.stringify(err));
                    });
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}
const AccessibleFocusQueryFindElementCallBack = (context, searchText, description, focus, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focus).then((eles) => {
                    console.info(logTag + " performAction accessibilityFocus res:" + eles);
                    ele.findElement('focusType',focusType, (err, result) => {
                        if (err?.code) {
                            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
                            return;
                        }
                        printElements(logTag, result)
                        if (result) {
                            var commonEventPublishData = {
                                data: "on_assist_change_extra_success"
                            }
                            commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                        }
                    })
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQuery_0290 = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then((res) => {
                    console.info(logTag + " performAction accessibilityFocus res:" + res);
                    context.getFocusElement(true).then((res) => {
                        res.findElement('focusType','').then((element) => {
                            printElements(logTag, element)
                            if (element) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                            }
                        }).catch((err) => {
                            console.info(logTag + "findElement err=" + JSON.stringify(err));
                        });
                    })
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryPromiseDirection = (context, searchText, description, focusType, direction) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then((res) => {
                    console.info(logTag + " performAction accessibilityFocus res:" + res);
                    context.getFocusElement(true).then((ele) => {
                        console.info(logTag + " focusDirection:" + direction);
                        ele.findElement('focusDirection', direction).then((element) => {
                            printElements(logTag, element)
                            if (element) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                            }
                        }).catch((err) => {
                            console.info(logTag + " findElement focusDirection execute err=" + JSON.stringify(err));
                        });
                    })
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}
const AccessibleFocusQueryPromiseDirectionCallBack = (context, searchText, description, focusType, direction) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then((res) => {
                    console.info(logTag + " performAction accessibilityFocus res:" + res);
                    context.getFocusElement(true).then((ele) => {
                        console.info(logTag + " focusDirection:" + direction);
                        ele.findElement('focusDirection', direction, (err, result) => {
                            if (err?.code) {
                                console.info(logTag + " findElement execute err=" + JSON.stringify(err));
                                return;
                            }
                            printElements(logTag, result)
                            if (result) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                            }
                        });
                    })
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryCallBackGetElement = (context, searchText, description, focusType, attributeName) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((AccessibilityElement) => {
            if (AccessibilityElement.length > 0) {
                let ele = AccessibilityElement[0];
                ele.performAction(focusType).then((res) => {
                    console.info(logTag + " performAction accessibilityFocus res:" + res);
                    context.getFocusElement((err, ele) => {
                        if (err?.code) {
                            console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                            return;
                        }
                        printElements(logTag, ele)
                        ele.attributeValue(attributeName).then((element) => {
                            if (description == 'FocusQuery_0210' || description == 'FocusQuery_0284') {
                                printElements(logTag, element)
                            }
                            else {
                                console.info(logTag + " " + attributeName + ":" + JSON.stringify(element))
                            }
                            if (JSON.stringify(element) != undefined) {
                                var commonEventPublishData = {
                                    data: "on_assist_change_extra_success"
                                }
                                commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                            }
                        }).catch((err) => {
                            console.info(logTag + " attributeValue err=" + JSON.stringify(err));
                        })
                    })
                }).catch((err) => {
                    console.info(logTag + " performAction execute err=" + JSON.stringify(err));
                });
            }
        }).catch((err) => {
            console.info(logTag + " findElement execute err=" + JSON.stringify(err));
        });
    });
}

const AccessibleFocusQueryActionNames = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((ele) => {
            ele[0].performAction(focusType).then((element) => {
                console.info(logTag + " accessibilityFocus execute res=" + JSON.stringify(element));
                context.getFocusElement((err, ele) => {
                    if (err?.code) {
                        console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                        return;
                    }
                    ele.actionNames().then((value) => {
                        console.info(logTag + " actionNames execute res=" + JSON.stringify(value));
                        if (value.length > 0) {
                            var commonEventPublishData = {
                                data: "on_assist_change_extra_success"
                            }
                            commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                        }
                    }).catch((err) => {
                        console.info(logTag + " actionNames execute err=" + JSON.stringify(err));
                    });
                })
            }).catch((err) => {
                console.info(logTag + " accessibilityFocus err:" + JSON.stringify(err));
            });
        }).catch((err) => {
            console.info(logTag + " findElement err:" + JSON.stringify(err));
        })
    })
}

const AccessibleFocusQueryActionNamesCallBack = (context, searchText, description, focusType) => {
    const logTag = log + description;
    context.getWindowRootElement((err, res) => {
        if (err?.code) {
            console.info(logTag + " getWindowRootElement execute err=" + JSON.stringify(err));
            return;
        }
        res.findElement('content',searchText).then((ele) => {
            ele[0].performAction(focusType).then((element) => {
                console.info(logTag + " accessibilityFocus execute res=" + JSON.stringify(element));
                context.getFocusElement((err, ele) => {
                    if (err?.code) {
                        console.info(logTag + " getFocusElement execute err=" + JSON.stringify(err));
                        return;
                    }
                    ele.actionNames((err, result) => {
                        if (err?.code) {
                            console.info(logTag + " actionNames execute err=" + JSON.stringify(err));
                            return;
                        }
                        console.info(logTag + " actionNames execute res=" + JSON.stringify(result));
                        if (result.length > 0) {
                            var commonEventPublishData = {
                                data: "on_assist_change_extra_success"
                            }
                            commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
                        }
                    });
                })
            }).catch((err) => {
                console.info(logTag + " accessibilityFocus err:" + JSON.stringify(err));
            });
        }).catch((err) => {
            console.info(logTag + " findElement err:" + JSON.stringify(err));
        })
    })
}

export default ServiceExtAbilityFocusQuery