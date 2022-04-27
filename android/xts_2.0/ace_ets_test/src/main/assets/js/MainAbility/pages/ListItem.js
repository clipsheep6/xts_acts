/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/ListItem.ets?entry ***!
  \*******************************************************************************************************************************/
class listItem_testcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
        this.__editFlag = new ObservedPropertySimple(false, this, "editFlag");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.arr !== undefined) {
            this.arr = params.arr;
        }
        if (params.editFlag !== undefined) {
            this.editFlag = params.editFlag;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
    }
    aboutToBeDeleted() {
        this.__editFlag.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get editFlag() {
        return this.__editFlag.get();
    }
    set editFlag(newValue) {
        this.__editFlag.set(newValue);
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
        Column.create();
        Column.width('100%');
        Column.height('100%');
        Column.backgroundColor(0xDCDCDC);
        Column.padding({ top: 5 });
        List.create();
        ListItem.create();
        ListItem.sticky(Sticky.None);
        ListItem.editable(true);
        ListItem.key('listitem');
        Text.create('sticky:None , item1111');
        Text.width('100%');
        Text.height(40);
        Text.fontSize(12);
        Text.pop();
        ListItem.pop();
        ListItem.create();
        ListItem.sticky(Sticky.Normal);
        ListItem.editable(EditMode.Deletable);
        ListItem.key('listitem2');
        Text.create('sticky:Normal , item2222');
        Text.width('100%');
        Text.height(40);
        Text.fontSize(12);
        Text.pop();
        ListItem.pop();
        ListItem.create();
        ListItem.sticky(Sticky.Opacity);
        ListItem.editable(EditMode.None);
        ListItem.key('listitem3');
        Text.create('sticky:Opacity , item3333');
        Text.width('100%');
        Text.height(40);
        Text.fontSize(12);
        Text.pop();
        ListItem.pop();
        ListItem.create();
        ListItem.sticky(Sticky.Opacity);
        ListItem.editable(EditMode.Movable);
        ListItem.key('listitem4');
        Text.create('sticky:Opacity , item4444');
        Text.width('100%');
        Text.height(40);
        Text.fontSize(12);
        Text.pop();
        ListItem.pop();
        List.pop();
        Column.pop();
        Column.pop();
    }
}
loadDocument(new listItem_testcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=ListItem.js.map