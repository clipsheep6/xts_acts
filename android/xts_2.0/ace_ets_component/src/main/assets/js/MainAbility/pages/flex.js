/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*********************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\flex.ets?entry ***!
  \*********************************************************************************************************************/
class FlexExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__direction = new ObservedPropertySimple(FlexDirection.Row, this, "direction");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("Flex page state change called:" + JSON.stringify(eventData));
                if (eventData.data.flexBasis != null) {
                    this.flexBasis = eventData.data.flexBasis;
                }
                if (eventData.data.flexGrow != null) {
                    this.flexGrow = eventData.data.flexGrow;
                }
                if (eventData.data.flexShrink != null) {
                    this.flexShrink = eventData.data.flexShrink;
                }
                if (eventData.data.alignSelf != null) {
                    this.alignSelf = eventData.data.alignSelf;
                }
            }
        };
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("Flex page state change called:" + JSON.stringify(eventData));
                switch (eventData.data.alignSelf) {
                    case 'Auto':
                        this.alignSelf = ItemAlign.Auto;
                        break;
                    case 'Start':
                        this.alignSelf = ItemAlign.Start;
                        break;
                    case 'Center':
                        this.alignSelf = ItemAlign.Center;
                        break;
                    case 'End':
                        this.alignSelf = ItemAlign.End;
                        break;
                    case 'Stretch':
                        this.alignSelf = ItemAlign.Stretch;
                        break;
                    case 'Baseline':
                        this.alignSelf = ItemAlign.Baseline;
                        break;
                    default:
                        this.alignSelf = ItemAlign.Auto;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.direction !== undefined) {
            this.direction = params.direction;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__direction.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get direction() {
        return this.__direction.get();
    }
    set direction(newValue) {
        this.__direction.set(newValue);
    }
    onPageShow() {
        console.info('flex page show called');
    }
    render() {
        Column.create({ space: 5 });
        Column.debugLine("pages/flex.ets(75:5)");
        Column.width('100%');
        Column.margin({ top: 5 });
        Text.create('flexBasis');
        Text.debugLine("pages/flex.ets(76:7)");
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create();
        Flex.debugLine("pages/flex.ets(77:7)");
        Flex.width('90%');
        Flex.height(120);
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('flexBasis("auto")');
        Text.debugLine("pages/flex.ets(78:9)");
        Text.flexBasis('auto');
        Text.key("flexBasis");
        Text.width('60%');
        Text.height(100);
        Text.lineHeight(70);
        Text.backgroundColor(0xD2B48C);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('flexBasis(100)');
        Text.debugLine("pages/flex.ets(86:9)");
        Text.flexBasis('100');
        Text.height(100);
        Text.lineHeight(70);
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Flex.pop();
        Text.create('flexGrow');
        Text.debugLine("pages/flex.ets(94:7)");
        Text.key("flexGrow");
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create();
        Flex.debugLine("pages/flex.ets(95:7)");
        Flex.width('90%');
        Flex.height(120);
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('flexGrow(2)');
        Text.debugLine("pages/flex.ets(96:9)");
        Text.flexGrow(2);
        Text.height(100);
        Text.lineHeight(70);
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('flexGrow(1)');
        Text.debugLine("pages/flex.ets(102:9)");
        Text.flexGrow(1);
        Text.height(100);
        Text.lineHeight(70);
        Text.backgroundColor(0xD2B48C);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Flex.pop();
        Text.create('flexShrink');
        Text.debugLine("pages/flex.ets(110:7)");
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({ direction: FlexDirection.Row });
        Flex.debugLine("pages/flex.ets(111:7)");
        Flex.width('90%');
        Flex.height(120);
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('flexShrink(0)');
        Text.debugLine("pages/flex.ets(112:9)");
        Text.flexShrink(0);
        Text.key("flexShrink");
        Text.width('50%');
        Text.height(100);
        Text.lineHeight(70);
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('no flexShrink');
        Text.debugLine("pages/flex.ets(120:9)");
        Text.width('40%');
        Text.height(100);
        Text.lineHeight(70);
        Text.backgroundColor(0xD2B48C);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('flexShrink(2)');
        Text.debugLine("pages/flex.ets(126:9)");
        Text.flexShrink(2);
        Text.width('40%');
        Text.height(100);
        Text.lineHeight(70);
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Flex.pop();
        Text.create('alignSelf');
        Text.debugLine("pages/flex.ets(135:7)");
        Text.key("alignSelf");
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({ direction: FlexDirection.Row, alignItems: ItemAlign.Center });
        Flex.debugLine("pages/flex.ets(136:7)");
        Flex.key('flex');
        Flex.width('90%');
        Flex.height(120);
        Flex.padding(10);
        Flex.backgroundColor(0xAFEEEE);
        Text.create('no alignSelf,height:80');
        Text.debugLine("pages/flex.ets(137:9)");
        Text.width('33%');
        Text.height(80);
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('alignSelf stretch');
        Text.debugLine("pages/flex.ets(139:9)");
        Text.alignSelf(ItemAlign.Stretch);
        Text.width('33%');
        Text.height(80);
        Text.lineHeight(70);
        Text.backgroundColor(0xD2B48C);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('no alignSelf,height:100');
        Text.debugLine("pages/flex.ets(146:9)");
        Text.width('34%');
        Text.height(100);
        Text.backgroundColor(0xF5DEB3);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Flex.pop();
        Column.pop();
    }
}
loadDocument(new FlexExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=flex.js.map