/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\textInput.ets?entry ***!
  \********************************************************************************************************/
class TextAreaExample2 extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__text = new ObservedPropertySimple('TextInput', this, "text");
        this.__inputType = new ObservedPropertyObject(InputType.Normal, this, "inputType");
        this.__fontSize = new ObservedPropertySimple(16, this, "fontSize");
        this.__fontColor = new ObservedPropertyObject(Color.Black, this, "fontColor");
        this.__textAlign = new ObservedPropertyObject(TextAlign.Start, this, "textAlign");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("swiper page state change called:" + JSON.stringify(eventData));
                if (eventData.data.fontSize != null) {
                    this.fontSize = parseInt(eventData.data.fontSize);
                }
                if (eventData.data.fontColor != null) {
                    this.fontColor = eventData.data.fontColor;
                }
                if (eventData.data.textAlign != null) {
                    this.textAlign = eventData.data.textAlign;
                }
                if (eventData.data.type != null) {
                    this.inputType = eventData.data.type;
                }
                if (eventData.data.Text != null) {
                    this.text = eventData.data.text;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.text !== undefined) {
            this.text = params.text;
        }
        if (params.inputType !== undefined) {
            this.inputType = params.inputType;
        }
        if (params.fontSize !== undefined) {
            this.fontSize = params.fontSize;
        }
        if (params.fontColor !== undefined) {
            this.fontColor = params.fontColor;
        }
        if (params.textAlign !== undefined) {
            this.textAlign = params.textAlign;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__text.aboutToBeDeleted();
        this.__inputType.aboutToBeDeleted();
        this.__fontSize.aboutToBeDeleted();
        this.__fontColor.aboutToBeDeleted();
        this.__textAlign.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    get inputType() {
        return this.__inputType.get();
    }
    set inputType(newValue) {
        this.__inputType.set(newValue);
    }
    get fontSize() {
        return this.__fontSize.get();
    }
    set fontSize(newValue) {
        this.__fontSize.set(newValue);
    }
    get fontColor() {
        return this.__fontColor.get();
    }
    set fontColor(newValue) {
        this.__fontColor.set(newValue);
    }
    get textAlign() {
        return this.__textAlign.get();
    }
    set textAlign(newValue) {
        this.__textAlign.set(newValue);
    }
    onPageShow() {
        var stateChangeEvent = {
            eventId: 225,
        };
    }
    render() {
        Column.create();
        TextArea.create({ placeholder: 'input your word' });
        TextArea.key('TextInput');
        TextArea.type(ObservedObject.GetRawObject(this.inputType));
        TextArea.placeholderColor("rgb(0,0,225)");
        TextArea.placeholderFont({ size: 30, weight: 100, family: 'cursive', style: FontStyle.Italic });
        TextArea.textAlign(ObservedObject.GetRawObject(this.textAlign));
        TextArea.caretColor(Color.Blue);
        TextArea.height(50);
        TextArea.fontSize(this.fontSize);
        TextArea.fontWeight(FontWeight.Bold);
        TextArea.fontFamily("sans-serif");
        TextArea.fontStyle(FontStyle.Normal);
        TextArea.fontColor(ObservedObject.GetRawObject(this.fontColor));
        TextArea.inputFilter('^[\u4E00-\u9FA5A-Za-z0-9_]+$', (value) => {
            console.info("hyb" + value);
        });
        TextArea.onChange((value) => {
            this.text = value;
        });
        Text.create(this.text);
        Text.width('90%');
        Text.key('text');
        Text.pop();
        Button.createWithLabel('caretPosition');
        Button.onClick(() => {
            this.controller.caretPosition(4);
        });
        Button.pop();
        Column.pop();
    }
}
loadDocument(new TextAreaExample2("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=textInput.js.map