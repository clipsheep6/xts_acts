/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\textClock.ets?entry ***!
  \********************************************************************************************************/
class Second extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__accumulateTime = new ObservedPropertySimple(0, this, "accumulateTime");
        this.__fontSize = new ObservedPropertySimple(20, this, "fontSize");
        this.__fontColor = new ObservedPropertyObject(Color.Red, this, "fontColor");
        this.__format = new ObservedPropertySimple("hhmmss", this, "format");
        this.__onActionCalled = new ObservedPropertySimple(false, this, "onActionCalled");
        this.controller = new TextClockController();
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("swiper page state change called:" + JSON.stringify(eventData));
                if (eventData.data.fontSize != null) {
                    this.fontSize = eventData.data.fontSize;
                }
                if (eventData.data.fontColor != null) {
                    this.fontColor = eventData.data.fontColor;
                }
                if (eventData.data.format != null) {
                    this.format = eventData.data.format;
                }
                if (eventData.data.onActionCalled != null) {
                    this.onActionCalled = eventData.data.onActionCalled;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.accumulateTime !== undefined) {
            this.accumulateTime = params.accumulateTime;
        }
        if (params.fontSize !== undefined) {
            this.fontSize = params.fontSize;
        }
        if (params.fontColor !== undefined) {
            this.fontColor = params.fontColor;
        }
        if (params.format !== undefined) {
            this.format = params.format;
        }
        if (params.onActionCalled !== undefined) {
            this.onActionCalled = params.onActionCalled;
        }
        if (params.controller !== undefined) {
            this.controller = params.controller;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__accumulateTime.aboutToBeDeleted();
        this.__fontSize.aboutToBeDeleted();
        this.__fontColor.aboutToBeDeleted();
        this.__format.aboutToBeDeleted();
        this.__onActionCalled.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get accumulateTime() {
        return this.__accumulateTime.get();
    }
    set accumulateTime(newValue) {
        this.__accumulateTime.set(newValue);
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
    get format() {
        return this.__format.get();
    }
    set format(newValue) {
        this.__format.set(newValue);
    }
    get onActionCalled() {
        return this.__onActionCalled.get();
    }
    set onActionCalled(newValue) {
        this.__onActionCalled.set(newValue);
    }
    onPageShow() {
        console.info('swiper page show called');
        var stateChangeEvent = {
            eventId: 219,
        };
        var stateChangeEventOne = {
            eventId: 220,
        };
        var stateChangeEventTwo = {
            eventId: 221,
        };
        var stateChangeEventThree = {
            eventId: 222,
        };
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.width('100%');
        Flex.height('100%');
        Text.create('current milliseconds is' + this.accumulateTime);
        Text.fontSize(this.fontSize);
        Text.fontColor(ObservedObject.GetRawObject(this.fontColor));
        Text.pop();
        TextClock.create({ timeZoneOffset: -8, controller: this.controller });
        TextClock.key('textClock');
        TextClock.format(this.format);
        TextClock.fontSize(this.fontSize);
        TextClock.fontColor(ObservedObject.GetRawObject(this.fontColor));
        TextClock.onDateChange((value) => {
            this.accumulateTime = value;
            this.onActionCalled = true;
            console.info('onChange current action state is: ' + this.onActionCalled);
            try {
                var backData = {
                    data: {
                        "ACTION": this.onActionCalled,
                    }
                };
                var backEvent = {
                    eventId: 223,
                };
                console.info("onChange start to emit action state");
            }
            catch (err) {
                console.info("onChange emit action state err: " + JSON.stringify(err.message));
            }
        });
        TextClock.margin(20);
        TextClock.fontSize(30);
        TextClock.pop();
        Button.createWithLabel("start TextClock");
        Button.margin({ bottom: 10 });
        Button.onClick(() => {
            this.controller.start();
        });
        Button.pop();
        Button.createWithLabel("stop TextClock");
        Button.key('button');
        Button.onClick(() => {
            this.controller.stop();
            this.onActionCalledOne = true;
            console.info('button2 current action state is: ' + this.onActionCalledOne);
            try {
                var backData = {
                    data: {
                        "ACTION": this.onActionCalledOne,
                    }
                };
                var backEvent = {
                    eventId: 224,
                };
                console.info("button2 start to emit action state");
            }
            catch (err) {
                console.info("button2 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new Second("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=textClock.js.map