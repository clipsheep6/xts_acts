/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\gradientDirection.ets?entry ***!
  \****************************************************************************************************************/
class linearGradientExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__direction = new ObservedPropertyObject(GradientDirection.LeftTop, this, "direction");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("GradientDirection page state change called:" + JSON.stringify(eventData));
                if (eventData.data.ACTION != null) {
                    this.direction = eventData.data.ACTION;
                    console.log("direction1 is" + eventData.data.ACTION);
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
        Column.create({ space: 5 });
        Column.width('100%');
        Column.padding({ top: 5 });
        Text.create('linearGradient');
        Text.fontSize(12);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Row.create();
        Row.width(100);
        Row.height(100);
        Row.linearGradient({
            angle: 45,
            direction: this.direction,
            colors: [[0xAEE1E1, 0.0], [0xD3E0DC, 0.3], [0xFCD1D1, 1.0]]
        });
        Row.key("GradientDirection");
        Row.pop();
        Column.pop();
    }
    onPageShow() {
        console.info('gradientDirection page show called');
        var stateChangeEventOne = {
            eventId: 106,
        };
        console.info('gradientDirection page show called');
        var stateChangeEventTwo = {
            eventId: 107,
        };
        console.info('gradientDirection page show called');
        var stateChangeEventThree = {
            eventId: 108,
        };
    }
}
loadDocument(new linearGradientExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=gradientDirection.js.map