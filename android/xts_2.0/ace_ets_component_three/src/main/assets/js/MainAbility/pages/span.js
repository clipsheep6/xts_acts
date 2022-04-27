/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/span.ets?entry ***!
  \**************************************************************************************************************************************/
class SpanExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__decorationValue = new ObservedPropertyObject({ type: TextDecorationType.None, color: Color.Red }, this, "decorationValue");
        this.__textCaseValue = new ObservedPropertySimple(TextCase.Normal, this, "textCaseValue");
        this.__fontSizeValue = new ObservedPropertySimple(40, this, "fontSizeValue");
        this.__fontColorValue = new ObservedPropertySimple(0xCCCCCC, this, "fontColorValue");
        this.stateChangCallBack = (eventData) => {
            console.info("span page state change called:" + JSON.stringify(eventData));
            if (eventData != null) {
                if (eventData.data.decorationValue != null) {
                    this.decorationValue = JSON.parse(eventData.data.decorationValue);
                }
                if (eventData.data.textCaseValue != null) {
                    this.textCaseValue = eventData.data.textCaseValue;
                }
                if (eventData.data.fontColorValue != null) {
                    this.fontColorValue = eventData.data.fontColorValue;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.decorationValue !== undefined) {
            this.decorationValue = params.decorationValue;
        }
        if (params.textCaseValue !== undefined) {
            this.textCaseValue = params.textCaseValue;
        }
        if (params.fontSizeValue !== undefined) {
            this.fontSizeValue = params.fontSizeValue;
        }
        if (params.fontColorValue !== undefined) {
            this.fontColorValue = params.fontColorValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__decorationValue.aboutToBeDeleted();
        this.__textCaseValue.aboutToBeDeleted();
        this.__fontSizeValue.aboutToBeDeleted();
        this.__fontColorValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get decorationValue() {
        return this.__decorationValue.get();
    }
    set decorationValue(newValue) {
        this.__decorationValue.set(newValue);
    }
    get textCaseValue() {
        return this.__textCaseValue.get();
    }
    set textCaseValue(newValue) {
        this.__textCaseValue.set(newValue);
    }
    get fontSizeValue() {
        return this.__fontSizeValue.get();
    }
    set fontSizeValue(newValue) {
        this.__fontSizeValue.set(newValue);
    }
    get fontColorValue() {
        return this.__fontColorValue.get();
    }
    set fontColorValue(newValue) {
        this.__fontColorValue.set(newValue);
    }
    onPageShow() {
        console.info('span page show called');
        var stateChangeEvent = {
            eventId: 199
        };
        var stateChangeEvent2 = {
            eventId: 200
        };
        var stateChangeEvent3 = {
            eventId: 201
        };
        var stateChangeEvent4 = {
            eventId: 1029
        };
        var stateChangeEvent5 = {
            eventId: 1030
        };
        var stateChangeEvent6 = {
            eventId: 1031
        };
        var stateChangeEvent7 = {
            eventId: 1032
        };
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Start, justifyContent: FlexAlign.SpaceBetween });
        Flex.width('100%');
        Flex.height(250);
        Flex.padding({ left: 35, right: 35, top: 35 });
        Text.create('Basic Usage');
        Text.fontSize(9);
        Text.fontColor(this.fontColorValue);
        Text.key('fontColor');
        Text.pop();
        Text.create();
        Span.create('This is the Span component');
        Span.fontSize(this.fontSizeValue);
        Span.textCase(this.textCaseValue);
        Span.decoration(ObservedObject.GetRawObject(this.decorationValue));
        Span.key('decoration');
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new SpanExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=span.js.map