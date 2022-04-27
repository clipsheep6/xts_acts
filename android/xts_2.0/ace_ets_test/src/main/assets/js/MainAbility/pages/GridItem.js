/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/GridItem.ets?entry ***!
  \*******************************************************************************************************************************/
class gridItem_testcasee extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__numbers = new ObservedPropertyObject(Array.apply(null, Array(16)).map(function (item, i) {
            return i.toString();
        }), this, "numbers");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.numbers !== undefined) {
            this.numbers = params.numbers;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
    }
    aboutToBeDeleted() {
        this.__numbers.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get numbers() {
        return this.__numbers.get();
    }
    set numbers(newValue) {
        this.__numbers.set(newValue);
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
            data: 20
        });
        Column.create();
        Column.width('100%');
        Column.margin({ top: 5 });
        Grid.create();
        Grid.columnsTemplate('1fr 1fr 1fr 1fr 1fr');
        Grid.rowsTemplate('1fr 1fr 1fr 1fr 1fr');
        Grid.width('90%');
        Grid.height(300);
        GridItem.create();
        GridItem.rowStart(1);
        GridItem.rowEnd(4);
        GridItem.columnStart(1);
        GridItem.columnEnd(2);
        GridItem.forceRebuild(false);
        GridItem.key('GridItem1');
        Text.create('4');
        Text.fontSize(16);
        Text.backgroundColor(0xFAEEE0);
        Text.width('100%');
        Text.height('100%');
        Text.textAlign(TextAlign.Center);
        Text.pop();
        GridItem.pop();
        ForEach.create("2", this, ObservedObject.GetRawObject(this.numbers), (item) => {
            GridItem.create();
            GridItem.forceRebuild(false);
            Text.create(item);
            Text.fontSize(16);
            Text.backgroundColor(0xF9CF93);
            Text.width('100%');
            Text.height('100%');
            Text.textAlign(TextAlign.Center);
            Text.pop();
            GridItem.pop();
        }, item => item);
        ForEach.pop();
        GridItem.create();
        GridItem.columnStart(1);
        GridItem.columnEnd(5);
        GridItem.forceRebuild(false);
        GridItem.key('GridItem2');
        Text.create('5');
        Text.fontSize(16);
        Text.backgroundColor(0xDBD0C0);
        Text.width('100%');
        Text.height('100%');
        Text.textAlign(TextAlign.Center);
        Text.pop();
        GridItem.pop();
        Grid.pop();
        Column.pop();
        Navigator.pop();
        Column.pop();
    }
}
loadDocument(new gridItem_testcasee("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=GridItem.js.map