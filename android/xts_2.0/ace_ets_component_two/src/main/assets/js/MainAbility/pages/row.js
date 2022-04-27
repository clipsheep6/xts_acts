/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\row.ets?entry ***!
  \**************************************************************************************************/
class RowTest extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__alignItems = new ObservedPropertyObject(VerticalAlign.Center, this, "alignItems");
        this.__justifyContent = new ObservedPropertyObject(FlexAlign.Start, this, "justifyContent");
        this.stateChangCallBack = (eventData) => {
            console.info("row page stateChangCallBack");
            if (eventData != null) {
                console.info("row page state change called:" + JSON.stringify(eventData));
                if (eventData.data.alignItems != null) {
                    this.alignItems = eventData.data.alignItems;
                }
                if (eventData.data.justifyContent != null) {
                    this.justifyContent = eventData.data.justifyContent;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.alignItems !== undefined) {
            this.alignItems = params.alignItems;
        }
        if (params.justifyContent !== undefined) {
            this.justifyContent = params.justifyContent;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__alignItems.aboutToBeDeleted();
        this.__justifyContent.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get alignItems() {
        return this.__alignItems.get();
    }
    set alignItems(newValue) {
        this.__alignItems.set(newValue);
    }
    get justifyContent() {
        return this.__justifyContent.get();
    }
    set justifyContent(newValue) {
        this.__justifyContent.set(newValue);
    }
    onPageShow() {
        console.info('row page show called');
        var stateChangeEvent = {
            eventId: 182,
        };
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Text.create('space');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Row.create({ space: 5 });
        Row.width('90%');
        Row.height(107);
        Row.border({ width: 1 });
        Row.key('Row');
        Row.create();
        Row.width('30%');
        Row.height(50);
        Row.backgroundColor(0xAFEEEE);
        Row.pop();
        Row.create();
        Row.width('30%');
        Row.height(50);
        Row.backgroundColor(0x00FFFF);
        Row.pop();
        Row.pop();
        Text.create('alignItems(Top)');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.alignItems(VerticalAlign.Top);
        Row.height('15%');
        Row.border({ width: 1 });
        Row.create();
        Row.width('30%');
        Row.height(50);
        Row.backgroundColor(0xAFEEEE);
        Row.pop();
        Row.create();
        Row.width('30%');
        Row.height(50);
        Row.backgroundColor(0x00FFFF);
        Row.pop();
        Row.pop();
        Text.create('alignItems(Center)');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.alignItems(VerticalAlign.Center);
        Row.height('15%');
        Row.border({ width: 1 });
        Row.create();
        Row.width('30%');
        Row.height(50);
        Row.backgroundColor(0xAFEEEE);
        Row.pop();
        Row.create();
        Row.width('30%');
        Row.height(50);
        Row.backgroundColor(0x00FFFF);
        Row.pop();
        Row.pop();
        Text.create('justifyContent(End)');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.width('90%');
        Row.border({ width: 1 });
        Row.alignItems(VerticalAlign.Bottom);
        Row.justifyContent(FlexAlign.End);
        Row.create();
        Row.width('30%');
        Row.height(50);
        Row.backgroundColor(0xAFEEEE);
        Row.pop();
        Row.create();
        Row.width('30%');
        Row.height(50);
        Row.backgroundColor(0x00FFFF);
        Row.pop();
        Row.pop();
        Text.create('justifyContent(Center)');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.width('90%');
        Row.border({ width: 1 });
        Row.alignItems(VerticalAlign.Center);
        Row.justifyContent(FlexAlign.Center);
        Row.create();
        Row.width('30%');
        Row.height(50);
        Row.backgroundColor(0xAFEEEE);
        Row.pop();
        Row.create();
        Row.width('30%');
        Row.height(49);
        Row.backgroundColor(0x00FFFF);
        Row.pop();
        Row.pop();
        Column.pop();
    }
}
loadDocument(new RowTest("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=row.js.map