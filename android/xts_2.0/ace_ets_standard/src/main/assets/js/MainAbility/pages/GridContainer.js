/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*********************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/GridContainer.ets?entry ***!
  \*********************************************************************************************************************/
class gridContainer extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__sizeType = new ObservedPropertySimple(SizeType.XS, this, "sizeType");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.content = "GridContainer Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.sizeType !== undefined) {
            this.sizeType = params.sizeType;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        this.__sizeType.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get sizeType() {
        return this.__sizeType.get();
    }
    set sizeType(newValue) {
        this.__sizeType.set(newValue);
    }
    get active() {
        return this.__active.get();
    }
    set active(newValue) {
        this.__active.set(newValue);
    }
    onPageShow() {
        console.info('GridContainer page show called');
    }
    onBuildDone() {
        console.info('GridContainer page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.key('flex');
        Flex.width('100%');
        Flex.height('100%');
        Text.create(`${this.content}`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Scroll.create();
        Column.create({ space: 5 });
        Column.width('100%');
        Column.margin({ top: 5 });
        GridContainer.create({ columns: 12, sizeType: this.sizeType, gutter: 10, margin: 20 });
        GridContainer.key('gridContainer');
        GridContainer.width('90%');
        GridContainer.alignItems(HorizontalAlign.Start);
        Row.create();
        Text.create('1');
        Text.useSizeType({
            xs: { span: 6, offset: 0 },
            sm: { span: 2, offset: 0 },
            md: { span: 2, offset: 0 },
            lg: { span: 2, offset: 0 }
        });
        Text.height(50);
        Text.backgroundColor(0x4682B4);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('2');
        Text.gridSpan(2);
        Text.height(50);
        Text.backgroundColor(0x00BFFF);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('3');
        Text.gridOffset(3);
        Text.height(50);
        Text.backgroundColor(0x4682B4);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Row.pop();
        GridContainer.pop();
        Text.create('Click Simulate to change the device width');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Row.create();
        Button.createWithLabel('XS');
        Button.onClick(() => {
            this.sizeType = SizeType.XS;
        });
        Button.backgroundColor(0x317aff);
        Button.pop();
        Button.createWithLabel('SM');
        Button.onClick(() => {
            this.sizeType = SizeType.SM;
        });
        Button.backgroundColor(0x317aff);
        Button.pop();
        Button.createWithLabel('MD');
        Button.onClick(() => {
            this.sizeType = SizeType.MD;
        });
        Button.backgroundColor(0x317aff);
        Button.pop();
        Button.createWithLabel('LG');
        Button.onClick(() => {
            this.sizeType = SizeType.LG;
        });
        Button.backgroundColor(0x317aff);
        Button.pop();
        Row.pop();
        GridContainer.create({ columns: "auto", sizeType: SizeType.MD, gutter: '10', margin: '20' });
        GridContainer.key('gridContainer1');
        GridContainer.width('90%');
        GridContainer.alignItems(HorizontalAlign.Center);
        Row.create();
        Text.create('1');
        Text.useSizeType({
            xs: { span: 6, offset: 0 },
            sm: { span: 2, offset: 0 },
            md: { span: 2, offset: 0 },
            lg: { span: 2, offset: 0 }
        });
        Text.height(50);
        Text.backgroundColor(0x4682B4);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('2');
        Text.gridSpan(2);
        Text.height(50);
        Text.backgroundColor(0x00BFFF);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('3');
        Text.gridOffset(3);
        Text.height(50);
        Text.backgroundColor(0x4682B4);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Row.pop();
        GridContainer.pop();
        GridContainer.create({ columns: 12, sizeType: SizeType.SM, gutter: 10, margin: 20 });
        GridContainer.key('gridContainer2');
        GridContainer.width('90%');
        GridContainer.alignItems(HorizontalAlign.End);
        Row.create();
        Text.create('1');
        Text.useSizeType({
            xs: { span: 6, offset: 0 },
            sm: { span: 2, offset: 0 },
            md: { span: 2, offset: 0 },
            lg: { span: 2, offset: 0 }
        });
        Text.height(50);
        Text.backgroundColor(0x4682B4);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('2');
        Text.gridSpan(2);
        Text.height(50);
        Text.backgroundColor(0x00BFFF);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('3');
        Text.gridOffset(3);
        Text.height(50);
        Text.backgroundColor(0x4682B4);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Row.pop();
        GridContainer.pop();
        GridContainer.create({ columns: 12, sizeType: SizeType.LG, gutter: 10, margin: 20 });
        GridContainer.key('gridContainer3');
        GridContainer.width('90%');
        GridContainer.alignItems(HorizontalAlign.End);
        Row.create();
        Text.create('1');
        Text.useSizeType({
            xs: { span: 6, offset: 0 },
            sm: { span: 2, offset: 0 },
            md: { span: 2, offset: 0 },
            lg: { span: 2, offset: 0 }
        });
        Text.height(50);
        Text.backgroundColor(0x4682B4);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('2');
        Text.gridSpan(2);
        Text.height(50);
        Text.backgroundColor(0x00BFFF);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('3');
        Text.gridOffset(3);
        Text.height(50);
        Text.backgroundColor(0x4682B4);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Row.pop();
        GridContainer.pop();
        GridContainer.create({ columns: 12, sizeType: SizeType.Auto, gutter: 10, margin: 20 });
        GridContainer.key('gridContainer4');
        GridContainer.width('90%');
        GridContainer.alignItems(HorizontalAlign.End);
        Row.create();
        Text.create('1');
        Text.useSizeType({
            xs: { span: 6, offset: 0 },
            sm: { span: 2, offset: 0 },
            md: { span: 2, offset: 0 },
            lg: { span: 2, offset: 0 }
        });
        Text.height(50);
        Text.backgroundColor(0x4682B4);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('2');
        Text.gridSpan(2);
        Text.height(50);
        Text.backgroundColor(0x00BFFF);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('3');
        Text.gridOffset(3);
        Text.height(50);
        Text.backgroundColor(0x4682B4);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Row.pop();
        GridContainer.pop();
        Column.pop();
        Scroll.pop();
        Flex.pop();
    }
}
loadDocument(new gridContainer("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=GridContainer.js.map