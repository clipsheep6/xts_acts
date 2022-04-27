/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***********************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\swiper.ets?entry ***!
  \***********************************************************************************************************************/
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
class MyDataSource {
    constructor(list) {
        this.list = [];
        this.list = list;
    }
    totalCount() {
        return this.list.length;
    }
    getData(index) {
        return this.list[index];
    }
    registerDataChangeListener(listener) {
        this.listener = listener;
    }
    unregisterDataChangeListener() {
    }
}
class SwiperExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.swiperController = new SwiperController();
        this.data = new MyDataSource([]);
        this.__index = new ObservedPropertySimple(1, this, "index");
        this.__displayCount = new ObservedPropertySimple(3, this, "displayCount");
        this.__displayMode = new ObservedPropertySimple(SwiperDisplayMode.AutoLinear, this, "displayMode");
        this.__edgeEffect = new ObservedPropertySimple(EdgeEffect.None, this, "edgeEffect");
        this.__autoPlay = new ObservedPropertySimple(true, this, "autoPlay");
        this.__interval = new ObservedPropertySimple(4000, this, "interval");
        this.__indicator = new ObservedPropertySimple(true, this, "indicator");
        this.__loop = new ObservedPropertySimple(false, this, "loop");
        this.__duration = new ObservedPropertySimple(1000, this, "duration");
        this.__vertical = new ObservedPropertySimple(false, this, "vertical");
        this.__itemSpace = new ObservedPropertySimple(0, this, "itemSpace");
        this.__onActionCalledOne = new ObservedPropertySimple(false, this, "onActionCalledOne");
        this.__onActionCalledTwo = new ObservedPropertySimple(false, this, "onActionCalledTwo");
        this.__onActionCalledThree = new ObservedPropertySimple(false, this, "onActionCalledThree");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.swiperController !== undefined) {
            this.swiperController = params.swiperController;
        }
        if (params.data !== undefined) {
            this.data = params.data;
        }
        if (params.index !== undefined) {
            this.index = params.index;
        }
        if (params.displayCount !== undefined) {
            this.displayCount = params.displayCount;
        }
        if (params.displayMode !== undefined) {
            this.displayMode = params.displayMode;
        }
        if (params.edgeEffect !== undefined) {
            this.edgeEffect = params.edgeEffect;
        }
        if (params.autoPlay !== undefined) {
            this.autoPlay = params.autoPlay;
        }
        if (params.interval !== undefined) {
            this.interval = params.interval;
        }
        if (params.indicator !== undefined) {
            this.indicator = params.indicator;
        }
        if (params.loop !== undefined) {
            this.loop = params.loop;
        }
        if (params.duration !== undefined) {
            this.duration = params.duration;
        }
        if (params.vertical !== undefined) {
            this.vertical = params.vertical;
        }
        if (params.itemSpace !== undefined) {
            this.itemSpace = params.itemSpace;
        }
        if (params.onActionCalledOne !== undefined) {
            this.onActionCalledOne = params.onActionCalledOne;
        }
        if (params.onActionCalledTwo !== undefined) {
            this.onActionCalledTwo = params.onActionCalledTwo;
        }
        if (params.onActionCalledThree !== undefined) {
            this.onActionCalledThree = params.onActionCalledThree;
        }
    }
    aboutToBeDeleted() {
        this.__index.aboutToBeDeleted();
        this.__displayCount.aboutToBeDeleted();
        this.__displayMode.aboutToBeDeleted();
        this.__edgeEffect.aboutToBeDeleted();
        this.__autoPlay.aboutToBeDeleted();
        this.__interval.aboutToBeDeleted();
        this.__indicator.aboutToBeDeleted();
        this.__loop.aboutToBeDeleted();
        this.__duration.aboutToBeDeleted();
        this.__vertical.aboutToBeDeleted();
        this.__itemSpace.aboutToBeDeleted();
        this.__onActionCalledOne.aboutToBeDeleted();
        this.__onActionCalledTwo.aboutToBeDeleted();
        this.__onActionCalledThree.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get index() {
        return this.__index.get();
    }
    set index(newValue) {
        this.__index.set(newValue);
    }
    get displayCount() {
        return this.__displayCount.get();
    }
    set displayCount(newValue) {
        this.__displayCount.set(newValue);
    }
    get displayMode() {
        return this.__displayMode.get();
    }
    set displayMode(newValue) {
        this.__displayMode.set(newValue);
    }
    get edgeEffect() {
        return this.__edgeEffect.get();
    }
    set edgeEffect(newValue) {
        this.__edgeEffect.set(newValue);
    }
    get autoPlay() {
        return this.__autoPlay.get();
    }
    set autoPlay(newValue) {
        this.__autoPlay.set(newValue);
    }
    get interval() {
        return this.__interval.get();
    }
    set interval(newValue) {
        this.__interval.set(newValue);
    }
    get indicator() {
        return this.__indicator.get();
    }
    set indicator(newValue) {
        this.__indicator.set(newValue);
    }
    get loop() {
        return this.__loop.get();
    }
    set loop(newValue) {
        this.__loop.set(newValue);
    }
    get duration() {
        return this.__duration.get();
    }
    set duration(newValue) {
        this.__duration.set(newValue);
    }
    get vertical() {
        return this.__vertical.get();
    }
    set vertical(newValue) {
        this.__vertical.set(newValue);
    }
    get itemSpace() {
        return this.__itemSpace.get();
    }
    set itemSpace(newValue) {
        this.__itemSpace.set(newValue);
    }
    get onActionCalledOne() {
        return this.__onActionCalledOne.get();
    }
    set onActionCalledOne(newValue) {
        this.__onActionCalledOne.set(newValue);
    }
    get onActionCalledTwo() {
        return this.__onActionCalledTwo.get();
    }
    set onActionCalledTwo(newValue) {
        this.__onActionCalledTwo.set(newValue);
    }
    get onActionCalledThree() {
        return this.__onActionCalledThree.get();
    }
    set onActionCalledThree(newValue) {
        this.__onActionCalledThree.set(newValue);
    }
    aboutToAppear() {
        let list = [];
        for (var i = 1; i <= 10; i++) {
            list.push(i.toString());
        }
        this.data = new MyDataSource(list);
    }
    render() {
        Column.create({ space: 5 });
        Column.margin({ top: 5 });
        Swiper.create(this.swiperController);
        Swiper.cachedCount(2);
        Swiper.index(this.index);
        Swiper.autoPlay(this.autoPlay);
        Swiper.interval(this.interval);
        Swiper.indicator(this.indicator);
        Swiper.loop(this.loop);
        Swiper.duration(this.duration);
        Swiper.vertical(this.vertical);
        Swiper.itemSpace(this.itemSpace);
        Swiper.displayMode(this.displayMode);
        Swiper.displayCount(this.displayCount);
        Swiper.effectMode(this.edgeEffect);
        Swiper.indicatorStyle({ top: 20, right: 20, size: 2, color: Color.Blue });
        Swiper.key('swiper');
        Swiper.onChange((index) => {
            console.info(index.toString());
            this.onActionCalledThree = true;
            console.info('onChange current action state is: ' + this.onActionCalledThree);
        });
        LazyForEach.create("2", this, ObservedObject.GetRawObject(this.data), (item) => {
            this.isRenderingInProgress = true;
            Text.create(item);
            Text.width('90%');
            Text.height(160);
            Text.backgroundColor(0xAFEEEE);
            Text.textAlign(TextAlign.Center);
            Text.fontSize(20);
            Text.pop();
            this.isRenderingInProgress = false;
        }, item => item);
        LazyForEach.pop();
        Swiper.pop();
        Flex.create({ justifyContent: FlexAlign.SpaceAround });
        Button.createWithLabel('next');
        Button.key('button1');
        Button.onClick(() => {
            this.swiperController.showNext();
            this.onActionCalledOne = true;
            console.info('button1 current action state is: ' + this.onActionCalledOne);
        });
        Button.pop();
        Button.createWithLabel('preview');
        Button.key('button2');
        Button.onClick(() => {
            this.swiperController.showPrevious();
            this.onActionCalledTwo = true;
            console.info('button2 current action state is: ' + this.onActionCalledTwo);
        });
        Button.pop();
        Flex.pop();
        Column.pop();
    }
    onPageShow() {
        console.info('swiper page show called');
    }
}
loadDocument(new SwiperExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=swiper.js.map