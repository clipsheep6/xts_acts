/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\divider.ets?entry ***!
  \******************************************************************************************************/
class DividerExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__color = new ObservedPropertyObject(0xCCCCCC, this, "color");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("divider page state change called:" + JSON.stringify(eventData));
                if (eventData.data.color != null) {
                    this.color = eventData.data.color;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.color !== undefined) {
            this.color = params.color;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__color.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get color() {
        return this.__color.get();
    }
    set color(newValue) {
        this.__color.set(newValue);
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Start, justifyContent: FlexAlign.SpaceBetween });
        Flex.width('100%');
        Flex.height(350);
        Flex.padding({ left: 35, right: 35, top: 35 });
        Text.create('Horizontal divider');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Row.create();
        Row.width('100%');
        Row.height(40);
        Row.backgroundColor(0xF1F3F5);
        Row.pop();
        Divider.create();
        Row.create();
        Row.width('100%');
        Row.height(40);
        Row.backgroundColor(0xF1F3F5);
        Row.pop();
        Text.create('Vertical divider');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Flex.create({ alignItems: ItemAlign.Center, wrap: FlexWrap.Wrap });
        Flex.width(250);
        Text.create('bravery');
        Text.pop();
        Divider.create();
        Divider.vertical(true);
        Divider.margin(20);
        Divider.height(15);
        Text.create('effort');
        Text.pop();
        Divider.create();
        Divider.vertical(true);
        Divider.margin(20);
        Divider.height(15);
        Text.create('upward');
        Text.pop();
        Flex.pop();
        Text.create('Custom Styles');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Row.create();
        Row.width('100%');
        Row.height(40);
        Row.backgroundColor(0xF1F3F5);
        Row.pop();
        Divider.create();
        Divider.key('Divider');
        Divider.vertical(false);
        Divider.strokeWidth(5);
        Divider.color(ObservedObject.GetRawObject(this.color));
        Divider.lineCap(LineCapStyle.Round);
        Row.create();
        Row.width('100%');
        Row.height(40);
        Row.backgroundColor(0xF1F3F5);
        Row.pop();
        Flex.pop();
    }
    onPageShow() {
        console.info('divider page show called');
        var stateChangeEvent = {
            eventId: 85,
        };
    }
}
loadDocument(new DividerExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=divider.js.map