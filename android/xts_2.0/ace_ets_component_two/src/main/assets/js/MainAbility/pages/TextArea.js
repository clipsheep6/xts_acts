/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\TextArea.ets?entry ***!
  \*******************************************************************************************************/
class TextAreaExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__text = new ObservedPropertySimple('', this, "text");
        this.__text1 = new ObservedPropertySimple('TextArea1', this, "text1");
        this.__text2 = new ObservedPropertySimple('TextArea2', this, "text2");
        this.__text3 = new ObservedPropertySimple('TextArea3', this, "text3");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.text !== undefined) {
            this.text = params.text;
        }
        if (params.text1 !== undefined) {
            this.text1 = params.text1;
        }
        if (params.text2 !== undefined) {
            this.text2 = params.text2;
        }
        if (params.text3 !== undefined) {
            this.text3 = params.text3;
        }
    }
    aboutToBeDeleted() {
        this.__text.aboutToBeDeleted();
        this.__text1.aboutToBeDeleted();
        this.__text2.aboutToBeDeleted();
        this.__text3.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    get text1() {
        return this.__text1.get();
    }
    set text1(newValue) {
        this.__text1.set(newValue);
    }
    get text2() {
        return this.__text2.get();
    }
    set text2(newValue) {
        this.__text2.set(newValue);
    }
    get text3() {
        return this.__text3.get();
    }
    set text3(newValue) {
        this.__text3.set(newValue);
    }
    onPageShow() {
        console.info('textArea page show called');
    }
    onBuildDone() {
        console.info('textArea page build done called');
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.height('100%');
        Text.create(this.text1);
        Text.width('90%');
        Text.height(60);
        Text.fontSize(40);
        Text.pop();
        TextArea.create({ placeholder: 'Please entry keywords', text: this.text });
        TextArea.placeholderColor('#FFC0C0C0');
        TextArea.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextArea.textAlign(TextAlign.Start);
        TextArea.caretColor('#FF000000');
        TextArea.height(60);
        TextArea.fontSize(40);
        TextArea.fontWeight(FontWeight.Bold);
        TextArea.fontFamily('cursive');
        TextArea.fontStyle(FontStyle.Italic);
        TextArea.fontColor('#FFFF0000');
        TextArea.onChange((value) => {
            this.text1 = value;
        });
        TextArea.key('textArea1');
        Text.create(this.text2);
        Text.width('90%');
        Text.height(60);
        Text.fontSize(40);
        Text.pop();
        TextArea.create({ placeholder: 'Please entry keywords', text: this.text });
        TextArea.placeholderColor('#FFC0C0C0');
        TextArea.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextArea.textAlign(TextAlign.Center);
        TextArea.caretColor('#FF000000');
        TextArea.height(60);
        TextArea.fontSize(40);
        TextArea.fontWeight(FontWeight.Bold);
        TextArea.fontFamily('cursive');
        TextArea.fontStyle(FontStyle.Italic);
        TextArea.fontColor('#FFFF0000');
        TextArea.onChange((value) => {
            this.text2 = value;
        });
        TextArea.key('textArea2');
        Text.create(this.text3);
        Text.width('90%');
        Text.height(60);
        Text.fontSize(40);
        Text.pop();
        TextArea.create({ placeholder: 'Please entry keywords', text: this.text });
        TextArea.placeholderColor('#FFC0C0C0');
        TextArea.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextArea.textAlign(TextAlign.End);
        TextArea.caretColor('#FF000000');
        TextArea.height(60);
        TextArea.fontSize(40);
        TextArea.fontWeight(FontWeight.Bold);
        TextArea.fontFamily('cursive');
        TextArea.fontStyle(FontStyle.Italic);
        TextArea.fontColor('#FFFF0000');
        TextArea.onChange((value) => {
            this.text3 = value;
        });
        TextArea.key('textArea3');
        Column.pop();
    }
}
loadDocument(new TextAreaExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=TextArea.js.map