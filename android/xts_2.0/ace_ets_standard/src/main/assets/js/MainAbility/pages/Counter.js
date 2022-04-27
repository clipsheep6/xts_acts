/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Counter.ets?entry ***!
  \***************************************************************************************************************/
class counter extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__value = new ObservedPropertySimple(0, this, "value");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.content = "Counter Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.value !== undefined) {
            this.value = params.value;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        this.__value.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get value() {
        return this.__value.get();
    }
    set value(newValue) {
        this.__value.set(newValue);
    }
    get active() {
        return this.__active.get();
    }
    set active(newValue) {
        this.__active.set(newValue);
    }
    onPageShow() {
        console.info('Counter page show called');
    }
    onBuildDone() {
        console.info('Counter page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.width("100%");
        Flex.key('flex');
        Flex.width('100%');
        Flex.height('100%');
        Text.create(`${this.content}`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Counter.create();
        Counter.margin(100);
        Counter.key('counter');
        Counter.onInc(() => {
            this.value++;
        });
        Counter.onDec(() => {
            this.value--;
        });
        Text.create(this.value.toString());
        Text.pop();
        Counter.pop();
        Flex.pop();
    }
}
loadDocument(new counter("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Counter.js.map