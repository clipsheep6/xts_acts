/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/text.ets?entry ***!
  \**************************************************************************************************************************************/
class TextExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__fontSize = new ObservedPropertySimple(9, this, "fontSize");
        this.__fontColor = new ObservedPropertySimple("0xCCCCCC", this, "fontColor");
        this.__textAlign = new ObservedPropertySimple(TextAlign.Start, this, "textAlign");
        this.__textOverflow = new ObservedPropertySimple(TextOverflow.Clip, this, "textOverflow");
        this.__decoration = new ObservedPropertySimple(TextDecorationType.None, this, "decoration");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("text page state change called:" + JSON.stringify(eventData));
                if (eventData.data.fontSize != null) {
                    this.fontSize = parseInt(eventData.data.fontSize);
                }
                if (eventData.data.fontColor != null) {
                    this.fontColor = eventData.data.fontColor;
                }
                if (eventData.data.textAlign != null) {
                    this.textAlign = parseInt(eventData.data.textAlign);
                }
                if (eventData.data.textOverflow != null) {
                    this.textOverflow = parseInt(eventData.data.textOverflow);
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.fontSize !== undefined) {
            this.fontSize = params.fontSize;
        }
        if (params.fontColor !== undefined) {
            this.fontColor = params.fontColor;
        }
        if (params.textAlign !== undefined) {
            this.textAlign = params.textAlign;
        }
        if (params.textOverflow !== undefined) {
            this.textOverflow = params.textOverflow;
        }
        if (params.decoration !== undefined) {
            this.decoration = params.decoration;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__fontSize.aboutToBeDeleted();
        this.__fontColor.aboutToBeDeleted();
        this.__textAlign.aboutToBeDeleted();
        this.__textOverflow.aboutToBeDeleted();
        this.__decoration.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
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
    get textOverflow() {
        return this.__textOverflow.get();
    }
    set textOverflow(newValue) {
        this.__textOverflow.set(newValue);
    }
    get decoration() {
        return this.__decoration.get();
    }
    set decoration(newValue) {
        this.__decoration.set(newValue);
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Start, justifyContent: FlexAlign.SpaceBetween });
        Flex.height(600);
        Flex.width(350);
        Flex.padding({ left: 35, right: 35, top: 35 });
        Text.create('lineHeightt');
        Text.fontSize(this.fontSize);
        Text.fontColor(this.fontColor);
        Text.textAlign(this.textAlign);
        Text.textOverflow({ overflow: this.textOverflow });
        Text.decoration({ type: this.decoration, color: Color.Red });
        Text.key('text');
        Text.pop();
        Image.create({ "id": 0, "type": 30000, params: ['test.png'] });
        Image.key('image');
        Flex.pop();
    }
    onPageShow() {
        console.info('text page show called');
        var stateChangeEvent = {
            eventId: 226
        };
        var stateChangeEventOne = {
            eventId: 227
        };
        var stateChangeEventTwo = {
            eventId: 228
        };
        var stateChangeEventThree = {
            eventId: 229
        };
        var stateChangeEventFour = {
            eventId: 230
        };
        var stateChangeEventFive = {
            eventId: 231
        };
        var stateChangeEventSix = {
            eventId: 232
        };
        var stateChangeEventSeven = {
            eventId: 233
        };
    }
}
loadDocument(new TextExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=text.js.map