/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/toggle.ets?entry ***!
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
class ToggleExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__selectedColor = new ObservedPropertySimple('#330A59F7', this, "selectedColor");
        this.__toggleType = new ObservedPropertySimple(ToggleType.Button, this, "toggleType");
        this.__isOn = new ObservedPropertySimple(false, this, "isOn");
        this.stateChangCallBack = (eventData) => {
            console.info("[toggle] page stateChangCallBack");
            if (eventData != null) {
                console.info("[toggle] page state change called:" + JSON.stringify(eventData));
                if (eventData.data.selectedColor != null) {
                    this.selectedColor = eventData.data.selectedColor;
                }
                if (eventData.data.toggleType != null) {
                    this.toggleType = eventData.data.toggleType;
                }
                if (eventData.data.isOn != null) {
                    this.isOn = eventData.data.isOn;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.selectedColor !== undefined) {
            this.selectedColor = params.selectedColor;
        }
        if (params.toggleType !== undefined) {
            this.toggleType = params.toggleType;
        }
        if (params.isOn !== undefined) {
            this.isOn = params.isOn;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__selectedColor.aboutToBeDeleted();
        this.__toggleType.aboutToBeDeleted();
        this.__isOn.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get selectedColor() {
        return this.__selectedColor.get();
    }
    set selectedColor(newValue) {
        this.__selectedColor.set(newValue);
    }
    get toggleType() {
        return this.__toggleType.get();
    }
    set toggleType(newValue) {
        this.__toggleType.set(newValue);
    }
    get isOn() {
        return this.__isOn.get();
    }
    set isOn(newValue) {
        this.__isOn.set(newValue);
    }
    onPageShow() {
        console.info('[toggle] page show called');
        var stateChangeEvent = {
            eventId: 231
        };
        var stateChangeEventOne = {
            eventId: 232
        };
        var stateChangeEventthree = {
            eventId: 1033
        };
        var stateChangeEventfour = {
            eventId: 1034
        };
        var stateChangeEventfive = {
            eventId: 1035
        };
        var stateChangeEventsix = {
            eventId: 1036
        };
    }
    render() {
        Column.create({ space: 10 });
        Column.width('100%');
        Column.padding(24);
        Text.create('type: Button');
        Text.fontSize(12);
        Text.fontColor(0xcccccc);
        Text.width('90%');
        Text.key('button');
        Text.pop();
        Flex.create({ justifyContent: FlexAlign.SpaceEvenly, alignItems: ItemAlign.Center });
        Toggle.create({ type: this.toggleType, isOn: this.isOn });
        Toggle.key('toggle');
        Toggle.selectedColor(this.selectedColor);
        Toggle.onChange((isOn) => {
            console.info('Component status:' + isOn);
        });
        Text.create('status button');
        Text.padding({ left: 12, right: 12 });
        Text.pop();
        Toggle.pop();
        Toggle.create({ type: ToggleType.Button, isOn: true });
        Toggle.selectedColor(0x39a2db);
        Toggle.onChange((isOn) => {
            console.info('Component status:' + isOn);
        });
        Text.create('status button');
        Text.padding({ left: 12, right: 12 });
        Text.pop();
        Toggle.pop();
        Flex.pop();
        Column.pop();
    }
}
loadDocument(new ToggleExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=toggle.js.map