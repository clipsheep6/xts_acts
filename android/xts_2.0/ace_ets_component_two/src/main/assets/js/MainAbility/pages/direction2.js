/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\direction2.ets?entry ***!
  \*********************************************************************************************************/
class PositionExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__direction = new ObservedPropertyObject(Direction.Ltr, this, "direction");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("direction2 page state change called:" + JSON.stringify(eventData));
                if (eventData.data.direction != null) {
                    this.direction = eventData.data.direction;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.direction !== undefined) {
            this.direction = params.direction;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__direction.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get direction() {
        return this.__direction.get();
    }
    set direction(newValue) {
        this.__direction.set(newValue);
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.margin({ top: 5 });
        Column.direction(Direction.Rtl);
        Column.create({ space: 10 });
        Text.create('align');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Text.create('top start');
        Text.align(Alignment.TopStart);
        Text.height(50);
        Text.width('90%');
        Text.fontSize(16);
        Text.backgroundColor(0xFFE4C4);
        Text.pop();
        Text.create('direction');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.width('90%');
        Row.direction(ObservedObject.GetRawObject(this.direction));
        Row.key('direction');
        Text.create('1');
        Text.height(50);
        Text.width('25%');
        Text.fontSize(16);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Text.create('2');
        Text.height(50);
        Text.width('25%');
        Text.fontSize(16);
        Text.backgroundColor(0xD2B48C);
        Text.pop();
        Text.create('3');
        Text.height(50);
        Text.width('25%');
        Text.fontSize(16);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Text.create('4');
        Text.height(50);
        Text.width('25%');
        Text.fontSize(16);
        Text.backgroundColor(0xD2B48C);
        Text.pop();
        Row.pop();
        Column.pop();
        Column.pop();
    }
    onPageShow() {
        console.info('direction2 page show called');
        var stateChangeEvent = {
            eventId: 82,
        };
        var stateChangeEventOne = {
            eventId: 83,
        };
    }
}
loadDocument(new PositionExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=direction2.js.map