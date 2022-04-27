/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\colorGradient.ets?entry ***!
  \***********************************************************************************************************************************/
class ColorGradientExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__linearGradientValue = new ObservedPropertyObject({
            angle: 90,
            direction: GradientDirection.Left,
            colors: [[0xAEE1E1, 0.0], [0xD3E0DC, 0.3], [0xFCD1D1, 1.0]],
            repeating: true
        }, this, "linearGradientValue");
        this.__sweepGradientValue = new ObservedPropertyObject({
            center: [50, 50],
            start: 0,
            end: 359,
            colors: [[0xAEE1E1, 0.0], [0xD3E0DC, 0.3], [0xFCD1D1, 1.0]],
            repeating: true
        }, this, "sweepGradientValue");
        this.__radialGradientValue = new ObservedPropertyObject({
            center: [50, 50],
            radius: 60,
            colors: [[0xAEE1E1, 0.0], [0xD3E0DC, 0.3], [0xFCD1D1, 1.0]],
            repeating: true
        }, this, "radialGradientValue");
        this.stateChangCallBack = (eventData) => {
            console.info("[ColorGradient] page stateChangCallBack");
            if (eventData != null) {
                console.info("[ColorGradient] page state change called:" + JSON.stringify(eventData));
                if (eventData.data.linearGradientValue != null) {
                    this.linearGradientValue = JSON.parse(eventData.data.linearGradientValue);
                }
                if (eventData.data.sweepGradientValue != null) {
                    this.sweepGradientValue = JSON.parse(eventData.data.sweepGradientValue);
                }
                if (eventData.data.radialGradientValue != null) {
                    this.radialGradientValue = JSON.parse(eventData.data.radialGradientValue);
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.linearGradientValue !== undefined) {
            this.linearGradientValue = params.linearGradientValue;
        }
        if (params.sweepGradientValue !== undefined) {
            this.sweepGradientValue = params.sweepGradientValue;
        }
        if (params.radialGradientValue !== undefined) {
            this.radialGradientValue = params.radialGradientValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__linearGradientValue.aboutToBeDeleted();
        this.__sweepGradientValue.aboutToBeDeleted();
        this.__radialGradientValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get linearGradientValue() {
        return this.__linearGradientValue.get();
    }
    set linearGradientValue(newValue) {
        this.__linearGradientValue.set(newValue);
    }
    get sweepGradientValue() {
        return this.__sweepGradientValue.get();
    }
    set sweepGradientValue(newValue) {
        this.__sweepGradientValue.set(newValue);
    }
    get radialGradientValue() {
        return this.__radialGradientValue.get();
    }
    set radialGradientValue(newValue) {
        this.__radialGradientValue.set(newValue);
    }
    onPageShow() {
        console.info('[ColorGradient] page show called');
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.padding({ top: 5 });
        Text.create('linearGradient');
        Text.fontSize(12);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Row.create();
        Row.width('90%');
        Row.height(50);
        Row.linearGradient(ObservedObject.GetRawObject(this.linearGradientValue));
        Row.key('linearGradient');
        Row.pop();
        Text.create('sweepGradient');
        Text.fontSize(12);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Row.create();
        Row.width(100);
        Row.height(100);
        Row.sweepGradient(ObservedObject.GetRawObject(this.sweepGradientValue));
        Row.key('sweepGradient');
        Row.pop();
        Text.create('radialGradient');
        Text.fontSize(12);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Row.create();
        Row.width(100);
        Row.height(100);
        Row.radialGradient(ObservedObject.GetRawObject(this.radialGradientValue));
        Row.key('radialGradient');
        Row.pop();
        Column.pop();
    }
}
loadDocument(new ColorGradientExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=colorGradient.js.map