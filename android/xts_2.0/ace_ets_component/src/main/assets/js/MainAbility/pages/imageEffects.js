/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\imageEffects.ets?entry ***!
  \*****************************************************************************************************************************/
class ImageEffectsExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__blurValue = new ObservedPropertySimple(100, this, "blurValue");
        this.__backdropBlueValue = new ObservedPropertySimple(30, this, "backdropBlueValue");
        this.__shadowValue = new ObservedPropertyObject({ radius: 10, color: Color.Gray, offsetX: 5, offsetY: 5 }, this, "shadowValue");
        this.__grayscaleValue = new ObservedPropertySimple(10, this, "grayscaleValue");
        this.__brightnessValue = new ObservedPropertySimple(20, this, "brightnessValue");
        this.__saturateValue = new ObservedPropertySimple(50, this, "saturateValue");
        this.__contrastValue = new ObservedPropertySimple(20, this, "contrastValue");
        this.__invertValue = new ObservedPropertySimple(10, this, "invertValue");
        this.__hueRotateValue = new ObservedPropertySimple(10, this, "hueRotateValue");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("imageEffects page state change called:" + JSON.stringify(eventData));
                if (eventData.data.blurValue != null) {
                    this.blurValue = eventData.data.blurValue;
                }
                if (eventData.data.shadowValue != null) {
                    this.shadowValue = JSON.parse(eventData.data.shadowValue);
                }
                if (eventData.data.grayscaleValue != null) {
                    this.grayscaleValue = eventData.data.grayscaleValue;
                }
                if (eventData.data.brightnessValue != null) {
                    this.brightnessValue = eventData.data.brightnessValue;
                }
                if (eventData.data.saturateValue != null) {
                    this.saturateValue = eventData.data.saturateValue;
                }
                if (eventData.data.contrastValue != null) {
                    this.contrastValue = eventData.data.contrastValue;
                }
                if (eventData.data.invertValue != null) {
                    this.invertValue = eventData.data.invertValue;
                }
                if (eventData.data.hueRotateValue != null) {
                    this.hueRotateValue = eventData.data.hueRotateValue;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.blurValue !== undefined) {
            this.blurValue = params.blurValue;
        }
        if (params.backdropBlueValue !== undefined) {
            this.backdropBlueValue = params.backdropBlueValue;
        }
        if (params.shadowValue !== undefined) {
            this.shadowValue = params.shadowValue;
        }
        if (params.grayscaleValue !== undefined) {
            this.grayscaleValue = params.grayscaleValue;
        }
        if (params.brightnessValue !== undefined) {
            this.brightnessValue = params.brightnessValue;
        }
        if (params.saturateValue !== undefined) {
            this.saturateValue = params.saturateValue;
        }
        if (params.contrastValue !== undefined) {
            this.contrastValue = params.contrastValue;
        }
        if (params.invertValue !== undefined) {
            this.invertValue = params.invertValue;
        }
        if (params.hueRotateValue !== undefined) {
            this.hueRotateValue = params.hueRotateValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__blurValue.aboutToBeDeleted();
        this.__backdropBlueValue.aboutToBeDeleted();
        this.__shadowValue.aboutToBeDeleted();
        this.__grayscaleValue.aboutToBeDeleted();
        this.__brightnessValue.aboutToBeDeleted();
        this.__saturateValue.aboutToBeDeleted();
        this.__contrastValue.aboutToBeDeleted();
        this.__invertValue.aboutToBeDeleted();
        this.__hueRotateValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get blurValue() {
        return this.__blurValue.get();
    }
    set blurValue(newValue) {
        this.__blurValue.set(newValue);
    }
    get backdropBlueValue() {
        return this.__backdropBlueValue.get();
    }
    set backdropBlueValue(newValue) {
        this.__backdropBlueValue.set(newValue);
    }
    get shadowValue() {
        return this.__shadowValue.get();
    }
    set shadowValue(newValue) {
        this.__shadowValue.set(newValue);
    }
    get grayscaleValue() {
        return this.__grayscaleValue.get();
    }
    set grayscaleValue(newValue) {
        this.__grayscaleValue.set(newValue);
    }
    get brightnessValue() {
        return this.__brightnessValue.get();
    }
    set brightnessValue(newValue) {
        this.__brightnessValue.set(newValue);
    }
    get saturateValue() {
        return this.__saturateValue.get();
    }
    set saturateValue(newValue) {
        this.__saturateValue.set(newValue);
    }
    get contrastValue() {
        return this.__contrastValue.get();
    }
    set contrastValue(newValue) {
        this.__contrastValue.set(newValue);
    }
    get invertValue() {
        return this.__invertValue.get();
    }
    set invertValue(newValue) {
        this.__invertValue.set(newValue);
    }
    get hueRotateValue() {
        return this.__hueRotateValue.get();
    }
    set hueRotateValue(newValue) {
        this.__hueRotateValue.set(newValue);
    }
    onPageShow() {
        console.info('imageEffects page show called');
    }
    render() {
        Column.create({ space: 10 });
        Column.debugLine("pages/imageEffects.ets(66:5)");
        Column.width('100%');
        Column.margin({ top: 5 });
        Text.create('font blur');
        Text.debugLine("pages/imageEffects.ets(67:7)");
        Text.fontSize(15);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Text.create('text');
        Text.debugLine("pages/imageEffects.ets(68:7)");
        Text.blur(this.blurValue);
        Text.width('90%');
        Text.height(40);
        Text.fontSize(16);
        Text.backgroundColor(0xF9CF93);
        Text.padding({ left: 5 });
        Text.key('centerRow');
        Text.pop();
        Text.create('backdropBlur');
        Text.debugLine("pages/imageEffects.ets(77:7)");
        Text.fontSize(15);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Text.create();
        Text.debugLine("pages/imageEffects.ets(78:7)");
        Text.width('90%');
        Text.height(40);
        Text.fontSize(16);
        Text.backdropBlur(this.backdropBlueValue);
        Text.backgroundImage('/images/download.png');
        Text.backgroundImageSize({ width: 1200, height: 160 });
        Text.key('centerRow2');
        Text.pop();
        Text.create('shadow');
        Text.debugLine("pages/imageEffects.ets(87:7)");
        Text.fontSize(15);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Image.create('/images/download.png');
        Image.debugLine("pages/imageEffects.ets(88:7)");
        Image.width('90%');
        Image.height(40);
        Image.shadow(ObservedObject.GetRawObject(this.shadowValue));
        Image.key('centerRow3');
        Text.create('grayscale');
        Text.debugLine("pages/imageEffects.ets(94:7)");
        Text.fontSize(15);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Image.create('/images/download.png');
        Image.debugLine("pages/imageEffects.ets(95:7)");
        Image.width('90%');
        Image.height(40);
        Image.grayscale(`${this.grayscaleValue}`);
        Image.key('centerRow4');
        Text.create('brightness');
        Text.debugLine("pages/imageEffects.ets(101:7)");
        Text.fontSize(15);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Image.create('/images/download.png');
        Image.debugLine("pages/imageEffects.ets(102:7)");
        Image.width('90%');
        Image.height(40);
        Image.brightness(this.brightnessValue);
        Image.key('centerRow5');
        Text.create('saturate');
        Text.debugLine("pages/imageEffects.ets(104:7)");
        Text.fontSize(15);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Image.create('/images/download.png');
        Image.debugLine("pages/imageEffects.ets(105:7)");
        Image.width('90%');
        Image.height(40);
        Image.saturate(this.saturateValue);
        Image.key('centerRow6');
        Text.create('contrast');
        Text.debugLine("pages/imageEffects.ets(107:7)");
        Text.fontSize(15);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Image.create('/images/download.png');
        Image.debugLine("pages/imageEffects.ets(108:7)");
        Image.width('90%');
        Image.height(40);
        Image.contrast(this.contrastValue);
        Image.key('centerRow7');
        Text.create('invert');
        Text.debugLine("pages/imageEffects.ets(110:7)");
        Text.fontSize(15);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Image.create('/images/download.png');
        Image.debugLine("pages/imageEffects.ets(111:7)");
        Image.width('90%');
        Image.height(40);
        Image.invert(`${this.invertValue}`);
        Image.key('centerRow8');
        Text.create('hueRotate');
        Text.debugLine("pages/imageEffects.ets(113:7)");
        Text.fontSize(15);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Image.create('/images/download.png');
        Image.debugLine("pages/imageEffects.ets(114:7)");
        Image.width('90%');
        Image.height(40);
        Image.hueRotate(`${this.hueRotateValue}`);
        Image.key('centerRow9');
        Column.pop();
    }
}
loadDocument(new ImageEffectsExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=imageEffects.js.map