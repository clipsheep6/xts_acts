/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\visibility.ets?entry ***!
  \***************************************************************************************************************************/
class VisibilityExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__visibility = new ObservedPropertySimple(Visibility.Visible, this, "visibility");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.visibility !== undefined) {
            this.visibility = params.visibility;
        }
    }
    aboutToBeDeleted() {
        this.__visibility.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get visibility() {
        return this.__visibility.get();
    }
    set visibility(newValue) {
        this.__visibility.set(newValue);
    }
    onPageShow() {
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.margin({ top: 5 });
        Column.create();
        Column.width('90%');
        Column.border({ width: 1 });
        Text.create('BoxOne');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Row.create();
        Row.visibility(this.visibility);
        Row.width('90%');
        Row.height(80);
        Row.backgroundColor(0xAFEEEE);
        Row.padding(20);
        Row.key('box');
        Row.pop();
        Text.create('BoxTwo');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Row.create();
        Row.visibility(Visibility.Visible);
        Row.width('90%');
        Row.height(80);
        Row.backgroundColor(0xAFEEEE);
        Row.padding(20);
        Row.pop();
        Column.pop();
        Column.pop();
    }
}
loadDocument(new VisibilityExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=visibility.js.map