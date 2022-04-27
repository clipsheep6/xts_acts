/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/badge.ets?entry ***!
  \***************************************************************************************************************************************/
class BadgeExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__counts = new ObservedPropertySimple(1, this, "counts");
        this.__message = new ObservedPropertySimple('new', this, "message");
        this.__fontSizeValue = new ObservedPropertySimple(20, this, "fontSizeValue");
        this.__colorValue = new ObservedPropertySimple(Color.Red, this, "colorValue");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("Badge page state change called:" + JSON.stringify(eventData));
                if (eventData.data.fontSizeValue != null) {
                    this.fontSizeValue = eventData.data.fontSizeValue;
                }
                if (eventData.data.colorValue != null) {
                    this.colorValue = eventData.data.colorValue;
                }
                if (eventData.data.message != null) {
                    this.message = eventData.data.message;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.counts !== undefined) {
            this.counts = params.counts;
        }
        if (params.message !== undefined) {
            this.message = params.message;
        }
        if (params.fontSizeValue !== undefined) {
            this.fontSizeValue = params.fontSizeValue;
        }
        if (params.colorValue !== undefined) {
            this.colorValue = params.colorValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__counts.aboutToBeDeleted();
        this.__message.aboutToBeDeleted();
        this.__fontSizeValue.aboutToBeDeleted();
        this.__colorValue.aboutToBeDeleted();
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
    get fontSizeValue() {
        return this.__fontSizeValue.get();
    }
    set fontSizeValue(newValue) {
        this.__fontSizeValue.set(newValue);
    }
    get colorValue() {
        return this.__colorValue.get();
    }
    set colorValue(newValue) {
        this.__colorValue.set(newValue);
    }
    onPageShow() {
        console.info('Badge page show called');
        var stateChangeEvent = {
            eventId: 63
        };
        var stateChangeEventOne = {
            eventId: 64
        };
        var stateChangeEventTwo = {
            eventId: 65
        };
    }
    render() {
        Flex.create({ justifyContent: FlexAlign.SpaceAround });
        Flex.width('100%');
        Flex.margin({ top: 5 });
        Badge.create({
            count: this.counts,
            maxCount: 99,
            style: { color: this.colorValue, fontSize: this.fontSizeValue, badgeSize: 50, badgeColor: Color.Red }
        });
        Badge.width(100);
        Badge.height(50);
        Badge.key('badge');
        Button.createWithLabel('message');
        Button.onClick(() => {
            this.counts++;
        });
        Button.width(200);
        Button.height(100);
        Button.backgroundColor(0x317aff);
        Button.fontSize(20);
        Button.pop();
        Badge.pop();
        Badge.create({
            value: this.message,
            style: { color: this.colorValue, fontSize: 9, badgeSize: 20, badgeColor: Color.Red }
        });
        Badge.width(80);
        Badge.height(50);
        Badge.key('badge2');
        Text.create('message');
        Text.width(80);
        Text.height(50);
        Text.fontSize(16);
        Text.lineHeight(37);
        Text.borderRadius(10);
        Text.textAlign(TextAlign.Center);
        Text.backgroundColor(0xF3F4ED);
        Text.pop();
        Badge.pop();
        Badge.create({
            value: '',
            position: 1,
            style: { badgeSize: 6, badgeColor: Color.Red }
        });
        Badge.width(90);
        Badge.height(50);
        Text.create('message');
        Text.width(90);
        Text.height(50);
        Text.fontSize(16);
        Text.lineHeight(37);
        Text.borderRadius(10);
        Text.textAlign(TextAlign.Center);
        Text.backgroundColor(0xF3F4ED);
        Text.pop();
        Badge.pop();
        Flex.pop();
    }
}
loadDocument(new BadgeExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=badge.js.map