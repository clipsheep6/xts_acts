/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/RowSplit.ets?entry ***!
  \****************************************************************************************************************/
var router = globalThis.requireNativeModule('system.router');
class rowSplit_testcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__resizeable = new ObservedPropertySimple(false, this, "resizeable");
        this.content = "rowSplit Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.resizeable !== undefined) {
            this.resizeable = params.resizeable;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        this.__resizeable.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get resizeable() {
        return this.__resizeable.get();
    }
    set resizeable(newValue) {
        this.__resizeable.set(newValue);
    }
    onPageShow() {
        console.info('RowSplit page show called');
    }
    onBuildDone() {
        console.info('RowSplit page build done called');
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
        RowSplit.create();
        RowSplit.height(100);
        RowSplit.key('rowSplit');
        RowSplit.resizeable(this.resizeable);
        RowSplit.onClick(() => {
            router.back();
        });
        Column.create();
        Text.create('Demo1.RowSplit');
        Text.fontSize(15);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Column.pop();
        Column.create();
        Text.create('Demo2.RowSplit');
        Text.fontSize(15);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Column.pop();
        RowSplit.pop();
        RowSplit.create();
        RowSplit.height(100);
        RowSplit.key('rowSplit1');
        RowSplit.resizeable(true);
        Column.create();
        Text.create('Demo3.RowSplit');
        Text.fontSize(15);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Column.pop();
        Column.create();
        Text.create('Demo4.RowSplit');
        Text.fontSize(15);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Column.pop();
        RowSplit.pop();
        Flex.pop();
    }
}
loadDocument(new rowSplit_testcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=RowSplit.js.map