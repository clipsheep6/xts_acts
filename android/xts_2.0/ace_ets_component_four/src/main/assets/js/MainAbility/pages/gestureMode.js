/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\gestureMode.ets?entry ***!
  \**********************************************************************************************************/
class GestureGroupExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__count = new ObservedPropertySimple(0, this, "count");
        this.__offsetX = new ObservedPropertySimple(0, this, "offsetX");
        this.__offsetY = new ObservedPropertySimple(0, this, "offsetY");
        this.__borderStyle = new ObservedPropertyObject(BorderStyle.Solid, this, "borderStyle");
        this.__mode = new ObservedPropertyObject(GestureMode.Sequence, this, "mode");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.count !== undefined) {
            this.count = params.count;
        }
        if (params.offsetX !== undefined) {
            this.offsetX = params.offsetX;
        }
        if (params.offsetY !== undefined) {
            this.offsetY = params.offsetY;
        }
        if (params.borderStyle !== undefined) {
            this.borderStyle = params.borderStyle;
        }
        if (params.mode !== undefined) {
            this.mode = params.mode;
        }
    }
    aboutToBeDeleted() {
        this.__count.aboutToBeDeleted();
        this.__offsetX.aboutToBeDeleted();
        this.__offsetY.aboutToBeDeleted();
        this.__borderStyle.aboutToBeDeleted();
        this.__mode.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get count() {
        return this.__count.get();
    }
    set count(newValue) {
        this.__count.set(newValue);
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
    get borderStyle() {
        return this.__borderStyle.get();
    }
    set borderStyle(newValue) {
        this.__borderStyle.set(newValue);
    }
    get mode() {
        return this.__mode.get();
    }
    set mode(newValue) {
        this.__mode.set(newValue);
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, mode: this.mode, alignItems: ItemAlign.Center, justifyContent: FlexAlign.SpaceBetween });
        Flex.key('gestureMode');
        Flex.translate({ x: this.offsetX, y: this.offsetY, z: 5 });
        Flex.height(100);
        Flex.width(200);
        Flex.padding(10);
        Flex.margin(80);
        Flex.border({ width: 1, style: this.borderStyle });
        Gesture.create(GesturePriority.Low);
        GestureGroup.create(GestureMode.Sequence);
        GestureGroup.onCancel(() => {
            console.log('sequence gesture canceled');
        });
        LongPressGesture.create({ repeat: true });
        LongPressGesture.onAction((event) => {
            if (event.repeat) {
                this.count++;
            }
            console.log('LongPress onAction');
        });
        LongPressGesture.onActionEnd(() => {
            console.log('LongPress end');
        });
        LongPressGesture.pop();
        PanGesture.create({});
        PanGesture.onActionStart(() => {
            this.borderStyle = BorderStyle.Dashed;
            console.log('pan start');
        });
        PanGesture.onActionUpdate((event) => {
            this.offsetX = event.offsetX;
            this.offsetY = event.offsetY;
            console.log('pan update');
        });
        PanGesture.pop();
        GestureGroup.pop();
        Gesture.pop();
        Text.create('sequence gesture\n' + 'LongPress onAction:' + this.count + '\nPanGesture offset:\nX: ' + this.offsetX + '\n' + 'Y: ' + this.offsetY);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new GestureGroupExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=gestureMode.js.map