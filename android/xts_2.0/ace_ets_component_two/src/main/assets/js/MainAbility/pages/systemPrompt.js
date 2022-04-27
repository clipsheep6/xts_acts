/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\systemPrompt.ets?entry ***!
  \***********************************************************************************************************/
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
var prompt = isSystemplugin('prompt', 'system') ? globalThis.systemplugin.prompt : globalThis.requireNapi('prompt');
class promptExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__text = new ObservedPropertySimple('item1', this, "text");
        this.__color = new ObservedPropertySimple('#000000', this, "color");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.text !== undefined) {
            this.text = params.text;
        }
        if (params.color !== undefined) {
            this.color = params.color;
        }
    }
    aboutToBeDeleted() {
        this.__text.aboutToBeDeleted();
        this.__color.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    get color() {
        return this.__color.get();
    }
    set color(newValue) {
        this.__color.set(newValue);
    }
    render() {
        Column.create();
        Button.createWithLabel('showActionMenu');
        Button.key('button1');
        Button.backgroundColor('#FF0B8FE2');
        Button.fontSize(20);
        Button.margin({ top: 20 });
        Button.onClick(() => {
            prompt.showActionMenu({
                title: 'Title Info',
                buttons: [
                    {
                        text: this.text,
                        color: this.color,
                    },
                ],
                success: function (data) {
                    console.log('dialog success callback，click button : ' + data.tapIndex);
                },
                fail: function (data) {
                    console.log('dialog fail callback' + data.errMsg);
                },
            });
        });
        Button.pop();
        Button.createWithLabel('showDialog');
        Button.key('button2');
        Button.backgroundColor('#FF0B8FE2');
        Button.fontSize(20);
        Button.margin({ top: 20 });
        Button.onClick(() => {
            prompt.showDialog({
                title: 'Title Info',
                message: 'Message Info',
                buttons: [
                    {
                        text: this.text,
                        color: this.color,
                    },
                ],
                success: function (data) {
                    console.log('dialog success callback，click button : ' + data.index);
                },
                cancel: function () {
                    console.log('dialog cancel callback');
                },
            });
        });
        Button.pop();
        Column.pop();
    }
}
loadDocument(new promptExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=systemPrompt.js.map