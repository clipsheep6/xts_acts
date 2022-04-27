/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\slider.ets?entry ***!
  \****************************************************************************************************************************/
class SliderExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__outSetValue = new ObservedPropertySimple(40, this, "outSetValue");
        this.__inSetValue = new ObservedPropertySimple(40, this, "inSetValue");
        this.__outVerticalSetValue = new ObservedPropertySimple(40, this, "outVerticalSetValue");
        this.__inVerticalSetValue = new ObservedPropertySimple(40, this, "inVerticalSetValue");
        this.__stepValue = new ObservedPropertySimple(1, this, "stepValue");
        this.__decorationValue = new ObservedPropertySimple(Axis.Vertical, this, "decorationValue");
        this.__value = new ObservedPropertySimple(40, this, "value");
        this.stateChangCallBack = (eventData) => {
            console.info("slider page state change called:" + JSON.stringify(eventData));
            if (eventData != null) {
                if (eventData.data.decorationValue != null) {
                    this.decorationValue = JSON.parse(eventData.data.decorationValue);
                }
                if (eventData.data.value != null) {
                    this.value = eventData.data.value;
                }
                if (eventData.data.stepValue != null) {
                    this.stepValue = eventData.data.stepValue;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.outSetValue !== undefined) {
            this.outSetValue = params.outSetValue;
        }
        if (params.inSetValue !== undefined) {
            this.inSetValue = params.inSetValue;
        }
        if (params.outVerticalSetValue !== undefined) {
            this.outVerticalSetValue = params.outVerticalSetValue;
        }
        if (params.inVerticalSetValue !== undefined) {
            this.inVerticalSetValue = params.inVerticalSetValue;
        }
        if (params.stepValue !== undefined) {
            this.stepValue = params.stepValue;
        }
        if (params.decorationValue !== undefined) {
            this.decorationValue = params.decorationValue;
        }
        if (params.value !== undefined) {
            this.value = params.value;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__outSetValue.aboutToBeDeleted();
        this.__inSetValue.aboutToBeDeleted();
        this.__outVerticalSetValue.aboutToBeDeleted();
        this.__inVerticalSetValue.aboutToBeDeleted();
        this.__stepValue.aboutToBeDeleted();
        this.__decorationValue.aboutToBeDeleted();
        this.__value.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get outSetValue() {
        return this.__outSetValue.get();
    }
    set outSetValue(newValue) {
        this.__outSetValue.set(newValue);
    }
    get inSetValue() {
        return this.__inSetValue.get();
    }
    set inSetValue(newValue) {
        this.__inSetValue.set(newValue);
    }
    get outVerticalSetValue() {
        return this.__outVerticalSetValue.get();
    }
    set outVerticalSetValue(newValue) {
        this.__outVerticalSetValue.set(newValue);
    }
    get inVerticalSetValue() {
        return this.__inVerticalSetValue.get();
    }
    set inVerticalSetValue(newValue) {
        this.__inVerticalSetValue.set(newValue);
    }
    get stepValue() {
        return this.__stepValue.get();
    }
    set stepValue(newValue) {
        this.__stepValue.set(newValue);
    }
    get decorationValue() {
        return this.__decorationValue.get();
    }
    set decorationValue(newValue) {
        this.__decorationValue.set(newValue);
    }
    get value() {
        return this.__value.get();
    }
    set value(newValue) {
        this.__value.set(newValue);
    }
    onPageShow() {
        console.info('slider page show called');
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.margin({ top: 5 });
        Text.create('slider out set');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.padding({ top: 50 });
        Row.width('80%');
        Slider.create({
            value: this.outSetValue,
            min: 0,
            max: 100,
            step: 1,
            style: SliderStyle.OutSet
        });
        Slider.blockColor(Color.Blue);
        Slider.trackColor(Color.Gray);
        Slider.selectedColor(Color.Blue);
        Slider.showSteps(true);
        Slider.showTips(true);
        Slider.onChange((value, mode) => {
            this.outSetValue = value;
            console.info('value:' + value + 'mode:' + mode.toString());
        });
        Text.create(this.outSetValue.toFixed(0));
        Text.fontSize(16);
        Text.pop();
        Row.pop();
        Text.create('slider in set');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.width('80%');
        Slider.create({
            value: this.inSetValue,
            min: 0,
            max: 100,
            step: 1,
            style: SliderStyle.InSet,
        });
        Slider.blockColor(0xCCCCCC);
        Slider.trackColor(Color.Black);
        Slider.selectedColor(0xCCCCCC);
        Slider.showSteps(false);
        Slider.showTips(false);
        Slider.onChange((value, mode) => {
            this.inSetValue = value;
            console.info('value:' + value + 'mode:' + mode.toString());
        });
        Text.create(this.inSetValue.toFixed(0));
        Text.fontSize(16);
        Text.pop();
        Row.pop();
        Row.create();
        Column.create();
        Column.width('50%');
        Column.height(300);
        Text.create('slider out direction set');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('50%');
        Text.pop();
        Slider.create({
            value: this.outVerticalSetValue,
            min: 0,
            max: 100,
            step: 1,
            style: SliderStyle.OutSet,
            direction: Axis.Vertical
        });
        Slider.blockColor(Color.Blue);
        Slider.trackColor(Color.Gray);
        Slider.selectedColor(Color.Blue);
        Slider.showSteps(true);
        Slider.showTips(true);
        Slider.onChange((value, mode) => {
            this.outVerticalSetValue = value;
            console.info('value:' + value + 'mode:' + mode.toString());
        });
        Text.create(this.outVerticalSetValue.toFixed(0));
        Text.fontSize(16);
        Text.pop();
        Column.pop();
        Column.create();
        Column.width('50%');
        Column.height(300);
        Text.create('slider in direction set');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('50%');
        Text.pop();
        Slider.create({
            value: this.inVerticalSetValue,
            min: 0,
            max: 100,
            step: this.stepValue,
            style: SliderStyle.InSet,
            direction: this.decorationValue
        });
        Slider.key('slider');
        Slider.blockColor(0xCCCCCC);
        Slider.trackColor(Color.Black);
        Slider.selectedColor(0xCCCCCC);
        Slider.showSteps(false);
        Slider.showTips(false);
        Slider.trackThickness(1);
        Slider.onChange((value, mode) => {
            this.inVerticalSetValue = value;
            console.info('value:' + value + 'mode:' + mode.toString());
        });
        Text.create(this.inVerticalSetValue.toFixed(0));
        Text.fontSize(16);
        Text.pop();
        Column.pop();
        Row.pop();
        Column.pop();
    }
}
loadDocument(new SliderExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=slider.js.map