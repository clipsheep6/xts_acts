/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**********************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\gauge.ets?entry ***!
  \**********************************************************************************************************************/
class GaugeExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__gaugeValue = new ObservedPropertySimple(50, this, "gaugeValue");
        this.__strokeWidthValue = new ObservedPropertySimple(20, this, "strokeWidthValue");
        this.__startAngleValue = new ObservedPropertySimple(210, this, "startAngleValue");
        this.__endAngleValue = new ObservedPropertySimple(150, this, "endAngleValue");
        this.__colorValues = new ObservedPropertyObject([[0x317AF7, 1], [0x5BA854, 1], [0xE08C3A, 1], [0x9C554B, 1], [0xD94838, 1]], this, "colorValues");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("gauge page state change called:" + JSON.stringify(eventData));
                if (eventData.data.gaugeValue != null) {
                    this.gaugeValue = eventData.data.gaugeValue;
                }
                if (eventData.data.strokeWidthValue != null) {
                    this.strokeWidthValue = eventData.data.strokeWidthValue;
                }
                if (eventData.data.startAngleValue != null) {
                    this.startAngleValue = eventData.data.startAngleValue;
                }
                if (eventData.data.endAngleValue != null) {
                    this.endAngleValue = eventData.data.endAngleValue;
                }
                if (eventData.data.colorValues != null) {
                    this.colorValues = JSON.parse(eventData.data.colorValues);
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.gaugeValue !== undefined) {
            this.gaugeValue = params.gaugeValue;
        }
        if (params.strokeWidthValue !== undefined) {
            this.strokeWidthValue = params.strokeWidthValue;
        }
        if (params.startAngleValue !== undefined) {
            this.startAngleValue = params.startAngleValue;
        }
        if (params.endAngleValue !== undefined) {
            this.endAngleValue = params.endAngleValue;
        }
        if (params.colorValues !== undefined) {
            this.colorValues = params.colorValues;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__gaugeValue.aboutToBeDeleted();
        this.__strokeWidthValue.aboutToBeDeleted();
        this.__startAngleValue.aboutToBeDeleted();
        this.__endAngleValue.aboutToBeDeleted();
        this.__colorValues.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get gaugeValue() {
        return this.__gaugeValue.get();
    }
    set gaugeValue(newValue) {
        this.__gaugeValue.set(newValue);
    }
    get strokeWidthValue() {
        return this.__strokeWidthValue.get();
    }
    set strokeWidthValue(newValue) {
        this.__strokeWidthValue.set(newValue);
    }
    get startAngleValue() {
        return this.__startAngleValue.get();
    }
    set startAngleValue(newValue) {
        this.__startAngleValue.set(newValue);
    }
    get endAngleValue() {
        return this.__endAngleValue.get();
    }
    set endAngleValue(newValue) {
        this.__endAngleValue.set(newValue);
    }
    get colorValues() {
        return this.__colorValues.get();
    }
    set colorValues(newValue) {
        this.__colorValues.set(newValue);
    }
    onPageShow() {
        console.info('gauge page show called');
    }
    render() {
        Column.create();
        Column.debugLine("pages/gauge.ets(54:5)");
        Column.width('100%');
        Column.margin({ top: 300 });
        Gauge.create({ value: 0, min: 0, max: 100 });
        Gauge.debugLine("pages/gauge.ets(55:7)");
        Gauge.key("gauge");
        Gauge.value(`${this.gaugeValue}`);
        Gauge.startAngle(`${this.startAngleValue}`);
        Gauge.endAngle(`${this.endAngleValue}`);
        Gauge.strokeWidth(`${this.strokeWidthValue}`);
        Gauge.width(200);
        Gauge.height(200);
        Column.pop();
    }
}
loadDocument(new GaugeExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=gauge.js.map