/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Blank.ets?entry ***!
  \*************************************************************************************************************/
class blank_testcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__Color = new ObservedPropertySimple(Color.Pink, this, "Color");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.content = "Blank Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.Color !== undefined) {
            this.Color = params.Color;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        this.__Color.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get Color() {
        return this.__Color.get();
    }
    set Color(newValue) {
        this.__Color.set(newValue);
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
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Blank.create(100);
        Blank.color(this.Color);
        Blank.key('blank');
        Blank.pop();
        Text.create('on/off');
        Text.fontSize(18);
        Text.height(60);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new blank_testcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Blank.js.map