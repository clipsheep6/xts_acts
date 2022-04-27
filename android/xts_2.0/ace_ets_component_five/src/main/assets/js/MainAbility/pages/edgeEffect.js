/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\edgeEffect.ets?entry ***!
  \********************************************************************************************************************************/
class ListExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
        this.__editFlag = new ObservedPropertySimple(false, this, "editFlag");
        this.__edgeEffect = new ObservedPropertySimple(EdgeEffect.None, this, "edgeEffect");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("edgeEffect page state change called:" + JSON.stringify(eventData));
                if (eventData.data.edgeEffect != null) {
                    this.edgeEffect = eventData.data.edgeEffect;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.arr !== undefined) {
            this.arr = params.arr;
        }
        if (params.editFlag !== undefined) {
            this.editFlag = params.editFlag;
        }
        if (params.edgeEffect !== undefined) {
            this.edgeEffect = params.edgeEffect;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__editFlag.aboutToBeDeleted();
        this.__edgeEffect.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get editFlag() {
        return this.__editFlag.get();
    }
    set editFlag(newValue) {
        this.__editFlag.set(newValue);
    }
    get edgeEffect() {
        return this.__edgeEffect.get();
    }
    set edgeEffect(newValue) {
        this.__edgeEffect.set(newValue);
    }
    render() {
        Stack.create({ alignContent: Alignment.TopStart });
        Stack.width('100%');
        Stack.height('100%');
        Stack.backgroundColor(0xDCDCDC);
        Stack.padding({ top: 5 });
        Column.create();
        Column.width('100%');
        List.create({ space: 20, initialIndex: 0 });
        List.key('list');
        List.listDirection(Axis.Vertical);
        List.divider({ strokeWidth: 2, color: 0xFFFFFF, startMargin: 20, endMargin: 20 });
        List.edgeEffect(this.edgeEffect);
        List.chainAnimation(false);
        List.onScrollIndex((firstIndex, lastIndex) => {
            console.info('first' + firstIndex);
            console.info('last' + lastIndex);
        });
        List.editMode(this.editFlag);
        List.onItemDelete((index) => {
            console.info(this.arr[index] + 'Delete');
            this.arr.splice(index, 1);
            console.info(JSON.stringify(this.arr));
            this.editFlag = false;
            return true;
        });
        List.width('90%');
        ForEach.create("2", this, ObservedObject.GetRawObject(this.arr), (item) => {
            ListItem.create();
            ListItem.editable(true);
            Text.create('' + item);
            Text.width('100%');
            Text.height(100);
            Text.fontSize(16);
            Text.textAlign(TextAlign.Center);
            Text.borderRadius(10);
            Text.backgroundColor(0xFFFFFF);
            Text.pop();
            ListItem.pop();
        }, item => item);
        ForEach.pop();
        List.pop();
        Column.pop();
        Button.createWithLabel('edit list');
        Button.onClick(() => {
            this.editFlag = !this.editFlag;
        });
        Button.margin({ top: 5, left: 20 });
        Button.pop();
        Stack.pop();
    }
    onPageShow() {
        console.info('edgeEffect page show called');
    }
}
loadDocument(new ListExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=edgeEffect.js.map