/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\textArea.ets?entry ***!
  \*******************************************************************************************************/
class TextAreaExample2 extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__text = new ObservedPropertySimple('TextArea', this, "text");
        this.__fontColor = new ObservedPropertySimple("Color.Red", this, "fontColor");
        this.__fontSize = new ObservedPropertySimple(30, this, "fontSize");
        this.__textAlign = new ObservedPropertyObject(TextAlign.Center, this, "textAlign");
        this.__text = new ObservedPropertyObject('test text', this, "text");
        this.stateChangCallBack = (eventData) => {
            console.info("fang--->A");
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
                if (eventData.data.text != null) {
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
        if (params.fontColor !== undefined) {
            this.fontColor = params.fontColor;
        }
        if (params.fontSize !== undefined) {
            this.fontSize = params.fontSize;
        }
        if (params.textAlign !== undefined) {
            this.textAlign = params.textAlign;
        }
        if (params.text !== undefined) {
            this.text = params.text;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__text.aboutToBeDeleted();
        this.__fontColor.aboutToBeDeleted();
        this.__fontSize.aboutToBeDeleted();
        this.__textAlign.aboutToBeDeleted();
        this.__text.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    get fontColor() {
        return this.__fontColor.get();
    }
    set fontColor(newValue) {
        this.__fontColor.set(newValue);
    }
    get fontSize() {
        return this.__fontSize.get();
    }
    set fontSize(newValue) {
        this.__fontSize.set(newValue);
    }
    get textAlign() {
        return this.__textAlign.get();
    }
    set textAlign(newValue) {
        this.__textAlign.set(newValue);
    }
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    onPageShow() {
        console.info('swiper page show called');
        var stateChangeEvent = {
            eventId: 215,
        };
        console.log("fang--->B");
        var stateChangeEventOne = {
            eventId: 216,
        };
        var stateChangeEventTwo = {
            eventId: 217,
        };
        var stateChangeEventThree = {
            eventId: 218,
        };
    }
    render() {
        Column.create();
        TextArea.create({ placeholder: 'input your word', text: this.text });
        TextArea.key('textArea');
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
        });
        TextArea.onChange((value) => {
            this.text = value;
        });
        Text.create(this.text);
        Text.width('90%');
        Text.key('text');
        Text.pop();
        Column.pop();
    }
}
loadDocument(new TextAreaExample2("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=textArea.js.map