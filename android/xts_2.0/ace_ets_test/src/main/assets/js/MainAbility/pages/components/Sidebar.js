/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/components/Sidebar.ets?entry ***!
  \*****************************************************************************************************************************************/
class SideBarContainerTest extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__text = new ObservedPropertyObject('', this, "text");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.text !== undefined) {
            this.text = params.text;
        }
    }
    aboutToBeDeleted() {
        this.__text.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    onPageShow() {
        console.info('sideBar page show called');
    }
    onBuildDone() {
        console.info('sideBar page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        SideBarContainer.create({ showSideBarContainer: true, style: SideBarContainerStyle.Embed });
        SideBarContainer.showControlButton(true);
        SideBarContainer.sideBarWidth(240);
        SideBarContainer.minSideBarWidth(210);
        SideBarContainer.maxSideBarWidth(260);
        SideBarContainer.key('sidebar');
        SideBarContainer.onChange((value) => {
            console.info('status' + value);
        });
        Column.create();
        Button.createWithLabel('One');
        Button.onClick(() => {
            console.info('click one');
            this.text = 'one click';
        });
        Button.pop();
        Button.createWithLabel('Two');
        Button.onClick(() => {
            console.info('click two');
            this.text = 'two click';
        });
        Button.pop();
        Button.createWithLabel('Three');
        Button.onClick(() => {
            console.info('click three');
            this.text = 'three click';
        });
        Button.pop();
        Button.createWithLabel('Four');
        Button.onClick(() => {
            console.info('click four');
            this.text = 'four click';
        });
        Button.pop();
        Text.create(this.text);
        Text.pop();
        Column.pop();
        RowSplit.create();
        Column.create();
        Text.create('Split page one');
        Text.pop();
        Column.pop();
        Column.create();
        Text.create('Split page two');
        Text.pop();
        Column.pop();
        RowSplit.pop();
        SideBarContainer.pop();
        SideBarContainer.create({
            showSideBarContainer: true,
            style: SideBarContainerStyle.Overlay,
            buttonAttr: ({
                left: 12,
                top: 12,
                width: 12,
                height: 12,
                icon: "/common/1.png"
            })
        });
        SideBarContainer.showControlButton(true);
        SideBarContainer.sideBarWidth(240);
        SideBarContainer.minSideBarWidth(210);
        SideBarContainer.maxSideBarWidth(260);
        SideBarContainer.key('sidebar1');
        SideBarContainer.onChange((value) => {
            console.info('status' + value);
        });
        Column.create();
        Button.createWithLabel('One');
        Button.onClick(() => {
            console.info('click one');
            this.text = 'one click';
        });
        Button.pop();
        Button.createWithLabel('Two');
        Button.onClick(() => {
            console.info('click two');
            this.text = 'two click';
        });
        Button.pop();
        Button.createWithLabel('Three');
        Button.onClick(() => {
            console.info('click three');
            this.text = 'three click';
        });
        Button.pop();
        Button.createWithLabel('Four');
        Button.onClick(() => {
            console.info('click four');
            this.text = 'four click';
        });
        Button.pop();
        Text.create(this.text);
        Text.pop();
        Column.pop();
        RowSplit.create();
        Column.create();
        Text.create('Split page one');
        Text.pop();
        Column.pop();
        Column.create();
        Text.create('Split page two');
        Text.pop();
        Column.pop();
        RowSplit.pop();
        SideBarContainer.pop();
        Flex.pop();
    }
}
loadDocument(new SideBarContainerTest("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Sidebar.js.map