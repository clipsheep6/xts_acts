/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Flex.ets?entry ***!
  \************************************************************************************************************/
class flex extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.content = "Flex Page";
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
        console.info('Flex page show called');
    }
    onBuildDone() {
        console.info('Flex page build done called');
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.create({ space: 2 });
        Column.width('100%');
        Column.margin({ top: 5 });
        Text.create('direction:Column');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({
            direction: FlexDirection.Column,
            wrap: FlexWrap.NoWrap,
            justifyContent: FlexAlign.Center,
            alignItems: ItemAlign.Start,
            alignContent: FlexAlign.Start,
        });
        Flex.key('flex');
        Flex.height(70);
        Flex.width('90%');
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('1');
        Text.width('100%');
        Text.height(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Text.create('2');
        Text.width('100%');
        Text.height(20);
        Text.backgroundColor(0xD2B48C);
        Text.pop();
        Text.create('3');
        Text.width('100%');
        Text.height(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Flex.pop();
        Text.create('direction:Row');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({
            direction: FlexDirection.Row,
            wrap: FlexWrap.Wrap,
            justifyContent: FlexAlign.Start,
            alignItems: ItemAlign.Start,
            alignContent: FlexAlign.Center,
        });
        Flex.key('flex1');
        Flex.height(70);
        Flex.width('90%');
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('1');
        Text.width('20%');
        Text.height(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Text.create('2');
        Text.width('20%');
        Text.height(20);
        Text.backgroundColor(0xD2B48C);
        Text.pop();
        Text.create('3');
        Text.width('20%');
        Text.height(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Flex.pop();
        Text.create('direction:RowReverse');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({
            direction: FlexDirection.RowReverse,
            wrap: FlexWrap.Wrap,
            justifyContent: FlexAlign.End,
            alignItems: ItemAlign.End,
            alignContent: FlexAlign.End,
        });
        Flex.key('flex2');
        Flex.height(90);
        Flex.width('90%');
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('1');
        Text.width('50%');
        Text.height(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Text.create('2');
        Text.width('50%');
        Text.height(20);
        Text.backgroundColor(0xD2B48C);
        Text.pop();
        Text.create('3');
        Text.width('50%');
        Text.height(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Flex.pop();
        Text.create('justifyContent:SpaceBetween');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({
            justifyContent: FlexAlign.SpaceBetween,
            wrap: FlexWrap.Wrap,
        });
        Flex.key('flex3');
        Flex.height(100);
        Flex.width('90%');
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('1');
        Text.width('100%');
        Text.height(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Text.create('2');
        Text.width('100%');
        Text.height(20);
        Text.backgroundColor(0xD2B48C);
        Text.pop();
        Text.create('3');
        Text.width('100%');
        Text.height(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Flex.pop();
        Text.create('justifyContent AND alignContent');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({
            justifyContent: FlexAlign.SpaceEvenly,
            alignContent: FlexAlign.SpaceEvenly,
            wrap: FlexWrap.Wrap,
        });
        Flex.key('flex4');
        Flex.height(90);
        Flex.width('90%');
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('1');
        Text.width('50%');
        Text.height(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Text.create('2');
        Text.width('50%');
        Text.height(20);
        Text.backgroundColor(0xD2B48C);
        Text.pop();
        Text.create('3');
        Text.width('50%');
        Text.height(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Flex.pop();
        Text.create('justifyContent AND alignContent');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({
            justifyContent: FlexAlign.SpaceAround,
            alignContent: FlexAlign.SpaceAround,
            wrap: FlexWrap.Wrap,
        });
        Flex.key('flex5');
        Flex.height(90);
        Flex.width('90%');
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('1');
        Text.width('50%');
        Text.height(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Text.create('2');
        Text.width('50%');
        Text.height(20);
        Text.backgroundColor(0xD2B48C);
        Text.pop();
        Text.create('3');
        Text.width('50%');
        Text.height(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Flex.pop();
        Column.pop();
        Column.pop();
    }
}
loadDocument(new flex("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Flex.js.map