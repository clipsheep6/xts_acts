/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/Swiper.ets?entry ***!
  \*****************************************************************************************************************************/
/*
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
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.swiperController !== undefined) {
            this.swiperController = params.swiperController;
        }
        if (params.data !== undefined) {
            this.data = params.data;
        }
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
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
        Swiper.key('swiper');
        Swiper.cachedCount(2);
        Swiper.index(1);
        Swiper.autoPlay(true);
        Swiper.interval(4000);
        Swiper.indicator(true);
        Swiper.loop(false);
        Swiper.duration(1000);
        Swiper.vertical(false);
        Swiper.disableSwipe(true);
        Swiper.itemSpace(0);
        Swiper.onChange((index) => {
            console.info(index.toString());
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
        Button.onClick(() => {
            this.swiperController.showNext();
        });
        Button.pop();
        Button.createWithLabel('preview');
        Button.onClick(() => {
            this.swiperController.showPrevious();
        });
        Button.pop();
        Button.createWithLabel('finishAnimation');
        Button.onClick(() => {
            this.swiperController.finishAnimation();
        });
        Button.pop();
        Flex.pop();
        Column.pop();
    }
}
loadDocument(new SwiperExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Swiper.js.map