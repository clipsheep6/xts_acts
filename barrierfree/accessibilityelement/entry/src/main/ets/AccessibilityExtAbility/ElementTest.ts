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
import commonEvent from '@ohos.commonEvent';
import accessibility from '@ohos.accessibility'

export class ElementTest {
    private context = undefined;
    private subScriber = undefined;
    private events: Array<any> = [];

    constructor(context) {
        this.context = context;
    }

    async init() {
        this.subScriber = await commonEvent.createSubscriber({events: ['caseExecute']});
        commonEvent.subscribe(this.subScriber, (err, data) => {
            console.info('ElementTest subscribe callback data:' + JSON.stringify(data));
            this.processCase(data);
        });
    }

    clear() {
        commonEvent.unsubscribe(this.subScriber);
        this.subScriber = undefined;
        this.context = undefined;
        this.events.length = 0;
    }

    pushEvent(event) {
        this.events.push(event);
    }

    private publishCaseResult(caseName: string, result: boolean) {
        let commonEventPublishData = {
            data: (result ? 'pass' : 'fail'),
            parameters: {
                case: caseName
            }
        }
        commonEvent.publish('caseResult', commonEventPublishData, (err) => {
            console.info("ElementTest publishCaseResult finish: " + JSON.stringify(commonEventPublishData));
        });
    }

