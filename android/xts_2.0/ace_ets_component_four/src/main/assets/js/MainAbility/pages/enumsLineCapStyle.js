/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\enumsLineCapStyle.ets?entry ***!
  \****************************************************************************************************************/
class ShapeExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.margin({ top: 15 });
        Shape.create();
        Shape.viewPort({ x: -2, y: -2, width: 304, height: 130 });
        Shape.fill(0x317Af7);
        Shape.stroke(Color.Black);
        Shape.strokeWidth(4);
        Shape.strokeDashArray([20]);
        Shape.strokeDashOffset(10);
        Shape.strokeLineCap(LineCapStyle.Butt);
        Shape.strokeLineJoin(LineJoinStyle.Round);
        Shape.antiAlias(true);
        Shape.key('Butt');
        Rect.create();
        Rect.width(300);
        Rect.height(50);
        Ellipse.create();
        Ellipse.width(300);
        Ellipse.height(50);
        Ellipse.offset({ x: 0, y: 60 });
        Path.create();
        Path.width(300);
        Path.height(10);
        Path.commands('M0 0 L900 0');
        Path.offset({ x: 0, y: 120 });
        Shape.pop();
        Column.pop();
    }
}
loadDocument(new ShapeExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=enumsLineCapStyle.js.map