/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/Navigator.ets?entry ***!
  \********************************************************************************************************************************/
class navigator_testcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.__params = new ObservedPropertyObject({ text: 'news' }, this, "params");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.active !== undefined) {
            this.active = params.active;
        }
        if (params.params !== undefined) {
            this.params = params.params;
        }
    }
    aboutToBeDeleted() {
        this.__active.aboutToBeDeleted();
        this.__params.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get active() {
        return this.__active.get();
    }
    set active(newValue) {
        this.__active.set(newValue);
    }
    get params() {
        return this.__params.get();
    }
    set params(newValue) {
        this.__params.set(newValue);
    }
    render() {
        Column.create();
        Column.width(300);
        Column.height(300);
        Column.borderColor(Color.Pink);
        Column.borderWidth(2);
        Navigator.create({ target: "pages/index", type: NavigationType.Back });
        Navigator.active(this.active);
        Navigator.key('navigator');
        Navigator.params({
            data: 24
        });
        Text.create('Navigator test  go to Navigator， back called');
        Text.pop();
        Navigator.pop();
        Navigator.create({ target: "pages/index", type: NavigationType.Push });
        Navigator.active(this.active);
        Navigator.key('navigator2');
        Navigator.params({
            data: 24
        });
        Text.create('Navigator test  go to Navigator, router called');
        Text.pop();
        Navigator.pop();
        Navigator.create({ target: "pages/index", type: NavigationType.Replace });
        Navigator.active(this.active);
        Navigator.key('navigator3');
        Navigator.params({
            data: 24
        });
        Text.create('Navigator test  go to Navigator，changed called');
        Text.pop();
        Navigator.pop();
        Column.pop();
    }
}
loadDocument(new navigator_testcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Navigator.js.map