    private async processCase(data) {
        let caseName = data.data;
        console.info('ElementTest processCase: ' + caseName);
        this.events.length = 0;
        let result = false;
        switch (caseName) {
            case 'AccessibilityElementTest_attributeNames_asyncPromise_0100':
                result = await this.executeAttributeNames(caseName);
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_0200':
                result = await this.executeAttributeValue(caseName, 'componentId', 'number');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_0300':
                result = await this.executeAttributeValue(caseName, 'pageId', 'number');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_0400':
                result = await this.executeAttributeValue(caseName, 'parentId', 'number');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_0500':
                result = await this.executeAttributeValue(caseName, 'inspectorKey', 'string');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_0600':
                result = await this.executeAttributeValue(caseName, 'bundleName', 'string');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_0700':
                result = await this.executeAttributeValue(caseName, 'componentType', 'string');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_0800':
                result = await this.executeAttributeValue(caseName, 'inputType', 'number');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_0900':
                result = await this.executeAttributeValue(caseName, 'text', 'string');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_1000':
                result = await this.executeAttributeValue(caseName, 'hintText', 'string');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_1100':
                result = await this.executeAttributeValue(caseName, 'description', 'string');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_1200':
                result = await this.executeAttributeValue(caseName, 'resourceName', 'string');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_1400':
                result = await this.executeAttributeValue(caseName, 'textLengthLimit', 'number');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_1500':
                result = await this.executeAttributeValue(caseName, 'rect', 'object');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_1600':
                result = await this.executeAttributeValue(caseName, 'checkable', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_1700':
                result = await this.executeAttributeValue(caseName, 'checked', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_1800':
                result = await this.executeAttributeValue(caseName, 'focusable', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_1900':
                result = await this.executeAttributeValue(caseName, 'isVisible', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_2000':
                result = await this.executeAttributeValue(caseName, 'accessibilityFocused', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_2100':
                result = await this.executeAttributeValue(caseName, 'selected', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_2200':
                result = await this.executeAttributeValue(caseName, 'clickable', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_2300':
                result = await this.executeAttributeValue(caseName, 'longClickable', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_2400':
                result = await this.executeAttributeValue(caseName, 'isEnable', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_2500':
                result = await this.executeAttributeValue(caseName, 'isPassword', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_2600':
                result = await this.executeAttributeValue(caseName, 'scrollable', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_2700':
                result = await this.executeAttributeValue(caseName, 'editable', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_2900':
                result = await this.executeAttributeValue(caseName, 'pluralLineSupported', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_3100':
                result = await this.executeAttributeValue(caseName, 'isHint', 'boolean');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_3300':
                result = await this.executeAttributeValue(caseName, 'itemCount', 'number');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_3400':
                result = await this.executeAttributeValue(caseName, 'currentIndex', 'number');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_3500':
                result = await this.executeAttributeValue(caseName, 'startIndex', 'number');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_3600':
                result = await this.executeAttributeValue(caseName, 'endIndex', 'number');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_3700':
                result = await this.executeAttributeValue(caseName, 'rangeInfo', 'object');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_4200':
                result = await this.executeAttributeValue(caseName, 'error', 'string');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_4700':
                result = await this.executeAttributeValue(caseName, 'parent', 'object');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_4800':
                result = await this.executeAttributeValueArray(caseName, 'children', 'object');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_5200':
                result = await this.executeAttributeValue(caseName, 'isActive', 'boolean', true);
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_5300':
                result = await this.executeAttributeValue(caseName, 'screenRect', 'object', true);
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_5400':
                result = await this.executeAttributeValue(caseName, 'layer', 'number', true);
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_5500':
                result = await this.executeAttributeValue(caseName, 'type', 'string', true);
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_5600':
                result = await this.executeAttributeValueRootElement(caseName);
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_5700':
                result = await this.executeAttributeValue(caseName, 'windowId', 'number');
                break;
            case 'AccessibilityElementTest_attributeValue_asyncPromise_5800':
                result = await this.executeAttributeValue(caseName, 'isFocused', 'boolean');
                break;
            case 'AccessibilityElementTest_findElement_asyncPromise_5900':
                result = await this.executeFindElement5900(caseName);
                break;
            case 'AccessibilityElementTest_actionNames_asyncPromise_6000':
                result = await this.executeActionNames(caseName);
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_6100':
                result = await this.executePerformAction(caseName, 'accessibilityFocus');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_6200':
                result = await this.executePerformAction(caseName, 'clearAccessibilityFocus');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_6300':
                result = await this.executePerformAction(caseName, 'focus');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_6400':
                result = await this.executePerformAction(caseName, 'clearFocus');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_6500':
                result = await this.executePerformAction(caseName, 'clearSelection');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_6600':
                result = await this.executePerformAction(caseName, 'click');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_6700':
                result = await this.executePerformAction(caseName, 'longClick');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_6800':
                result = await this.executePerformAction(caseName, 'cut');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_6900':
                result = await this.executePerformAction(caseName, 'copy');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_7000':
                result = await this.executePerformAction(caseName, 'paste');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_7100':
                result = await this.executePerformAction(caseName, 'select');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_7200':
                result = await this.executePerformAction(caseName, 'setText');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_7300':
                result = await this.executePerformAction(caseName, 'delete');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_7400':
                result = await this.executePerformAction(caseName, 'scrollForward');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_7500':
                result = await this.executePerformAction(caseName, 'scrollBackward');
                break;
            case 'AccessibilityElementTest_performAction_asyncPromise_7600':
                result = await this.executePerformAction(caseName, 'setSelection');
                break;
            case 'AccessibilityElementTest_findElement_asyncPromise_7700':
                result = await this.executeFindElementByContent(caseName, 'xxx');
                break;
            case 'AccessibilityElementTest_findElement_asyncPromise_7800':
                result = await this.executeFindElementByContent(caseName, 'button1');
                break;
            case 'AccessibilityElementTest_findElement_asyncPromise_7900':
                result = await this.executeFindElementByFocusType(caseName, 'accessibility');
                break;
            case 'AccessibilityElementTest_findElement_asyncPromise_8000':
                result = await this.executeFindElementByFocusType(caseName, 'normal');
                break;
            case 'AccessibilityElementTest_findElement_asyncPromise_8100':
                result = await this.executeFindElementByFocusDirection(caseName, 'up');
                break;
            case 'AccessibilityElementTest_findElement_asyncPromise_8200':
                result = await this.executeFindElementByFocusDirection(caseName, 'down');
                break;
            case 'AccessibilityElementTest_findElement_asyncPromise_8300':
                result = await this.executeFindElementByFocusDirection(caseName, 'left');
                break;
            case 'AccessibilityElementTest_findElement_asyncPromise_8400':
                result = await this.executeFindElementByFocusDirection(caseName, 'right');
                break;
            case 'AccessibilityElementTest_findElement_asyncPromise_8500':
                result = await this.executeFindElementByFocusDirection(caseName, 'forward');
                break;
            case 'AccessibilityElementTest_findElement_asyncPromise_8600':
                result = await this.executeFindElementByFocusDirection(caseName, 'backward');
                break;
            default:
                console.warn('ElementTest processCase unknown!!!!!!!!!!');
                break;
        }
        this.publishCaseResult(caseName, result);
    }

    private async getBaseElement() {
        let element = undefined;
        if (this.context) {
            let root = await this.context.getWindowRootElement();
            let elements = await root.findElement('content', 'button1');
            element = elements[0];
        }
        return element;
    }

    private async getWindowElement() {
        let element = undefined;
        if (this.context) {
            let elements = await this.context.getWindows();
            element = elements[0];
        }
        return element;
    }

    private async executeAttributeNames(caseName: string): Promise<boolean> {
        let result = false;
        let element = await this.getBaseElement();
        if (element) {
            let names = await element.attributeNames();
            console.info('ElementTest executeAttributeNames ' + caseName + ' names: ' + JSON.stringify(names));
            if (Array.isArray(names)) {
                result = true;
            }
        }
        return result;
    }

    private async executeAttributeValue(caseName: string, input: string, outputType: string,
                                        isWindow: boolean = false): Promise<boolean> {
        let element = undefined;
        if (isWindow) {
            element = await this.getWindowElement();
        } else {
            element = await this.getBaseElement();
        }

        let result = false;
        if (element) {
            console.info('ElementTest executeAttributeValue ' + caseName + ' input: ' + input + ', outputType: ' + outputType);
            let value = await element.attributeValue(input);
            console.info('ElementTest executeAttributeValue ' + caseName + ' value: ' + JSON.stringify(value));
            if (typeof(value) == outputType || typeof(value) == 'undefined') {
                result = true;
            } else {
                console.warn('ElementTest executeAttributeValue ' + caseName + ' valueType: ' + typeof(value));
            }
        }
        return result;
    }

    private async executeAttributeValueRootElement(caseName: string): Promise<boolean> {
        let element = undefined;
        if (this.context) {
            let base = await this.getBaseElement();
            if (base) {
                let baseWindowId = await base.attributeValue('windowId');
                let windows = await this.context.getWindows();
                for (let window of windows) {
                    let windowId = await window.attributeValue('windowId');
                    if (baseWindowId == windowId) {
                        element = window;
                        console.info('ElementTest executeAttributeValueRootElement ' + caseName + ' found window');
                        break;
                    }
                }
            }
        }

        let result = false;
        if (element) {
            console.info('ElementTest executeAttributeValueRootElement ' + caseName + ' input: rootElement, outputType: object');
            let value = await element.attributeValue('rootElement');
            console.info('ElementTest executeAttributeValue ' + caseName + ' value: ' + JSON.stringify(value));
            if (typeof(value) == 'object' || typeof(value) == 'undefined') {
                result = true;
            } else {
                console.warn('ElementTest executeAttributeValue ' + caseName + ' valueType: ' + typeof(value));
            }
        }
        return result;
    }

    private async executeAttributeValueArray(caseName: string, input: string, outputType: string): Promise<boolean> {
        let result = false;
        let element = await this.getBaseElement();
        if (element) {
            console.info('ElementTest executeAttributeValueArray ' + caseName + ' input: ' + input + ', outputType: ' + outputType);
            let value = await element.attributeValue(input);
            console.info('ElementTest executeAttributeValueArray ' + caseName + ' value: ' + JSON.stringify(value));
            if (Array.isArray(value)) {
                if ((value.length == 0)||
                    (value.length > 0 && typeof(value[0]) == outputType)) {
                    result = true;
                }
            }
        }
        return result;
    }

    private async executeActionNames(caseName: string): Promise<boolean> {
        let result = false;
        let element = await this.getBaseElement();
        if (element) {
            let actions = await element.actionNames();
            console.info('ElementTest executeActionNames ' + caseName + ' actions: ' + JSON.stringify(actions));
            if (Array.isArray(actions)) {
                if ((actions.length == 0) ||
                    (actions.length > 0 && typeof(actions[0]) == 'string')) {
                    result = true;
                }
            }
        }
        return result;
    }

    private async executePerformAction(caseName: string, action: string, args?: object): Promise<boolean> {
        let result = false;
        let element = await this.getBaseElement();
        if (element) {
            console.info('ElementTest executePerformAction ' + caseName + ' action: ' + action + ', args: ' + JSON.stringify(args));
            let ret = await element.performAction(action, args);
            console.info('ElementTest executePerformAction ' + caseName + ' ret: ' + JSON.stringify(ret));
            if (typeof(ret) == 'boolean' || typeof(ret) == 'undefined') {
                result = true;
            }
        }
        return result;
    }

    private async executeFindElementByContent(caseName: string, condition: string): Promise<boolean> {
        let result = false;
        let element = await this.getBaseElement();
        if (element) {
            console.info('ElementTest executeFindElementByContent ' + caseName + ' condition: ' + condition);
            let found = await element.findElement('content', condition);
            console.info('ElementTest executeFindElementByContent ' + caseName + ' element: ' + JSON.stringify(found));
            if (Array.isArray(found)) {
                if (found.length == 0 || typeof(found[0]) == 'object') {
                    result = true;
                }
            }
        }
        return result;
    }

    private async executeFindElementByFocusType(caseName: string, condition: string): Promise<boolean> {
        let result = false;
        let element = await this.getBaseElement();
        if (element) {
            console.info('ElementTest executeFindElementByFocusType ' + caseName + ' condition: ' + condition);
            let action = (condition == 'accessibility') ? 'accessibilityFocus' : 'focus';
            let ret = await element.performAction(action);
            console.info('ElementTest executeFindElementByFocusType ' + caseName + ' performAction[' + action + '] ret: ' + ret);

            let found = await element.findElement('focusType', condition);
            console.info('ElementTest executeFindElementByFocusType ' + caseName + ' element: ' + JSON.stringify(found));
            if (typeof(found) == 'object' || typeof(found) == 'undefined') {
                result = true;
            }

            if (ret) {
                let clearAction = (condition == 'accessibility') ? 'clearAccessibilityFocus' : 'clearFocus';
                await element.performAction(clearAction);
            }
        }
        return result;
    }

    private async executeFindElementByFocusDirection(caseName: string, condition: string): Promise<boolean> {
        let result = false;
        let element = await this.getBaseElement();
        if (element) {
            console.info('ElementTest executeFindElementByFocusDirection ' + caseName + ' condition: ' + condition);
            let found = await element.findElement('focusDirection', condition);
            console.info('ElementTest executeFindElementByFocusDirection ' + caseName + ' element: ' + JSON.stringify(found));
            if (typeof(found) == 'object' || typeof(found) == 'undefined') {
                result = true;
            }
        }
        return result;
    }

    private async executeFindElement5900(caseName: string): Promise<boolean> {
        let result = false;
        let element = undefined;
        if (this.context) {
            let root = await this.context.getWindowRootElement();
            let elements = await root.findElement('content', 'button2');
            element = elements[0];
        }
        if (element) {
            console.info('ElementTest executeFindElement9300 ' + caseName);
            let found = await element.findElement('focusDirection', 'down');
            console.info('ElementTest executeFindElement9300 ' + caseName + ' element: ' + JSON.stringify(found));
            if (typeof(found) == 'object' || typeof(found) == 'undefined') {
                result = true;
            }
        }
        return result;
    }
}