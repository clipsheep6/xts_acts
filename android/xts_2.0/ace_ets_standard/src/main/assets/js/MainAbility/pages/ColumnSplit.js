/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/ColumnSplit.ets?entry ***!
  \*******************************************************************************************************************/
class columnSplit extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.content = "ColumnSplit Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    onPageShow() {
        console.info('ColumnSplit page show called');
    }
    onBuildDone() {
        console.info('ColumnSplit page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.key('flex');
        Flex.width('100%');
        Flex.height('100%');
        Scroll.create();
        Column.create();
        Text.create(`${this.content}`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Column.create();
        Column.width("100%");
        Text.create('ColumnSplit');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        ColumnSplit.create();
        ColumnSplit.key('columnSplit');
        ColumnSplit.resizeable(true);
        ColumnSplit.width('90%');
        ColumnSplit.height('60%');
        Text.create('1');
        Text.width('100%');
        Text.height(50);
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('2');
        Text.width('100%');
        Text.height(50);
        Text.backgroundColor(0xD2B48C);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('3');
        Text.width('100%');
        Text.height(50);
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('4');
        Text.width('100%');
        Text.height(50);
        Text.backgroundColor(0xD2B48C);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('5');
        Text.width('100%');
        Text.height(50);
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        ColumnSplit.pop();
        Column.pop();
        Column.create();
        Column.width("100%");
        Text.create('ColumnSplit1');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        ColumnSplit.create();
        ColumnSplit.key('columnSplit1');
        ColumnSplit.resizeable(false);
        ColumnSplit.width('90%');
        ColumnSplit.height('60%');
        Text.create('1');
        Text.width('100%');
        Text.height(50);
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('2');
        Text.width('100%');
        Text.height(50);
        Text.backgroundColor(0xD2B48C);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('3');
        Text.width('100%');
        Text.height(50);
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('4');
        Text.width('100%');
        Text.height(50);
        Text.backgroundColor(0xD2B48C);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('5');
        Text.width('100%');
        Text.height(50);
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        ColumnSplit.pop();
        Column.pop();
        Column.pop();
        Scroll.pop();
        Flex.pop();
    }
}
loadDocument(new columnSplit("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=ColumnSplit.js.map