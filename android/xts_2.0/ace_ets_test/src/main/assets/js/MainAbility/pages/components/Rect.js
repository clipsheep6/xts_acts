/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/components/Rect.ets?entry ***!
  \**************************************************************************************************************************************/
class RectExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    onPageShow() {
        console.info('rect page show called');
    }
    onBuildDone() {
        console.info('rect page build done called');
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.margin({ top: 5 });
        Text.create('normal');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Rect.create({ width: '90%', height: 50 });
        Rect.create();
        Rect.width('90%');
        Rect.height(50);
        Text.create('with rounded corners');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Rect.create({ width: '90%', height: 50 });
        Rect.radiusHeight(20);
        Rect.radiusWidth(20);
        Rect.create({ width: '90%', height: 50 });
        Rect.radius(20);
        Column.pop();
    }
}
loadDocument(new RectExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Rect.js.map