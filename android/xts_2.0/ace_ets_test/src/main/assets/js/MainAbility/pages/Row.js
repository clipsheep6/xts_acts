/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/Row.ets?entry ***!
  \**************************************************************************************************************************/
class row_testcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__alignItems = new ObservedPropertySimple(VerticalAlign.Top, this, "alignItems");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.alignItems !== undefined) {
            this.alignItems = params.alignItems;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
    }
    aboutToBeDeleted() {
        this.__alignItems.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get alignItems() {
        return this.__alignItems.get();
    }
    set alignItems(newValue) {
        this.__alignItems.set(newValue);
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
        Column.height(300);
        Column.borderColor(Color.Pink);
        Column.borderWidth(2);
        Navigator.create({ target: "pages/index", type: NavigationType.Back });
        Navigator.active(this.active);
        Navigator.params({
            data: 26
        });
        Row.create();
        Row.key('row');
        Row.alignItems(this.alignItems);
        Column.create();
        Text.create("Row-Demo1");
        Text.pop();
        Column.pop();
        Column.create();
        Text.create("Demo2");
        Text.pop();
        Column.pop();
        Row.pop();
        Navigator.pop();
        Column.pop();
    }
}
loadDocument(new row_testcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Row.js.map