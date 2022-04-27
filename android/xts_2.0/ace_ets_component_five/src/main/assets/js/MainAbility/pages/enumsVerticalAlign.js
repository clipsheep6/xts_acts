/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\enumsVerticalAlign.ets?entry ***!
  \****************************************************************************************************************************************/
class RowExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Text.create('alignItems(Bottom)');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.alignItems(VerticalAlign.Center);
        Row.width('90%');
        Row.height(100);
        Row.border({ width: 1 });
        Row.key('VerticalAlign');
        Row.create();
        Row.width('50%');
        Row.height(50);
        Row.backgroundColor(0x00FFFF);
        Row.pop();
        Row.create();
        Row.width('50%');
        Row.height(50);
        Row.backgroundColor(0xAFEEEE);
        Row.pop();
        Row.pop();
        Column.pop();
    }
}
loadDocument(new RowExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=enumsVerticalAlign.js.map