/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\animatorOption.ets?entry ***!
  \*************************************************************************************************************/
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
var animator = globalThis.requireNapi('animator') || (isSystemplugin('animator', 'ohos') ? globalThis.ohosplugin.animator : isSystemplugin('animator', 'system') ? globalThis.systemplugin.animator : undefined);
var prompt = isSystemplugin('prompt', 'system') ? globalThis.systemplugin.prompt : globalThis.requireNapi('prompt');
class ColumnExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__divWidth = new ObservedPropertySimple(120, this, "divWidth");
        this.__divHeight = new ObservedPropertySimple(120, this, "divHeight");
        this.__animation = new ObservedPropertyObject(animator.createAnimator({
            duration: 3000,
            fill: 'forwards',
            direction: "normal",
            begin: 200,
            end: 270
        }), this, "animation");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.divWidth !== undefined) {
            this.divWidth = params.divWidth;
        }
        if (params.divHeight !== undefined) {
            this.divHeight = params.divHeight;
        }
        if (params.animation !== undefined) {
            this.animation = params.animation;
        }
    }
    aboutToBeDeleted() {
        this.__divWidth.aboutToBeDeleted();
        this.__divHeight.aboutToBeDeleted();
        this.__animation.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get divWidth() {
        return this.__divWidth.get();
    }
    set divWidth(newValue) {
        this.__divWidth.set(newValue);
    }
    get divHeight() {
        return this.__divHeight.get();
    }
    set divHeight(newValue) {
        this.__divHeight.set(newValue);
    }
    get animation() {
        return this.__animation.get();
    }
    set animation(newValue) {
        this.__animation.set(newValue);
    }
    onPageShow() {
        this.animation.onrepeat(() => {
            var repeatoptions = {
                duration: 2000,
                iterations: 1,
                direction: 'alternate',
                begin: 180,
                end: 240
            };
            this.animation.update(repeatoptions);
            this.animation.play();
        });
    }
    render() {
        Column.create();
        Column.create();
        Column.width('100%');
        Column.padding({ top: 5 });
        Column.create();
        Column.width('100%');
        Column.create();
        Column.width(this.divWidth);
        Column.height(this.divHeight);
        Column.backgroundColor(0xAFEEEE);
        Column.pop();
        Column.pop();
        Column.pop();
        Column.create();
        Column.margin({ top: 30 });
        Row.create();
        Row.margin({ top: 5 });
        Button.createWithLabel('play');
        Button.borderRadius(8);
        Button.backgroundColor(0x317aff);
        Button.width(90);
        Button.onClick(() => {
            this.animation.onframe((value) => {
                this.divWidth = value;
                this.divHeight = value;
            });
            this.animation.play();
        });
        Button.pop();
        Button.createWithLabel('update');
        Button.borderRadius(8);
        Button.backgroundColor(0x317aff);
        Button.width(90);
        Button.onClick(() => {
            var newoptions = {
                duration: 5000,
                iterations: 2,
                begin: 120,
                end: 180
            };
            this.animation.update(newoptions);
            this.animation.play();
        });
        Button.pop();
        Row.pop();
        Row.create();
        Row.margin({ top: 5 });
        Button.createWithLabel('pause');
        Button.borderRadius(8);
        Button.backgroundColor(0x317aff);
        Button.width(90);
        Button.onClick(() => {
            this.animation.pause();
        });
        Button.pop();
        Button.createWithLabel('finish');
        Button.borderRadius(8);
        Button.backgroundColor(0x317aff);
        Button.width(90);
        Button.onClick(() => {
            this.animation.onfinish(() => {
                prompt.showToast({
                    message: 'finish'
                });
            });
            this.animation.finish();
        });
        Button.pop();
        Row.pop();
        Row.create();
        Row.margin({ top: 5 });
        Button.createWithLabel('cancel');
        Button.borderRadius(8);
        Button.backgroundColor(0x317aff);
        Button.width(90);
        Button.onClick(() => {
            this.animation.cancel();
        });
        Button.pop();
        Button.createWithLabel('reverse');
        Button.borderRadius(8);
        Button.backgroundColor(0x317aff);
        Button.width(90);
        Button.onClick(() => {
            this.animation.reverse();
        });
        Button.pop();
        Row.pop();
        Column.pop();
        Column.pop();
    }
}
loadDocument(new ColumnExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=animatorOption.js.map