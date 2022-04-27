/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/components/RichText.ets?entry ***!
  \******************************************************************************************************************************************/
class richTextTest extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__data = new ObservedPropertySimple("<div class=\"item-title\"><h1>文本测试(h1测试)</h1></div>", this, "data");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.data !== undefined) {
            this.data = params.data;
        }
    }
    aboutToBeDeleted() {
        this.__data.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get data() {
        return this.__data.get();
    }
    set data(newValue) {
        this.__data.set(newValue);
    }
    onPageShow() {
        console.info('richText page show called');
    }
    onBuildDone() {
        console.info('richText page build done called');
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.height('100%');
        RichText.create(this.data);
        RichText.key('richText');
        RichText.onStart(() => {
            console.info("RichText onStart");
        });
        RichText.onComplete(() => {
            console.info("RichText onComplete");
        });
        RichText.pop();
        Column.pop();
    }
}
loadDocument(new richTextTest("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=RichText.js.map