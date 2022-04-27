/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/priorityGesture.ets?entry ***!
  \*************************************************************************************************************************************************/
class GestureSettingsExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__value = new ObservedPropertySimple('', this, "value");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.value !== undefined) {
            this.value = params.value;
        }
    }
    aboutToBeDeleted() {
        this.__value.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get value() {
        return this.__value.get();
    }
    set value(newValue) {
        this.__value.set(newValue);
    }
    render() {
        Column.create();
        Column.height(200);
        Column.width(300);
        Column.padding(60);
        Column.border({ width: 1 });
        Column.margin(30);
        Gesture.create(GesturePriority.High, GestureMask.IgnoreInternal);
        TapGesture.create();
        TapGesture.onAction(() => {
            this.value = 'priorityGesture onAction';
        });
        TapGesture.pop();
        Gesture.pop();
        Text.create('Click\n' + this.value);
        Gesture.create(GesturePriority.Low);
        TapGesture.create();
        TapGesture.onAction(() => {
            this.value = 'gesture onAction';
            try {
                var backData = {
                    data: {
                        "value": this.value
                    }
                };
                var backEvent = {
                    eventId: 162
                };
                console.info("click to emit action state");
            }
            catch (err) {
                console.info("click action state err: " + JSON.stringify(err.message));
            }
        });
        TapGesture.pop();
        Gesture.pop();
        Text.key('tapGesture');
        Text.pop();
        Column.pop();
    }
}
loadDocument(new GestureSettingsExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=priorityGesture.js.map