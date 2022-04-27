/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/Link.ets?entry ***!
  \***************************************************************************************************************************/
class link extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.content = "link Page";
        this.__isPlaying = new ObservedPropertySimple(false, this, "isPlaying");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.content !== undefined) {
            this.content = params.content;
        }
        if (params.isPlaying !== undefined) {
            this.isPlaying = params.isPlaying;
        }
    }
    aboutToBeDeleted() {
        this.__isPlaying.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get isPlaying() {
        return this.__isPlaying.get();
    }
    set isPlaying(newValue) {
        this.__isPlaying.set(newValue);
    }
    onPageShow() {
        console.info('link page show called');
    }
    onBuildDone() {
        console.info('link page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.key('flex');
        Flex.width('100%');
        Flex.height('100%');
        Scroll.create();
        Column.create();
        Text.create(`${this.content}`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        let earlierCreatedChild_2 = this.findChildById("2");
        if (earlierCreatedChild_2 == undefined) {
            View.create(new PlayButton("2", this, { stateEffect: this.__isPlaying }));
        }
        else {
            earlierCreatedChild_2.updateWithValueParams({});
            View.create(earlierCreatedChild_2);
        }
        Button.createWithLabel("Button1 stateEffect false", { type: ButtonType.Normal });
        Button.backgroundColor(Color.Gray);
        Button.stateEffect(this.isPlaying);
        Button.key("Button");
        Button.pop();
        Column.pop();
        Scroll.pop();
        Flex.pop();
    }
}
class PlayButton extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__stateEffect = new SynchedPropertySimpleTwoWay(params.stateEffect, this, "stateEffect");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        this.__stateEffect.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get stateEffect() {
        return this.__stateEffect.get();
    }
    set stateEffect(newValue) {
        this.__stateEffect.set(newValue);
    }
    render() {
        Column.create();
        Text.create("子组件button");
        Text.pop();
        Button.createWithLabel("Button2 stateEffect ", { type: ButtonType.Capsule });
        Button.backgroundColor(Color.Pink);
        Button.stateEffect(this.stateEffect);
        Button.key("Button1");
        Button.pop();
        Column.pop();
    }
}
loadDocument(new link("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Link.js.map