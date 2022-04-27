/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/pages/TextInput.ets?entry ***!
  \***************************************************************************************************************************/
class TextInputExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__text = new ObservedPropertySimple('', this, "text");
        this.__textNew = new ObservedPropertySimple('', this, "textNew");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.text !== undefined) {
            this.text = params.text;
        }
        if (params.textNew !== undefined) {
            this.textNew = params.textNew;
        }
    }
    aboutToBeDeleted() {
        this.__text.aboutToBeDeleted();
        this.__textNew.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    get textNew() {
        return this.__textNew.get();
    }
    set textNew(newValue) {
        this.__textNew.set(newValue);
    }
    onPageShow() {
        console.info('textInput page show called');
    }
    onBuildDone() {
        console.info('textInput page build done called');
    }
    render() {
        Column.create({ space: 10 });
        Column.width('100%');
        Column.height('100%');
        Flex.create({ direction: FlexDirection.Row });
        TextInput.create({ placeholder: 'textInput 1', text: this.text });
        TextInput.type(InputType.Normal);
        TextInput.enterKeyType(EnterKeyType.Go);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.caretColor('#FF000000');
        TextInput.height(60);
        TextInput.fontSize(40);
        TextInput.fontWeight(FontWeight.Bold);
        TextInput.fontFamily('cursive');
        TextInput.fontStyle(FontStyle.Italic);
        TextInput.fontColor('#FFFF0000');
        TextInput.maxLength(10);
        TextInput.onChange((value) => {
            this.textNew = value;
        });
        TextInput.onSubmit((enterKey) => {
            this.textNew = 'onSubmit';
        });
        TextInput.onEditChanged((isEditing) => {
            this.textNew = 'onEditChanged';
        });
        TextInput.onCopy((value) => {
        });
        TextInput.key('textInput1');
        TextInput.create({ placeholder: 'textInput 2', text: this.text });
        TextInput.type(InputType.Normal);
        TextInput.enterKeyType(EnterKeyType.Search);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput2');
        Flex.pop();
        Flex.create({ direction: FlexDirection.Row });
        TextInput.create({ placeholder: 'textInput 3', text: this.text });
        TextInput.type(InputType.Normal);
        TextInput.enterKeyType(EnterKeyType.Send);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput3');
        TextInput.create({ placeholder: 'textInput 4', text: this.text });
        TextInput.type(InputType.Normal);
        TextInput.enterKeyType(EnterKeyType.Next);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput4');
        Flex.pop();
        Flex.create({ direction: FlexDirection.Row });
        TextInput.create({ placeholder: 'textInput 5', text: this.text });
        TextInput.type(InputType.Normal);
        TextInput.enterKeyType(EnterKeyType.Done);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput5');
        TextInput.create({ placeholder: 'textInput 6', text: this.text });
        TextInput.type(InputType.Password);
        TextInput.enterKeyType(EnterKeyType.Go);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput6');
        Flex.pop();
        Flex.create({ direction: FlexDirection.Row });
        TextInput.create({ placeholder: 'textInput 7', text: this.text });
        TextInput.type(InputType.Password);
        TextInput.enterKeyType(EnterKeyType.Search);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput7');
        TextInput.create({ placeholder: 'textInput 8', text: this.text });
        TextInput.type(InputType.Password);
        TextInput.enterKeyType(EnterKeyType.Send);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput8');
        Flex.pop();
        Flex.create({ direction: FlexDirection.Row });
        TextInput.create({ placeholder: 'textInput 9', text: this.text });
        TextInput.type(InputType.Password);
        TextInput.enterKeyType(EnterKeyType.Next);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput9');
        TextInput.create({ placeholder: 'textInput 10', text: this.text });
        TextInput.type(InputType.Password);
        TextInput.enterKeyType(EnterKeyType.Done);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput10');
        Flex.pop();
        Flex.create({ direction: FlexDirection.Row });
        TextInput.create({ placeholder: 'textInput 11', text: this.text });
        TextInput.type(InputType.Email);
        TextInput.enterKeyType(EnterKeyType.Go);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput11');
        TextInput.create({ placeholder: 'textInput 12', text: this.text });
        TextInput.type(InputType.Email);
        TextInput.enterKeyType(EnterKeyType.Search);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput12');
        Flex.pop();
        Flex.create({ direction: FlexDirection.Row });
        TextInput.create({ placeholder: 'textInput 13', text: this.text });
        TextInput.type(InputType.Email);
        TextInput.enterKeyType(EnterKeyType.Send);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput13');
        TextInput.create({ placeholder: 'textInput 14', text: this.text });
        TextInput.type(InputType.Email);
        TextInput.enterKeyType(EnterKeyType.Next);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput14');
        Flex.pop();
        Flex.create({ direction: FlexDirection.Row });
        TextInput.create({ placeholder: 'textInput 15', text: this.text });
        TextInput.type(InputType.Email);
        TextInput.enterKeyType(EnterKeyType.Done);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput15');
        TextInput.create({ placeholder: 'textInput 16', text: this.text });
        TextInput.type(InputType.Number);
        TextInput.enterKeyType(EnterKeyType.Go);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput16');
        Flex.pop();
        Flex.create({ direction: FlexDirection.Row });
        TextInput.create({ placeholder: 'textInput 17', text: this.text });
        TextInput.type(InputType.Number);
        TextInput.enterKeyType(EnterKeyType.Search);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput17');
        TextInput.create({ placeholder: 'textInput 18', text: this.text });
        TextInput.type(InputType.Number);
        TextInput.enterKeyType(EnterKeyType.Send);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput18');
        Flex.pop();
        Flex.create({ direction: FlexDirection.Row });
        TextInput.create({ placeholder: 'textInput 19', text: this.text });
        TextInput.type(InputType.Number);
        TextInput.enterKeyType(EnterKeyType.Next);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput19');
        TextInput.create({ placeholder: 'textInput 20', text: this.text });
        TextInput.type(InputType.Number);
        TextInput.enterKeyType(EnterKeyType.Done);
        TextInput.placeholderColor('#FFC0C0C0');
        TextInput.placeholderFont({ size: 30, weight: 400, family: 'Microsoft YaHei', style: FontStyle.Normal });
        TextInput.key('textInput20');
        Flex.pop();
        Column.pop();
    }
}
loadDocument(new TextInputExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=TextInput.js.map