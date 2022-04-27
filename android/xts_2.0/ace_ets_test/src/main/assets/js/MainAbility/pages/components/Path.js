/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/components/Path.ets?entry ***!
  \**************************************************************************************************************************************/
class PathExample extends View {
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
        console.info('path page show called');
    }
    onBuildDone() {
        console.info('path page build done called');
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.margin({ top: 5 });
        Text.create('Straight line');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Path.create();
        Path.width(300);
        Path.height(10);
        Path.commands('M0 0 L900 0');
        Path.stroke(Color.Black);
        Path.strokeWidth(3);
        Path.key('path');
        Text.create('Straight line graph');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({ justifyContent: FlexAlign.SpaceAround });
        Flex.width('100%');
        Path.create();
        Path.width(100);
        Path.height(100);
        Path.commands('M150 0 L300 300 L0 300 Z');
        Path.key('path1');
        Path.create();
        Path.width(100);
        Path.height(100);
        Path.commands('M0 0 H300 V300 H0 Z');
        Path.key('path2');
        Path.create();
        Path.width(100);
        Path.height(100);
        Path.commands('M150 0 L0 150 L60 300 L240 300 L300 150 Z');
        Path.key('path3');
        Flex.pop();
        Text.create('Curve graphics');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({ justifyContent: FlexAlign.SpaceAround });
        Path.create();
        Path.width(100);
        Path.height(100);
        Path.commands("M0 300 S150 0 300 300 Z");
        Path.key('path4');
        Path.create();
        Path.width(100);
        Path.height(100);
        Path.commands('M0 150 C0 150 150 0 300 150 L150 300 Z');
        Path.key('path5');
        Flex.pop();
        Column.pop();
    }
}
loadDocument(new PathExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Path.js.map