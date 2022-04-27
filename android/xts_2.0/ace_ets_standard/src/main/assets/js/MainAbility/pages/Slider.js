/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Slider.ets?entry ***!
  \**************************************************************************************************************/
class slider extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__inSetValue = new ObservedPropertySimple(40, this, "inSetValue");
        this.__outSetValue = new ObservedPropertySimple(40, this, "outSetValue");
        this.__direction = new ObservedPropertySimple(Axis.Horizontal, this, "direction");
        this.__Begin = new ObservedPropertySimple(SliderChangeMode.Begin, this, "Begin");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.inSetValue !== undefined) {
            this.inSetValue = params.inSetValue;
        }
        if (params.outSetValue !== undefined) {
            this.outSetValue = params.outSetValue;
        }
        if (params.direction !== undefined) {
            this.direction = params.direction;
        }
        if (params.Begin !== undefined) {
            this.Begin = params.Begin;
        }
    }
    aboutToBeDeleted() {
        this.__inSetValue.aboutToBeDeleted();
        this.__outSetValue.aboutToBeDeleted();
        this.__direction.aboutToBeDeleted();
        this.__Begin.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get inSetValue() {
        return this.__inSetValue.get();
    }
    set inSetValue(newValue) {
        this.__inSetValue.set(newValue);
    }
    get outSetValue() {
        return this.__outSetValue.get();
    }
    set outSetValue(newValue) {
        this.__outSetValue.set(newValue);
    }
    get direction() {
        return this.__direction.get();
    }
    set direction(newValue) {
        this.__direction.set(newValue);
    }
    get Begin() {
        return this.__Begin.get();
    }
    set Begin(newValue) {
        this.__Begin.set(newValue);
    }
    onPageShow() {
        console.info('Slider page show called');
    }
    onBuildDone() {
        console.info('Slider page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Column.create();
        Column.width(300);
        Column.height(300);
        Column.borderColor(Color.Pink);
        Column.borderWidth(2);
        Text.create(`Slider page`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Slider.create({
            value: this.outSetValue,
            min: 0,
            max: 100,
            step: 1,
            direction: Axis.Horizontal,
            reverse: false,
            style: SliderStyle.OutSet
        });
        Slider.blockColor('#FFFF0000');
        Slider.selectedColor('#FF0000FF');
        Slider.trackColor('#FF808080');
        Slider.minLabel('10');
        Slider.maxLabel('10');
        Slider.showTips(false);
        Slider.showSteps(false);
        Slider.onChange((value, mode) => {
            this.outSetValue = value;
            this.Begin = mode;
            console.info('value: ' + value + '---mode: ' + mode);
        });
        Slider.width("100");
        Slider.height("100");
        Slider.key('slider1');
        Slider.create({
            value: 40,
            min: 0,
            max: 100,
            step: 1,
            style: SliderStyle.InSet
        });
        Slider.blockColor(Color.Red);
        Slider.selectedColor(Color.Blue);
        Slider.trackColor(Color.Gray);
        Slider.showTips(true);
        Slider.showSteps(true);
        Slider.key('slider2');
        Column.pop();
        Flex.pop();
    }
}
loadDocument(new slider("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Slider.js.map