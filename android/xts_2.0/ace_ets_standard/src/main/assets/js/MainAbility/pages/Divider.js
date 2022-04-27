/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Divider.ets?entry ***!
  \***************************************************************************************************************/
var router = globalThis.requireNativeModule('system.router');
class divider_textcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__vertical = new ObservedPropertySimple(true, this, "vertical");
        this.__color = new ObservedPropertySimple(Color.Red, this, "color");
        this.__strokeWidth = new ObservedPropertySimple(7, this, "strokeWidth");
        this.__lineCap = new ObservedPropertySimple(LineCapStyle.Butt, this, "lineCap");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.content = "Divider Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.vertical !== undefined) {
            this.vertical = params.vertical;
        }
        if (params.color !== undefined) {
            this.color = params.color;
        }
        if (params.strokeWidth !== undefined) {
            this.strokeWidth = params.strokeWidth;
        }
        if (params.lineCap !== undefined) {
            this.lineCap = params.lineCap;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        this.__vertical.aboutToBeDeleted();
        this.__color.aboutToBeDeleted();
        this.__strokeWidth.aboutToBeDeleted();
        this.__lineCap.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get vertical() {
        return this.__vertical.get();
    }
    set vertical(newValue) {
        this.__vertical.set(newValue);
    }
    get color() {
        return this.__color.get();
    }
    set color(newValue) {
        this.__color.set(newValue);
    }
    get strokeWidth() {
        return this.__strokeWidth.get();
    }
    set strokeWidth(newValue) {
        this.__strokeWidth.set(newValue);
    }
    get lineCap() {
        return this.__lineCap.get();
    }
    set lineCap(newValue) {
        this.__lineCap.set(newValue);
    }
    get active() {
        return this.__active.get();
    }
    set active(newValue) {
        this.__active.set(newValue);
    }
    onPageShow() {
        console.info('Button page show called');
    }
    onBuildDone() {
        console.info('Button page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.key('flex');
        Flex.width('100%');
        Flex.height('100%');
        Text.create(`${this.content}`);
        Text.fontSize(50);
        Text.pop();
        Divider.create();
        Divider.lineCap(LineCapStyle.Butt);
        Divider.strokeWidth(this.strokeWidth);
        Divider.color(this.color);
        Divider.vertical(this.vertical);
        Divider.height(150);
        Divider.key('divider');
        Divider.onClick(() => {
            router.back();
        });
        Divider.create();
        Divider.lineCap(LineCapStyle.Round);
        Divider.vertical(false);
        Divider.color(Color.Green);
        Divider.strokeWidth(10);
        Divider.height(150);
        Divider.key('divider1');
        Divider.create();
        Divider.lineCap(LineCapStyle.Square);
        Divider.color(Color.Green);
        Divider.vertical(true);
        Divider.strokeWidth(10);
        Divider.height(150);
        Divider.key('divider2');
        Flex.pop();
    }
}
loadDocument(new divider_textcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Divider.js.map