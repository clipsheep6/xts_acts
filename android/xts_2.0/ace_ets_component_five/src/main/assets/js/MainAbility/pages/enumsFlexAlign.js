/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\enumsFlexAlign.ets?entry ***!
  \************************************************************************************************************************************/
class JustifyContentFlex extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__justifyContent = new ObservedPropertySimple(FlexAlign.Center, this, "justifyContent");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.justifyContent !== undefined) {
            this.justifyContent = params.justifyContent;
        }
    }
    aboutToBeDeleted() {
        this.__justifyContent.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get justifyContent() {
        return this.__justifyContent.get();
    }
    set justifyContent(newValue) {
        this.__justifyContent.set(newValue);
    }
    render() {
        Flex.create({ justifyContent: this.justifyContent });
        Flex.key("justifyContent");
        Flex.width('90%');
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('1');
        Text.width('20%');
        Text.height(50);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Text.create('2');
        Text.width('20%');
        Text.height(50);
        Text.backgroundColor(0xD2B48C);
        Text.pop();
        Text.create('3');
        Text.width('20%');
        Text.height(50);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new JustifyContentFlex("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=enumsFlexAlign.js.map