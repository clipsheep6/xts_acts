/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\gridSettings.ets?entry ***!
  \*****************************************************************************************************************************/
class GridSetting extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__smSpan = new ObservedPropertySimple(2, this, "smSpan");
        this.__smOffset = new ObservedPropertySimple(1, this, "smOffset");
        this.__gridSpan = new ObservedPropertySimple(1, this, "gridSpan");
        this.__gridOffset = new ObservedPropertySimple(0, this, "gridOffset");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.smSpan !== undefined) {
            this.smSpan = params.smSpan;
        }
        if (params.smOffset !== undefined) {
            this.smOffset = params.smOffset;
        }
        if (params.gridSpan !== undefined) {
            this.gridSpan = params.gridSpan;
        }
        if (params.gridOffset !== undefined) {
            this.gridOffset = params.gridOffset;
        }
    }
    aboutToBeDeleted() {
        this.__smSpan.aboutToBeDeleted();
        this.__smOffset.aboutToBeDeleted();
        this.__gridSpan.aboutToBeDeleted();
        this.__gridOffset.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get smSpan() {
        return this.__smSpan.get();
    }
    set smSpan(newValue) {
        this.__smSpan.set(newValue);
    }
    get smOffset() {
        return this.__smOffset.get();
    }
    set smOffset(newValue) {
        this.__smOffset.set(newValue);
    }
    get gridSpan() {
        return this.__gridSpan.get();
    }
    set gridSpan(newValue) {
        this.__gridSpan.set(newValue);
    }
    get gridOffset() {
        return this.__gridOffset.get();
    }
    set gridOffset(newValue) {
        this.__gridOffset.set(newValue);
    }
    render() {
        GridContainer.create({ sizeType: SizeType.SM });
        GridContainer.debugLine("pages/gridSettings.ets(27:5)");
        GridContainer.backgroundColor(0xf1f3f5);
        GridContainer.margin({ top: 10 });
        GridContainer.key('gridContainer');
        Row.create({});
        Row.debugLine("pages/gridSettings.ets(28:7)");
        Row.height(200);
        Row.create();
        Row.debugLine("pages/gridSettings.ets(29:9)");
        Row.gridOffset(this.gridOffset);
        Row.height("100%");
        Row.backgroundColor(0x66bbb2cb);
        Row.key('gridOffset');
        Text.create('Left');
        Text.debugLine("pages/gridSettings.ets(30:11)");
        Text.fontSize(25);
        Text.pop();
        Row.pop();
        Row.create();
        Row.debugLine("pages/gridSettings.ets(37:9)");
        Row.useSizeType({
            xs: { span: 1, offset: 0 }, sm: { span: this.smSpan, offset: this.smOffset },
            md: { span: 5, offset: 1 }, lg: { span: 7, offset: 2 }
        });
        Row.height("100%");
        Row.backgroundColor(0x66b6c5d1);
        Row.key('gridRow');
        Text.create('Center');
        Text.debugLine("pages/gridSettings.ets(38:11)");
        Text.fontSize(25);
        Text.pop();
        Row.pop();
        Row.create();
        Row.debugLine("pages/gridSettings.ets(48:9)");
        Row.gridSpan(this.gridSpan);
        Row.height("100%");
        Row.backgroundColor(0x66bbb2cb);
        Row.key('gridSpan');
        Text.create('Right');
        Text.debugLine("pages/gridSettings.ets(49:11)");
        Text.fontSize(25);
        Text.pop();
        Row.pop();
        Row.pop();
        GridContainer.pop();
    }
}
loadDocument(new GridSetting("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=gridSettings.js.map