/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\overlay.ets?entry ***!
  \************************************************************************************************************************/
class OverlayExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__title = new ObservedPropertySimple('old title', this, "title");
        this.__x = new ObservedPropertySimple(0, this, "x");
        this.__y = new ObservedPropertySimple(-15, this, "y");
        this.__alignment = new ObservedPropertySimple(Alignment.Bottom, this, "alignment");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.title !== undefined) {
            this.title = params.title;
        }
        if (params.x !== undefined) {
            this.x = params.x;
        }
        if (params.y !== undefined) {
            this.y = params.y;
        }
        if (params.alignment !== undefined) {
            this.alignment = params.alignment;
        }
    }
    aboutToBeDeleted() {
        this.__title.aboutToBeDeleted();
        this.__x.aboutToBeDeleted();
        this.__y.aboutToBeDeleted();
        this.__alignment.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get title() {
        return this.__title.get();
    }
    set title(newValue) {
        this.__title.set(newValue);
    }
    get x() {
        return this.__x.get();
    }
    set x(newValue) {
        this.__x.set(newValue);
    }
    get y() {
        return this.__y.get();
    }
    set y(newValue) {
        this.__y.set(newValue);
    }
    get alignment() {
        return this.__alignment.get();
    }
    set alignment(newValue) {
        this.__alignment.set(newValue);
    }
    onPageShow() {
        console.info('[overlay] page show called ');
    }
    render() {
        Column.create();
        Column.padding({ top: 20 });
        Column.create();
        Column.width('100%');
        Text.create('floating layer');
        Text.fontSize(12);
        Text.fontColor(0xCCCCCC);
        Text.maxLines(1);
        Text.pop();
        Column.create();
        Column.border({ color: Color.Black, width: 2 });
        Image.create('/images/img.jpeg');
        Image.width(340);
        Image.height(240);
        Image.key('overlay');
        Image.overlay(this.title, { align: this.alignment, offset: { x: this.x, y: this.y } });
        Column.pop();
        Column.pop();
        Column.pop();
    }
}
loadDocument(new OverlayExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=overlay.js.map