/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Span.ets?entry ***!
  \************************************************************************************************************/
class span_textcase extends View {
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
        console.info('Span page show called');
    }
    onBuildDone() {
        console.info('Span page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Column.create();
        Column.width(300);
        Column.height(300);
        Column.borderColor(Color.Pink);
        Column.borderWidth(4);
        Text.create();
        Span.create('Test Span demo');
        Span.decoration({ type: TextDecorationType.LineThrough, "color": Color.Red });
        Span.textCase(TextCase.UpperCase);
        Span.fontColor(Color.Blue);
        Span.fontSize("20fp");
        Span.letterSpacing(5);
        Span.fontFamily("sans-serif");
        Span.fontWeight(FontWeight.Bold);
        Span.fontStyle(FontStyle.Italic);
        Span.key('span1');
        Span.create('The second test Span demo');
        Span.textCase(TextCase.LowerCase);
        Span.fontColor(Color.Black);
        Span.letterSpacing('5');
        Span.fontSize(30);
        Span.key('span2');
        Span.create('The third test Span demo');
        Span.textCase(TextCase.Normal);
        Span.fontColor(Color.Yellow);
        Span.fontSize("30fp");
        Span.key('span3');
        Text.pop();
        Column.pop();
        Flex.pop();
    }
}
loadDocument(new span_textcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Span.js.map