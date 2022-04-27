/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Panel.ets?entry ***!
  \*************************************************************************************************************/
class PanelExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__show = new ObservedPropertySimple(true, this, "show");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.show !== undefined) {
            this.show = params.show;
        }
    }
    aboutToBeDeleted() {
        this.__show.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get show() {
        return this.__show.get();
    }
    set show(newValue) {
        this.__show.set(newValue);
    }
    onPageShow() {
        console.info('Panel page show called');
    }
    onBuildDone() {
        console.info('Panel page build done called');
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.height('50%');
        Column.backgroundColor(0xDCDCDC);
        Column.padding({ top: 5 });
        Text.create('2021-09-30    Today Calendar: 1.afternoon......Click for details');
        Text.width('90%');
        Text.height(50);
        Text.borderRadius(10);
        Text.backgroundColor(0xFFFFFF);
        Text.padding({ left: 20 });
        Text.onClick(() => {
            this.show = !this.show;
        });
        Text.pop();
        Panel.create(this.show);
        Panel.key('panel');
        Panel.type(PanelType.Foldable);
        Panel.mode(PanelMode.Half);
        Panel.dragBar(true);
        Panel.fullHeight(500);
        Panel.halfHeight(250);
        Panel.miniHeight(100);
        Panel.onChange((value) => {
            console.info(`width:${value.width},height:${value.height},mode:${value.mode}`);
        });
        Column.create();
        Text.create('Today Calendar');
        Text.pop();
        Divider.create();
        Text.create('1. afternoon 4:00 The project meeting');
        Text.pop();
        Column.pop();
        Panel.pop();
        Panel.create(this.show);
        Panel.key('panel2');
        Panel.type(PanelType.Minibar);
        Panel.mode(PanelMode.Mini);
        Panel.dragBar(true);
        Panel.fullHeight(500);
        Panel.halfHeight(250);
        Panel.miniHeight(100);
        Panel.onChange((value) => {
            console.info(`width:${value.width},height:${value.height},mode:${value.mode}`);
        });
        Column.create();
        Text.create('Today Calendar');
        Text.pop();
        Divider.create();
        Text.create('1. afternoon 4:00 The project meeting');
        Text.pop();
        Column.pop();
        Panel.pop();
        Panel.create(false);
        Panel.key('panel3');
        Panel.type(PanelType.Temporary);
        Panel.mode(PanelMode.Full);
        Panel.dragBar(true);
        Panel.fullHeight(500);
        Panel.halfHeight(250);
        Panel.miniHeight(100);
        Panel.onChange((value) => {
            console.info(`width:${value.width},height:${value.height},mode:${value.mode}`);
        });
        Column.create();
        Text.create('Today Calendar');
        Text.pop();
        Divider.create();
        Text.create('1. afternoon 4:00 The project meeting');
        Text.pop();
        Column.pop();
        Panel.pop();
        Column.pop();
    }
}
loadDocument(new PanelExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Panel.js.map