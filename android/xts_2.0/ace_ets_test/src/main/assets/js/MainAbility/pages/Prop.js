/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/Prop.ets?entry ***!
  \***************************************************************************************************************************/
class prop extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__value = new ObservedPropertySimple(0, this, "value");
        this.content = "prop Page";
        this.__isPlaying = new ObservedPropertySimple(false, this, "isPlaying");
        this.__countDownStartValue = new ObservedPropertySimple(10, this, "countDownStartValue");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.value !== undefined) {
            this.value = params.value;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
        if (params.isPlaying !== undefined) {
            this.isPlaying = params.isPlaying;
        }
        if (params.countDownStartValue !== undefined) {
            this.countDownStartValue = params.countDownStartValue;
        }
    }
    aboutToBeDeleted() {
        this.__value.aboutToBeDeleted();
        this.__isPlaying.aboutToBeDeleted();
        this.__countDownStartValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get value() {
        return this.__value.get();
    }
    set value(newValue) {
        this.__value.set(newValue);
    }
    get isPlaying() {
        return this.__isPlaying.get();
    }
    set isPlaying(newValue) {
        this.__isPlaying.set(newValue);
    }
    get countDownStartValue() {
        return this.__countDownStartValue.get();
    }
    set countDownStartValue(newValue) {
        this.__countDownStartValue.set(newValue);
    }
    onPageShow() {
        console.info('Prop page show called');
    }
    onBuildDone() {
        console.info('Prop page build done called');
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
        Column.create();
        Text.create(`${this.countDownStartValue}`);
        Text.key("Text001");
        Text.pop();
        Button.createWithChild();
        Button.onClick(() => {
            this.countDownStartValue += 1;
        });
        Text.create('+1 - Nuggets in New Game');
        Text.pop();
        Button.pop();
        Button.createWithChild();
        Button.onClick(() => {
            this.countDownStartValue -= 1;
        });
        Text.create('-1  - Nuggets in New Game');
        Text.pop();
        Button.pop();
        let earlierCreatedChild_2 = this.findChildById("2");
        if (earlierCreatedChild_2 == undefined) {
            View.create(new CountDownComponent("2", this, { count: this.countDownStartValue, costOfOneAttempt: 2 }));
        }
        else {
            earlierCreatedChild_2.updateWithValueParams({
                count: this.countDownStartValue, costOfOneAttempt: 2
            });
            View.create(earlierCreatedChild_2);
        }
        Column.pop();
        Column.pop();
        Scroll.pop();
        Flex.pop();
    }
}
class CountDownComponent extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__count = new SynchedPropertySimpleOneWay(params.count, this, "count");
        this.costOfOneAttempt = undefined;
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        this.count = params.count;
        if (params.costOfOneAttempt !== undefined) {
            this.costOfOneAttempt = params.costOfOneAttempt;
        }
    }
    aboutToBeDeleted() {
        this.__count.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get count() {
        return this.__count.get();
    }
    set count(newValue) {
        this.__count.set(newValue);
    }
    render() {
        Column.create();
        Text.create(`${this.count}`);
        Text.key("Text002");
        Text.pop();
        Column.pop();
    }
}
loadDocument(new prop("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Prop.js.map