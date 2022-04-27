/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\select.ets?entry ***!
  \****************************************************************************************************************************/
class SliderExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__value = new ObservedPropertySimple(10, this, "value");
        this.__font = new ObservedPropertyObject({ size: 30, weight: 400, family: 'serif', style: FontStyle.Normal }, this, "font");
        this.__fontColor = new ObservedPropertySimple(0xCCCCCC, this, "fontColor");
        this.stateChangCallBack = (eventData) => {
            console.info("select page state change called:" + JSON.stringify(eventData));
            if (eventData != null) {
                if (eventData.data.value != null) {
                    this.value = eventData.data.value;
                }
                if (eventData.data.font != null) {
                    this.font = JSON.parse(eventData.data.font);
                }
                if (eventData.data.fontColor != null) {
                    this.fontColor = eventData.data.fontColor;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.value !== undefined) {
            this.value = params.value;
        }
        if (params.font !== undefined) {
            this.font = params.font;
        }
        if (params.fontColor !== undefined) {
            this.fontColor = params.fontColor;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__value.aboutToBeDeleted();
        this.__font.aboutToBeDeleted();
        this.__fontColor.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get value() {
        return this.__value.get();
    }
    set value(newValue) {
        this.__value.set(newValue);
    }
    get font() {
        return this.__font.get();
    }
    set font(newValue) {
        this.__font.set(newValue);
    }
    get fontColor() {
        return this.__fontColor.get();
    }
    set fontColor(newValue) {
        this.__fontColor.set(newValue);
    }
    onPageShow() {
        console.info('select page show called');
    }
    render() {
        Column.create();
        Select.create([{ value: 'aaa', icon: "/images/img.png" },
            { value: 'bbb', icon: "/images/img.png" },
            { value: 'ccc', icon: "/images/img.png" },
            { value: 'ddd', icon: "/images/img.png" }]);
        Select.selected(2);
        Select.value('TTT');
        Select.value(this.value);
        Select.font(ObservedObject.GetRawObject(this.font));
        Select.fontColor(this.fontColor);
        Select.selectedOptionFont({ size: 40, weight: 500, family: 'serif', style: FontStyle.Normal });
        Select.optionFont({ size: 30, weight: 400, family: 'serif', style: FontStyle.Normal });
        Select.key('select');
        Select.onSelected((index) => {
            console.info("Select:" + index);
        });
        Select.pop();
        Column.pop();
    }
}
loadDocument(new SliderExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=select.js.map