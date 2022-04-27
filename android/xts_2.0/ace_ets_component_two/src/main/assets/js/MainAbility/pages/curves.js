/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\curves.ets?entry ***!
  \*****************************************************************************************************/
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
var Curves = globalThis.requireNativeModule('ohos.curves');
class ImageComponent extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__widthSize = new ObservedPropertySimple(200, this, "widthSize");
        this.__heightSize = new ObservedPropertySimple(200, this, "heightSize");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.widthSize !== undefined) {
            this.widthSize = params.widthSize;
        }
        if (params.heightSize !== undefined) {
            this.heightSize = params.heightSize;
        }
    }
    aboutToBeDeleted() {
        this.__widthSize.aboutToBeDeleted();
        this.__heightSize.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get widthSize() {
        return this.__widthSize.get();
    }
    set widthSize(newValue) {
        this.__widthSize.set(newValue);
    }
    get heightSize() {
        return this.__heightSize.get();
    }
    set heightSize(newValue) {
        this.__heightSize.set(newValue);
    }
    render() {
        Column.create();
        Column.width("100%");
        Column.height("100%");
        Text.create();
        Context.animation({ duration: 2000, curve: Curves.spring(0.25, 0.1, 0.25, 1.0) });
        Text.margin({ top: 100 });
        Text.width(this.widthSize);
        Text.height(this.heightSize);
        Text.backgroundColor(Color.Red);
        Text.onClick(() => {
            let curve = Curves.cubicBezier(0.25, 0.1, 0.25, 1.0);
            let curve1 = Curves.init();
            let curve2 = Curves.Curve.EaseIn(0.42, 0.0, 1.0, 1.0);
            let curve3 = Curves.Curve.EaseOut(0.0, 0.0, 0.58, 1.0);
            let curve4 = Curves.Curve.EaseInOut(0.42, 0.0, 0.58, 1.0);
            let curve5 = Curves.FastOutSlowIn(0.4, 0.0, 0.2, 1.0);
            let curve6 = Curves.LinearOutSlowIn(0.0, 0.0, 0.2, 1.0);
            let curve7 = Curves.FastOutLinearIn(0.4, 0.0, 1.0, 1.0);
            let curve8 = Curves.ExtremeDeceleration(0.0, 0.0, 0.0, 1.0);
            let curve9 = Curves.Sharp(0.33, 0.0, 0.67, 1.0);
            let curve10 = Curves.Rhythm(0.7, 0.0, 0.2, 1.0);
            let curve11 = Curves.cubicBezier(0.1, 0.0, 0.1, 1.0);
            let curve12 = Curves.spring(100, 1, 228, 30);
            this.widthSize = curve.interpolate(0.5) * this.widthSize;
            this.heightSize = curve.interpolate(0.5) * this.heightSize;
        });
        Context.animation(null);
        Text.pop();
        Column.pop();
    }
}
loadDocument(new ImageComponent("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=curves.js.map