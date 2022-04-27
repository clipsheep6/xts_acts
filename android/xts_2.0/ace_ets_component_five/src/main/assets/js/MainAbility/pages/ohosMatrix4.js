/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
/******/ 	var __webpack_modules__ = ({

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\pages\\ohosMatrix4.ets?entry":
/*!*********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\ohosMatrix4.ets?entry ***!
  \*********************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
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
var _ohos_matrix4_1  = globalThis.requireNativeModule('ohos.matrix4');
var _system_prompt_1  = isSystemplugin('prompt', 'system') ? globalThis.systemplugin.prompt : globalThis.requireNapi('prompt');
class ohosMatrix4 extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__rotateValue = new ObservedPropertyObject({
            x: 1,
            y: 1,
            z: 1,
            centerX: '50%',
            centerY: '50%',
            angle: 300
        }, this, "rotateValue");
        this.__translateValue = new ObservedPropertyObject({ x: 100, y: 5 }, this, "translateValue");
        this.__scaleValue = new ObservedPropertyObject({ x: 2, y: 0.5 }, this, "scaleValue");
        this.__transformValue = new ObservedPropertyObject(_ohos_matrix4_1.identity().translate({ x: 100, y: 100, z: 30 }), this, "transformValue");
        this.__transformValue = new ObservedPropertyObject(_ohos_matrix4_1.identity().translate({ x: 100, y: 100, z: 30 }), this, "transformValue");
        this.__matrix1 = new ObservedPropertyObject(_ohos_matrix4_1.identity().transformPoint([100, 10]), this, "matrix1");
        this.__matrix2 = new ObservedPropertyObject(_ohos_matrix4_1.identity().translate({ x: 300 }).copy(), this, "matrix2");
        this.__matrix3 = new ObservedPropertyObject(_ohos_matrix4_1.identity().scale({ x: 3 }).copy(), this, "matrix3");
        this.__matrix4 = new ObservedPropertyObject(_ohos_matrix4_1.identity().rotate({ x: 1, y: 1, z: 2, angle: 30 }), this, "matrix4");
        this.__matrix5 = new ObservedPropertyObject(_ohos_matrix4_1.identity().scale({ x: 5, y: 1, z: 1, centerX: 50, centerY: 50 }), this, "matrix5");
        this.__matrix6 = new ObservedPropertyObject(_ohos_matrix4_1.identity().translate({ x: 100, y: 200, z: 30 }), this, "matrix6");
        this.stateChangCallBack = (eventData) => {
            console.info("transFormExample page state change called:" + JSON.stringify(eventData));
            if (eventData != null) {
                console.info("eventData value is");
                if (eventData.data.matrix2 != null && eventData.data.matrix3 != null) {
                    console.info("this.matrix2 value is" + _ohos_matrix4_1.identity()
                        .translate(eventData.data.matrix2)
                        .copy() + "2" + JSON.stringify(_ohos_matrix4_1.identity().translate(eventData.data.matrix2).copy()));
                    this.matrix2 = _ohos_matrix4_1.identity().translate(eventData.data.matrix2).copy();
                    console.info("this.matrix3 value is");
                    this.matrix3 = _ohos_matrix4_1.identity().scale(eventData.data.matrix3).copy();
                }
                else {
                    console.info("this.matrix value is not");
                }
                if (eventData.data.rotateValue != null) {
                    this.rotateValue = JSON.parse(eventData.data.rotateValue);
                }
                if (eventData.data.scaleValue != null) {
                    this.scaleValue = JSON.parse(eventData.data.scaleValue);
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.rotateValue !== undefined) {
            this.rotateValue = params.rotateValue;
        }
        if (params.translateValue !== undefined) {
            this.translateValue = params.translateValue;
        }
        if (params.scaleValue !== undefined) {
            this.scaleValue = params.scaleValue;
        }
        if (params.transformValue !== undefined) {
            this.transformValue = params.transformValue;
        }
        if (params.transformValue !== undefined) {
            this.transformValue = params.transformValue;
        }
        if (params.matrix1 !== undefined) {
            this.matrix1 = params.matrix1;
        }
        if (params.matrix2 !== undefined) {
            this.matrix2 = params.matrix2;
        }
        if (params.matrix3 !== undefined) {
            this.matrix3 = params.matrix3;
        }
        if (params.matrix4 !== undefined) {
            this.matrix4 = params.matrix4;
        }
        if (params.matrix5 !== undefined) {
            this.matrix5 = params.matrix5;
        }
        if (params.matrix6 !== undefined) {
            this.matrix6 = params.matrix6;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__rotateValue.aboutToBeDeleted();
        this.__translateValue.aboutToBeDeleted();
        this.__scaleValue.aboutToBeDeleted();
        this.__transformValue.aboutToBeDeleted();
        this.__transformValue.aboutToBeDeleted();
        this.__matrix1.aboutToBeDeleted();
        this.__matrix2.aboutToBeDeleted();
        this.__matrix3.aboutToBeDeleted();
        this.__matrix4.aboutToBeDeleted();
        this.__matrix5.aboutToBeDeleted();
        this.__matrix6.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get rotateValue() {
        return this.__rotateValue.get();
    }
    set rotateValue(newValue) {
        this.__rotateValue.set(newValue);
    }
    get translateValue() {
        return this.__translateValue.get();
    }
    set translateValue(newValue) {
        this.__translateValue.set(newValue);
    }
    get scaleValue() {
        return this.__scaleValue.get();
    }
    set scaleValue(newValue) {
        this.__scaleValue.set(newValue);
    }
    get transformValue() {
        return this.__transformValue.get();
    }
    set transformValue(newValue) {
        this.__transformValue.set(newValue);
    }
    get transformValue() {
        return this.__transformValue.get();
    }
    set transformValue(newValue) {
        this.__transformValue.set(newValue);
    }
    get matrix1() {
        return this.__matrix1.get();
    }
    set matrix1(newValue) {
        this.__matrix1.set(newValue);
    }
    get matrix2() {
        return this.__matrix2.get();
    }
    set matrix2(newValue) {
        this.__matrix2.set(newValue);
    }
    get matrix3() {
        return this.__matrix3.get();
    }
    set matrix3(newValue) {
        this.__matrix3.set(newValue);
    }
    get matrix4() {
        return this.__matrix4.get();
    }
    set matrix4(newValue) {
        this.__matrix4.set(newValue);
    }
    get matrix5() {
        return this.__matrix5.get();
    }
    set matrix5(newValue) {
        this.__matrix5.set(newValue);
    }
    get matrix6() {
        return this.__matrix6.get();
    }
    set matrix6(newValue) {
        this.__matrix6.set(newValue);
    }
    onPageShow() {
        console.info('transFormExample page show called');
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.margin({ top: 5 });
        Text.create('rotate');
        Text.width('10%');
        Text.fontColor(0xCCCCCC);
        Text.padding(5);
        Text.fontSize(5);
        Text.pop();
        Row.create();
        Row.rotate(ObservedObject.GetRawObject(this.rotateValue));
        Row.width(10);
        Row.height(10);
        Row.backgroundColor(0xAFEEEE);
        Row.key('rotate');
        Row.pop();
        Text.create('translate');
        Text.width('10%');
        Text.fontColor(0xCCCCCC);
        Text.padding(5);
        Text.fontSize(5);
        Text.pop();
        Row.create();
        Row.translate(ObservedObject.GetRawObject(this.transformValue));
        Row.width(10);
        Row.height(10);
        Row.backgroundColor(0xAFEEEE);
        Row.margin({ bottom: 10 });
        Row.key('rotate2');
        Row.pop();
        Text.create('scale');
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.padding(5);
        Text.fontSize(5);
        Text.pop();
        Row.create();
        Row.scale(ObservedObject.GetRawObject(this.scaleValue));
        Row.width(10);
        Row.height(10);
        Row.backgroundColor(0xAFEEEE);
        Row.key('rotate3');
        Row.pop();
        Text.create('Matrix4');
        Text.width('10%');
        Text.fontColor(0xCCCCCC);
        Text.padding(5);
        Text.fontSize(5);
        Text.pop();
        Row.create();
        Row.width(10);
        Row.height(10);
        Row.backgroundColor(0xAFEEEE);
        Row.transform(_ohos_matrix4_1.identity().translate({ x: 100, y: 100, z: 30 }));
        Row.key('rotate4');
        Row.pop();
        Button.createWithLabel("get Point");
        Button.padding(40);
        Button.onClick(() => {
            _system_prompt_1.showToast({ message: JSON.stringify(ObservedObject.GetRawObject(this.matrix1)), duration: 200 });
            this.onClickValue = true;
        });
        Button.backgroundColor(0x2788D9);
        Button.key('rotate5');
        Button.pop();
        Image.create('/images/bg.jpg');
        Image.padding(5);
        Image.transform(this.matrix2.combine(ObservedObject.GetRawObject(this.matrix3)));
        Image.width("40%");
        Image.height(100);
        Image.margin({ top: 5 });
        Image.key('rotate6');
        Image.create('/images/bg.jpg');
        Image.transform(ObservedObject.GetRawObject(this.matrix4));
        Image.padding(5);
        Image.width("40%");
        Image.height(100);
        Image.key('rotate7');
        Image.create('/images/bg.jpg');
        Image.transform(ObservedObject.GetRawObject(this.matrix5));
        Image.padding(5);
        Image.width("40%");
        Image.height(100);
        Image.key('rotate8');
        Image.create('/images/bg.jpg');
        Image.transform(ObservedObject.GetRawObject(this.matrix6));
        Image.width("40%");
        Image.height(100);
        Image.key('rotate9');
        Column.pop();
    }
}
loadDocument(new ohosMatrix4("1", undefined, {}));


/***/ })

/******/ 	});
/************************************************************************/
/******/ 	
/******/ 	// startup
/******/ 	// Load entry module and return exports
/******/ 	// This entry module is referenced by other modules so it can't be inlined
/******/ 	var __webpack_exports__ = {};
/******/ 	__webpack_modules__["C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\pages\\ohosMatrix4.ets?entry"](0, __webpack_exports__);
/******/ 	
/******/ })()
;
//# sourceMappingURL=ohosMatrix4.js.map