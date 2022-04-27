/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\flexDirection.ets?entry ***!
  \************************************************************************************************************/
class flexDirectionExample extends View {
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
        Text.create('direction:Row');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({ direction: FlexDirection.Row });
        Flex.height(70);
        Flex.width('90%');
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
        Text.pop();
        Text.create('4');
        Text.width(this.width);
        Text.height(this.height);
        Text.backgroundColor(ObservedObject.GetRawObject(this.backgroundColor));
        Text.key('Row');
        Text.pop();
        Flex.pop();
        Text.create('direction:Column');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({ direction: FlexDirection.Column });
        Flex.height(160);
        Flex.width('90%');
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
        Text.pop();
        Text.create('4');
        Text.width(this.width);
        Text.height(this.height);
        Text.backgroundColor(ObservedObject.GetRawObject(this.backgroundColor));
        Text.key('Column');
        Text.pop();
        Flex.pop();
        Text.create('direction:ColumnReverse');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({ direction: FlexDirection.ColumnReverse });
        Flex.height(160);
        Flex.width('90%');
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
        Text.pop();
        Text.create('4');
        Text.width(this.width);
        Text.height(this.height);
        Text.backgroundColor(ObservedObject.GetRawObject(this.backgroundColor));
        Text.key('ColumnReverse');
        Text.pop();
        Flex.pop();
        Column.pop();
        Column.pop();
    }
    onPageShow() {
        console.info('flexDirection page show called');
        var stateChangeEvent1 = {
            eventId: 97,
        };
        var stateChangeEvent2 = {
            eventId: 98,
        };
        var stateChangeEvent3 = {
            eventId: 99,
        };
    }
}
loadDocument(new flexDirectionExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=flexDirection.js.map