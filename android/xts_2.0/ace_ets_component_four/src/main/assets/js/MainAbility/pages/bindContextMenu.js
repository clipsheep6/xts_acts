/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\bindContextMenu.ets?entry ***!
  \**************************************************************************************************************/
class MenuExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__responseType = new ObservedPropertyObject(RightClick, this, "responseType");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.responseType !== undefined) {
            this.responseType = params.responseType;
        }
    }
    aboutToBeDeleted() {
        this.__responseType.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get responseType() {
        return this.__responseType.get();
    }
    set responseType(newValue) {
        this.__responseType.set(newValue);
    }
    ContextMenuBuilder() {
        Flex.create({ direction: FlexDirection.Column, justifyContent: FlexAlign.Center, alignItems: ItemAlign.Center });
        Text.create('text3');
        Text.fontSize(20);
        Text.width(100);
        Text.height(50);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Divider.create();
        Divider.height(10);
        Flex.pop();
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.margin({ top: 5 });
        Column.bindContextMenu({ builder: () => {
                this.ContextMenuBuilder();
            } }, ObservedObject.GetRawObject(this.responseType));
        Text.create('click for menu');
        Text.pop();
        Column.pop();
    }
}
loadDocument(new MenuExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=bindContextMenu.js.map