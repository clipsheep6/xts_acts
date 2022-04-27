/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\path.ets?entry ***!
  \***************************************************************************************************/
class PathExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__commandsOne = new ObservedPropertySimple('M0 0 L900 0', this, "commandsOne");
        this.__widthOne = new ObservedPropertySimple(300, this, "widthOne");
        this.__heightOne = new ObservedPropertySimple(10, this, "heightOne");
        this.stateChangCallBack = (eventData) => {
            console.info("[stateChangCallBack] stateChangCallBack ");
            if (eventData != null) {
                console.info("[stateChangCallBack] state change called: " + JSON.stringify(eventData));
                if (eventData.data.commands != null) {
                    this.commandsOne = eventData.data.commands;
                }
                if (eventData.data.width != null) {
                    this.widthOne = eventData.data.width;
                }
                if (eventData.data.height != null) {
                    this.heightOne = eventData.data.height;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.commandsOne !== undefined) {
            this.commandsOne = params.commandsOne;
        }
        if (params.widthOne !== undefined) {
            this.widthOne = params.widthOne;
        }
        if (params.heightOne !== undefined) {
            this.heightOne = params.heightOne;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__commandsOne.aboutToBeDeleted();
        this.__widthOne.aboutToBeDeleted();
        this.__heightOne.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get commandsOne() {
        return this.__commandsOne.get();
    }
    set commandsOne(newValue) {
        this.__commandsOne.set(newValue);
    }
    get widthOne() {
        return this.__widthOne.get();
    }
    set widthOne(newValue) {
        this.__widthOne.set(newValue);
    }
    get heightOne() {
        return this.__heightOne.get();
    }
    set heightOne(newValue) {
        this.__heightOne.set(newValue);
    }
    onPageShow() {
        console.info('[path] page show called ');
        var stateChangeEvent = {
            eventId: 151,
        };
    }
    render() {
        Column.create({ space: 5 });
        Column.debugLine("pages/path.ets(51:5)");
        Column.width('100%');
        Column.margin({ top: 5 });
        Text.create('Straight line');
        Text.debugLine("pages/path.ets(52:7)");
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Path.create();
        Path.debugLine("pages/path.ets(53:7)");
        Path.width(this.widthOne);
        Path.height(this.heightOne);
        Path.commands(this.commandsOne);
        Path.stroke(Color.Black);
        Path.key('path1');
        Path.strokeWidth(3);
        Text.create('Straight line graph');
        Text.debugLine("pages/path.ets(55:7)");
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({ justifyContent: FlexAlign.SpaceAround });
        Flex.debugLine("pages/path.ets(56:7)");
        Flex.width('100%');
        Path.create();
        Path.debugLine("pages/path.ets(57:9)");
        Path.width(100);
        Path.height(100);
        Path.commands('M150 0 L300 300 L0 300 Z');
        Path.create();
        Path.debugLine("pages/path.ets(58:9)");
        Path.width(100);
        Path.height(100);
        Path.commands('M0 0 H300 V300 H0 Z');
        Path.create();
        Path.debugLine("pages/path.ets(59:9)");
        Path.width(100);
        Path.height(100);
        Path.commands('M150 0 L0 150 L60 300 L240 300 L300 150 Z');
        Flex.pop();
        Text.create('Curve graphics');
        Text.debugLine("pages/path.ets(62:7)");
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Flex.create({ justifyContent: FlexAlign.SpaceAround });
        Flex.debugLine("pages/path.ets(63:7)");
        Path.create();
        Path.debugLine("pages/path.ets(64:9)");
        Path.width(100);
        Path.height(100);
        Path.commands("M0 300 S150 0 300 300 Z");
        Path.create();
        Path.debugLine("pages/path.ets(65:9)");
        Path.width(100);
        Path.height(100);
        Path.commands('M0 150 C0 150 150 0 300 150 L150 300 Z');
        Flex.pop();
        Column.pop();
    }
}
loadDocument(new PathExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=path.js.map