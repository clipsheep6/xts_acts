/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\navigation.ets?entry ***!
  \*********************************************************************************************************/
class NavigationExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.arr = [0, 1, 2, 3, 4, 5];
        this.__hideBar = new ObservedPropertySimple(true, this, "hideBar");
        this.__toolBar = new ObservedPropertySimple(true, this, "toolBar");
        this.__hideToolBar = new ObservedPropertySimple(false, this, "hideToolBar");
        this.__hideTitleBar = new ObservedPropertySimple(false, this, "hideTitleBar");
        this.__hideBackButton = new ObservedPropertySimple(false, this, "hideBackButton");
        this.__onActionCalled = new ObservedPropertySimple(false, this, "onActionCalled");
        this.__titleMode = new ObservedPropertyObject(NavigationTitleMode.Free, this, "titleMode");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("tabs page state change called:" + JSON.stringify(eventData));
                if (eventData.data.vertical != null) {
                    this.titleMode = eventData.data.titleMode;
                }
                if (eventData.data.hideToolBar != null) {
                    this.hideToolBar = parseInt(eventData.data.hideToolBar);
                }
                if (eventData.data.hideTitleBar != null) {
                    this.hideTitleBar = parseInt(eventData.data.hideTitleBar);
                }
                if (eventData.data.hideBackButton != null) {
                    this.hideBackButton = parseInt(eventData.data.hideBackButton);
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.arr !== undefined) {
            this.arr = params.arr;
        }
        if (params.hideBar !== undefined) {
            this.hideBar = params.hideBar;
        }
        if (params.toolBar !== undefined) {
            this.toolBar = params.toolBar;
        }
        if (params.hideToolBar !== undefined) {
            this.hideToolBar = params.hideToolBar;
        }
        if (params.hideTitleBar !== undefined) {
            this.hideTitleBar = params.hideTitleBar;
        }
        if (params.hideBackButton !== undefined) {
            this.hideBackButton = params.hideBackButton;
        }
        if (params.onActionCalled !== undefined) {
            this.onActionCalled = params.onActionCalled;
        }
        if (params.titleMode !== undefined) {
            this.titleMode = params.titleMode;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__hideBar.aboutToBeDeleted();
        this.__toolBar.aboutToBeDeleted();
        this.__hideToolBar.aboutToBeDeleted();
        this.__hideTitleBar.aboutToBeDeleted();
        this.__hideBackButton.aboutToBeDeleted();
        this.__onActionCalled.aboutToBeDeleted();
        this.__titleMode.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get hideBar() {
        return this.__hideBar.get();
    }
    set hideBar(newValue) {
        this.__hideBar.set(newValue);
    }
    get toolBar() {
        return this.__toolBar.get();
    }
    set toolBar(newValue) {
        this.__toolBar.set(newValue);
    }
    get hideToolBar() {
        return this.__hideToolBar.get();
    }
    set hideToolBar(newValue) {
        this.__hideToolBar.set(newValue);
    }
    get hideTitleBar() {
        return this.__hideTitleBar.get();
    }
    set hideTitleBar(newValue) {
        this.__hideTitleBar.set(newValue);
    }
    get hideBackButton() {
        return this.__hideBackButton.get();
    }
    set hideBackButton(newValue) {
        this.__hideBackButton.set(newValue);
    }
    get onActionCalled() {
        return this.__onActionCalled.get();
    }
    set onActionCalled(newValue) {
        this.__onActionCalled.set(newValue);
    }
    get titleMode() {
        return this.__titleMode.get();
    }
    set titleMode(newValue) {
        this.__titleMode.set(newValue);
    }
    onPageShow() {
        console.info('progress page show called');
        var stateChangeEvent = {
            eventId: 135,
        };
    }
    NavigationTitle() {
        Column.create();
        Column.onClick(() => {
            console.log("title");
        });
        Text.create('title');
        Text.width(80);
        Text.height(60);
        Text.fontColor(Color.Blue);
        Text.fontSize(30);
        Text.pop();
        Column.pop();
    }
    NavigationMenus() {
        Row.create();
        Row.width(100);
        Image.create('images/add.png');
        Image.width(25);
        Image.height(25);
        Image.create('comment/more.png');
        Image.width(25);
        Image.height(25);
        Image.margin({ left: 30 });
        Row.pop();
    }
    render() {
        Column.create();
        Navigation.create();
        Navigation.title({ builder: this.NavigationTitle.bind(this) });
        Navigation.subTitle('subtitle');
        Navigation.menus({ builder: this.NavigationMenus.bind(this) });
        Navigation.titleMode(NavigationTitleMode.Free);
        Navigation.hideTitleBar(false);
        Navigation.hideBackButton(false);
        Navigation.onTitleModeChanged((titleModel) => {
            console.log('titleMode');
        });
        Navigation.toolBar({ items: [
                { value: 'app', icon: 'images/grid.svg', action: () => {
                        console.log("app");
                    } },
                { value: 'add', icon: 'images/add.svg', action: () => {
                        console.log("add");
                    } },
                { value: 'collect', icon: 'images/collect.svg', action: () => {
                        console.log("collect");
                    } }
            ] });
        Navigation.hideToolBar(this.hideBar);
        Search.create({ value: '', placeholder: "" });
        Search.width('85%');
        Search.margin(26);
        Search.pop();
        List.create({ space: 5, initialIndex: 0 });
        List.listDirection(Axis.Vertical);
        List.key('Navigation');
        List.height(300);
        List.margin({ top: 10, left: 18 });
        List.width('100%');
        ForEach.create("2", this, ObservedObject.GetRawObject(this.arr), (item) => {
            ListItem.create();
            ListItem.editable(true);
            Text.create('' + item);
            Text.width('90%');
            Text.height(80);
            Text.backgroundColor('#3366CC');
            Text.borderRadius(15);
            Text.fontSize(16);
            Text.textAlign(TextAlign.Center);
            Text.pop();
            ListItem.pop();
        }, item => item);
        ForEach.pop();
        List.pop();
        Button.createWithLabel(this.hideBar ? "tool bar" : "hide bar");
        Button.backgroundColor(0x2788D9);
        Button.width(200);
        Button.height(100);
        Button.fontSize(20);
        Button.key('NavigationContent1');
        Button.onClick(() => {
            this.hideBar = !this.hideBar;
            console.info('navigationContent1 current action state is: ' + this.hideBar);
            try {
                var backData = {
                    data: {
                        "ACTION": this.hideBar,
                    }
                };
                var backEvent = {
                    eventId: 1366,
                };
                console.info("navigationContent1 start to emit action state");
            }
            catch (err) {
                console.info("navigationContent1 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.margin({ left: 135, top: 60 });
        Button.pop();
        Navigation.pop();
        Column.pop();
    }
}
loadDocument(new NavigationExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=navigation.js.map