/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!******************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\enumsHorizontalAlign.ets?entry ***!
  \******************************************************************************************************************************************/
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
        Column.key('HorizontalAlign');
        Text.create('alignItems(Start)');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Column.create();
        Column.alignItems(HorizontalAlign.Center);
        Column.width('90%');
        Column.border({ width: 1 });
        Column.create();
        Column.width('50%');
        Column.height(50);
        Column.backgroundColor(0x00FFFF);
        Column.pop();
        Column.create();
        Column.width('50%');
        Column.height(50);
        Column.backgroundColor(0xAFEEEE);
        Column.pop();
        Column.pop();
        Column.pop();
    }
}
loadDocument(new RowExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=enumsHorizontalAlign.js.map