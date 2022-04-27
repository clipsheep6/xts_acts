/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/blank.ets?entry ***!
  \***************************************************************************************************************************************/
class BlankExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__colorValue = new ObservedPropertySimple(Color.Blue, this, "colorValue");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("Blank page state change called:" + JSON.stringify(eventData));
                if (eventData.data.colorValue != null) {
                    this.colorValue = eventData.data.colorValue;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.colorValue !== undefined) {
            this.colorValue = params.colorValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__colorValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get colorValue() {
        return this.__colorValue.get();
    }
    set colorValue(newValue) {
        this.__colorValue.set(newValue);
    }
    onPageShow() {
        console.info('Blank page1 show called');
        var stateChangeEvent = {
            eventId: 69
        };
    }
    render() {
        Column.create();
        Column.backgroundColor(0xEFEFEF);
        Column.padding(20);
        Row.create();
        Row.width('100%');
        Row.backgroundColor(0xFFFFFF);
        Row.borderRadius(15);
        Row.padding({ left: 12 });
        Text.create('Bluetooth');
        Text.fontSize(18);
        Text.pop();
        Blank.create();
        Blank.color(this.colorValue);
        Blank.key('blank');
        Blank.pop();
        Toggle.create({ type: ToggleType.Switch });
        Toggle.pop();
        Row.pop();
        Column.pop();
    }
}
loadDocument(new BlankExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=blank.js.map