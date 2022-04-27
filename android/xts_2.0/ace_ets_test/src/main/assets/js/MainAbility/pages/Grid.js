/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/Grid.ets?entry ***!
  \***************************************************************************************************************************/
class grid_testcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__Number = new ObservedPropertyObject(['0', '1', '2', '3', '4'], this, "Number");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.Number !== undefined) {
            this.Number = params.Number;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
    }
    aboutToBeDeleted() {
        this.__Number.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get Number() {
        return this.__Number.get();
    }
    set Number(newValue) {
        this.__Number.set(newValue);
    }
    get active() {
        return this.__active.get();
    }
    set active(newValue) {
        this.__active.set(newValue);
    }
    render() {
        Column.create();
        Column.width(300);
        Column.height(350);
        Column.borderColor(Color.Pink);
        Column.borderWidth(2);
        Navigator.create({ target: "pages/index", type: NavigationType.Back });
        Navigator.active(this.active);
        Navigator.params({
            data: 19
        });
        Column.create({ space: 5 });
        Column.width('100%');
        Column.margin({ top: 5 });
        Grid.create();
        Grid.columnsTemplate('1fr 1fr 1fr 1fr 1fr');
        Grid.rowsTemplate('1fr 1fr 1fr 1fr 1fr');
        Grid.columnsGap(10);
        Grid.rowsGap(10);
        Grid.width('90%');
        Grid.backgroundColor(0xFAEEE0);
        Grid.height(300);
        Grid.key('Grid');
        ForEach.create("3", this, ObservedObject.GetRawObject(this.Number), (day) => {
            ForEach.create("2", this, ObservedObject.GetRawObject(this.Number), (day) => {
                GridItem.create();
                Text.create(day);
                Text.fontSize(16);
                Text.backgroundColor(0xF9CF93);
                Text.width('100%');
                Text.height('100%');
                Text.textAlign(TextAlign.Center);
                Text.pop();
                GridItem.pop();
            }, day => day);
            ForEach.pop();
        }, day => day);
        ForEach.pop();
        Grid.pop();
        Column.pop();
        Navigator.pop();
        Column.pop();
    }
}
loadDocument(new grid_testcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Grid.js.map