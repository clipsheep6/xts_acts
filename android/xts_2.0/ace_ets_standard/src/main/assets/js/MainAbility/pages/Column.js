/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Column.ets?entry ***!
  \**************************************************************************************************************/
class column extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.content = "Column Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.active !== undefined) {
            this.active = params.active;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        this.__active.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get active() {
        return this.__active.get();
    }
    set active(newValue) {
        this.__active.set(newValue);
    }
    onPageShow() {
        console.info('Column page show called');
    }
    onBuildDone() {
        console.info('Column page build done called');
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.padding({ top: 5 });
        Text.create('alignItems(Center)');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Column.create();
        Column.alignItems(HorizontalAlign.Center);
        Column.width('90%');
        Column.border({ width: 1 });
        Column.key('column');
        Column.create();
        Column.width('50%');
        Column.height(50);
        Column.backgroundColor(0xAFEEEE);
        Column.pop();
        Column.create();
        Column.width('50%');
        Column.height(50);
        Column.backgroundColor(0x00FFFF);
        Column.pop();
        Column.pop();
        Text.create('alignItems(Start)');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Column.create({ space: '5' });
        Column.alignItems(HorizontalAlign.Start);
        Column.width('90%');
        Column.border({ width: 1 });
        Column.key('column1');
        Column.create();
        Column.width('50%');
        Column.height(50);
        Column.backgroundColor(0xAFEEEE);
        Column.pop();
        Column.create();
        Column.width('50%');
        Column.height(50);
        Column.backgroundColor(0x00FFFF);
        Column.pop();
        Column.pop();
        Text.create('alignItems(End)');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Column.create();
        Column.alignItems(HorizontalAlign.End);
        Column.width('90%');
        Column.border({ width: 1 });
        Column.key('column2');
        Column.create();
        Column.width('50%');
        Column.height(50);
        Column.backgroundColor(0xAFEEEE);
        Column.pop();
        Column.create();
        Column.width('50%');
        Column.height(50);
        Column.backgroundColor(0x00FFFF);
        Column.pop();
        Column.pop();
        Column.pop();
    }
}
loadDocument(new column("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Column.js.map