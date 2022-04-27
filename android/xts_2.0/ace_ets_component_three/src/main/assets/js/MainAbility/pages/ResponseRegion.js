/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/ResponseRegion.ets?entry ***!
  \************************************************************************************************************************************************/
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
class ResponseRegionExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__touchable = new ObservedPropertySimple(false, this, "touchable");
        this.__isTouched = new ObservedPropertySimple(false, this, "isTouched");
        this.__eventType = new ObservedPropertySimple('', this, "eventType");
        this.ChangCallBack = (eventData) => {
            console.info("[ResponseRegion] ChangCallBack stateChangCallBack");
            if (eventData != null) {
                console.info("[ResponseRegion] ChangCallBack state change called:" + JSON.stringify(eventData));
                if (eventData.data.touchable != null) {
                    this.touchable = eventData.data.touchable;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.touchable !== undefined) {
            this.touchable = params.touchable;
        }
        if (params.isTouched !== undefined) {
            this.isTouched = params.isTouched;
        }
        if (params.eventType !== undefined) {
            this.eventType = params.eventType;
        }
        if (params.ChangCallBack !== undefined) {
            this.ChangCallBack = params.ChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__touchable.aboutToBeDeleted();
        this.__isTouched.aboutToBeDeleted();
        this.__eventType.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get touchable() {
        return this.__touchable.get();
    }
    set touchable(newValue) {
        this.__touchable.set(newValue);
    }
    get isTouched() {
        return this.__isTouched.get();
    }
    set isTouched(newValue) {
        this.__isTouched.set(newValue);
    }
    get eventType() {
        return this.__eventType.get();
    }
    set eventType(newValue) {
        this.__eventType.set(newValue);
    }
    onPageShow() {
        let ChangeEvent = {
            eventId: 30
        };
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.height('100%');
        Column.margin({ top: 5 });
        Column.key('region');
        Column.touchable(this.touchable);
        Column.onTouch((event) => {
            this.isTouched = true;
            if (event.type === TouchType.Down) {
                this.eventType = 'Down';
            }
            if (event.type === TouchType.Up) {
                this.eventType = 'Up';
            }
            if (event.type === TouchType.Move) {
                this.eventType = 'Move';
            }
            console.info('[ResponseRegion] TouchType:' + this.eventType);
            try {
                var backData = {
                    data: {
                        "ACTION": this.isTouched,
                        "EVENT_TYPE": this.eventType
                    }
                };
                var backEvent = {
                    eventId: 31
                };
                console.info("[ResponseRegion] start to emit action state");
            }
            catch (err) {
                console.info("[ResponseRegion] emit action state err: " + JSON.stringify(err.message));
            }
        });
        Toggle.create({ type: ToggleType.Checkbox, isOn: true });
        Toggle.selectedColor(0x39a2db);
        Toggle.backgroundColor(0xAFEEEE);
        Toggle.responseRegion({ x: 1.0, y: 1.0, width: 400, height: 400 });
        Toggle.onChange((isOn) => {
            console.info('[ResponseRegion] Component status:' + isOn);
        });
        Toggle.pop();
        Column.pop();
    }
}
loadDocument(new ResponseRegionExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=ResponseRegion.js.map