/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\bindPopup.ets?entry ***!
  \********************************************************************************************************/
class PopupExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__noHandlePopup = new ObservedPropertySimple(false, this, "noHandlePopup");
        this.__handlePopup = new ObservedPropertySimple(false, this, "handlePopup");
        this.__customPopup = new ObservedPropertySimple(false, this, "customPopup");
        this.__maskColor = new ObservedPropertySimple(0x33000000, this, "maskColor");
        this.__enableArrow = new ObservedPropertySimple(true, this, "enableArrow");
        this.__placementOnTop = new ObservedPropertySimple(false, this, "placementOnTop");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("customPopupOption page state change called:" + JSON.stringify(eventData));
                if (eventData.data.enableArrow != null) {
                    this.enableArrow = eventData.data.enableArrow;
                }
                if (eventData.data.maskColor != null) {
                    this.maskColor = eventData.data.maskColor;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.noHandlePopup !== undefined) {
            this.noHandlePopup = params.noHandlePopup;
        }
        if (params.handlePopup !== undefined) {
            this.handlePopup = params.handlePopup;
        }
        if (params.customPopup !== undefined) {
            this.customPopup = params.customPopup;
        }
        if (params.maskColor !== undefined) {
            this.maskColor = params.maskColor;
        }
        if (params.enableArrow !== undefined) {
            this.enableArrow = params.enableArrow;
        }
        if (params.placementOnTop !== undefined) {
            this.placementOnTop = params.placementOnTop;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__noHandlePopup.aboutToBeDeleted();
        this.__handlePopup.aboutToBeDeleted();
        this.__customPopup.aboutToBeDeleted();
        this.__maskColor.aboutToBeDeleted();
        this.__enableArrow.aboutToBeDeleted();
        this.__placementOnTop.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get noHandlePopup() {
        return this.__noHandlePopup.get();
    }
    set noHandlePopup(newValue) {
        this.__noHandlePopup.set(newValue);
    }
    get handlePopup() {
        return this.__handlePopup.get();
    }
    set handlePopup(newValue) {
        this.__handlePopup.set(newValue);
    }
    get customPopup() {
        return this.__customPopup.get();
    }
    set customPopup(newValue) {
        this.__customPopup.set(newValue);
    }
    get maskColor() {
        return this.__maskColor.get();
    }
    set maskColor(newValue) {
        this.__maskColor.set(newValue);
    }
    get enableArrow() {
        return this.__enableArrow.get();
    }
    set enableArrow(newValue) {
        this.__enableArrow.set(newValue);
    }
    get placementOnTop() {
        return this.__placementOnTop.get();
    }
    set placementOnTop(newValue) {
        this.__placementOnTop.set(newValue);
    }
    popupBuilder() {
        Row.create({ space: 2 });
        Row.width(100);
        Row.height(50);
        Row.backgroundColor(Color.White);
        Image.create({ "id": 0, "type": 30000, params: ['ic_health_heart.png'] });
        Image.width(24);
        Image.height(24);
        Image.margin({ left: -5 });
        Image.key('image');
        Text.create('Custom Popup');
        Text.fontSize(12);
        Text.key('text');
        Text.pop();
        Row.pop();
    }
    render() {
        Flex.create({ direction: FlexDirection.Column });
        Flex.width('100%');
        Flex.padding({ top: 5 });
        Button.createWithLabel('no handle popup');
        Button.key('button2');
        Button.onClick(() => {
            this.noHandlePopup = !this.noHandlePopup;
            try {
                var backData = {
                    data: {
                        "placementOnTop": this.placementOnTop,
                    }
                };
                var backEvent = {
                    eventId: 65,
                };
                console.info("button2 start to emit action state");
            }
            catch (err) {
                console.info("button2 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.bindPopup(this.noHandlePopup, {
            message: 'content1 content1',
            placementOnTop: this.placementOnTop,
            onStateChange: (e) => {
                console.info(e.isVisible.toString());
                if (!e.isVisible) {
                    this.noHandlePopup = false;
                }
            }
        });
        Button.position({ x: 100, y: 50 });
        Button.pop();
        Button.createWithLabel('custom popup 1');
        Button.key('button1');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "maskColor": this.maskColor,
                        "enableArrow": this.enableArrow
                    }
                };
                var backEvent = {
                    eventId: 66,
                };
                console.info("button1 start to emit action state");
            }
            catch (err) {
                console.info("button1 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.position({ x: 100, y: 200 });
        Button.pop();
        Button.createWithLabel('custom popup');
        Button.key('button');
        Button.onClick(() => {
            this.customPopup = !this.customPopup;
            try {
                var backData = {
                    data: {
                        "maskColor": this.maskColor,
                        "enableArrow": this.enableArrow
                    }
                };
                var backEvent = {
                    eventId: 67,
                };
                console.info("button start to emit action state");
            }
            catch (err) {
                console.info("button emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.bindPopup(this.customPopup, {
            builder: { builder: this.popupBuilder.bind(this) },
            placement: Placement.Bottom,
            maskColor: this.maskColor,
            popupColor: Color.White,
            enableArrow: this.enableArrow,
            onStateChange: (e) => {
                if (!e.isVisible) {
                    this.customPopup = false;
                }
            }
        });
        Button.position({ x: 100, y: 350 });
        Button.pop();
        Flex.pop();
    }
    onPageShow() {
        console.info('customPopupOption page show called');
        var stateChangeEvent = {
            eventId: 68,
        };
    }
}
loadDocument(new PopupExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=bindPopup.js.map