/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/scrollCode.ets?entry ***!
  \********************************************************************************************************************************************/
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
class scrollCode extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__scrollable = new ObservedPropertySimple(ScrollDirection.Vertical, this, "scrollable");
        this.__scrollBar = new ObservedPropertySimple(BarState.On, this, "scrollBar");
        this.__scrollBarColor = new ObservedPropertySimple("#FF0000FF", this, "scrollBarColor");
        this.__scrollBarWidth = new ObservedPropertySimple(30, this, "scrollBarWidth");
        this.scroller = new Scroller();
        this.arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("scrollCode page state change called:" + JSON.stringify(eventData));
                var scrollableValue = eventData.data.scrollable;
                console.info("scrollableValue:" + scrollableValue);
                if (scrollableValue != null && scrollableValue.length != 0) {
                    this.scrollable = scrollableValue;
                    console.info("this.scrollable:" + this.scrollable);
                }
                else {
                    console.info("scrollableValue is null or empty " + scrollableValue);
                }
                var scrollBarValue = eventData.data.scrollBar;
                console.info("scrollBarValue:" + scrollBarValue);
                if (scrollBarValue != null && scrollBarValue.length != 0) {
                    this.scrollBar = scrollBarValue;
                    console.info("this.scrollBar:" + this.scrollBar);
                }
                else {
                    console.info("scrollBarValue is null or empty " + scrollBarValue);
                }
                var scrollBarColorValue = eventData.data.scrollBarColor;
                console.info("scrollBarColorValue:" + scrollBarColorValue);
                if (scrollBarColorValue != null && scrollBarColorValue.length != 0) {
                    this.scrollBarColor = scrollBarColorValue;
                    console.info("this.scrollBarColor:" + this.scrollBarColor);
                }
                else {
                    console.info("scrollBarColorValue is null or empty " + scrollBarColorValue);
                }
                var scrollBarWidthValue = eventData.data.scrollBarWidth;
                console.info("scrollBarWidthValue:" + scrollBarWidthValue);
                if (scrollBarWidthValue != null && scrollBarWidthValue.length != 0) {
                    this.scrollBarWidth = scrollBarWidthValue;
                    console.info("this.scrollBarWidth:" + this.scrollBarWidth);
                }
                else {
                    console.info("scrollBarWidthValue is null or empty " + scrollBarWidthValue);
                }
            }
            else {
                console.info("scrollCode page color not change called:" + JSON.stringify(eventData));
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.scrollable !== undefined) {
            this.scrollable = params.scrollable;
        }
        if (params.scrollBar !== undefined) {
            this.scrollBar = params.scrollBar;
        }
        if (params.scrollBarColor !== undefined) {
            this.scrollBarColor = params.scrollBarColor;
        }
        if (params.scrollBarWidth !== undefined) {
            this.scrollBarWidth = params.scrollBarWidth;
        }
        if (params.scroller !== undefined) {
            this.scroller = params.scroller;
        }
        if (params.arr !== undefined) {
            this.arr = params.arr;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__scrollable.aboutToBeDeleted();
        this.__scrollBar.aboutToBeDeleted();
        this.__scrollBarColor.aboutToBeDeleted();
        this.__scrollBarWidth.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get scrollable() {
        return this.__scrollable.get();
    }
    set scrollable(newValue) {
        this.__scrollable.set(newValue);
    }
    get scrollBar() {
        return this.__scrollBar.get();
    }
    set scrollBar(newValue) {
        this.__scrollBar.set(newValue);
    }
    get scrollBarColor() {
        return this.__scrollBarColor.get();
    }
    set scrollBarColor(newValue) {
        this.__scrollBarColor.set(newValue);
    }
    get scrollBarWidth() {
        return this.__scrollBarWidth.get();
    }
    set scrollBarWidth(newValue) {
        this.__scrollBarWidth.set(newValue);
    }
    onPageShow() {
        console.info('scrollCode page show called');
        var stateChangeEvent = {
            eventId: 185
        };
        var stateChangeEvent = {
            eventId: 186
        };
        var stateChangeEvent = {
            eventId: 187
        };
        var stateChangeEvent = {
            eventId: 188
        };
    }
    render() {
        Stack.create({ alignContent: Alignment.TopStart });
        Stack.width('100%');
        Stack.height('100%');
        Stack.backgroundColor(0xDCDCDC);
        Scroll.create(this.scroller);
        Scroll.key("ScrollCode");
        Scroll.scrollable(this.scrollable);
        Scroll.scrollBar(this.scrollBar);
        Scroll.scrollBarColor(this.scrollBarColor);
        Scroll.scrollBarWidth(this.scrollBarWidth);
        Scroll.onScroll((xOffset, yOffset) => {
            console.info(xOffset + ' ' + yOffset);
        });
        Scroll.onScrollEdge((side) => {
            console.info('To the edge');
        });
        Scroll.onScrollEnd(() => {
            console.info('Scroll Stop');
        });
        Column.create();
        Column.width('100%');
        ForEach.create("2", this, ObservedObject.GetRawObject(this.arr), (item) => {
            Text.create(item.toString());
            Text.width('90%');
            Text.height(150);
            Text.backgroundColor(0xFFFFFF);
            Text.borderRadius(15);
            Text.fontSize(16);
            Text.textAlign(TextAlign.Center);
            Text.margin({ top: 10 });
            Text.pop();
        }, item => item);
        ForEach.pop();
        Column.pop();
        Scroll.pop();
        Button.createWithLabel('scroll 100');
        Button.onClick(() => {
            this.scroller.scrollTo({ xOffset: 0, yOffset: this.scroller.currentOffset().yOffset + 100 });
        });
        Button.margin({ top: 170, left: 20 });
        Button.pop();
        Button.createWithLabel('back top');
        Button.onClick(() => {
            this.scroller.scrollEdge(Edge.Top);
        });
        Button.margin({ top: 120, left: 20 });
        Button.pop();
        Button.createWithLabel('next page');
        Button.backgroundColor(0x2788D9);
        Button.fontSize(20);
        Button.onClick((event) => {
            this.onClickValue = true;
            try {
                var backData = {
                    data: {
                        "scrollToIndex": 10,
                    }
                };
                var backEvent = {
                    eventId: 189
                };
                console.info("click to emit action state");
            }
            catch (err) {
                console.info("click action state err: " + JSON.stringify(err.message));
            }
            this.scroller.scrollPage({ next: true });
        });
        Button.key('button');
        Button.margin({ top: 10, left: 20 });
        Button.pop();
        Stack.pop();
    }
}
loadDocument(new scrollCode("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=scrollCode.js.map