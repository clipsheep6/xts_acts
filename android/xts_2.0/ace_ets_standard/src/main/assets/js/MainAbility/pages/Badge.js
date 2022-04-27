/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Badge.ets?entry ***!
  \*************************************************************************************************************/
class badge extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__counts = new ObservedPropertySimple(33, this, "counts");
        this.__message = new ObservedPropertySimple('new', this, "message");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.content = "badge Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.counts !== undefined) {
            this.counts = params.counts;
        }
        if (params.message !== undefined) {
            this.message = params.message;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        this.__counts.aboutToBeDeleted();
        this.__message.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get counts() {
        return this.__counts.get();
    }
    set counts(newValue) {
        this.__counts.set(newValue);
    }
    get message() {
        return this.__message.get();
    }
    set message(newValue) {
        this.__message.set(newValue);
    }
    get active() {
        return this.__active.get();
    }
    set active(newValue) {
        this.__active.set(newValue);
    }
    onPageShow() {
        console.info('badge page show called');
    }
    onBuildDone() {
        console.info('badge page build done called');
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
        Badge.create({
            count: this.counts,
            position: BadgePosition.Right,
            maxCount: 99,
            style: { color: 0xFFFFFF, fontSize: 16, badgeSize: 20, badgeColor: Color.Red }
        });
        Badge.width(100);
        Badge.height(50);
        Badge.key('badge');
        Button.createWithLabel('message');
        Button.onClick(() => {
            this.counts++;
        });
        Button.width(100);
        Button.height(50);
        Button.backgroundColor(0x317aff);
        Button.pop();
        Badge.pop();
        Text.create("BadgePosition.RightTop");
        Text.fontSize(16);
        Text.pop();
        Badge.create({
            count: this.counts,
            position: BadgePosition.RightTop,
            maxCount: 99,
            style: { color: 0xFFFFFF, fontSize: '16', badgeSize: '20', badgeColor: Color.Red }
        });
        Badge.width(100);
        Badge.height(50);
        Badge.key('badge1');
        Button.createWithLabel('message');
        Button.onClick(() => {
            this.counts++;
        });
        Button.width(100);
        Button.height(50);
        Button.backgroundColor(0x317aff);
        Button.pop();
        Badge.pop();
        Text.create("BadgePosition.Left");
        Text.fontSize(16);
        Text.pop();
        Badge.create({
            count: this.counts,
            position: BadgePosition.Left,
            maxCount: 99,
            style: { color: Color.Pink, fontSize: 16, badgeSize: 20, badgeColor: Color.Red }
        });
        Badge.width(100);
        Badge.height(50);
        Badge.key('badge2');
        Button.createWithLabel('message');
        Button.onClick(() => {
            this.counts++;
        });
        Button.width(100);
        Button.height(50);
        Button.backgroundColor(0x317aff);
        Button.pop();
        Badge.pop();
        Column.pop();
        Scroll.pop();
        Flex.pop();
    }
}
loadDocument(new badge("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Badge.js.map