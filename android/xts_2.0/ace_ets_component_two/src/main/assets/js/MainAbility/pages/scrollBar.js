/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\scrollBar.ets?entry ***!
  \********************************************************************************************************/
class ScrollBarExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.scroller = new Scroller();
        this.arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
        this.__directionValue = new ObservedPropertyObject(ScrollBarDirection.Vertical, this, "directionValue");
        this.__stateValue = new ObservedPropertyObject(BarState.Off, this, "stateValue");
        this.stateChangCallBack = (eventData) => {
            console.info("scrollBar page state change called:" + JSON.stringify(eventData));
            if (eventData != null) {
                if (eventData.data.directionValue != null) {
                    let directionObject = JSON.parse(eventData.data.directionObject);
                    this.directionValue = directionObject.directionValue;
                }
                if (eventData.data.stateValue != null) {
                    let stateObject = JSON.parse(eventData.data.stateObject);
                    this.stateValue = stateObject.stateValue;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.scroller !== undefined) {
            this.scroller = params.scroller;
        }
        if (params.arr !== undefined) {
            this.arr = params.arr;
        }
        if (params.directionValue !== undefined) {
            this.directionValue = params.directionValue;
        }
        if (params.stateValue !== undefined) {
            this.stateValue = params.stateValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__directionValue.aboutToBeDeleted();
        this.__stateValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get directionValue() {
        return this.__directionValue.get();
    }
    set directionValue(newValue) {
        this.__directionValue.set(newValue);
    }
    get stateValue() {
        return this.__stateValue.get();
    }
    set stateValue(newValue) {
        this.__stateValue.set(newValue);
    }
    onPageShow() {
        console.info('scrollBar page show called');
        var stateChangeEvent = {
            eventId: 183,
        };
        var stateChangeEvent2 = {
            eventId: 184,
        };
    }
    render() {
        Column.create();
        Stack.create({ alignContent: Alignment.End });
        Scroll.create(this.scroller);
        Scroll.scrollBar(BarState.Off);
        Scroll.scrollable(ScrollDirection.Vertical);
        Flex.create({ direction: FlexDirection.Column });
        Flex.margin({ left: 52 });
        ForEach.create("2", this, ObservedObject.GetRawObject(this.arr), (item) => {
            Row.create();
            Text.create(item.toString());
            Text.width('90%');
            Text.height(100);
            Text.backgroundColor('#3366CC');
            Text.borderRadius(15);
            Text.fontSize(16);
            Text.textAlign(TextAlign.Center);
            Text.margin({ top: 5 });
            Text.pop();
            Row.pop();
        }, item => item);
        ForEach.pop();
        Flex.pop();
        Scroll.pop();
        ScrollBar.create({ scroller: this.scroller, direction: this.directionValue, state: this.stateValue });
        ScrollBar.key('scroll');
        ScrollBar.width(30);
        ScrollBar.backgroundColor('#ededed');
        Text.create();
        Text.width(30);
        Text.height(100);
        Text.borderRadius(10);
        Text.backgroundColor('#C0C0C0');
        Text.pop();
        ScrollBar.pop();
        Stack.pop();
        Column.pop();
    }
}
loadDocument(new ScrollBarExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=scrollBar.js.map