/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\panDirection.ets?entry ***!
  \***********************************************************************************************************/
class PanGestureExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__offsetX = new ObservedPropertySimple(0, this, "offsetX");
        this.__offsetY = new ObservedPropertySimple(0, this, "offsetY");
        this.__direction = new ObservedPropertyObject(PanDirection.All, this, "direction");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.offsetX !== undefined) {
            this.offsetX = params.offsetX;
        }
        if (params.offsetY !== undefined) {
            this.offsetY = params.offsetY;
        }
        if (params.direction !== undefined) {
            this.direction = params.direction;
        }
    }
    aboutToBeDeleted() {
        this.__offsetX.aboutToBeDeleted();
        this.__offsetY.aboutToBeDeleted();
        this.__direction.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get offsetX() {
        return this.__offsetX.get();
    }
    set offsetX(newValue) {
        this.__offsetX.set(newValue);
    }
    get offsetY() {
        return this.__offsetY.get();
    }
    set offsetY(newValue) {
        this.__offsetY.set(newValue);
    }
    get direction() {
        return this.__direction.get();
    }
    set direction(newValue) {
        this.__direction.set(newValue);
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.SpaceBetween });
        Flex.key('panDirection');
        Flex.height(100);
        Flex.width(200);
        Flex.padding(20);
        Flex.border({ width: 1 });
        Flex.margin(80);
        Flex.translate({ x: this.offsetX, y: this.offsetY, z: 5 });
        Gesture.create(GesturePriority.Low);
        PanGesture.create({});
        PanGesture.direction(ObservedObject.GetRawObject(this.direction));
        PanGesture.setDirection(ObservedObject.GetRawObject(this.direction));
        PanGesture.onActionStart((event) => {
            console.info('Pan start');
        });
        PanGesture.onActionUpdate((event) => {
            this.offsetX = event.offsetX;
            this.offsetY = event.offsetY;
        });
        PanGesture.onActionEnd(() => {
            console.info('Pan end');
        });
        PanGesture.pop();
        Gesture.pop();
        Text.create('PanGesture offset:\nX: ' + this.offsetX + '\n' + 'Y: ' + this.offsetY);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new PanGestureExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=panDirection.js.map