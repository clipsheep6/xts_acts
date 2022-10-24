/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/PanGesture.ets?entry ***!
  \********************************************************************************************************************************************/
// @ts-nocheck
/**
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
 */ ;
class PanGestureExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__offsetX = new ObservedPropertySimple(0, this, "offsetX");
        this.__offsetY = new ObservedPropertySimple(0, this, "offsetY");
        this.__touchable = new ObservedPropertySimple(true, this, "touchable");
        this.__isTouched = new ObservedPropertySimple(false, this, "isTouched");
        this.ChangCallBack = (eventData) => {
            console.info("[PanGesture] ChangCallBack stateChangCallBack");
            if (eventData != null) {
                console.info("[PanGesture] ChangCallBack state change called:" + JSON.stringify(eventData));
                if (eventData.data && eventData.data.touchable != null) {
                    this.touchable = eventData.data.touchable;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.offsetX !== undefined) {
            this.offsetX = params.offsetX;
        }
        if (params.offsetY !== undefined) {
            this.offsetY = params.offsetY;
        }
        if (params.touchable !== undefined) {
            this.touchable = params.touchable;
        }
        if (params.isTouched !== undefined) {
            this.isTouched = params.isTouched;
        }
        if (params.ChangCallBack !== undefined) {
            this.ChangCallBack = params.ChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__offsetX.aboutToBeDeleted();
        this.__offsetY.aboutToBeDeleted();
        this.__touchable.aboutToBeDeleted();
        this.__isTouched.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get offsetX() {
        return this.__offsetX.get();
    }
    set offsetX(newValue) {
        this.__offsetX.set(newValue);
    }
    get offsetY() {
        return this.__offsetY.get();
    }
    set offsetY(newValue) {
        this.__offsetY.set(newValue);
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
    onPageShow() {
        let ChangeEvent = {
            eventId: 23
        };
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.SpaceBetween });
        Flex.height(300);
        Flex.width(300);
        Flex.padding(20);
        Flex.border({ width: 1 });
        Flex.margin(80);
        Flex.key('PanGesture');
        Flex.translate({ x: this.offsetX, y: this.offsetY, z: 5 });
        Flex.touchable(this.touchable);
        Gesture.create(GesturePriority.Low);
        PanGesture.create({});
        PanGesture.setDirection(PanDirection.All);
        PanGesture.setDistance(1);
        PanGesture.setFingers(1);
        PanGesture.onActionStart((event) => {
            console.info('Pan start');
            console.log('PanGesture globalX' + event.globalX);
            console.log('PanGesture globalY' + event.globalY);
            console.log('PanGesture localX' + event.localX);
            console.log('PanGesture localY' + event.localY);
            console.log('PanGesture fingerList' + event.fingerList);
            console.log('PanGesture FingerInfo' + event.fingerList.FingerInfo);
            console.log('PanGesture speed' + event.speed);
            console.log('PanGesture pinchCenterX' + event.pinchCenterX);
            console.log('PanGesture pinchCenterY' + event.pinchCenterY);
        });
        PanGesture.onActionUpdate((event) => {
            this.offsetX = event.offsetX;
            this.offsetY = event.offsetY;
        });
        PanGesture.onActionEnd(() => {
            console.info('Pan end');
        });
        PanGesture.onTouch((event) => {
            console.log('[PanGesture] TouchType start');
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
            console.info('[PanGesture] TouchType:' + this.eventType);
            try {
                var backData = {
                    data: {
                        "ACTION": this.isTouched,
                        "EVENT_TYPE": this.eventType
                    }
                };
                var backEvent = {
                    eventId: 24
                };
                console.info("[PanGesture] start to emit action state");
            }
            catch (err) {
                console.info("[PanGesture] emit action state err: " + JSON.stringify(err.message));
            }
        });
        PanGesture.pop();
        Gesture.pop();
        Text.create('PanGesture offset:\nX: ' + this.offsetX + '\n' + 'Y: ' + this.offsetY);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new PanGestureExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=PanGesture.js.map