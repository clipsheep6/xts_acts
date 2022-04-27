/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*********************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\customDialogController.ets?entry ***!
  \*********************************************************************************************************************/
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
        Column.debugLine("pages/customDialogController.ets(25:5)");
        Text.create('Software uninstall');
        Text.debugLine("pages/customDialogController.ets(26:7)");
        Text.width('70%');
        Text.fontSize(20);
        Text.margin({ top: 10, bottom: 10 });
        Text.pop();
        Image.create('/images/dialog.png');
        Image.debugLine("pages/customDialogController.ets(27:7)");
        Image.width(80);
        Image.height(80);
        Text.create('Whether to uninstall a software?');
        Text.debugLine("pages/customDialogController.ets(28:7)");
        Text.fontSize(16);
        Text.margin({ bottom: 10 });
        Text.pop();
        Flex.create({ justifyContent: FlexAlign.SpaceAround });
        Flex.debugLine("pages/customDialogController.ets(29:7)");
        Flex.margin({ bottom: 10 });
        Button.createWithLabel('cancel');
        Button.debugLine("pages/customDialogController.ets(30:9)");
        Button.onClick(() => {
            this.controller.close();
            this.cancel();
        });
        Button.backgroundColor(0xffffff);
        Button.fontColor(Color.Black);
        Button.pop();
        Button.createWithLabel('confirm');
        Button.debugLine("pages/customDialogController.ets(35:9)");
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
class CustomDialogUser extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__autoCancel = new ObservedPropertySimple(true, this, "autoCancel");
        this.__customStyle = new ObservedPropertySimple(false, this, "customStyle");
        this.__alignment = new ObservedPropertyObject(DialogAlignment.Default, this, "alignment");
        this.__onClickValue = new ObservedPropertySimple(false, this, "onClickValue");
        this.stateChangCallBack = (eventData) => {
            console.info("checkboxGroup page stateChangCallBack");
            if (eventData != null) {
                console.info("checkboxGroup page state change called:" + JSON.stringify(eventData));
            }
        };
        this.dialogController = new CustomDialogController({
            builder: () => {
                let jsDialog = new CustomDialogExample("2", this, { cancel: this.onCancel, confirm: this.onAccept });
                jsDialog.setController(this.dialogController);
                View.create(jsDialog);
            },
            cancel: this.existApp,
            autoCancel: true,
            offset: {
                dx: 100,
                dy: 100
            }
        }, this);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.autoCancel !== undefined) {
            this.autoCancel = params.autoCancel;
        }
        if (params.customStyle !== undefined) {
            this.customStyle = params.customStyle;
        }
        if (params.alignment !== undefined) {
            this.alignment = params.alignment;
        }
        if (params.onClickValue !== undefined) {
            this.onClickValue = params.onClickValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
        if (params.dialogController !== undefined) {
            this.dialogController = params.dialogController;
        }
    }
    aboutToBeDeleted() {
        this.__autoCancel.aboutToBeDeleted();
        this.__customStyle.aboutToBeDeleted();
        this.__alignment.aboutToBeDeleted();
        this.__onClickValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get autoCancel() {
        return this.__autoCancel.get();
    }
    set autoCancel(newValue) {
        this.__autoCancel.set(newValue);
    }
    get customStyle() {
        return this.__customStyle.get();
    }
    set customStyle(newValue) {
        this.__customStyle.set(newValue);
    }
    get alignment() {
        return this.__alignment.get();
    }
    set alignment(newValue) {
        this.__alignment.set(newValue);
    }
    get onClickValue() {
        return this.__onClickValue.get();
    }
    set onClickValue(newValue) {
        this.__onClickValue.set(newValue);
    }
    onPageShow() {
        console.info('checkboxGroup page show called');
        var stateChangeEvent = {
            eventId: 79,
        };
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
        Column.create();
        Column.debugLine("pages/customDialogController.ets(88:5)");
        Column.width('100%');
        Column.margin({ top: 5 });
        Button.createWithLabel('click me');
        Button.debugLine("pages/customDialogController.ets(89:7)");
        Button.onClick(() => {
            this.onClickValue = true;
            this.dialogController.open();
            try {
                var backData = {
                    data: {
                        "ACTION": this.onClickValue
                    }
                };
                var backEvent = {
                    eventId: 236,
                };
                console.info("click to emit action state");
            }
            catch (err) {
                console.info("click action state err: " + JSON.stringify(err.message));
            }
        });
        Button.backgroundColor(0x317aff);
        Button.key('dialogController');
        Button.pop();
        Column.pop();
    }
}
loadDocument(new CustomDialogUser("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=customDialogController.js.map