/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\layoutConstraints.ets?entry ***!
  \**********************************************************************************************************************************/
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
class ContainerInfo {
    constructor() {
        this.label = '';
        this.size = '';
    }
}
;
class ChildInfo {
    constructor() {
        this.text = '';
        this.priority = 0;
    }
}
;
class LayoutConstraints extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.children = ['1', '2', '3', '4', '5', '6'];
        this.__aspectRatio = new ObservedPropertySimple(1.5, this, "aspectRatio");
        this.container = [
            { label: 'Big container', size: '97%' },
            { label: 'Small container', size: '30%' }
        ];
        this.__priorityChildren = new ObservedPropertyObject([
            { text: '1\n(priority:1)', priority: 1 },
            { text: '2\n(priority:2)', priority: 2 },
            { text: '3\n(priority:3)', priority: 3 },
            { text: '4\n(priority:4)', priority: 4 }
        ], this, "priorityChildren");
        this.__currentIndex = new ObservedPropertySimple(0, this, "currentIndex");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.children !== undefined) {
            this.children = params.children;
        }
        if (params.aspectRatio !== undefined) {
            this.aspectRatio = params.aspectRatio;
        }
        if (params.container !== undefined) {
            this.container = params.container;
        }
        if (params.priorityChildren !== undefined) {
            this.priorityChildren = params.priorityChildren;
        }
        if (params.currentIndex !== undefined) {
            this.currentIndex = params.currentIndex;
        }
    }
    aboutToBeDeleted() {
        this.__aspectRatio.aboutToBeDeleted();
        this.__priorityChildren.aboutToBeDeleted();
        this.__currentIndex.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get aspectRatio() {
        return this.__aspectRatio.get();
    }
    set aspectRatio(newValue) {
        this.__aspectRatio.set(newValue);
    }
    get priorityChildren() {
        return this.__priorityChildren.get();
    }
    set priorityChildren(newValue) {
        this.__priorityChildren.set(newValue);
    }
    get currentIndex() {
        return this.__currentIndex.get();
    }
    set currentIndex(newValue) {
        this.__currentIndex.set(newValue);
    }
    render() {
        Column.create({ space: 20 });
        Column.padding(10);
        Text.create('using container: row');
        Text.fontSize(20);
        Text.fontColor(Color.Black);
        Text.width('100%');
        Text.pop();
        Row.create({ space: 10 });
        Row.size({ width: "100%", height: 100 });
        Row.backgroundColor(0xd2cab3);
        Row.clip(true);
        ForEach.create("2", this, ObservedObject.GetRawObject(this.children), (item) => {
            Text.create(item);
            Text.backgroundColor(0xbbb2cb);
            Text.fontSize(20);
            Text.aspectRatio(this.aspectRatio);
            Text.height(60);
            Text.pop();
            Text.create(item);
            Text.backgroundColor(0xbbb2cb);
            Text.fontSize(20);
            Text.aspectRatio(this.aspectRatio);
            Text.width(60);
            Text.key('aspectRatio');
            Text.pop();
        }, item => item);
        ForEach.pop();
        Row.pop();
        Text.create('using container: grid');
        Text.fontSize(20);
        Text.fontColor(Color.Black);
        Text.width('100%');
        Text.pop();
        Grid.create();
        Grid.columnsTemplate('1fr 1fr 1fr');
        Grid.columnsGap(10);
        Grid.rowsGap(10);
        Grid.size({ width: "100%", height: 165 });
        Grid.backgroundColor(0xd2cab3);
        ForEach.create("3", this, ObservedObject.GetRawObject(this.children), (item) => {
            GridItem.create();
            Text.create(item);
            Text.backgroundColor(0xbbb2cb);
            Text.fontSize(40);
            Text.aspectRatio(this.aspectRatio);
            Text.pop();
            GridItem.pop();
        }, item => item);
        ForEach.pop();
        Grid.pop();
        Text.create('displayPriority 4');
        Text.fontSize(20);
        Text.fontColor(Color.Black);
        Text.width('100%');
        Text.pop();
        Flex.create({ justifyContent: FlexAlign.SpaceBetween });
        Flex.width(this.container[this.currentIndex].size);
        Flex.backgroundColor(0xd2cab3);
        ForEach.create("4", this, ObservedObject.GetRawObject(this.priorityChildren), (item) => {
            If.create();
            if (item.priority === 1 || item.priority === 5) {
                If.branchId(0);
                Text.create(`1\n(priority:${item.priority})`);
                Text.width(135);
                Text.height(60);
                Text.fontSize(18);
                Text.textAlign(TextAlign.Center);
                Text.backgroundColor(0xbbb2cb);
                Text.displayPriority(item.priority);
                Text.key('displayPriority');
                Text.pop();
            }
            else {
                If.branchId(1);
                Text.create(item.text);
                Text.width(135);
                Text.height(60);
                Text.fontSize(18);
                Text.textAlign(TextAlign.Center);
                Text.backgroundColor(0xbbb2cb);
                Text.displayPriority(item.priority);
                Text.pop();
            }
            If.pop();
        }, item => item.text);
        ForEach.pop();
        Flex.pop();
        Column.pop();
    }
}
loadDocument(new LayoutConstraints("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=layoutConstraints.js.map