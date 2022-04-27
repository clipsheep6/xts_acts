/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\flexWrap.ets?entry ***!
  \*******************************************************************************************************/
class FlexWrapExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__width = new ObservedPropertySimple('20%', this, "width");
        this.__height = new ObservedPropertySimple(40, this, "height");
        this.__backgroundColor = new ObservedPropertyObject(0xD2B48C, this, "backgroundColor");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("swiper page state change called:" + JSON.stringify(eventData));
                if (eventData.data.width != null) {
                    this.width = eventData.data.width;
                }
                if (eventData.data.height != null) {
                    this.height = eventData.data.height;
                }
                if (eventData.data.backgroundColor != null) {
                    this.backgroundColor = eventData.data.backgroundColor;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.width !== undefined) {
            this.width = params.width;
        }
        if (params.height !== undefined) {
            this.height = params.height;
        }
        if (params.backgroundColor !== undefined) {
            this.backgroundColor = params.backgroundColor;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__width.aboutToBeDeleted();
        this.__height.aboutToBeDeleted();
        this.__backgroundColor.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get width() {
        return this.__width.get();
    }
    set width(newValue) {
        this.__width.set(newValue);
    }
    get height() {
        return this.__height.get();
    }
    set height(newValue) {
        this.__height.set(newValue);
    }
    get backgroundColor() {
        return this.__backgroundColor.get();
    }
    set backgroundColor(newValue) {
        this.__backgroundColor.set(newValue);
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.create({ space: 5 });
        Column.width('100%');
        Column.margin({ top: 5 });
        Text.create('WrapReverse');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({ wrap: FlexWrap.WrapReverse, direction: FlexDirection.Row });
        Flex.width('90%');
        Flex.height(120);
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('1');
        Text.width(this.width);
        Text.height(this.height);
        Text.backgroundColor(ObservedObject.GetRawObject(this.backgroundColor));
        Text.pop();
        Text.create('2');
        Text.width(this.width);
        Text.height(this.height);
        Text.backgroundColor(ObservedObject.GetRawObject(this.backgroundColor));
        Text.pop();
        Text.create('3');
        Text.width(this.width);
        Text.height(this.height);
        Text.backgroundColor(ObservedObject.GetRawObject(this.backgroundColor));
        Text.key('WrapReverse');
        Text.pop();
        Flex.pop();
        Column.pop();
        Column.pop();
    }
    onPageShow() {
        console.info('flexDirection page show called');
        var stateChangeEvent = {
            eventId: 100,
        };
    }
}
loadDocument(new FlexWrapExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=flexWrap.js.map