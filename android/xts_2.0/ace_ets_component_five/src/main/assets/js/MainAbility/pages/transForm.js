/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
/******/ 	var __webpack_modules__ = ({

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\pages\\transForm.ets?entry":
/*!*******************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\transForm.ets?entry ***!
  \*******************************************************************************************************************************/
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
class TransformExample extends View {
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
        this.stateChangCallBack = (eventData) => {
            console.info("transFormExample page state change called:" + JSON.stringify(eventData));
            if (eventData != null) {
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
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__rotateValue.aboutToBeDeleted();
        this.__translateValue.aboutToBeDeleted();
        this.__scaleValue.aboutToBeDeleted();
        this.__transformValue.aboutToBeDeleted();
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
    onPageShow() {
        console.info('transFormExample page show called');
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.margin({ top: 5 });
        Text.create('rotate');
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.padding(15);
        Text.fontSize(30);
        Text.pop();
        Row.create();
        Row.rotate(ObservedObject.GetRawObject(this.rotateValue));
        Row.width(100);
        Row.height(100);
        Row.backgroundColor(0xAFEEEE);
        Row.key('rotate');
        Row.pop();
        Text.create('translate');
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.padding(10);
        Text.fontSize(30);
        Text.pop();
        Row.create();
        Row.translate(ObservedObject.GetRawObject(this.transformValue));
        Row.width(100);
        Row.height(100);
        Row.backgroundColor(0xAFEEEE);
        Row.margin({ bottom: 10 });
        Row.key('rotate2');
        Row.pop();
        Text.create('scale');
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.padding(15);
        Text.fontSize(30);
        Text.pop();
        Row.create();
        Row.scale(ObservedObject.GetRawObject(this.scaleValue));
        Row.width(100);
        Row.height(100);
        Row.backgroundColor(0xAFEEEE);
        Row.key('rotate3');
        Row.pop();
        Text.create('Matrix4');
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.padding(15);
        Text.fontSize(30);
        Text.pop();
        Row.create();
        Row.width(100);
        Row.height(100);
        Row.backgroundColor(0xAFEEEE);
        Row.transform(_ohos_matrix4_1.identity().translate({ x: 100, y: 100, z: 30 }));
        Row.key('rotate4');
        Row.pop();
        Column.pop();
    }
}
loadDocument(new TransformExample("1", undefined, {}));


/***/ })

/******/ 	});
/************************************************************************/
/******/ 	
/******/ 	// startup
/******/ 	// Load entry module and return exports
/******/ 	// This entry module is referenced by other modules so it can't be inlined
/******/ 	var __webpack_exports__ = {};
/******/ 	__webpack_modules__["C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\pages\\transForm.ets?entry"](0, __webpack_exports__);
/******/ 	
/******/ })()
;
//# sourceMappingURL=transForm.js.map