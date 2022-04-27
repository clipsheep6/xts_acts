/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\grid.ets?entry ***!
  \***************************************************************************************************/
class GridExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__Number = new ObservedPropertyObject(['0', '1', '2', '3', '4'], this, "Number");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.Number !== undefined) {
            this.Number = params.Number;
        }
    }
    aboutToBeDeleted() {
        this.__Number.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get Number() {
        return this.__Number.get();
    }
    set Number(newValue) {
        this.__Number.set(newValue);
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.margin({ top: 5 });
        Grid.create();
        Grid.columnsTemplate('1fr 1fr 1fr 1fr 1fr');
        Grid.rowsTemplate('1fr 1fr 1fr 1fr 1fr');
        Grid.columnsGap(10);
        Grid.rowsGap(10);
        Grid.width('90%');
        Grid.backgroundColor(0xFAEEE0);
        Grid.height(300);
        Grid.multiSelectable(false);
        Grid.layoutDirection(GridDirection.Row);
        Grid.minCount(1);
        Grid.cellLength(0);
        Grid.supportAnimation(true);
        ForEach.create("3", this, ObservedObject.GetRawObject(this.Number), (day) => {
            ForEach.create("2", this, ObservedObject.GetRawObject(this.Number), (day) => {
                GridItem.create();
                Text.create(day);
                Text.fontSize(16);
                Text.backgroundColor(0xF9CF93);
                Text.width('100%');
                Text.height('100%');
                Text.textAlign(TextAlign.Center);
                Text.selectable(true);
                Text.pop();
                GridItem.pop();
            }, day => day);
            ForEach.pop();
        }, day => day);
        ForEach.pop();
        Grid.pop();
        Grid.create();
        Grid.columnsTemplate('1fr 1fr 1fr 1fr 1fr');
        Grid.rowsTemplate('1fr 1fr 1fr 1fr 1fr');
        Grid.columnsGap(10);
        Grid.rowsGap(10);
        Grid.width('90%');
        Grid.backgroundColor(0xFAEEE0);
        Grid.height(300);
        Grid.layoutDirection(GridDirection.ColumnReverse);
        ForEach.create("5", this, ObservedObject.GetRawObject(this.Number), (day) => {
            ForEach.create("4", this, ObservedObject.GetRawObject(this.Number), (day) => {
                GridItem.create();
                Text.create(day);
                Text.fontSize(16);
                Text.backgroundColor(0xF9CF93);
                Text.width('100%');
                Text.height('100%');
                Text.textAlign(TextAlign.Center);
                Text.pop();
                GridItem.pop();
            }, day => day);
            ForEach.pop();
        }, day => day);
        ForEach.pop();
        Grid.pop();
        Grid.create();
        Grid.columnsTemplate('1fr 1fr 1fr 1fr 1fr');
        Grid.rowsTemplate('1fr 1fr 1fr 1fr 1fr');
        Grid.columnsGap(10);
        Grid.rowsGap(10);
        Grid.width('90%');
        Grid.backgroundColor(0xFAEEE0);
        Grid.height(300);
        Grid.layoutDirection(GridDirection.Column);
        ForEach.create("7", this, ObservedObject.GetRawObject(this.Number), (day) => {
            ForEach.create("6", this, ObservedObject.GetRawObject(this.Number), (day) => {
                GridItem.create();
                Text.create(day);
                Text.fontSize(16);
                Text.backgroundColor(0xF9CF93);
                Text.width('100%');
                Text.height('100%');
                Text.textAlign(TextAlign.Center);
                Text.pop();
                GridItem.pop();
            }, day => day);
            ForEach.pop();
        }, day => day);
        ForEach.pop();
        Grid.pop();
        Text.create('scroll');
        Text.fontColor(0xCCCCCC);
        Text.fontSize(9);
        Text.width('90%');
        Text.pop();
        Grid.create();
        Grid.layoutDirection(Column()
            .columnsTemplate('1fr 1fr 1fr 1fr 1fr')
            .columnsGap(10)
            .rowsGap(10)
            .onScrollIndex((first) => {
            console.info(first.toString());
        })
            .width('90%')
            .backgroundColor(0xFAEEE0)
            .height(300));
        ForEach.create("9", this, ObservedObject.GetRawObject(this.Number), (day) => {
            ForEach.create("8", this, ObservedObject.GetRawObject(this.Number), (day) => {
                GridItem.create();
                Text.create(day);
                Text.fontSize(16);
                Text.backgroundColor(0xF9CF93);
                Text.width('100%');
                Text.height(80);
                Text.textAlign(TextAlign.Center);
                Text.pop();
                GridItem.pop();
            }, day => day);
            ForEach.pop();
        }, day => day);
        ForEach.pop();
        Grid.pop();
        Column.pop();
    }
}
loadDocument(new GridExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=grid.js.map