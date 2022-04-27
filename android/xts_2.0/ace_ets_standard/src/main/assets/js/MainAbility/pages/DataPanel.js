/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/DataPanel.ets?entry ***!
  \*****************************************************************************************************************/
var router = globalThis.requireNativeModule('system.router');
class dataPanel_testcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__width = new ObservedPropertySimple("200", this, "width");
        this.__height = new ObservedPropertySimple("100", this, "height");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.content = "DataPanel Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.width !== undefined) {
            this.width = params.width;
        }
        if (params.height !== undefined) {
            this.height = params.height;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        this.__width.aboutToBeDeleted();
        this.__height.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
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
    get active() {
        return this.__active.get();
    }
    set active(newValue) {
        this.__active.set(newValue);
    }
    onPageShow() {
        console.info('Blank page show called');
    }
    onBuildDone() {
        console.info('Blank page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.key('flex');
        Flex.width('100%');
        Flex.height('100%');
        Text.create(`${this.content}`);
        Text.fontSize(50);
        Text.pop();
        DataPanel.create({ values: [20, 40, 20], max: 100, type: DataPanelType.Line });
        DataPanel.width(this.width);
        DataPanel.height(this.height);
        DataPanel.key('DataPanel');
        DataPanel.onClick(() => {
            router.back();
        });
        DataPanel.closeEffect(false);
        DataPanel.pop();
        DataPanel.create({ values: [20, 40, 20], max: 100, type: DataPanelType.Circle });
        DataPanel.width(this.width);
        DataPanel.height(this.height);
        DataPanel.key('DataPanel2');
        DataPanel.onClick(() => {
            router.back();
        });
        DataPanel.closeEffect(true);
        DataPanel.pop();
        DataPanel.create({ values: [20, 40, 20], max: 100 });
        DataPanel.width(this.width);
        DataPanel.height(this.height);
        DataPanel.key('DataPanel3');
        DataPanel.onClick(() => {
            router.back();
        });
        DataPanel.closeEffect(false);
        DataPanel.pop();
        Flex.pop();
    }
}
loadDocument(new dataPanel_testcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=DataPanel.js.map