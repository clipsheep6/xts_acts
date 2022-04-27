/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\direction.ets?entry ***!
  \********************************************************************************************************/
class Index extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__direction = new ObservedPropertyObject(FlexDirection.Column, this, "direction");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("direction page state change called:" + JSON.stringify(eventData));
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
        Flex.create({ direction: this.direction, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.key('direction');
        Flex.width('100%');
        Flex.height('100%');
        Text.create('Hello World');
        Text.fontSize(60);
        Text.fontWeight(500);
        Text.pop();
        Button.createWithLabel('Next');
        Button.fontSize(40);
        Button.fontWeight(500);
        Button.width(280);
        Button.height(60);
        Button.pop();
        Flex.pop();
    }
    onPageShow() {
        console.info('direction page show called');
        var stateChangeEvent = {
            eventId: 84,
        };
    }
}
loadDocument(new Index("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=direction.js.map