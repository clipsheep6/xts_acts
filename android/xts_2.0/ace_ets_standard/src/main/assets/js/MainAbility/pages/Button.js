/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Button.ets?entry ***!
  \**************************************************************************************************************/
var router = globalThis.requireNativeModule('system.router');
class button_testcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__stateEffect = new ObservedPropertySimple(true, this, "stateEffect");
        this.__ButtonType = new ObservedPropertySimple(ButtonType.Circle, this, "ButtonType");
        this.content = "Button Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.stateEffect !== undefined) {
            this.stateEffect = params.stateEffect;
        }
        if (params.ButtonType !== undefined) {
            this.ButtonType = params.ButtonType;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        this.__stateEffect.aboutToBeDeleted();
        this.__ButtonType.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get stateEffect() {
        return this.__stateEffect.get();
    }
    set stateEffect(newValue) {
        this.__stateEffect.set(newValue);
    }
    get ButtonType() {
        return this.__ButtonType.get();
    }
    set ButtonType(newValue) {
        this.__ButtonType.set(newValue);
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
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Button.createWithLabel('1.value', { type: ButtonType.Circle, stateEffect: this.stateEffect });
        Button.fontSize(12);
        Button.fontWeight(FontWeight.Bold);
        Button.fontColor(0xCCCCCC);
        Button.height(40);
        Button.width(40);
        Button.key('button');
        Button.backgroundColor('#0D9FFB');
        Button.onClick(() => {
            router.back();
        });
        Button.padding(10);
        Button.pop();
        Button.createWithChild();
        Button.type(ButtonType.Capsule);
        Button.stateEffect(false);
        Button.backgroundColor('#0D9FFB');
        Button.padding(10);
        Button.key('button1');
        Text.create("2.Capsule");
        Text.pop();
        Button.pop();
        Button.createWithChild();
        Button.type(ButtonType.Normal);
        Button.backgroundColor('#0D9FFB');
        Button.key('button2');
        Text.create("3.Normal");
        Text.pop();
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new button_testcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Button.js.map