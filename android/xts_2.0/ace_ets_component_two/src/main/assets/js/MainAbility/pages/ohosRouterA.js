/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\ohosRouterA.ets?entry ***!
  \**********************************************************************************************************/
// @ts-nocheck
/**
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
var router = globalThis.requireNativeModule('system.router');
class OhosRouterA extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.width('100%');
        Flex.height('100%');
        Text.create('A Page');
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Button.createWithLabel('Push');
        Button.key('pushButtonA');
        Button.backgroundColor('#FF0B8FE2');
        Button.fontSize(20);
        Button.margin({ top: 20 });
        Button.onClick(() => {
            router.push({
                uri: 'pages/ohosRouterB',
                params: {
                    data: 'B Page'
                }
            });
        });
        Button.pop();
        Button.createWithLabel('back');
        Button.key('pushButtonA');
        Button.backgroundColor('#FF0B8FE2');
        Button.fontSize(20);
        Button.margin({ top: 20 });
        Button.onClick(() => {
            router.push({
                uri: 'pages/ohosRouterB',
                params: {
                    data: 'B Page'
                }
            });
        });
        Button.pop();
        Button.createWithLabel('clear');
        Button.key('pushButtonA');
        Button.backgroundColor('#FF0B8FE2');
        Button.fontSize(20);
        Button.margin({ top: 20 });
        Button.onClick(() => {
            router.push({
                uri: 'pages/ohosRouterB',
                params: {
                    data: 'B Page'
                }
            });
        });
        Button.pop();
        Button.createWithLabel('getLength');
        Button.key('pushButtonA');
        Button.backgroundColor('#FF0B8FE2');
        Button.fontSize(20);
        Button.margin({ top: 20 });
        Button.onClick(() => {
            router.push({
                uri: 'pages/ohosRouterB',
                params: {
                    data: 'B Page'
                }
            });
        });
        Button.pop();
        Button.createWithLabel('enableAlertBeforeBackPage');
        Button.key('pushButtonA');
        Button.backgroundColor('#FF0B8FE2');
        Button.fontSize(20);
        Button.margin({ top: 20 });
        Button.onClick(() => {
            router.push({
                uri: 'pages/ohosRouterB',
                params: {
                    data: 'B Page'
                }
            });
        });
        Button.pop();
        Button.createWithLabel('disableAlertBeforeBackPage');
        Button.key('pushButtonA');
        Button.backgroundColor('#FF0B8FE2');
        Button.fontSize(20);
        Button.margin({ top: 20 });
        Button.onClick(() => {
            router.push({
                uri: 'pages/ohosRouterB',
                params: {
                    data: 'B Page'
                }
            });
        });
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new OhosRouterA("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=ohosRouterA.js.map