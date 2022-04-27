/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\enumsItemAlign.ets?entry ***!
  \*************************************************************************************************************/
class AlignItemsFlex extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__alignItems = new ObservedPropertyObject(ItemAlign.Auto, this, "alignItems");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.alignItems !== undefined) {
            this.alignItems = params.alignItems;
        }
    }
    aboutToBeDeleted() {
        this.__alignItems.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get alignItems() {
        return this.__alignItems.get();
    }
    set alignItems(newValue) {
        this.__alignItems.set(newValue);
    }
    render() {
        Flex.create({ alignItems: this.alignItems });
        Flex.key('itemAlign');
        Flex.size({ width: '90%', height: 80 });
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('1');
        Text.width('33%');
        Text.height(30);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Text.create('2');
        Text.width('33%');
        Text.height(40);
        Text.backgroundColor(0xD2B48C);
        Text.pop();
        Text.create('3');
        Text.width('33%');
        Text.height(50);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new AlignItemsFlex("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=enumsItemAlign.js.map