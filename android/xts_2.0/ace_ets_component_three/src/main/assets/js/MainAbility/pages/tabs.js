/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/tabs.ets?entry ***!
  \**************************************************************************************************************************************/
class TabsExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__barPosition = new ObservedPropertySimple(BarPosition.Start, this, "barPosition");
        this.__index = new ObservedPropertySimple(0, this, "index");
        this.__vertical = new ObservedPropertySimple(true, this, "vertical");
        this.__scrollable = new ObservedPropertySimple(true, this, "scrollable");
        this.__barMode = new ObservedPropertySimple(BarMode.Fixed, this, "barMode");
        this.__barWidth = new ObservedPropertySimple(70, this, "barWidth");
        this.__barHeight = new ObservedPropertySimple(150, this, "barHeight");
        this.__animationDuration = new ObservedPropertySimple(400, this, "animationDuration");
        this.__onActionCalled = new ObservedPropertySimple(false, this, "onActionCalled");
        this.controller = new TabsController();
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("tabs page state change called:" + JSON.stringify(eventData));
                if (eventData.data.index != null) {
                    this.index = parseInt(eventData.data.index);
                }
                if (eventData.data.barPosition != null) {
                    this.barPosition = eventData.data.barPosition;
                }
                if (eventData.data.vertical != null) {
                    this.vertical = eventData.data.vertical;
                }
                if (eventData.data.scrollable != null) {
                    this.scrollable = eventData.data.scrollable;
                }
                if (eventData.data.barMode != null) {
                    this.barMode = eventData.data.barMode;
                }
                if (eventData.data.barWidth != null) {
                    this.barWidth = parseInt(eventData.data.barWidth);
                }
                if (eventData.data.barHeight != null) {
                    this.barHeight = parseInt(eventData.data.barHeight);
                }
                if (eventData.data.animationDuration != null) {
                    this.animationDuration = parseInt(eventData.data.animationDuration);
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.barPosition !== undefined) {
            this.barPosition = params.barPosition;
        }
        if (params.index !== undefined) {
            this.index = params.index;
        }
        if (params.vertical !== undefined) {
            this.vertical = params.vertical;
        }
        if (params.scrollable !== undefined) {
            this.scrollable = params.scrollable;
        }
        if (params.barMode !== undefined) {
            this.barMode = params.barMode;
        }
        if (params.barWidth !== undefined) {
            this.barWidth = params.barWidth;
        }
        if (params.barHeight !== undefined) {
            this.barHeight = params.barHeight;
        }
        if (params.animationDuration !== undefined) {
            this.animationDuration = params.animationDuration;
        }
        if (params.onActionCalled !== undefined) {
            this.onActionCalled = params.onActionCalled;
        }
        if (params.controller !== undefined) {
            this.controller = params.controller;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__barPosition.aboutToBeDeleted();
        this.__index.aboutToBeDeleted();
        this.__vertical.aboutToBeDeleted();
        this.__scrollable.aboutToBeDeleted();
        this.__barMode.aboutToBeDeleted();
        this.__barWidth.aboutToBeDeleted();
        this.__barHeight.aboutToBeDeleted();
        this.__animationDuration.aboutToBeDeleted();
        this.__onActionCalled.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get barPosition() {
        return this.__barPosition.get();
    }
    set barPosition(newValue) {
        this.__barPosition.set(newValue);
    }
    get index() {
        return this.__index.get();
    }
    set index(newValue) {
        this.__index.set(newValue);
    }
    get vertical() {
        return this.__vertical.get();
    }
    set vertical(newValue) {
        this.__vertical.set(newValue);
    }
    get scrollable() {
        return this.__scrollable.get();
    }
    set scrollable(newValue) {
        this.__scrollable.set(newValue);
    }
    get barMode() {
        return this.__barMode.get();
    }
    set barMode(newValue) {
        this.__barMode.set(newValue);
    }
    get barWidth() {
        return this.__barWidth.get();
    }
    set barWidth(newValue) {
        this.__barWidth.set(newValue);
    }
    get barHeight() {
        return this.__barHeight.get();
    }
    set barHeight(newValue) {
        this.__barHeight.set(newValue);
    }
    get animationDuration() {
        return this.__animationDuration.get();
    }
    set animationDuration(newValue) {
        this.__animationDuration.set(newValue);
    }
    get onActionCalled() {
        return this.__onActionCalled.get();
    }
    set onActionCalled(newValue) {
        this.__onActionCalled.set(newValue);
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.height(150);
        Column.margin({ top: 5 });
        Tabs.create({ barPosition: this.barPosition, controller: this.controller, index: this.index });
        Tabs.vertical(this.vertical);
        Tabs.scrollable(this.scrollable);
        Tabs.barMode(this.barMode);
        Tabs.barWidth(70);
        Tabs.barHeight(150);
        Tabs.animationDuration(400);
        Tabs.key('tabs');
        Tabs.onChange((index) => {
            console.info(index.toString());
        });
        Tabs.width('90%');
        Tabs.backgroundColor(0xF5F5F5);
        TabContent.create();
        TabContent.tabBar('pink');
        TabContent.key('tabContent1');
        TabContent.onClick(() => {
            this.onActionCalled = true;
            console.info('tabContent1 current action state is: ' + this.onActionCalled);
            try {
                var backData = {
                    data: {
                        "ACTION": this.onActionCalled,
                    }
                };
                var backEvent = {
                    eventId: 212
                };
                console.info("tabContent1 start to emit action state");
            }
            catch (err) {
                console.info("tabContent1 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Column.create();
        Column.width('100%');
        Column.height('100%');
        Column.backgroundColor(Color.Pink);
        Column.pop();
        TabContent.pop();
        TabContent.create();
        TabContent.tabBar('yellow');
        Column.create();
        Column.width('100%');
        Column.height('100%');
        Column.backgroundColor(Color.Yellow);
        Column.pop();
        TabContent.pop();
        TabContent.create();
        TabContent.tabBar('blue');
        Column.create();
        Column.width('100%');
        Column.height('100%');
        Column.backgroundColor(Color.Blue);
        Column.pop();
        TabContent.pop();
        TabContent.create();
        TabContent.tabBar('green');
        Column.create();
        Column.width('100%');
        Column.height('100%');
        Column.backgroundColor(Color.Green);
        Column.pop();
        TabContent.pop();
        Tabs.pop();
        Column.pop();
    }
    onPageShow() {
        console.info('tabs page show called');
        var stateChangeEvent = {
            eventId: 213
        };
        var stateChangeEventOne = {
            eventId: 214
        };
        var stateChangeEventTwo = {
            eventId: 215
        };
    }
}
loadDocument(new TabsExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=tabs.js.map