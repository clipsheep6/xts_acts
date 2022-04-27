/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/components/XComponentPage.ets?entry ***!
  \************************************************************************************************************************************************/
class XComponentPage extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.xComponentController = new XComponentController();
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.xComponentController !== undefined) {
            this.xComponentController = params.xComponentController;
        }
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    render() {
        Column.create();
        Button.createWithLabel('getXComponentSurfaceId');
        Button.onClick(() => {
            this.xComponentController.getXComponentSurfaceId();
            console.log('getXComponentSurfaceId  ...');
        });
        Button.pop();
        XComponent.create({ id: '1', type: '2', libraryname: '3', controller: this.xComponentController });
        XComponent.onLoad((e) => {
            console.log('onLoad  ...' + JSON.stringify(e));
        });
        XComponent.onDestroy(() => {
            console.log('onDestroy  ...');
        });
        Column.pop();
    }
}
loadDocument(new XComponentPage("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=XComponentPage.js.map