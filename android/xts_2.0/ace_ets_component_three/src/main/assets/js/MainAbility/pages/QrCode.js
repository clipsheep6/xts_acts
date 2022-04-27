/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/QrCode.ets?entry ***!
  \****************************************************************************************************************************************/
class QrCode extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__qrCodeBackgroundColor = new ObservedPropertySimple("#FF008000", this, "qrCodeBackgroundColor");
        this.__qrCodeColor = new ObservedPropertySimple("#FF0000FF", this, "qrCodeColor");
        this.__qrCodeValue = new ObservedPropertySimple('qrCodeValue', this, "qrCodeValue");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("qrCode page state change called:" + JSON.stringify(eventData));
                var colorValue = eventData.data.color;
                if (colorValue != null && colorValue.length != 0) {
                    this.qrCodeColor = colorValue;
                    console.info("qrCodeColor:" + qrCodeColor);
                }
                else {
                    console.info("qrCodeColor is null or empty " + qrCodeColor);
                }
            }
            else {
                console.info("qrCode page color not change called:" + JSON.stringify(eventData));
            }
        };
        this.stateChangCallBackTwo = (eventData) => {
            if (eventData != null) {
                console.info("qrCode page state change called:" + JSON.stringify(eventData));
                var backgroundColorValue = eventData.data.backgroundColor;
                if (backgroundColorValue != null && backgroundColorValue.length != 0) {
                    this.qrCodeBackgroundColor = backgroundColorValue;
                    console.info("qrCodeBackgroundColor:" + qrCodeBackgroundColor);
                }
                else {
                    console.info("backgroundColorValue is null or empty " + qrCodeColor);
                }
            }
            else {
                console.info("qrCode page backgroundColorValue not change called:" + JSON.stringify(eventData));
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.qrCodeBackgroundColor !== undefined) {
            this.qrCodeBackgroundColor = params.qrCodeBackgroundColor;
        }
        if (params.qrCodeColor !== undefined) {
            this.qrCodeColor = params.qrCodeColor;
        }
        if (params.qrCodeValue !== undefined) {
            this.qrCodeValue = params.qrCodeValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
        if (params.stateChangCallBackTwo !== undefined) {
            this.stateChangCallBackTwo = params.stateChangCallBackTwo;
        }
    }
    aboutToBeDeleted() {
        this.__qrCodeBackgroundColor.aboutToBeDeleted();
        this.__qrCodeColor.aboutToBeDeleted();
        this.__qrCodeValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get qrCodeBackgroundColor() {
        return this.__qrCodeBackgroundColor.get();
    }
    set qrCodeBackgroundColor(newValue) {
        this.__qrCodeBackgroundColor.set(newValue);
    }
    get qrCodeColor() {
        return this.__qrCodeColor.get();
    }
    set qrCodeColor(newValue) {
        this.__qrCodeColor.set(newValue);
    }
    get qrCodeValue() {
        return this.__qrCodeValue.get();
    }
    set qrCodeValue(newValue) {
        this.__qrCodeValue.set(newValue);
    }
    onPageShow() {
        console.info('qrCode page show called');
        var stateChangeEvent = {
            eventId: 170
        };
        var stateChangeEvent = {
            eventId: 171
        };
        var stateChangeEvent = {
            eventId: 1023
        };
        var stateChangeEvent = {
            eventId: 1024
        };
        var stateChangeEvent = {
            eventId: 1025
        };
        var stateChangeEvent = {
            eventId: 1026
        };
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.height('100%');
        Column.margin({ top: 5 });
        Text.create('QRCodeColor');
        Text.fontSize(40);
        Text.fontWeight(FontWeight.Bold);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        QRCode.create(`${this.qrCodeValue}`);
        QRCode.backgroundColor(`${this.qrCodeBackgroundColor}`);
        QRCode.color(`${this.qrCodeColor}`);
        QRCode.width(198);
        QRCode.height(198);
        QRCode.key("QrCodeColor");
        QRCode.pop();
        Text.create('QRCodeBackgroundColor');
        Text.fontSize(40);
        Text.fontWeight(FontWeight.Bold);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        QRCode.create(`${this.qrCodeValue}`);
        QRCode.backgroundColor(`${this.qrCodeBackgroundColor}`);
        QRCode.color(`${this.qrCodeColor}`);
        QRCode.width(197);
        QRCode.height(197);
        QRCode.key("QrCodeBackgroundColor");
        QRCode.pop();
        Column.pop();
    }
}
loadDocument(new QrCode("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=QrCode.js.map