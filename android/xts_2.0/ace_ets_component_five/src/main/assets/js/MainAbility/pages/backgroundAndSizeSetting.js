/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**********************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\backgroundAndSizeSetting.ets?entry ***!
  \**********************************************************************************************************************************************/
class BackgroundExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__width = new ObservedPropertySimple("200px", this, "width");
        this.__height = new ObservedPropertySimple("200px", this, "height");
        this.__color = new ObservedPropertyObject([[0x080808], [0xEEEE00], [0xFF0000]], this, "color");
        this.__width = new ObservedPropertySimple(80, this, "width");
        this.__height = new ObservedPropertySimple(80, this, "height");
        this.__padding = new ObservedPropertySimple(20, this, "padding");
        this.__margin = new ObservedPropertySimple(20, this, "margin");
        this.__sizeWidth = new ObservedPropertySimple('100%', this, "sizeWidth");
        this.__sizeHeight = new ObservedPropertySimple('100%', this, "sizeHeight");
        this.__layoutWeight1 = new ObservedPropertySimple(1, this, "layoutWeight1");
        this.__layoutWeight2 = new ObservedPropertySimple(2, this, "layoutWeight2");
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
        this.stateChangCallBackOne = (eventData) => {
            console.info("size page stateChangCallBack" + JSON.stringify(eventData));
            if (eventData) {
                this.width = eventData.data.width;
                this.height = eventData.data.height;
                this.padding = eventData.data.padding;
                this.margin = eventData.data.margin;
            }
        };
        this.sizeChangCallBack = (eventData) => {
            console.info("size page sizeChangCallBack" + JSON.stringify(eventData));
            if (eventData) {
                this.sizeWidth = eventData.data.width;
                this.sizeHeight = eventData.data.height;
            }
        };
        this.weightChangCallBack = (eventData) => {
            console.info("size page weightChangCallBack" + JSON.stringify(eventData));
            if (eventData) {
                this.layoutWeight1 = eventData.data.weight;
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
        if (params.width !== undefined) {
            this.width = params.width;
        }
        if (params.height !== undefined) {
            this.height = params.height;
        }
        if (params.padding !== undefined) {
            this.padding = params.padding;
        }
        if (params.margin !== undefined) {
            this.margin = params.margin;
        }
        if (params.sizeWidth !== undefined) {
            this.sizeWidth = params.sizeWidth;
        }
        if (params.sizeHeight !== undefined) {
            this.sizeHeight = params.sizeHeight;
        }
        if (params.layoutWeight1 !== undefined) {
            this.layoutWeight1 = params.layoutWeight1;
        }
        if (params.layoutWeight2 !== undefined) {
            this.layoutWeight2 = params.layoutWeight2;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
        if (params.stateChangCallBackTwo !== undefined) {
            this.stateChangCallBackTwo = params.stateChangCallBackTwo;
        }
        if (params.stateChangCallBackOne !== undefined) {
            this.stateChangCallBackOne = params.stateChangCallBackOne;
        }
        if (params.sizeChangCallBack !== undefined) {
            this.sizeChangCallBack = params.sizeChangCallBack;
        }
        if (params.weightChangCallBack !== undefined) {
            this.weightChangCallBack = params.weightChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__width.aboutToBeDeleted();
        this.__height.aboutToBeDeleted();
        this.__color.aboutToBeDeleted();
        this.__width.aboutToBeDeleted();
        this.__height.aboutToBeDeleted();
        this.__padding.aboutToBeDeleted();
        this.__margin.aboutToBeDeleted();
        this.__sizeWidth.aboutToBeDeleted();
        this.__sizeHeight.aboutToBeDeleted();
        this.__layoutWeight1.aboutToBeDeleted();
        this.__layoutWeight2.aboutToBeDeleted();
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
    get padding() {
        return this.__padding.get();
    }
    set padding(newValue) {
        this.__padding.set(newValue);
    }
    get margin() {
        return this.__margin.get();
    }
    set margin(newValue) {
        this.__margin.set(newValue);
    }
    get sizeWidth() {
        return this.__sizeWidth.get();
    }
    set sizeWidth(newValue) {
        this.__sizeWidth.set(newValue);
    }
    get sizeHeight() {
        return this.__sizeHeight.get();
    }
    set sizeHeight(newValue) {
        this.__sizeHeight.set(newValue);
    }
    get layoutWeight1() {
        return this.__layoutWeight1.get();
    }
    set layoutWeight1(newValue) {
        this.__layoutWeight1.set(newValue);
    }
    get layoutWeight2() {
        return this.__layoutWeight2.get();
    }
    set layoutWeight2(newValue) {
        this.__layoutWeight2.set(newValue);
    }
    onPageShow() {
        console.info('background page show called');
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
        Text.create('margin and padding:');
        Text.fontSize(26);
        Text.fontColor(Color.Black);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.backgroundColor(0xFFA500);
        Row.create();
        Row.key('centerRow');
        Row.width(this.width);
        Row.height(this.height);
        Row.padding(this.padding);
        Row.margin(this.margin);
        Row.backgroundColor(0xFDF5E6);
        Row.create();
        Row.size({ width: this.sizeWidth, height: this.sizeHeight });
        Row.backgroundColor(0xAFEEEE);
        Row.key('innerRow');
        Row.pop();
        Row.pop();
        Row.pop();
        Text.create('layoutWeight');
        Text.fontSize(26);
        Text.fontColor(Color.Black);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.size({ width: '90%', height: 140 });
        Row.backgroundColor(0xAFEEEE);
        Text.create('layoutWeight(1)');
        Text.size({ width: '30%', height: 110 });
        Text.backgroundColor(0xFFEFD5);
        Text.textAlign(TextAlign.Center);
        Text.layoutWeight(this.layoutWeight1);
        Text.fontSize(20);
        Text.key('layoutWeight1');
        Text.pop();
        Text.create('layoutWeight(2)');
        Text.size({ width: '30%', height: 110 });
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.layoutWeight(this.layoutWeight2);
        Text.fontSize(20);
        Text.key('layoutWeight2');
        Text.pop();
        Text.create('no layoutWeight');
        Text.size({ width: '30%', height: 110 });
        Text.backgroundColor(0xD2B48C);
        Text.textAlign(TextAlign.Center);
        Text.fontSize(20);
        Text.pop();
        Row.pop();
        Text.create('constraintSize');
        Text.fontSize(26);
        Text.fontColor(Color.Black);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.size({ width: '90%', height: 140 });
        Row.backgroundColor(0xAFEEEE);
        Row.create();
        Row.constraintSize({ minWidth: '10%', maxWidth: '50%', height: 70 });
        Row.backgroundColor(0xFFA500);
        Row.pop();
        Row.create();
        Row.size({ width: '30%', height: 70 });
        Row.backgroundColor(0xAFEEEE);
        Row.pop();
        Row.pop();
        Column.pop();
    }
}
loadDocument(new BackgroundExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=backgroundAndSizeSetting.js.map