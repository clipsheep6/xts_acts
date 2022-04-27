/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/pages/ScrollBar.ets?entry ***!
  \***************************************************************************************************************************/
class ScrollBarExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.scroller1 = new Scroller();
        this.scroller2 = new Scroller();
        this.scroller3 = new Scroller();
        this.arr1 = [1, 2, 3, 4, 5, 6, 7];
        this.arr2 = ['a', 'b', 'c', 'd', 'e', 'f', 'g'];
        this.arr3 = ['A', 'B', 'C', 'D', 'E', 'F', 'G'];
        this.content = "Scroll Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.scroller1 !== undefined) {
            this.scroller1 = params.scroller1;
        }
        if (params.scroller2 !== undefined) {
            this.scroller2 = params.scroller2;
        }
        if (params.scroller3 !== undefined) {
            this.scroller3 = params.scroller3;
        }
        if (params.arr1 !== undefined) {
            this.arr1 = params.arr1;
        }
        if (params.arr2 !== undefined) {
            this.arr2 = params.arr2;
        }
        if (params.arr3 !== undefined) {
            this.arr3 = params.arr3;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    onPageShow() {
        console.info('stepper page show called');
    }
    onBuildDone() {
        console.info('stepper page build done called');
    }
    render() {
        Column.create({ space: 10 });
        Text.create(`${this.content}`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Flex.create({ direction: FlexDirection.Row });
        Flex.height('45%');
        Scroll.create(this.scroller1);
        Scroll.scrollable(ScrollDirection.Vertical);
        Flex.create({ direction: FlexDirection.Column });
        Flex.margin({ left: 50 });
        ForEach.create("2", this, ObservedObject.GetRawObject(this.arr1), (item) => {
            Row.create();
            Text.create(item.toString());
            Text.width('90%');
            Text.height(50);
            Text.backgroundColor('#3366CC');
            Text.fontSize(16);
            Text.textAlign(TextAlign.Center);
            Text.margin(5);
            Text.pop();
            Row.pop();
        }, item => item);
        ForEach.pop();
        Flex.pop();
        Scroll.pop();
        ScrollBar.create({ scroller: this.scroller1, direction: ScrollBarDirection.Vertical, state: BarState.Auto });
        ScrollBar.width(30);
        ScrollBar.backgroundColor('#ededed');
        ScrollBar.key('scrollbar1');
        Text.create();
        Text.width(30);
        Text.height(100);
        Text.borderRadius(10);
        Text.backgroundColor('#C0C0C0');
        Text.pop();
        ScrollBar.pop();
        ScrollBar.create({ scroller: this.scroller1, direction: ScrollBarDirection.Vertical, state: BarState.On });
        ScrollBar.width(30);
        ScrollBar.backgroundColor('#ededed');
        ScrollBar.key('scrollbar2');
        Text.create();
        Text.width(30);
        Text.height(100);
        Text.borderRadius(10);
        Text.backgroundColor('#C0C0C0');
        Text.pop();
        ScrollBar.pop();
        ScrollBar.create({ scroller: this.scroller1, direction: ScrollBarDirection.Vertical, state: BarState.Off });
        ScrollBar.width(30);
        ScrollBar.backgroundColor('#ededed');
        ScrollBar.key('scrollbar3');
        Text.create();
        Text.width(30);
        Text.height(100);
        Text.borderRadius(10);
        Text.backgroundColor('#C0C0C0');
        Text.pop();
        ScrollBar.pop();
        Flex.pop();
        Flex.create({ direction: FlexDirection.Column });
        Flex.height('45%');
        Flex.width('90%');
        Flex.margin({ top: 30 });
        Scroll.create(this.scroller2);
        Scroll.scrollable(ScrollDirection.Horizontal);
        Flex.create({ direction: FlexDirection.Row });
        Flex.margin({ left: 15 });
        ForEach.create("3", this, ObservedObject.GetRawObject(this.arr2), (item) => {
            Row.create();
            Text.create(item.toString());
            Text.width('10%');
            Text.height(150);
            Text.backgroundColor(0xfff5deb3);
            Text.fontSize(16);
            Text.textAlign(TextAlign.Center);
            Text.margin(5);
            Text.pop();
            Row.pop();
        }, item => item);
        ForEach.pop();
        Flex.pop();
        Scroll.pop();
        ScrollBar.create({ scroller: this.scroller2, direction: ScrollBarDirection.Horizontal, state: BarState.Auto });
        ScrollBar.height(20);
        ScrollBar.backgroundColor('#ededed');
        ScrollBar.key('scrollbar4');
        ScrollBar.margin({ top: 30 });
        Text.create();
        Text.width('90%');
        Text.height(20);
        Text.borderRadius(10);
        Text.backgroundColor('#C0C0C0');
        Text.pop();
        ScrollBar.pop();
        ScrollBar.create({ scroller: this.scroller2, direction: ScrollBarDirection.Horizontal, state: BarState.On });
        ScrollBar.width(30);
        ScrollBar.backgroundColor('#ededed');
        ScrollBar.key('scrollbar5');
        ScrollBar.margin({ top: 30 });
        Text.create();
        Text.width('90%');
        Text.height(20);
        Text.borderRadius(10);
        Text.backgroundColor('#C0C0C0');
        Text.pop();
        ScrollBar.pop();
        ScrollBar.create({ scroller: this.scroller2, direction: ScrollBarDirection.Horizontal, state: BarState.Off });
        ScrollBar.width(30);
        ScrollBar.backgroundColor('#ededed');
        ScrollBar.key('scrollbar6');
        ScrollBar.margin({ top: 30 });
        Text.create();
        Text.width('90%');
        Text.height(20);
        Text.borderRadius(10);
        Text.backgroundColor('#C0C0C0');
        Text.pop();
        ScrollBar.pop();
        Flex.pop();
        Column.pop();
    }
}
loadDocument(new ScrollBarExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=ScrollBar.js.map