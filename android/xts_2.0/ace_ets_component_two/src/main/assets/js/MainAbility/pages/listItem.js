/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\listItem.ets?entry ***!
  \*******************************************************************************************************/
class ListItemExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
        this.__editFlag = new ObservedPropertySimple(false, this, "editFlag");
        this.__sticky = new ObservedPropertyObject(Sticky.Normal, this, "sticky");
        this.__editMode = new ObservedPropertySimple(true, this, "editMode");
        this.stateChangCallBack = (eventData) => {
            console.info("[ListItem] page stateChangCallBack");
            if (eventData != null) {
                console.info("[ListItem] page state change called:" + JSON.stringify(eventData));
                if (eventData.data.sticky != null) {
                    this.sticky = eventData.data.sticky;
                }
            }
            if (eventData != null) {
                console.info("[ListItem] page state change called:" + JSON.stringify(eventData));
                if (eventData.data.editMode != null) {
                    this.editMode = eventData.data.editMode;
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
        if (params.sticky !== undefined) {
            this.sticky = params.sticky;
        }
        if (params.editMode !== undefined) {
            this.editMode = params.editMode;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__editFlag.aboutToBeDeleted();
        this.__sticky.aboutToBeDeleted();
        this.__editMode.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get editFlag() {
        return this.__editFlag.get();
    }
    set editFlag(newValue) {
        this.__editFlag.set(newValue);
    }
    get sticky() {
        return this.__sticky.get();
    }
    set sticky(newValue) {
        this.__sticky.set(newValue);
    }
    get editMode() {
        return this.__editMode.get();
    }
    set editMode(newValue) {
        this.__editMode.set(newValue);
    }
    onPageShow() {
        console.info('[ListItem] page show called');
        var stateChangeEvent = {
            eventId: 122,
        };
        var stateChangeEventOne = {
            eventId: 123,
        };
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.height('100%');
        Column.backgroundColor(0xDCDCDC);
        Column.padding({ top: 5 });
        List.create({ space: 20, initialIndex: 0 });
        List.key('List');
        List.editMode(this.editMode);
        List.onItemDelete((index) => {
            console.info(this.arr[index - 1] + 'Delete');
            this.arr.splice(index - 1, 1);
            this.editFlag = false;
            return true;
        });
        List.width('90%');
        ListItem.create();
        ListItem.sticky(ObservedObject.GetRawObject(this.sticky));
        ListItem.key('ListItem');
        Text.create('sticky:Normal , click me edit list');
        Text.width('100%');
        Text.height(40);
        Text.fontSize(12);
        Text.fontColor(0xFFFFFF);
        Text.textAlign(TextAlign.Center);
        Text.backgroundColor(0x696969);
        Text.onClick(() => {
            this.editFlag = !this.editFlag;
        });
        Text.pop();
        ListItem.pop();
        ForEach.create("2", this, ObservedObject.GetRawObject(this.arr), (item) => {
            ListItem.create();
            ListItem.editable(this.editFlag);
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
    }
}
loadDocument(new ListItemExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=listItem.js.map