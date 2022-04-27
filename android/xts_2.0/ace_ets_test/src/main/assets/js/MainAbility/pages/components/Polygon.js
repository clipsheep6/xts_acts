/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/components/Polygon.ets?entry ***!
  \*****************************************************************************************************************************************/
class PolygonExample extends View {
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
        console.info('polygon page show called');
    }
    onBuildDone() {
        console.info('polygon page build done called');
    }
    render() {
        Column.create({ space: 5 });
        Column.margin({ top: 5 });
        Flex.create({ justifyContent: FlexAlign.SpaceAround });
        Flex.width('100%');
        Polygon.create({ width: 100, height: 100 });
        Polygon.points([[0, 0], [50, 100], [100, 0]]);
        Polygon.key('polygon');
        Polygon.create();
        Polygon.width(100);
        Polygon.height(100);
        Polygon.points([[0, 0], [0, 100], [100, 100], [100, 0]]);
        Polygon.key('polygon1');
        Polygon.create();
        Polygon.width(100);
        Polygon.height(100);
        Polygon.points([[50, 0], [0, 50], [20, 100], [80, 100], [100, 50]]);
        Polygon.key('polygon2');
        Flex.pop();
        Column.pop();
    }
}
loadDocument(new PolygonExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Polygon.js.map