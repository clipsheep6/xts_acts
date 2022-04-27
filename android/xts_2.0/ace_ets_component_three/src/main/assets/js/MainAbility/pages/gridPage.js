/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/gridPage.ets?entry ***!
  \******************************************************************************************************************************************/
class gridPage extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__numbers = new ObservedPropertyObject(['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15'], this, "numbers");
        this.__columnsGap = new ObservedPropertySimple('2px', this, "columnsGap");
        this.__rowsGap = new ObservedPropertySimple('2px', this, "rowsGap");
        this.__columnsTemplate = new ObservedPropertySimple('1fr 1fr 1fr 1fr 1fr', this, "columnsTemplate");
        this.__rowsTemplate = new ObservedPropertySimple('1fr 1fr 1fr 1fr 1fr', this, "rowsTemplate");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("on state change called " + JSON.stringify(eventData));
                if (eventData.data.columnsGap != null) {
                    this.columnsGap = eventData.data.columnsGap;
                }
                if (eventData.data.rowsGap != null) {
                    this.rowsGap = eventData.data.rowsGap;
                }
                if (eventData.data.columnsTemplate != null) {
                    this.columnsTemplate = eventData.data.columnsTemplate;
                }
                if (eventData.data.rowsTemplate != null) {
                    this.rowsTemplate = eventData.data.rowsTemplate;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.numbers !== undefined) {
            this.numbers = params.numbers;
        }
        if (params.columnsGap !== undefined) {
            this.columnsGap = params.columnsGap;
        }
        if (params.rowsGap !== undefined) {
            this.rowsGap = params.rowsGap;
        }
        if (params.columnsTemplate !== undefined) {
            this.columnsTemplate = params.columnsTemplate;
        }
        if (params.rowsTemplate !== undefined) {
            this.rowsTemplate = params.rowsTemplate;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__numbers.aboutToBeDeleted();
        this.__columnsGap.aboutToBeDeleted();
        this.__rowsGap.aboutToBeDeleted();
        this.__columnsTemplate.aboutToBeDeleted();
        this.__rowsTemplate.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get numbers() {
        return this.__numbers.get();
    }
    set numbers(newValue) {
        this.__numbers.set(newValue);
    }
    get columnsGap() {
        return this.__columnsGap.get();
    }
    set columnsGap(newValue) {
        this.__columnsGap.set(newValue);
    }
    get rowsGap() {
        return this.__rowsGap.get();
    }
    set rowsGap(newValue) {
        this.__rowsGap.set(newValue);
    }
    get columnsTemplate() {
        return this.__columnsTemplate.get();
    }
    set columnsTemplate(newValue) {
        this.__columnsTemplate.set(newValue);
    }
    get rowsTemplate() {
        return this.__rowsTemplate.get();
    }
    set rowsTemplate(newValue) {
        this.__rowsTemplate.set(newValue);
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.width('100%');
        Flex.height('100%');
        Text.create('Hello World');
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Column.create();
        Column.width('100%');
        Column.margin({ top: 5 });
        Grid.create();
        Grid.key('grid');
        Grid.columnsGap(this.columnsGap);
        Grid.rowsGap(this.rowsGap);
        Grid.columnsTemplate(this.columnsTemplate);
        Grid.rowsTemplate(this.rowsTemplate);
        Grid.width('90%');
        Grid.height(300);
        GridItem.create();
        GridItem.rowStart(1);
        GridItem.rowEnd(4);
        Text.create('4');
        Text.key('grid_item_4');
        Text.fontSize(16);
        Text.backgroundColor(0xFAEEE0);
        Text.width('100%');
        Text.height('100%');
        Text.textAlign(TextAlign.Center);
        Text.pop();
        GridItem.pop();
        ForEach.create("2", this, ObservedObject.GetRawObject(this.numbers), (item) => {
            GridItem.create();
            GridItem.forceRebuild(false);
            Text.create(item);
            Text.fontSize(16);
            Text.backgroundColor(0xF9CF93);
            Text.width('100%');
            Text.height('100%');
            Text.textAlign(TextAlign.Center);
            Text.pop();
            GridItem.pop();
        }, item => item);
        ForEach.pop();
        GridItem.create();
        GridItem.columnStart(1);
        GridItem.columnEnd(5);
        Text.create('5');
        Text.fontSize(16);
        Text.backgroundColor(0xDBD0C0);
        Text.width('100%');
        Text.height('100%');
        Text.textAlign(TextAlign.Center);
        Text.pop();
        GridItem.pop();
        Grid.pop();
        Column.pop();
        Flex.pop();
    }
    onPageShow() {
        console.info('button page show called');
        var stateChangeEvent = {
            eventId: 110
        };
        var stateChangeEvent2 = {
            eventId: 111
        };
        var stateChangeEvent3 = {
            eventId: 112
        };
        var stateChangeEvent4 = {
            eventId: 113
        };
    }
}
loadDocument(new gridPage("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=gridPage.js.map