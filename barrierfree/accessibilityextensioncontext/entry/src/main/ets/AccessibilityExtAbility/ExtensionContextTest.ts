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
import display from '@ohos.display'
import accessibility from '@ohos.accessibility'

export class ExtensionContextTest {
    private context = undefined;
    private subScriber = undefined;

    constructor(context) {
        this.context = context;
    }

    async init() {
        this.subScriber = await commonEvent.createSubscriber({events: ['caseExecute']});
        commonEvent.subscribe(this.subScriber, (err, data) => {
            console.info('ExtensionContextTest subscribe callback data:' + JSON.stringify(data));
            this.processCase(data.data);
        });
    }

    clear() {
        commonEvent.unsubscribe(this.subScriber);
        this.subScriber = undefined;
        this.context = undefined;
    }

    private publishCaseResult(caseName: string, result: boolean) {
        let commonEventPublishData = {
            data: (result ? 'pass' : 'fail'),
            parameters: {
                case: caseName
            }
        }
        commonEvent.publish('caseResult', commonEventPublishData, (err) => {
            console.info("ExtensionContextTest publishCaseResult finish: " + JSON.stringify(commonEventPublishData));
        });
    }

    private async processCase(caseName) {
        console.info('ExtensionContextTest processCase: ' + caseName);
        let eventType: Array<string> = [];
        let bundleName: Array<string> = [];
        let windowId = -1;
        let displayId = -1;
        let gesturePath = {};
        let gesturePos1 = {};
        let gesturePos2 = {};
        let gesturePos3 = {};

        switch (caseName) {
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncCallback_0100':
                eventType = ['accessibilityFocus'];
                this.setEventTypeFilterCallback(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncCallback_0200':
                eventType = ['accessibilityFocusClear'];
                this.setEventTypeFilterCallback(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncCallback_0300':
                eventType = ['click', 'longClick'];
                this.setEventTypeFilterCallback(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncCallback_0400':
                eventType = ['focus', 'select'];
                this.setEventTypeFilterCallback(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncCallback_0500':
                eventType = ['hoverEnter', 'hoverExit'];
                this.setEventTypeFilterCallback(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncCallback_0600':
                eventType = ['accessibilityFocus', 'accessibilityFocusClear', 'click', 'longClick',
                'focus', 'select', 'hoverEnter', 'hoverExit', 'textUpdate', 'textSelectionUpdate','scroll'];
                this.setEventTypeFilterCallback(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncCallback_0700':
                this.setEventTypeFilterCallback(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncPromise_0800':
                eventType = ['accessibilityFocus'];
                this.setEventTypeFilterPromise(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncPromise_0900':
                eventType = ['accessibilityFocusClear'];
                this.setEventTypeFilterPromise(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncPromise_1000':
                eventType = ['click', 'longClick'];
                this.setEventTypeFilterPromise(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncPromise_1100':
                eventType = ['focus', 'select'];
                this.setEventTypeFilterPromise(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncPromise_1200':
                eventType = ['hoverEnter', 'hoverExit'];
                this.setEventTypeFilterPromise(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncPromise_1300':
                eventType = ['accessibilityFocus', 'accessibilityFocusClear', 'click', 'longClick',
                'focus', 'select', 'hoverEnter', 'hoverExit', 'textUpdate', 'textSelectionUpdate','scroll'];
                this.setEventTypeFilterPromise(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setEventTypeFilter_asyncPromise_1400':
                this.setEventTypeFilterPromise(caseName, eventType);
                break;
            case 'AccessibilityExtensionContextTest_setTargetBundleName_asyncCallback_1500':
                bundleName = ['com.example.accessibleformextension'];
                this.setTargetBundleNameCallback(caseName, bundleName);
                break;
            case 'AccessibilityExtensionContextTest_setTargetBundleName_asyncCallback_1600':
                bundleName = ['aaa'];
                this.setTargetBundleNameCallback(caseName, bundleName);
                break;
            case 'AccessibilityExtensionContextTest_setTargetBundleName_asyncCallback_1700':
                this.setTargetBundleNameCallback(caseName, bundleName);
                break;
            case 'AccessibilityExtensionContextTest_setTargetBundleName_asyncPromise_1800':
                bundleName = ['com.example.accessibleformextension'];
                this.setTargetBundleNamePromise(caseName, bundleName);
                break;
            case 'AccessibilityExtensionContextTest_setTargetBundleName_asyncPromise_1900':
                bundleName = ['aaa'];
                this.setTargetBundleNamePromise(caseName, bundleName);
                break;
            case 'AccessibilityExtensionContextTest_setTargetBundleName_asyncPromise_2000':
                this.setTargetBundleNamePromise(caseName, bundleName);
                break;
            case 'AccessibilityExtensionContextTest_getWindowRootElement_asyncCallback_2100':
                this.getWindowRootElementCallback(caseName);
                break;
            case 'AccessibilityExtensionContextTest_getWindowRootElement_asyncCallback_2200':
                windowId = await this.getWindowIdByText('button1');
                this.getWindowRootElementByIdCallback(caseName, windowId);
                break;
            case 'AccessibilityExtensionContextTest_getWindowRootElement_asyncCallback_2300':
                windowId = 1000;
                this.getWindowRootElementByIdCallback(caseName, windowId);
                break;
            case 'AccessibilityExtensionContextTest_getWindowRootElement_asyncCallback_2400':
                windowId = -1;
                this.getWindowRootElementByIdCallback(caseName, windowId);
                break;
            case 'AccessibilityExtensionContextTest_getWindowRootElement_Promise_2500':
                windowId = await this.getWindowId();
                this.getWindowRootElementByIdPromise(caseName, windowId);
                break;
            case 'AccessibilityExtensionContextTest_getWindowRootElement_Promise_2600':
                windowId = 1000;
                this.getWindowRootElementByIdPromise(caseName, windowId);
                break;
            case 'AccessibilityExtensionContextTest_getWindowRootElement_Promise_2700':
                windowId = -1;
                this.getWindowRootElementByIdPromise(caseName, windowId);
                break;
            case 'AccessibilityExtensionContextTest_getWindows_asyncCallback_2800':
                this.getWindowsCallback(caseName);
                break;
            case 'AccessibilityExtensionContextTest_getWindows_asyncCallback_2900':
                displayId = await this.getDisPlayId();
                this.getWindowsByIdCallback(caseName, displayId);
                break;
            case 'AccessibilityExtensionContextTest_getWindows_asyncCallback_3000':
                displayId = 100;
                this.getWindowsByIdCallback(caseName, displayId);
                break;
            case 'AccessibilityExtensionContextTest_getWindows_asyncCallback_3100':
                displayId = -1;
                this.getWindowsByIdCallback(caseName, displayId);
                break;
            case 'AccessibilityExtensionContextTest_getWindows_Promise_3200':
                displayId = await this.getDisPlayId();
                this.getWindowsByIdPromise(caseName, displayId);
                break;
            case 'AccessibilityExtensionContextTest_getWindows_Promise_3300':
                displayId = 100;
                this.getWindowsByIdPromise(caseName, displayId);
                break;
            case 'AccessibilityExtensionContextTest_getWindows_Promise_3400':
                displayId = -1;
                this.getWindowsByIdPromise(caseName, displayId);
                break;
            case 'AccessibilityExtensionContextTest_getFocusElement_asyncCallback_3500':
                await this.setAccessibilityFocus();
                this.getFocusElementCallback(caseName, true);
                break;
            case 'AccessibilityExtensionContextTest_getFocusElement_asyncCallback_3600':
                await this.clearAccessibilityFocus();
                this.getFocusElementCallback(caseName, false);
                break;
            case 'AccessibilityExtensionContextTest_getFocusElement_asyncCallback_3700':
                await this.setAccessibilityFocus();
                this.getFocusElementByTypeCallback(caseName, true, true);
                break;
            case 'AccessibilityExtensionContextTest_getFocusElement_asyncCallback_3800':
                await this.setAccessibilityFocus();
                this.getFocusElementByTypeCallback(caseName, true, false);
                break;
            case 'AccessibilityExtensionContextTest_getFocusElement_asyncCallback_3900':
                await this.clearAccessibilityFocus();
                this.getFocusElementByTypeCallback(caseName, false, true);
                break;
            case 'AccessibilityExtensionContextTest_getFocusElement_asyncCallback_4000':
                await this.clearAccessibilityFocus();
                this.getFocusElementByTypeCallback(caseName, false, false);
                break;
            case 'AccessibilityExtensionContextTest_getFocusElement_asyncPromise_4100':
                await this.setAccessibilityFocus();
                this.getFocusElementByTypePromise(caseName, true, true);
                break;
            case 'AccessibilityExtensionContextTest_getFocusElement_asyncPromise_4200':
                await this.setAccessibilityFocus();
                this.getFocusElementByTypePromise(caseName, true, false);
                break;
            case 'AccessibilityExtensionContextTest_getFocusElement_asyncPromise_4300':
                await this.clearAccessibilityFocus();
                this.getFocusElementByTypePromise(caseName, false, true);
                break;
            case 'AccessibilityExtensionContextTest_getFocusElement_asyncPromise_4400':
                await this.clearAccessibilityFocus();
                this.getFocusElementByTypePromise(caseName, false, false);
                break;
            case 'AccessibilityExtensionContextTest_gestureInject_asyncCallback_4500':
                gesturePos1 = {positionX: 10, positionY: 10};
                gesturePath = {points: [gesturePos1], durationTime: 100};
                this.gestureInjectCallback(caseName, gesturePath);
                break;
            case 'AccessibilityExtensionContextTest_gestureInject_asyncCallback_4600':
                gesturePos1 = {positionX: 50, positionY: 50};
                gesturePath = {points: [gesturePos1], durationTime: 60000};
                this.gestureInjectCallback(caseName, gesturePath);
                break;
            case 'AccessibilityExtensionContextTest_gestureInject_asyncCallback_4700':
                gesturePos1 = {positionX: 200, positionY: 200};
                gesturePos2 = {positionX: 100, positionY: 100};
                gesturePath = {points: [gesturePos1, gesturePos2], durationTime: 1000};
                this.gestureInjectCallback(caseName, gesturePath);
                break;
            case 'AccessibilityExtensionContextTest_gestureInject_asyncCallback_4800':
                gesturePos1 = {positionX: 50, positionY: 50};
                gesturePos2 = {positionX: 100, positionY: 100};
                gesturePos3 = {positionX: 1000, positionY: 1000};
                gesturePath = {points: [gesturePos1, gesturePos2, gesturePos3], durationTime: 60000};
                this.gestureInjectCallback(caseName, gesturePath);
                break;
            case 'AccessibilityExtensionContextTest_gestureInject_asyncCallback_4900':
                gesturePath = undefined;
                this.gestureInjectCallback(caseName, gesturePath);
                break;
            case 'AccessibilityExtensionContextTest_gestureInject_asyncPromise_5000':
                gesturePos1 = {positionX: 10, positionY: 10};
                gesturePath = {points: [gesturePos1], durationTime: 100};
                this.gestureInjectPromise(caseName, gesturePath);
                break;
            case 'AccessibilityExtensionContextTest_gestureInject_asyncPromise_5100':
                gesturePos1 = {positionX: 50, positionY: 50};
                gesturePath = {points: [gesturePos1], durationTime: 60000};
                this.gestureInjectPromise(caseName, gesturePath);
                break;
            case 'AccessibilityExtensionContextTest_gestureInject_asyncPromise_5200':
                gesturePos1 = {positionX: 200, positionY: 200};
                gesturePos2 = {positionX: 100, positionY: 100};
                gesturePath = {points: [gesturePos1, gesturePos2], durationTime: 1000};
                this.gestureInjectPromise(caseName, gesturePath);
                break;
            case 'AccessibilityExtensionContextTest_gestureInject_asyncPromise_5300':
                gesturePos1 = {positionX: 50, positionY: 50};
                gesturePos2 = {positionX: 100, positionY: 100};
                gesturePos3 = {positionX: 1000, positionY: 1000};
                gesturePath = {points: [gesturePos1, gesturePos2, gesturePos3], durationTime: 60000};
                this.gestureInjectPromise(caseName, gesturePath);
                break;
            case 'AccessibilityExtensionContextTest_gestureInject_asyncPromise_5400':
                gesturePath = undefined;
                this.gestureInjectPromise(caseName, gesturePath);
                break;
            default:
                console.warn('ExtensionContextTest processCase unknown!!!!!!!!!!');
                break;
        }
    }

    private async getWindowId() {
        let windowId = -1;
        let rootNode = await this.context.getWindowRootElement();
        console.info("getWindowId rootNode: " + JSON.stringify(rootNode));
        if (rootNode) {
            windowId = await rootNode.attributeValue('windowId');
            console.info("getWindowId windowId: " + JSON.stringify(windowId));
        }
        return windowId;
    }

    private async getWindowIdByText(text: string) {
        let windowId = -1;
        let rootNode = await this.context.getWindowRootElement();
        console.info("getWindowId rootNode: " + JSON.stringify(rootNode));
        if (rootNode) {
            let tartgetNode = await rootNode.findElement('content', text);
            console.info("getWindowId tartgetNode: " + JSON.stringify(tartgetNode));
            if (tartgetNode) {
                windowId = await tartgetNode[0].attributeValue('windowId');
                console.info("getWindowId windowId: " + JSON.stringify(windowId));
            }
        }
        return windowId;
    }

    private async getDisPlayId() {
        let displayId = -1;
        display.getDefaultDisplay((err, data) => {
            if (err.code != 0) {
                console.error("getDisPlayId getDefaultDisplay error");
            } else {
                console.info("getDisPlayId getDefaultDisplay data.id: " + JSON.stringify(data.id));
                displayId = data.id;
            }
        });
        return displayId;
    }

    private async getRoot() {
        let rootNode = undefined;
        if (this.context) {
            let rootNode = await this.context.getWindowRootElement();
            console.info("getRoot rootNode: " + JSON.stringify(rootNode));
        }
        return rootNode;
    }

    private async setAccessibilityFocus() {
        let isFocus = false;
        if (this.context) {
            let rootNode = await this.context.getWindowRootElement();
            console.info("setAccessibilityFocus rootNode: " + JSON.stringify(rootNode));
            if (rootNode) {
                let tartgetNode = await rootNode.findElement('content', 'button1');
                console.info("setAccessibilityFocus tartgetNode: " + JSON.stringify(tartgetNode));
                if (tartgetNode) {
                    isFocus = await tartgetNode[0].performAction("accessibilityFocus");
                    console.info("setAccessibilityFocus isFocus: " + JSON.stringify(isFocus));
                }
            }
        }
    }

    private async clearAccessibilityFocus() {
        let isFocus = false;
        if (this.context) {
            let rootNode = await this.context.getWindowRootElement();
            console.info("setAccessibilityFocus rootNode: " + JSON.stringify(rootNode));
            if (rootNode) {
                let tartgetNode = await rootNode.findElement('content', 'button1');
                console.info("setAccessibilityFocus tartgetNode: " + JSON.stringify(tartgetNode));
                if (tartgetNode) {
                    isFocus = await tartgetNode[0].performAction("clearAccessibilityFocus");
                    console.info("setAccessibilityFocus isFocus: " + JSON.stringify(isFocus));
                }
            }
        }
    }

    private async setEventTypeFilterCallback(caseName: string, eventType: Array<accessibility.Event>) {
        let result = false;
        if (eventType.length == 0) {
            this.context.setEventTypeFilter(eventType, (err, res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (err.code != 0 ) {
                    console.error(caseName + " err: " + JSON.stringify(err.code));
                    result = true;
                }
                if (res == undefined) {
                    result = true;
                }
                this.publishCaseResult(caseName, result);
            });
        } else {
            this.context.setEventTypeFilter(eventType, (err, res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (err.code != 0 ) {
                    console.error(caseName + " err: " + JSON.stringify(err.code));
                }
                if (typeof(res) == 'boolean') {
                    result = true;
                }
                this.publishCaseResult(caseName, result);
            });
        }
    }

    private async setEventTypeFilterPromise(caseName: string, eventType: Array<accessibility.Event>) {
        let result = false;
        if (eventType.length == 0) {
            this.context.setEventTypeFilter(eventType).then((res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (res == undefined) {
                    result = true;
                }
                this.publishCaseResult(caseName, result);
            }).catch((error) => {
                console.error(caseName + " error: " + JSON.stringify(error));
                result = true;
                this.publishCaseResult(caseName, result);
            });
        } else {
            this.context.setEventTypeFilter(eventType).then((res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (typeof(res) == 'boolean') {
                    result = true;
                }
                this.publishCaseResult(caseName, result);
            }).catch((error) => {
                console.error(caseName + " error: " + JSON.stringify(error));
                this.publishCaseResult(caseName, result);
            });
        }
    }

    private async setTargetBundleNameCallback(caseName: string, bundleName: Array<string>) {
        let result = false;
        this.context.setTargetBundleName(bundleName, (err, res) => {
            console.info(caseName + " res: " + JSON.stringify(res));
            if (err.code != 0) {
                console.error(caseName + " err: " + JSON.stringify(err.code));
            }
            if (typeof(res) == 'boolean') {
                result = true;
            }
            this.publishCaseResult(caseName, result);
        });
    }

    private async setTargetBundleNamePromise(caseName: string, bundleName: Array<string>) {
        let result = false;
        this.context.setTargetBundleName(bundleName).then((res) => {
            console.info(caseName + " res: " + JSON.stringify(res));
            if (typeof(res) == 'boolean') {
                result = true;
            }
            this.publishCaseResult(caseName, result);
        });
    }

    private async getWindowRootElementCallback(caseName: string) {
        let result = false;
        this.context.getWindowRootElement(async (err, res) => {
            console.info(caseName + " res: " + JSON.stringify(res));
            if (err.code != 0) {
                console.error(caseName + " err: " + JSON.stringify(err.code));
            }
            if (res == undefined) {
                console.error(caseName + " res is undefined");
            }
            if (res) {
                let value = await res.attributeValue('componentId');
                if (typeof(value) == 'number') {
                    result = true;
                }
            } 
            this.publishCaseResult(caseName, result);
        });
    }

    private async getWindowRootElementByIdCallback(caseName: string, windowId: number) {
        let result = false;
        if ((windowId == -1) || (windowId == 1000)){
            this.context.getWindowRootElement(-1, async (err, res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (err.code != 0) {
                    console.error(caseName + " err: " + JSON.stringify(err.code));
                    result = true
                }
                if (res == undefined) {
                    console.error(caseName + " res is undefined");
                    result = true
                }
                this.publishCaseResult(caseName, result); 
            });
        } else {
            this.context.getWindowRootElement(windowId, async (err, res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (err.code != 0) {
                    console.error(caseName + " err: " + JSON.stringify(err.code));
                }
                if (res == undefined) {
                    console.error(caseName + " res is undefined");
                }
                if (res) {
                    let value = await res.attributeValue('componentId');
                    if (typeof(value) == 'number') {
                        result = true;
                    }
                }
                this.publishCaseResult(caseName, result); 
            });
        }
    }

    private async getWindowRootElementByIdPromise(caseName: string, windowId: number) {
        let result = false;
        if ((windowId == -1) || (windowId == 1000)){
            this.context.getWindowRootElement(-1).then(async (res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (res == undefined) {
                    console.error(caseName + " res is undefined");
                    result = true;
                }

                this.publishCaseResult(caseName, result);
                }).catch((error) => {
                    console.error(caseName + " error: " + JSON.stringify(error));
                    result = true;
                    this.publishCaseResult(caseName, result);
                });
        } else {
            this.context.getWindowRootElement(windowId).then(async (res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (res == undefined) {
                    console.error(caseName + " res is undefined");
                }
                if (res) {
                    let value = await res.attributeValue('componentId');
                    if (typeof(value) == 'number') {
                        result = true;
                    }
                }
                this.publishCaseResult(caseName, result);
                }).catch((error) => {
                    console.error(caseName + " error: " + JSON.stringify(error));
                    this.publishCaseResult(caseName, result);
            });
        }
    }


    private async getWindowsCallback(caseName: string) {
        let result = false;
        this.context.getWindows((err, res) => {
            console.info(caseName + " res: " + JSON.stringify(res));
            if (err.code != 0) {
                console.error(caseName + " err: " + JSON.stringify(err.code));
            }
            if (res == undefined) {
                console.error(caseName + " res is undefined");
            }
            if (res) {
                if (Array.isArray(res)) {
                    result = true;
                }
            }
            this.publishCaseResult(caseName, result);
        });
    }

    private async getWindowsByIdCallback(caseName: string, displayId: number) {
        let result = false;
        console.info(caseName + " displayId: " + JSON.stringify(displayId));
        if (displayId == -1) {
            this.context.getWindows(displayId, (err, res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (err.code != 0) {
                    console.error(caseName + " err: " + JSON.stringify(err.code));
                    result = true;
                }
                this.publishCaseResult(caseName, result);
            });
        } else {
            this.context.getWindows(displayId, (err, res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (err.code != 0) {
                    console.error(caseName + " err: " + JSON.stringify(err.code));
                }
                if (res) {
                    if (Array.isArray(res)) {
                        result = true;
                    }
                }
                this.publishCaseResult(caseName, result);
            });
        }
    }

    private async getWindowsByIdPromise(caseName: string, displayId: number) {
        let result = false;
        console.info(caseName + " displayId: " + JSON.stringify(displayId));
        if (displayId == -1) {
            this.context.getWindows(-1, (err, res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (err.code != 0) {
                    console.error(caseName + " err: " + JSON.stringify(err.code));
                    result = true;
                }
                this.publishCaseResult(caseName, result);
            });
        } else {
            this.context.getWindows(displayId, (err, res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (err.code != 0) {
                    console.error(caseName + " err: " + JSON.stringify(err.code));
                }
                if (res) {
                    if (Array.isArray(res)) {
                        result = true;
                    }
                }
                this.publishCaseResult(caseName, result);
            });
        }
    }

    private async getFocusElementCallback(caseName: string, hasFocus: boolean) {
        let result = false;
        this.context.getFocusElement((err, res) => {
            console.info(caseName + "res: " + JSON.stringify(res));
            if (err.code != 0) {
                console.error(caseName + "err: " + JSON.stringify(err.code));
                result = true;
            }
            if (res == undefined) {
                result = true;
            }
            this.publishCaseResult(caseName, result);
        });
    }

    private async getFocusElementByTypeCallback(caseName: string, hasFocus: boolean, isAccessibilityFocus: boolean) {
        let result = false;
        if (isAccessibilityFocus) {
            this.context.getFocusElement(true, async (err, res) => {
                console.info(caseName + "res: " + JSON.stringify(res));
                if (hasFocus) {
                    let value = await res.attributeValue('componentId');
                    console.info(caseName + "value: " + JSON.stringify(value));
                    if (typeof(value) == 'number') {
                        result = true;
                    }
                    this.publishCaseResult(caseName, result);
                } else {
                    if (err.code != 0) {
                        console.error(caseName + "err: " + JSON.stringify(err.code));
                        result = true;
                    }
                    if (res == undefined) {
                        result = true;
                    }
                    this.publishCaseResult(caseName, result);
                }
            });
        } else {
            this.context.getFocusElement(false, (err, res) => {
                console.info(caseName + "res: " + JSON.stringify(res));
                if (err.code != 0) {
                    console.error(caseName + "err: " + JSON.stringify(err.code));
                    result = true;
                }
                if (res == undefined) {
                    result = true;
                }
                this.publishCaseResult(caseName, result);
            });
        }
    }

    private async getFocusElementByTypePromise(caseName: string, hasFocus: boolean, isAccessibilityFocus: boolean) {
        let result = false;
        if (isAccessibilityFocus) {
            this.context.getFocusElement(true).then(async (res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (hasFocus) {
                    let value = await res.attributeValue('componentId');
                    console.info(caseName + "value: " + JSON.stringify(value));
                    if (typeof(value) == 'number') {
                        result = true;
                    }
                    this.publishCaseResult(caseName, result);
                } else {
                    if (res == undefined) {
                        result = true;
                    }
                    this.publishCaseResult(caseName, result);
                }
            }).catch((err) => {
                console.error(caseName + 'error:' + JSON.stringify(err));
                if (!hasFocus) {
                    result = true;
                }
                this.publishCaseResult(caseName, result);
            });
        } else {
            this.context.getFocusElement(false).then(async (res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (res == undefined) {
                    result = true;
                }
                this.publishCaseResult(caseName, result);
            }).catch((err) => {
                result = true;
                console.error(caseName + 'error:' + JSON.stringify(err));
                this.publishCaseResult(caseName, result);
            });
        }
    }

    private async gestureInjectCallback(caseName: string, gesturePath: object) {
        let result = false;
        if (gesturePath == undefined) {
            this.context.gestureInject(gesturePath, () => {}, (err, res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (err.code != 0) {
                    console.error(caseName + " err: " + JSON.stringify(err.code));
                    result = true;
                }
                if (res == undefined) {
                    result = true;
                }
                this.publishCaseResult(caseName, result);
            });
        } else {
            this.context.gestureInject(gesturePath, () => {}, (err, res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (err.code != 0) {
                    console.error(caseName + " err: " + JSON.stringify(err.code));
                }
                if (typeof(res) == 'boolean') {
                    result = true;
                }
                if (res == undefined) {
                    result = false;
                }
                this.publishCaseResult(caseName, result);
            });
        }
    }

 
    private async gestureInjectPromise(caseName: string, gesturePath: object) {
        let result = false;
        if (gesturePath == undefined) {
            this.context.gestureInject(gesturePath, () => {}).then((res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (res == undefined) {
                    result = true;
                }
                this.publishCaseResult(caseName, result);
            }).catch ((err) => {
                console.error(caseName + 'error:' + JSON.stringify(err));
                result = true;
                this.publishCaseResult(caseName, result);
            });
        } else {
            this.context.gestureInject(gesturePath, () => {}).then((res) => {
                console.info(caseName + " res: " + JSON.stringify(res));
                if (typeof(res) == 'boolean') {
                    result = true;
                }
                if (res == undefined) {
                    result = false;
                }
                this.publishCaseResult(caseName, result);
            }).catch ((err) => {
                console.error(caseName + 'error:' + JSON.stringify(err));
                this.publishCaseResult(caseName, result);
            });
        }
    }
}