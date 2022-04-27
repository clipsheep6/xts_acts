/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/Tab.ets?entry ***!
  \**************************************************************************************************************************/
class TabsExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.controller = new TabsController();
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.controller !== undefined) {
            this.controller = params.controller;
        }
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.height(150);
        Column.margin({ top: 5 });
        Button.createWithLabel('changeIndex');
        Button.onClick(() => {
            this.controller.changeIndex(0);
            console.log('change Index ');
        });
        Button.pop();
        Tabs.create({ barPosition: BarPosition.Start, index: 1, controller: this.controller });
        Tabs.key('tab');
        Tabs.vertical(true);
        Tabs.scrollable(true);
        Tabs.barMode(BarMode.Fixed);
        Tabs.barWidth(70);
        Tabs.barHeight(150);
        Tabs.animationDuration(400);
        Tabs.onChange((index) => {
            console.info(index.toString());
        });
        Tabs.width('90%');
        Tabs.backgroundColor(0xF5F5F5);
        TabContent.create();
        TabContent.tabBar('pink');
        Column.create();
        Column.width('100%');
        Column.height('100%');
        Column.backgroundColor(Color.Pink);
        Column.pop();
        TabContent.pop();
        TabContent.create();
        TabContent.tabBar('yellow');
        TabContent.key('tabcontent');
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
        Tabs.create({ barPosition: BarPosition.End, index: 1, controller: this.controller });
        Tabs.key('tab2');
        Tabs.vertical(false);
        Tabs.scrollable(false);
        Tabs.barMode(BarMode.Scrollable);
        Tabs.barWidth(70);
        Tabs.barHeight(150);
        Tabs.animationDuration(400);
        Tabs.onChange((index) => {
            console.info(index.toString());
        });
        Tabs.width('90%');
        Tabs.backgroundColor(0xF5F5F5);
        TabContent.create();
        TabContent.tabBar('pink');
        Column.create();
        Column.width('100%');
        Column.height('100%');
        Column.backgroundColor(Color.Pink);
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
}
loadDocument(new TabsExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Tab.js.map