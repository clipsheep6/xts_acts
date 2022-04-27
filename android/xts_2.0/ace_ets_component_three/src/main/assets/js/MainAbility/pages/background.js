/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/background.ets?entry ***!
  \********************************************************************************************************************************************/
class BackgroundExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__width = new ObservedPropertySimple("200px", this, "width");
        this.__height = new ObservedPropertySimple("200px", this, "height");
        this.__color = new ObservedPropertyObject([[0x080808], [0xEEEE00], [0xFF0000]], this, "color");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("gauge page state change called:" + JSON.stringify(eventData));
                if (eventData.data.colorValues != null) {
                    this.colorValues = JSON.parse(eventData.data.colorValues);
                }
                if (eventData.data.width != null) {
                    this.width = eventData.data.width;
                }
                if (eventData.data.height != null) {
                    this.height = eventData.data.height;
                }
                if (eventData.data.srcValue != null) {
                    this.srcValue = eventData.data.srcValue;
                }
            }
        };
        this.stateChangCallBackTwo = (eventData) => {
            if (eventData != null) {
                console.info("Background page state change called:" + JSON.stringify(eventData));
                if (eventData.data.backgroundColor != null) {
                    this.backgroundColor = eventData.data.backgroundColor;
                }
                if (eventData.data.backgroundImage != null) {
                    this.backgroundImage = eventData.data.backgroundImage;
                }
                if (eventData.data.backgroundImageSize != null) {
                    this.backgroundImageSize = eventData.data.backgroundImageSize;
                }
                if (eventData.data.backgroundImagePosition != null) {
                    this.backgroundImagePosition = eventData.data.backgroundImagePosition;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.width !== undefined) {
            this.width = params.width;
        }
        if (params.height !== undefined) {
            this.height = params.height;
        }
        if (params.color !== undefined) {
            this.color = params.color;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
        if (params.stateChangCallBackTwo !== undefined) {
            this.stateChangCallBackTwo = params.stateChangCallBackTwo;
        }
    }
    aboutToBeDeleted() {
        this.__width.aboutToBeDeleted();
        this.__height.aboutToBeDeleted();
        this.__color.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get width() {
        return this.__width.get();
    }
    set width(newValue) {
        this.__width.set(newValue);
    }
    get height() {
        return this.__height.get();
    }
    set height(newValue) {
        this.__height.set(newValue);
    }
    get color() {
        return this.__color.get();
    }
    set color(newValue) {
        this.__color.set(newValue);
    }
    onPageShow() {
        console.info('background page show called');
        var stateChangeEvent = {
            eventId: 1
        };
        var stateChangeEventTwo = {
            eventId: 2
        };
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.height('100%');
        Column.padding({ top: 5 });
        Text.create('background color');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xFF0000);
        Text.key("fontColor");
        Text.pop();
        Row.create();
        Row.width('90%');
        Row.height(50);
        Row.backgroundColor(0xEEEE00);
        Row.key("backgroundColor");
        Row.border({ width: 1 });
        Row.pop();
        Text.create('background image repeat along X');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Row.create();
        Row.backgroundImage('/images/bg.jpg', ImageRepeat.X);
        Row.backgroundImageSize({ width: '250px', height: '140px' });
        Row.width('90%');
        Row.height(70);
        Row.border({ width: 1 });
        Row.pop();
        Text.create('background image repeat along Y');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xFF0000);
        Text.pop();
        Row.create();
        Row.backgroundImage('/images/bg.jpg', ImageRepeat.Y);
        Row.backgroundImageSize({ width: '500px', height: '120px' });
        Row.width('90%');
        Row.height(100);
        Row.border({ width: 1 });
        Row.pop();
        Text.create('background image size');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xFF0000);
        Text.pop();
        Row.create();
        Row.width('90%');
        Row.height(150);
        Row.backgroundImage('/images/bg.jpg', ImageRepeat.NoRepeat);
        Row.backgroundImageSize({ width: 1000, height: 500 });
        Row.border({ width: 1 });
        Row.pop();
        Text.create('background fill the box(Cover)');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xFF0000);
        Text.pop();
        Row.create();
        Row.width(200);
        Row.height(50);
        Row.backgroundImage('/images/bg.jpg', ImageRepeat.NoRepeat);
        Row.backgroundImageSize(ImageSize.Cover);
        Row.border({ width: 1 });
        Row.pop();
        Text.create('background fill the box(Contain)');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xFF0000);
        Text.pop();
        Row.create();
        Row.width(200);
        Row.height(50);
        Row.backgroundImage('/images/bg.jpg', ImageRepeat.NoRepeat);
        Row.backgroundImageSize(ImageSize.Contain);
        Row.border({ width: 1 });
        Row.pop();
        Text.create('background image position');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xFF0000);
        Text.pop();
        Row.create();
        Row.width(100);
        Row.height(50);
        Row.backgroundImage('/images/bg.jpg', ImageRepeat.NoRepeat);
        Row.backgroundImageSize({ width: 1000, height: 560 });
        Row.backgroundImagePosition({ x: -500, y: -300 });
        Row.border({ width: 1 });
        Row.pop();
        Column.pop();
    }
}
loadDocument(new BackgroundExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=background.js.map