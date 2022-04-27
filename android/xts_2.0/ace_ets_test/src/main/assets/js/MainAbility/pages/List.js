/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/List.ets?entry ***!
  \***************************************************************************************************************************/
// @ts-nocheck
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
let ItemDragInfo;
class ListExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.arr1 = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
        this.arr2 = ['a', 'b', 'c', 'd', 'e', 'f'];
        this.__editFlag = new ObservedPropertySimple(false, this, "editFlag");
        this.__bool1 = new ObservedPropertySimple(false, this, "bool1");
        this.__bool2 = new ObservedPropertySimple(false, this, "bool2");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.arr1 !== undefined) {
            this.arr1 = params.arr1;
        }
        if (params.arr2 !== undefined) {
            this.arr2 = params.arr2;
        }
        if (params.editFlag !== undefined) {
            this.editFlag = params.editFlag;
        }
        if (params.bool1 !== undefined) {
            this.bool1 = params.bool1;
        }
        if (params.bool2 !== undefined) {
            this.bool2 = params.bool2;
        }
    }
    aboutToBeDeleted() {
        this.__editFlag.aboutToBeDeleted();
        this.__bool1.aboutToBeDeleted();
        this.__bool2.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get editFlag() {
        return this.__editFlag.get();
    }
    set editFlag(newValue) {
        this.__editFlag.set(newValue);
    }
    get bool1() {
        return this.__bool1.get();
    }
    set bool1(newValue) {
        this.__bool1.set(newValue);
    }
    get bool2() {
        return this.__bool2.get();
    }
    set bool2(newValue) {
        this.__bool2.set(newValue);
    }
    render() {
        Stack.create({ alignContent: Alignment.TopStart });
        Stack.width('100%');
        Stack.height('50%');
        Stack.backgroundColor(0xDCDCDC);
        Stack.padding({ top: 5 });
        Column.create();
        Column.width('100%');
        List.create({ space: 20, initialIndex: 0 });
        List.key('list');
        List.listDirection(Axis.Vertical);
        List.divider({ strokeWidth: 2, color: 0xFFFFFF, startMargin: 20, endMargin: 20 });
        List.edgeEffect(EdgeEffect.None);
        List.chainAnimation(false);
        List.onScrollIndex((firstIndex, lastIndex) => {
            console.info('first' + firstIndex);
            console.info('last' + lastIndex);
        });
        List.onScroll((scrollOffset, scrollState) => {
            console.info('scrollOffset:' + scrollOffset);
            console.info('ScrollState:' + scrollState);
        });
        List.editMode(this.editFlag);
        List.onItemDelete((index) => {
            console.info(this.arr1[index] + 'Delete');
            this.arr1.splice(index, 1);
            console.info(JSON.stringify(this.arr1));
            this.editFlag = false;
            return true;
        });
        List.onReachStart(() => {
            console.info("On Reach Start");
        });
        List.onReachEnd(() => {
            console.info("On Reach End");
        });
        List.onScrollStop(() => {
            console.info("On Scroll Stop");
        });
        List.onItemMove((from, to) => {
            console.info(from + 'from');
            console.info(to + 'to');
            return true;
        });
        List.onItemDragStart((event, itemIndex) => {
            this.bool1 = true;
            this.text = this.arr1[itemIndex];
            console.log('onItemDragStart, itemIndex:' + itemIndex);
            return this.pixelMapBuilder;
        });
        List.onItemDragEnter((event) => {
            console.log('onItemDragEnter');
        });
        List.onItemDragMove((event, itemIndex, insertIndex) => {
            console.log('onItemDragMove,itemIndex:' + itemIndex + 'insertIndex:' + insertIndex);
        });
        List.onItemDragLeave((event, itemIndex) => {
            console.log('onItemDragLeave, itemIndex:' + itemIndex);
        });
        List.onItemDrop((event, itemIndex, insertIndex, isSuccess) => {
            console.log('ItemDragInfo, itemIndex:' + itemIndex + 'insertIndex:' + insertIndex + 'isSuccess:' + isSuccess);
            if (isSuccess) {
                if (this.bool2) {
                    this.arr2.splice(itemIndex, 1);
                    this.arr1.splice(insertIndex, 0, this.text);
                    this.bool1 = false;
                    this.bool2 = false;
                }
                else if (this.bool1) {
                    this.arr2.splice(itemIndex, 1);
                    this.arr1.splice(insertIndex, 0, this.text);
                    this.bool1 = false;
                    this.bool2 = false;
                }
            }
        });
        List.width('90%');
        ForEach.create("2", this, ObservedObject.GetRawObject(this.arr1), (item) => {
            ListItem.create();
            ListItem.editable(true);
            Text.create('' + item);
            Text.width('100%');
            Text.height(100);
            Text.fontSize(16);
            Text.textAlign(TextAlign.Center);
            Text.borderRadius(10);
            Text.backgroundColor(0xFFFFFF);
            Text.pop();
            ListItem.pop();
        }, item => item);
        ForEach.pop();
        List.pop();
        Column.pop();
        Button.createWithLabel('edit list');
        Button.onClick(() => {
            this.editFlag = !this.editFlag;
        });
        Button.margin({ top: 5, left: 20 });
        Button.pop();
        Stack.pop();
    }
}
loadDocument(new ListExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=List.js.map