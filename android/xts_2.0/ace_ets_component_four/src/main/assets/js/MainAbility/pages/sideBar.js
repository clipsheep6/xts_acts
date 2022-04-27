/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\sideBar.ets?entry ***!
  \******************************************************************************************************/
class SideBarExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.normalIcon = ({ "id": 0, "type": 30000, params: ["ic_health_heart.png"] });
        this.selectedIcon = ({ "id": 0, "type": 30000, params: ["test.png"] });
        this.__arr = new ObservedPropertyObject([1, 2, 3], this, "arr");
        this.__current = new ObservedPropertySimple(1, this, "current");
        this.__widthValue = new ObservedPropertySimple(10, this, "widthValue");
        this.__heightValue = new ObservedPropertySimple(10, this, "heightValue");
        this.__controlButton = new ObservedPropertyObject(ButtonStyle.left, this, "controlButton");
        this.__iconsValue = new ObservedPropertyObject({ shown: string = 10, hidden: string = 10, switching: string = 10 }, this, "iconsValue");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("sideBar page state change called:" + JSON.stringify(eventData));
                if (eventData.data.widthValue != null) {
                    this.widthValue = eventData.data.widthValue;
                }
                if (eventData.data.heightValue != null) {
                    this.heightValue = JSON.parse(eventData.data.heightValue);
                }
                if (eventData.data.iconsValue != null) {
                    this.iconsValue = eventData.data.iconsValue;
                }
                if (eventData.data.controlButton != null) {
                    this.controlButton = eventData.data.controlButton;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.normalIcon !== undefined) {
            this.normalIcon = params.normalIcon;
        }
        if (params.selectedIcon !== undefined) {
            this.selectedIcon = params.selectedIcon;
        }
        if (params.arr !== undefined) {
            this.arr = params.arr;
        }
        if (params.current !== undefined) {
            this.current = params.current;
        }
        if (params.widthValue !== undefined) {
            this.widthValue = params.widthValue;
        }
        if (params.heightValue !== undefined) {
            this.heightValue = params.heightValue;
        }
        if (params.controlButton !== undefined) {
            this.controlButton = params.controlButton;
        }
        if (params.iconsValue !== undefined) {
            this.iconsValue = params.iconsValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__arr.aboutToBeDeleted();
        this.__current.aboutToBeDeleted();
        this.__widthValue.aboutToBeDeleted();
        this.__heightValue.aboutToBeDeleted();
        this.__controlButton.aboutToBeDeleted();
        this.__iconsValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get arr() {
        return this.__arr.get();
    }
    set arr(newValue) {
        this.__arr.set(newValue);
    }
    get current() {
        return this.__current.get();
    }
    set current(newValue) {
        this.__current.set(newValue);
    }
    get widthValue() {
        return this.__widthValue.get();
    }
    set widthValue(newValue) {
        this.__widthValue.set(newValue);
    }
    get heightValue() {
        return this.__heightValue.get();
    }
    set heightValue(newValue) {
        this.__heightValue.set(newValue);
    }
    get controlButton() {
        return this.__controlButton.get();
    }
    set controlButton(newValue) {
        this.__controlButton.set(newValue);
    }
    get iconsValue() {
        return this.__iconsValue.get();
    }
    set iconsValue(newValue) {
        this.__iconsValue.set(newValue);
    }
    onPageShow() {
        console.info('sideBar page show called');
        var stateChangeEvent = {
            eventId: 195,
        };
    }
    render() {
        SideBarContainer.create(SideBarContainerType.Embed);
        SideBarContainer.key('sidebar');
        SideBarContainer.width(this.widthValue);
        SideBarContainer.height(this.heightValue);
        SideBarContainer.controlButton(ObservedObject.GetRawObject(this.controlButton));
        SideBarContainer.sideBarWidth(240);
        SideBarContainer.minSideBarWidth(210);
        SideBarContainer.maxSideBarWidth(260);
        SideBarContainer.onChange((value) => {
            console.info('status:' + value);
        });
        Column.create();
        Column.width('100%');
        Column.backgroundColor('#19000000');
        ForEach.create("2", this, ObservedObject.GetRawObject(this.arr), (item, index) => {
            Column.create({ space: 5 });
            Column.onClick(() => {
                this.current = item;
            });
            Image.create(this.current === item ? this.selectedIcon : this.normalIcon);
            Image.width(64);
            Image.height(64);
            Text.create("Index0" + item);
            Text.fontSize(25);
            Text.fontColor(this.current === item ? '#0A59F7' : '#999');
            Text.fontFamily('source-sans-pro,cursive,sans-serif');
            Text.pop();
            Column.pop();
        }, item => item);
        ForEach.pop();
        Column.pop();
        RowSplit.create();
        RowSplit.width('100%');
        Column.create();
        Text.create('Split page one');
        Text.fontSize(30);
        Text.pop();
        Column.pop();
        Column.create();
        Text.create('Split page two');
        Text.fontSize(30);
        Text.pop();
        Column.pop();
        RowSplit.pop();
        SideBarContainer.pop();
    }
}
loadDocument(new SideBarExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=sideBar.js.map