/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/circle.ets?entry ***!
  \****************************************************************************************************************************************/
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
 */ ;
class CircleExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__width = new ObservedPropertySimple("450px", this, "width");
        this.__height = new ObservedPropertySimple("450px", this, "height");
        this.stateChangCallBack = (eventData) => {
            console.info("[circle] page stateChangCallBack");
            if (eventData != null) {
                console.info("[circle] page state change called:" + JSON.stringify(eventData));
                if (eventData.data.height != null) {
                    this.height = eventData.data.height;
                }
                if (eventData.data.width != null) {
                    this.width = eventData.data.width;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.width !== undefined) {
            this.width = params.width;
        }
        if (params.height !== undefined) {
            this.height = params.height;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__width.aboutToBeDeleted();
        this.__height.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get width() {
        return this.__width.get();
    }
    set width(newValue) {
        this.__width.set(newValue);
    }
    get height() {
        return this.__height.get();
    }
    set height(newValue) {
        this.__height.set(newValue);
    }
    onPageShow() {
        console.info('[circle] page show called');
        var stateChangeEvent = {
            eventId: 77
        };
        console.info('[circle] page show calledA');
    }
    render() {
        Flex.create({ justifyContent: FlexAlign.SpaceAround });
        Flex.width('100%');
        Flex.height('100%');
        Flex.margin({ top: 5 });
        Circle.create({ width: 150, height: 150 });
        Circle.create();
        Circle.width(`${this.width}`);
        Circle.height(`${this.height}`);
        Circle.key('circle');
        Flex.pop();
    }
}
loadDocument(new CircleExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=circle.js.map