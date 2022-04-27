/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\ellipse.ets?entry ***!
  \************************************************************************************************************************/
class EllipseExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__width = new ObservedPropertySimple("200px", this, "width");
        this.__height = new ObservedPropertySimple("200px", this, "height");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.width !== undefined) {
            this.width = params.width;
        }
        if (params.height !== undefined) {
            this.height = params.height;
        }
    }
    aboutToBeDeleted() {
        this.__width.aboutToBeDeleted();
        this.__height.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get width() {
        return this.__width.get();
    }
    set width(newValue) {
        this.__width.set(newValue);
    }
    get height() {
        return this.__height.get();
    }
    set height(newValue) {
        this.__height.set(newValue);
    }
    onPageShow() {
        console.info('[ellipse] page show called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Row, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.debugLine("pages/ellipse.ets(33:5)");
        Flex.width('100%');
        Flex.height('100%');
        Ellipse.create();
        Ellipse.debugLine("pages/ellipse.ets(34:7)");
        Ellipse.width(`${this.width}`);
        Ellipse.height(`${this.height}`);
        Ellipse.key('ellipse');
        Flex.pop();
    }
}
loadDocument(new EllipseExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=ellipse.js.map