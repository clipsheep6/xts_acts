/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***********************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/CustomDialog.ets?entry ***!
  \***********************************************************************************************************************************/
class CustomDialogExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.controller = undefined;
        this.cancel = undefined;
        this.confirm = undefined;
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.controller !== undefined) {
            this.controller = params.controller;
        }
        if (params.cancel !== undefined) {
            this.cancel = params.cancel;
        }
        if (params.confirm !== undefined) {
            this.confirm = params.confirm;
        }
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    setController(ctr) {
        this.controller = ctr;
    }
    render() {
        Column.create();
        Text.create('Software uninstall');
        Text.width('70%');
        Text.fontSize(20);
        Text.margin({ top: 10, bottom: 10 });
        Text.pop();
        Image.create({ "id": 16777218, "type": 20000, params: [] });
        Image.width(80);
        Image.height(80);
        Text.create('Whether to uninstall a software?');
        Text.fontSize(16);
        Text.margin({ bottom: 10 });
        Text.pop();
        Flex.create({ justifyContent: FlexAlign.SpaceAround });
        Flex.margin({ bottom: 10 });
        Button.createWithLabel('cancel');
        Button.onClick(() => {
            this.controller.close();
            this.cancel();
        });
        Button.backgroundColor(0xffffff);
        Button.fontColor(Color.Black);
        Button.pop();
        Button.createWithLabel('confirm');
        Button.onClick(() => {
            this.controller.close();
            this.confirm();
        });
        Button.backgroundColor(0xffffff);
        Button.fontColor(Color.Red);
        Button.pop();
        Flex.pop();
        Column.pop();
    }
}
let Offset = { dx: 5, dy: 5 };
class CustomDialogUser extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.dialogController = new CustomDialogController({
            builder: () => {
                let jsDialog = new CustomDialogExample("2", this, { cancel: this.onCancel, confirm: this.onAccept });
                jsDialog.setController(this.dialogController);
                View.create(jsDialog);
            },
            cancel: this.existApp,
            autoCancel: true,
            offset: Offset,
            alignment: DialogAlignment.Center,
            customStyle: false,
            gridCount: 5
        }, this);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.dialogController !== undefined) {
            this.dialogController = params.dialogController;
        }
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    onCancel() {
        console.info('Callback when the first button is clicked');
    }
    onAccept() {
        console.info('Callback when the second button is clicked');
    }
    existApp() {
        console.info('Click the callback in the blank area');
    }
    render() {
        Row.create();
        Row.width('100%');
        Row.margin({ top: 5 });
        Button.createWithLabel('click me');
        Button.onClick(() => {
            this.dialogController.open();
        });
        Button.backgroundColor(0x317aff);
        Button.pop();
        Button.createWithLabel('click me');
        Button.onClick(() => {
            this.dialogController.close();
        });
        Button.backgroundColor(0x317aff);
        Button.pop();
        Row.pop();
    }
}
loadDocument(new CustomDialogUser("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=CustomDialog.js.map