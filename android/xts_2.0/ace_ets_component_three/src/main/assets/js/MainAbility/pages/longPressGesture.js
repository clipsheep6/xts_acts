/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/longPressGesture.ets?entry ***!
  \**************************************************************************************************************************************************/
class LongPressGestureExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__eventString = new ObservedPropertySimple('normal', this, "eventString");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.eventString !== undefined) {
            this.eventString = params.eventString;
        }
    }
    aboutToBeDeleted() {
        this.__eventString.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get eventString() {
        return this.__eventString.get();
    }
    set eventString(newValue) {
        this.__eventString.set(newValue);
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.SpaceBetween });
        Flex.key('flex');
        Flex.height(200);
        Flex.width(300);
        Flex.padding(60);
        Flex.border({ width: 1 });
        Flex.margin(30);
        Gesture.create(GesturePriority.Low);
        LongPressGesture.create({ repeat: true });
        LongPressGesture.onAction(() => {
            console.info("longPressGesture current action onAction");
            this.eventString = 'onAction';
            console.info('onAction current action state is: ' + this.eventString);
            try {
                let backData = {
                    data: {
                        "ACTION": this.eventString,
                    }
                };
                let backEvent = {
                    eventId: 125
                };
                console.info("start to emit action state");
            }
            catch (err) {
                console.info("emit action state err: " + JSON.stringify(err.message));
            }
        });
        LongPressGesture.onActionEnd(() => {
            console.info("longPressGesture current action end");
            this.eventString = 'onActionEnd';
            console.info('onActionEnd current action state is: ' + this.eventString);
            try {
                let backData = {
                    data: {
                        "ACTION": this.eventString,
                    }
                };
                let backEvent = {
                    eventId: 126
                };
                console.info("start to emit action state");
            }
            catch (err) {
                console.info("emit action state err: " + JSON.stringify(err.message));
            }
        });
        LongPressGesture.onActionCancel(() => {
            console.info("longPressGesture current action cancel");
        });
        LongPressGesture.pop();
        Gesture.pop();
        Text.create('LongPress onAction:' + this.eventString);
        Text.fontSize(20);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new LongPressGestureExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=longPressGesture.js.map