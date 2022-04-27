/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\bindMenu.ets?entry ***!
  \*******************************************************************************************************/
class MenuExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__onActionCalled = new ObservedPropertySimple(true, this, "onActionCalled");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.onActionCalled !== undefined) {
            this.onActionCalled = params.onActionCalled;
        }
    }
    aboutToBeDeleted() {
        this.__onActionCalled.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get onActionCalled() {
        return this.__onActionCalled.get();
    }
    set onActionCalled(newValue) {
        this.__onActionCalled.set(newValue);
    }
    MenuBuilder() {
        Flex.create({ direction: FlexDirection.Column, justifyContent: FlexAlign.Center, alignItems: ItemAlign.Center });
        Flex.width(100);
        Text.create('text1');
        Text.fontSize(20);
        Text.width(100);
        Text.height(50);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Divider.create();
        Divider.height(10);
        Text.create('text2');
        Text.fontSize(20);
        Text.width(100);
        Text.height(50);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Divider.create();
        Divider.height(10);
        Button.createWithLabel('button');
        Button.key('button');
        Button.fontSize(20);
        Button.width(100);
        Button.height(50);
        Button.onClick(() => {
            console.info("bindMenu button START");
            try {
                var backData = {
                    data: {
                        "ACTION": this.onActionCalled,
                    }
                };
                var backEvent = {
                    eventId: 64,
                };
                console.info("bindMenuTest_0100 start to emit action state");
            }
            catch (err) {
                console.info("bindMenuTest_0100 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Flex.pop();
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.margin({ top: 5 });
        Column.bindMenu({ builder: this.MenuBuilder.bind(this) });
        Text.create('click for menu');
        Text.key('text');
        Text.pop();
        Column.pop();
    }
}
loadDocument(new MenuExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=bindMenu.js.map