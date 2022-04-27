/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/components/Shape.ets?entry ***!
  \***************************************************************************************************************************************/
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
    onPageShow() {
        console.info('shape page show called');
    }
    onBuildDone() {
        console.info('shape page build done called');
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.margin({ top: 15 });
        Text.create('basic');
        Text.fontSize(30);
        Text.fontColor(0xCCCCCC);
        Text.width(320);
        Text.pop();
        Shape.create();
        Shape.viewPort({ x: -2, y: -2, width: 304, height: 130 });
        Shape.fill(0x317Af7);
        Shape.stroke(Color.Black);
        Shape.strokeWidth(4);
        Shape.strokeDashArray([20]);
        Shape.strokeDashOffset(10);
        Shape.strokeLineCap(LineCapStyle.Round);
        Shape.strokeLineJoin(LineJoinStyle.Round);
        Shape.antiAlias(true);
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
        Shape.create();
        Shape.viewPort({ x: -1, y: -1, width: 302, height: 52 });
        Shape.fill(0x317Af7);
        Shape.stroke(Color.Black);
        Shape.strokeWidth(2);
        Rect.create();
        Rect.width(300);
        Rect.height(50);
        Shape.pop();
        Text.create('border');
        Text.fontSize(30);
        Text.fontColor(0xCCCCCC);
        Text.width(320);
        Text.margin({ top: 30 });
        Text.pop();
        Shape.create();
        Shape.viewPort({ x: 0, y: -5, width: 300, height: 20 });
        Shape.stroke(0xEE8443);
        Shape.strokeWidth(10);
        Shape.strokeDashArray([20]);
        Path.create();
        Path.width(300);
        Path.height(10);
        Path.commands('M0 0 L900 0');
        Shape.pop();
        Shape.create();
        Shape.viewPort({ x: 0, y: -5, width: 300, height: 20 });
        Shape.stroke(0xEE8443);
        Shape.strokeWidth(10);
        Shape.strokeDashArray([20]);
        Shape.strokeDashOffset(10);
        Path.create();
        Path.width(300);
        Path.height(10);
        Path.commands('M0 0 L900 0');
        Shape.pop();
        Shape.create();
        Shape.viewPort({ x: 0, y: -5, width: 300, height: 20 });
        Shape.stroke(0xEE8443);
        Shape.strokeWidth(10);
        Shape.strokeOpacity(0.5);
        Path.create();
        Path.width(300);
        Path.height(10);
        Path.commands('M0 0 L900 0');
        Shape.pop();
        Shape.create();
        Shape.viewPort({ x: 0, y: -5, width: 300, height: 20 });
        Shape.stroke(0xEE8443);
        Shape.strokeWidth(10);
        Shape.strokeDashArray([20]);
        Shape.strokeLineCap(LineCapStyle.Round);
        Path.create();
        Path.width(300);
        Path.height(10);
        Path.commands('M0 0 L900 0');
        Shape.pop();
        Shape.create();
        Shape.viewPort({ x: -5, y: -5, width: 310, height: 120 });
        Shape.fill(0x317Af7);
        Shape.stroke(0xEE8443);
        Shape.strokeWidth(10);
        Shape.strokeLineJoin(LineJoinStyle.Round);
        Rect.create();
        Rect.width(300);
        Rect.height(100);
        Shape.pop();
        Shape.create();
        Shape.viewPort({ x: -80, y: -5, width: 310, height: 100 });
        Shape.fill(0x317Af7);
        Shape.stroke(0xEE8443);
        Shape.strokeWidth(10);
        Shape.fillOpacity(1);
        Shape.strokeLineJoin(LineJoinStyle.Miter);
        Shape.strokeMiterLimit(5);
        Path.create();
        Path.width(300);
        Path.height(60);
        Path.commands('M0 0 L400 0 L400 200 Z');
        Shape.pop();
        Column.pop();
    }
}
loadDocument(new ShapeExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Shape.js.map