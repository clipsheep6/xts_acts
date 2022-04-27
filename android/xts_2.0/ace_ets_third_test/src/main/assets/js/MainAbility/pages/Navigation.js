/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/pages/Navigation.ets?entry ***!
  \****************************************************************************************************************************/
class NavigationExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
        this.__hideBar = new ObservedPropertySimple(true, this, "hideBar");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.arr !== undefined) {
            this.arr = params.arr;
        }
        if (params.hideBar !== undefined) {
            this.hideBar = params.hideBar;
        }
    }
    aboutToBeDeleted() {
        this.__hideBar.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get hideBar() {
        return this.__hideBar.get();
    }
    set hideBar(newValue) {
        this.__hideBar.set(newValue);
    }
    onPageShow() {
        console.info('navigation page show called');
    }
    onBuildDone() {
        console.info('navigation build done called');
    }
    NavigationMenus1() {
        Image.create('common/icon.png');
        Image.width(25);
        Image.height(25);
        Image.margin({ left: 30 });
    }
    render() {
        Column.create();
        Navigation.create();
        Navigation.key('navigation1');
        Navigation.height('50%');
        Navigation.title('title');
        Navigation.subTitle('subtitle');
        Navigation.menus({ builder: this.NavigationMenus1.bind(this) });
        Navigation.titleMode(NavigationTitleMode.Full);
        Navigation.hideTitleBar(false);
        Navigation.hideToolBar(false);
        Navigation.hideBackButton(false);
        Navigation.toolBar({ items: [
                { value: 'app' },
                { value: 'add' },
                { value: 'collect' }
            ] });
        Navigation.onTitleModeChange((titleModel) => {
            console.log('titleMode:' + titleModel);
        });
        Search.create({ value: '', placeholder: '' });
        Search.width('90%');
        Search.margin(0);
        Search.pop();
        List.create({ space: 5, initialIndex: 0 });
        List.listDirection(Axis.Vertical);
        List.height(200);
        List.margin({ top: 10, left: 20 });
        List.width('100%');
        ForEach.create("2", this, ObservedObject.GetRawObject(this.arr), (item) => {
            ListItem.create();
            ListItem.editable(true);
            Text.create('' + item);
            Text.width('90%');
            Text.height(40);
            Text.backgroundColor('#3366CC');
            Text.fontSize(15);
            Text.textAlign(TextAlign.Center);
            Text.pop();
            ListItem.pop();
        }, item => item);
        ForEach.pop();
        List.pop();
        Navigation.pop();
        Navigation.create();
        Navigation.height('10%');
        Navigation.key('navigation2');
        Navigation.hideTitleBar(true);
        Navigation.hideBackButton(true);
        Navigation.titleMode(NavigationTitleMode.Mini);
        Search.create({ value: '', placeholder: '' });
        Search.width('90%');
        Search.margin(0);
        Search.pop();
        List.create({ space: 5, initialIndex: 0 });
        List.listDirection(Axis.Vertical);
        List.height(50);
        List.margin({ top: 10, left: 20 });
        List.width('100%');
        ListItem.create();
        Text.create('Navigation1');
        Text.width('90%');
        Text.height(50);
        Text.backgroundColor('#3366CC');
        Text.fontSize(15);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        ListItem.pop();
        List.pop();
        Navigation.pop();
        Navigation.create();
        Navigation.key('navigation3');
        Navigation.height('10%');
        Navigation.titleMode(NavigationTitleMode.Free);
        Search.create({ value: '', placeholder: '' });
        Search.width('90%');
        Search.margin(25);
        Search.pop();
        List.create({ space: 5, initialIndex: 0 });
        List.listDirection(Axis.Vertical);
        List.height(50);
        List.margin({ top: 10, left: 20 });
        List.width('100%');
        ListItem.create();
        Text.create('Navigation2');
        Text.width('90%');
        Text.height(50);
        Text.backgroundColor('#3366CC');
        Text.fontSize(15);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        ListItem.pop();
        List.pop();
        Navigation.pop();
        Column.pop();
    }
}
loadDocument(new NavigationExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Navigation.js.map