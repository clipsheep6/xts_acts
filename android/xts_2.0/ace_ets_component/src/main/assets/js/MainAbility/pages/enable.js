/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***********************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\enable.ets?entry ***!
  \***********************************************************************************************************************/
class EnabledExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__enabled = new ObservedPropertySimple(true, this, "enabled");
        this.__text = new ObservedPropertySimple("enable", this, "text");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.enabled !== undefined) {
            this.enabled = params.enabled;
        }
        if (params.text !== undefined) {
            this.text = params.text;
        }
    }
    aboutToBeDeleted() {
        this.__enabled.aboutToBeDeleted();
        this.__text.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get enabled() {
        return this.__enabled.get();
    }
    set enabled(newValue) {
        this.__enabled.set(newValue);
    }
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    onPageShow() {
        console.info('[enabled] page show called ');
    }
    render() {
        Flex.create({ justifyContent: FlexAlign.SpaceAround });
        Flex.debugLine("pages/enable.ets(36:5)");
        Flex.width('100%');
        Flex.padding({ top: 5 });
        Button.createWithLabel('disable');
        Button.debugLine("pages/enable.ets(37:7)");
        Button.enabled(false);
        Button.backgroundColor(0x317aff);
        Button.opacity(0.4);
        Button.pop();
        Button.createWithLabel(this.text);
        Button.debugLine("pages/enable.ets(41:7)");
        Button.key('enabled');
        Button.backgroundColor(0x317aff);
        Button.enabled(this.enabled);
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new EnabledExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=enable.js.map