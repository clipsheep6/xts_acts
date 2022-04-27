/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/components/Select.ets?entry ***!
  \****************************************************************************************************************************************/
class SlelectExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    onPageShow() {
        console.info('select page show called');
    }
    onBuildDone() {
        console.info('select page build done called');
    }
    render() {
        Column.create();
        Select.create([{ value: 'aaa', icon: "/common/1.png" },
            { value: 'bbb', icon: "/common/2.png" },
            { value: 'ccc', icon: "/common/3.png" },
            { value: 'ddd', icon: "/common/4.png" }]);
        Select.selected(2);
        Select.value('TTT');
        Select.font({ size: 30, weight: 400, family: 'serif', style: FontStyle.Normal });
        Select.selectedOptionFont({ size: 40, weight: 500, family: 'serif', style: FontStyle.Normal });
        Select.optionFont({ size: 30, weight: 400, family: 'serif', style: FontStyle.Normal });
        Select.fontColor(0x317aff);
        Select.optionBgColor(0xFFFFFF);
        Select.optionFontColor(0x000000);
        Select.selectedOptionBgColor(0xCCCCCC);
        Select.selectedOptionFontColor(0x000000);
        Select.key('select');
        Select.onSelected((index) => {
            console.info("Select:" + index);
        });
        Select.pop();
        Column.pop();
    }
}
loadDocument(new SlelectExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Select.js.map