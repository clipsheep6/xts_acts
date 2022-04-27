/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Scroll.ets?entry ***!
  \**************************************************************************************************************/
class scroll_testcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__scrollBarWidth = new ObservedPropertySimple(20, this, "scrollBarWidth");
        this.__scrollable = new ObservedPropertySimple(ScrollDirection.None, this, "scrollable");
        this.__scrollBarColor = new ObservedPropertySimple(Color.Pink, this, "scrollBarColor");
        this.__scrollBar = new ObservedPropertySimple(BarState.On, this, "scrollBar");
        this.value1 = [1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30];
        this.__edge = new ObservedPropertySimple(Edge.Top, this, "edge");
        this.content = "Scroll Page";
        this.scroller = new Scroller();
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.scrollBarWidth !== undefined) {
            this.scrollBarWidth = params.scrollBarWidth;
        }
        if (params.scrollable !== undefined) {
            this.scrollable = params.scrollable;
        }
        if (params.scrollBarColor !== undefined) {
            this.scrollBarColor = params.scrollBarColor;
        }
        if (params.scrollBar !== undefined) {
            this.scrollBar = params.scrollBar;
        }
        if (params.value1 !== undefined) {
            this.value1 = params.value1;
        }
        if (params.edge !== undefined) {
            this.edge = params.edge;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
        if (params.scroller !== undefined) {
            this.scroller = params.scroller;
        }
    }
    aboutToBeDeleted() {
        this.__scrollBarWidth.aboutToBeDeleted();
        this.__scrollable.aboutToBeDeleted();
        this.__scrollBarColor.aboutToBeDeleted();
        this.__scrollBar.aboutToBeDeleted();
        this.__edge.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get scrollBarWidth() {
        return this.__scrollBarWidth.get();
    }
    set scrollBarWidth(newValue) {
        this.__scrollBarWidth.set(newValue);
    }
    get scrollable() {
        return this.__scrollable.get();
    }
    set scrollable(newValue) {
        this.__scrollable.set(newValue);
    }
    get scrollBarColor() {
        return this.__scrollBarColor.get();
    }
    set scrollBarColor(newValue) {
        this.__scrollBarColor.set(newValue);
    }
    get scrollBar() {
        return this.__scrollBar.get();
    }
    set scrollBar(newValue) {
        this.__scrollBar.set(newValue);
    }
    get edge() {
        return this.__edge.get();
    }
    set edge(newValue) {
        this.__edge.set(newValue);
    }
    onPageShow() {
        console.info('Button page show called');
    }
    onBuildDone() {
        console.info('Button page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.key('flex');
        Text.create(`${this.content}`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Scroll.create(this.scroller);
        Scroll.scrollable(ScrollDirection.Vertical);
        Scroll.scrollBar(this.scrollBar);
        Scroll.scrollBarColor(this.scrollBarColor);
        Scroll.scrollBarWidth(this.scrollBarWidth);
        Scroll.key('scroll');
        Scroll.width(400);
        Scroll.height(200);
        Scroll.onScroll((xOffset, yOffset) => {
            console.info(` current offset is ${xOffset} ${yOffset}`);
        });
        Scroll.onScrollEnd(() => {
            console.info(` now on  scroll end`);
        });
        Scroll.onScrollEdge((side) => {
            console.info(`To the edge`);
        });
        Column.create();
        ForEach.create("2", this, ObservedObject.GetRawObject(this.value1), item => {
            Text.create(`${item}`);
            Text.fontSize(15);
            Text.width(400);
            Text.margin(10);
            Text.height(70);
            Text.backgroundColor(0xfff5deb3);
            Text.pop();
        }, item => item);
        ForEach.pop();
        Column.pop();
        Scroll.pop();
        Scroll.create();
        Scroll.key('scroll1');
        Scroll.height(100);
        Scroll.scrollable(ScrollDirection.Horizontal);
        Row.create();
        Text.create('scroll uppppp');
        Text.width(60);
        Text.height(100);
        Text.backgroundColor(Color.Yellow);
        Text.margin({
            right: 5,
            left: 5
        });
        Text.key('text');
        Text.pop();
        Text.create('scroll to');
        Text.width(60);
        Text.height(100);
        Text.backgroundColor(Color.Green);
        Text.margin({
            right: 5,
            left: 5
        });
        Text.onClick(() => {
            this.scroller.scrollTo({
                xOffset: 100,
                yOffset: 100,
            });
        });
        Text.pop();
        Text.create('scroll page');
        Text.width(60);
        Text.height(100);
        Text.backgroundColor(Color.Blue);
        Text.margin({
            right: 5,
            left: 5
        });
        Text.onClick(() => {
            this.scroller.scrollPage({
                next: true
            });
        });
        Text.pop();
        Text.create('scroll Edge');
        Text.width(60);
        Text.height(100);
        Text.backgroundColor(Color.Blue);
        Text.margin({
            right: 5,
            left: 5
        });
        Text.onClick(() => {
            this.scroller.scrollEdge(Edge.Top);
        });
        Text.pop();
        Text.create('scroll Edge');
        Text.width(60);
        Text.height(100);
        Text.backgroundColor(Color.Blue);
        Text.margin({
            right: 5,
            left: 5
        });
        Text.onClick(() => {
            this.scroller.currentOffset();
        });
        Text.pop();
        Text.create('scroll to index');
        Text.width(60);
        Text.height(100);
        Text.backgroundColor(Color.Blue);
        Text.margin({
            right: 5,
            left: 5
        });
        Text.onClick(() => {
            this.scroller.scrollToIndex(0);
            console.info(` now on  scroll end`);
        });
        Text.pop();
        Row.pop();
        Scroll.pop();
        Scroll.create();
        Scroll.padding(10);
        Scroll.scrollable(ScrollDirection.None);
        Scroll.scrollBar(BarState.Off);
        Scroll.scrollBarColor(Color.Red);
        Scroll.scrollBarWidth(5);
        Scroll.width(300);
        Scroll.height(200);
        Scroll.key('scroll2');
        Column.create();
        Text.create("start");
        Text.fontSize(30);
        Text.pop();
        Text.create("scrollable1");
        Text.pop();
        Text.create("scrollable2");
        Text.pop();
        Text.create("scrollable3");
        Text.pop();
        Text.create("scrollable4");
        Text.pop();
        Text.create("scrollable1");
        Text.pop();
        Text.create("scrollable2");
        Text.pop();
        Text.create("scrollable3");
        Text.pop();
        Text.create("scrollable4");
        Text.pop();
        Column.pop();
        Scroll.pop();
        Scroll.create();
        Scroll.padding(10);
        Scroll.scrollable(ScrollDirection.Free);
        Scroll.scrollBar(BarState.Off);
        Scroll.scrollBarColor(Color.Red);
        Scroll.scrollBarWidth(5);
        Scroll.width(300);
        Scroll.height(200);
        Scroll.key('scroll3');
        Column.create();
        Text.create("start");
        Text.fontSize(30);
        Text.pop();
        Text.create("scrollable1");
        Text.pop();
        Text.create("scrollable2");
        Text.pop();
        Text.create("scrollable3");
        Text.pop();
        Text.create("scrollable4");
        Text.pop();
        Text.create("scrollable1");
        Text.pop();
        Text.create("scrollable2");
        Text.pop();
        Text.create("scrollable3");
        Text.pop();
        Text.create("scrollable4");
        Text.pop();
        Column.pop();
        Scroll.pop();
        Flex.pop();
    }
}
loadDocument(new scroll_testcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Scroll.js.map