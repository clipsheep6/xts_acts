/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/sharedTransition2.ets?entry ***!
  \***************************************************************************************************************************************************/
class SharedTransition2Example extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    render() {
        Stack.create();
        Stack.width('100%');
        Stack.height(400);
        Image.create({ "id": 0, "type": 30000, params: ['ic_health_heart.png'] });
        Image.width(150);
        Image.height(150);
        Image.sharedTransition('sharedImage1');
        Stack.pop();
    }
}
loadDocument(new SharedTransition2Example("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=sharedTransition2.js.map