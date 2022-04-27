/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/button.ets?entry ***!
  \****************************************************************************************************************************************/
class ButtonExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__buttonTypeValue = new ObservedPropertySimple(ButtonType.Normal, this, "buttonTypeValue");
        this.__fontSizeValue = new ObservedPropertySimple(20, this, "fontSizeValue");
        this.__fontColorValue = new ObservedPropertySimple(Color.Black, this, "fontColorValue");
        this.__text = new ObservedPropertySimple('', this, "text");
        this.__onClickValue = new ObservedPropertySimple(false, this, "onClickValue");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("Button page state change called:" + JSON.stringify(eventData));
                if (eventData.data.fontSizeValue != null) {
                    this.fontSizeValue = eventData.data.fontSizeValue;
                }
                if (eventData.data.fontColorValue != null) {
                    this.fontColorValue = eventData.data.fontColorValue;
                }
                if (eventData.data.buttonTypeValue != null) {
                    this.buttonTypeValue = eventData.data.buttonTypeValue;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.buttonTypeValue !== undefined) {
            this.buttonTypeValue = params.buttonTypeValue;
        }
        if (params.fontSizeValue !== undefined) {
            this.fontSizeValue = params.fontSizeValue;
        }
        if (params.fontColorValue !== undefined) {
            this.fontColorValue = params.fontColorValue;
        }
        if (params.text !== undefined) {
            this.text = params.text;
        }
        if (params.onClickValue !== undefined) {
            this.onClickValue = params.onClickValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__buttonTypeValue.aboutToBeDeleted();
        this.__fontSizeValue.aboutToBeDeleted();
        this.__fontColorValue.aboutToBeDeleted();
        this.__text.aboutToBeDeleted();
        this.__onClickValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get buttonTypeValue() {
        return this.__buttonTypeValue.get();
    }
    set buttonTypeValue(newValue) {
        this.__buttonTypeValue.set(newValue);
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
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    get onClickValue() {
        return this.__onClickValue.get();
    }
    set onClickValue(newValue) {
        this.__onClickValue.set(newValue);
    }
    onPageShow() {
        console.info('Button page show called');
        var stateChangeEvent = {
            eventId: 70
        };
        var stateChangeEventOne = {
            eventId: 74
        };
        var stateChangeEventTwo = {
            eventId: 75
        };
        var stateChangeEventThree = {
            eventId: 76
        };
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Start, justifyContent: FlexAlign.SpaceBetween });
        Flex.height(400);
        Flex.padding({ left: 35, right: 35, top: 35 });
        Button.createWithLabel('Ok', { type: this.buttonTypeValue, stateEffect: true });
        Button.borderRadius(8);
        Button.backgroundColor(0x317aff);
        Button.width(90);
        Button.key('button');
        Button.pop();
        Button.createWithLabel('ok');
        Button.type(`${this.buttonTypeValue}`);
        Button.key('button1');
        Button.backgroundColor(0x317aff);
        Button.width(90);
        Button.pop();
        Button.createWithLabel('ok');
        Button.type(this.buttonTypeValue);
        Button.key('button2');
        Button.fontSize(this.fontSizeValue);
        Button.backgroundColor(0x317aff);
        Button.width(90);
        Button.fontColor(this.fontColorValue);
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "fontColorValue": this.fontColorValue,
                    }
                };
                var backEvent = {
                    eventId: 71
                };
                console.info("button2 start to emit action state");
            }
            catch (err) {
                console.info("button2 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Button.createWithLabel('ok!');
        Button.type(this.buttonTypeValue);
        Button.key('button3');
        Button.fontColor(this.fontColorValue);
        Button.backgroundColor(0x317aff);
        Button.width(90);
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "fontColorValue": this.fontColorValue,
                    }
                };
                var backEvent = {
                    eventId: 72
                };
                console.info("button3 start to emit action state");
            }
            catch (err) {
                console.info("button3 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Button.createWithLabel('Click');
        Button.backgroundColor(0x2788D9);
        Button.width(200);
        Button.height(100);
        Button.fontSize(20);
        Button.onClick((event) => {
            console.info(this.text = 'Click Point:' + '\n  screenX:' + event.screenX + '\n  screenY:' + event.screenY
                + '\n  x :' + event.x + '\n  y:' + event.y + '\ntarget:' + '\n  component globalPos：（'
                + event.target.area.globalPos.x + ',' + event.target.area.globalPos.y + '）\n  width:'
                + event.target.area.width + '\n  height：' + event.target.area.height);
            this.onClickValue = true;
            try {
                var backData = {
                    data: {
                        "ACTION": this.onClickValue,
                        "event": JSON.stringify(event)
                    }
                };
                var backEvent = {
                    eventId: 4
                };
                console.info("click to emit action state");
            }
            catch (err) {
                console.info("click action state err: " + JSON.stringify(err.message));
            }
        });
        Button.key('buttonClick');
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new ButtonExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=button.js.map