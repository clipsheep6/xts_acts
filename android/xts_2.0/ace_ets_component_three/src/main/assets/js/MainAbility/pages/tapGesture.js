/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/tapGesture.ets?entry ***!
  \********************************************************************************************************************************************/
class TapGestureExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__value = new ObservedPropertySimple('', this, "value");
        this.__onClickValue = new ObservedPropertySimple(false, this, "onClickValue");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.value !== undefined) {
            this.value = params.value;
        }
        if (params.onClickValue !== undefined) {
            this.onClickValue = params.onClickValue;
        }
    }
    aboutToBeDeleted() {
        this.__value.aboutToBeDeleted();
        this.__onClickValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get value() {
        return this.__value.get();
    }
    set value(newValue) {
        this.__value.set(newValue);
    }
    get onClickValue() {
        return this.__onClickValue.get();
    }
    set onClickValue(newValue) {
        this.__onClickValue.set(newValue);
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.SpaceBetween });
        Flex.height(200);
        Flex.width(300);
        Flex.padding(60);
        Flex.border({ width: 1 });
        Flex.margin(30);
        Gesture.create(GesturePriority.Low);
        TapGesture.create({ count: 2 });
        TapGesture.onAction(() => {
            this.value = 'TapGesture onAction';
            this.onClickValue = true;
            try {
                var backData = {
                    data: {
                        "ACTION": this.onClickValue
                    }
                };
                var backEvent = {
                    eventId: 214
                };
                console.info("click to emit action state");
            }
            catch (err) {
                console.info("click action state err: " + JSON.stringify(err.message));
            }
        });
        TapGesture.pop();
        Gesture.pop();
        Flex.key('tapGesture');
        Text.create('Click twice');
        Text.pop();
        Text.create(this.value);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new TapGestureExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=tapGesture.js.map