/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/AlphabetIndexer.ets?entry ***!
  \**************************************************************************************************************************************/
class alphabetIndexer extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.value = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'];
        this.value1 = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'];
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.content = "AlphabetIndexer Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.value !== undefined) {
            this.value = params.value;
        }
        if (params.value1 !== undefined) {
            this.value1 = params.value1;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        this.__active.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get active() {
        return this.__active.get();
    }
    set active(newValue) {
        this.__active.set(newValue);
    }
    onPageShow() {
        console.info('alphabetIndexer page show called');
    }
    onBuildDone() {
        console.info('alphabetIndexer page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Text.create(`${this.content}`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Text.create("AlphabetIndexer0");
        Text.pop();
        AlphabetIndexer.create({ arrayValue: this.value, selected: 0 });
        AlphabetIndexer.color('#FF00DDDD');
        AlphabetIndexer.selectedColor(0xffffff);
        AlphabetIndexer.key('alphabetIndexer');
        AlphabetIndexer.popupColor('#FF737373');
        AlphabetIndexer.selectedBackgroundColor('#FF0000E6');
        AlphabetIndexer.popupBackground('#FF00DDDD');
        AlphabetIndexer.usingPopup(true);
        AlphabetIndexer.selectedFont({ size: 16, weight: FontWeight.Regular });
        AlphabetIndexer.popupFont({ size: 30, weight: FontWeight.Bolder, style: FontStyle.Normal });
        AlphabetIndexer.itemSize(28);
        AlphabetIndexer.alignStyle(IndexerAlign.Left);
        AlphabetIndexer.onSelected((index) => {
            console.info(this.value[index] + ' on selected');
        });
        AlphabetIndexer.pop();
        Text.create("AlphabetIndexer1");
        Text.pop();
        AlphabetIndexer.create({ arrayValue: this.value1, selected: 0 });
        AlphabetIndexer.selectedColor(0xffffff);
        AlphabetIndexer.key('alphabetIndexer1');
        AlphabetIndexer.popupColor('#FF737373');
        AlphabetIndexer.selectedBackgroundColor('#FF0000E6');
        AlphabetIndexer.popupBackground('#FF00DDDD');
        AlphabetIndexer.usingPopup(false);
        AlphabetIndexer.selectedFont({ size: 16, weight: FontWeight.Lighter });
        AlphabetIndexer.popupFont({ size: 30, weight: FontWeight.Bold, style: FontStyle.Italic });
        AlphabetIndexer.itemSize(28);
        AlphabetIndexer.alignStyle(IndexerAlign.Right);
        AlphabetIndexer.margin({ left: 50 });
        AlphabetIndexer.onSelected((index) => {
            console.info(this.value[index] + ' on selected');
        });
        AlphabetIndexer.pop();
        Flex.pop();
    }
}
loadDocument(new alphabetIndexer("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=AlphabetIndexer.js.map