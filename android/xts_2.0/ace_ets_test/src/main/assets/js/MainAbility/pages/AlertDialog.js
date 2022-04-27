/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**********************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/AlertDialog.ets?entry ***!
  \**********************************************************************************************************************************/
class alertdialog extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__currentTest = new ObservedPropertySimple('default', this, "currentTest");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.currentTest !== undefined) {
            this.currentTest = params.currentTest;
        }
    }
    aboutToBeDeleted() {
        this.__currentTest.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get currentTest() {
        return this.__currentTest.get();
    }
    set currentTest(newValue) {
        this.__currentTest.set(newValue);
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.height('100%');
        Text.create(`${this.currentTest}`);
        Text.fontSize(20);
        Text.pop();
        Button.createWithLabel('Show Dialog With Two Buttons');
        Button.width(300);
        Button.margin(10);
        Button.backgroundColor(Color.Blue);
        Button.onClick(() => {
            AlertDialog.show({
                title: 'Title',
                message: 'This is message',
                autoCancel: true,
                primaryButton: {
                    value: '11111111111',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    alignment: 'DialogAlignment.Top',
                    action: () => {
                        this.currentTest = 'primaryButton';
                    }
                },
                secondaryButton: {
                    value: 'cancle',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'secondaryButton';
                    }
                },
                cancel: () => {
                    this.currentTest = 'cancel';
                }
            })
                .key('alertDialog');
        });
        Button.pop();
        Button.createWithLabel('Show Dialog With Two Buttons');
        Button.width(300);
        Button.margin(10);
        Button.backgroundColor(Color.Blue);
        Button.onClick(() => {
            AlertDialog.show({
                title: 'Title',
                message: 'This is message',
                alignment: 'DialogAlignment.Center',
                primaryButton: {
                    value: '11111111111',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'primaryButton';
                    }
                },
                secondaryButton: {
                    value: 'cancle',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'secondaryButton';
                    }
                },
                cancel: () => {
                    this.currentTest = 'cancel';
                }
            })
                .key('alertDialog1');
        });
        Button.pop();
        Button.createWithLabel('Show Dialog With Two Buttons');
        Button.width(300);
        Button.margin(10);
        Button.backgroundColor(Color.Blue);
        Button.onClick(() => {
            AlertDialog.show({
                title: 'Title',
                message: 'This is message',
                alignment: 'DialogAlignment.Bottom',
                primaryButton: {
                    value: '11111111111',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'primaryButton';
                    }
                },
                secondaryButton: {
                    value: 'cancle',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'secondaryButton';
                    }
                },
                cancel: () => {
                    this.currentTest = 'cancel';
                }
            })
                .key('alertDialog2');
        });
        Button.pop();
        Button.createWithLabel('Show Dialog With Two Buttons');
        Button.width(300);
        Button.margin(10);
        Button.backgroundColor(Color.Blue);
        Button.onClick(() => {
            AlertDialog.show({
                title: 'Title',
                message: 'This is message',
                alignment: 'DialogAlignment.Default',
                primaryButton: {
                    value: '11111111111',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'primaryButton';
                    }
                },
                secondaryButton: {
                    value: 'cancle',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'secondaryButton';
                    }
                },
                cancel: () => {
                    this.currentTest = 'cancel';
                }
            })
                .key('alertDialog3');
        });
        Button.pop();
        Button.createWithLabel('Show Dialog With Two Buttons');
        Button.width(300);
        Button.margin(10);
        Button.backgroundColor(Color.Blue);
        Button.onClick(() => {
            AlertDialog.show({
                title: 'Title',
                message: 'This is message',
                alignment: 'DialogAlignment.TopStart',
                primaryButton: {
                    value: '11111111111',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'primaryButton';
                    }
                },
                secondaryButton: {
                    value: 'cancle',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'secondaryButton';
                    }
                },
                cancel: () => {
                    this.currentTest = 'cancel';
                }
            })
                .key('alertDialog4');
        });
        Button.pop();
        Button.createWithLabel('Show Dialog With Two Buttons');
        Button.width(300);
        Button.margin(10);
        Button.backgroundColor(Color.Blue);
        Button.onClick(() => {
            AlertDialog.show({
                title: 'Title',
                message: 'This is message',
                alignment: 'DialogAlignment.TopEnd',
                primaryButton: {
                    value: '11111111111',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'primaryButton';
                    }
                },
                secondaryButton: {
                    value: 'cancle',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'secondaryButton';
                    }
                },
                cancel: () => {
                    this.currentTest = 'cancel';
                }
            })
                .key('alertDialog5');
        });
        Button.pop();
        Button.createWithLabel('Show Dialog With Two Buttons');
        Button.width(300);
        Button.margin(10);
        Button.backgroundColor(Color.Blue);
        Button.onClick(() => {
            AlertDialog.show({
                title: 'Title',
                message: 'This is message',
                alignment: 'DialogAlignment.CenterStart',
                primaryButton: {
                    value: '11111111111',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'primaryButton';
                    }
                },
                secondaryButton: {
                    value: 'cancle',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'secondaryButton';
                    }
                },
                cancel: () => {
                    this.currentTest = 'cancel';
                }
            })
                .key('alertDialog6');
        });
        Button.pop();
        Button.createWithLabel('Show Dialog With Two Buttons');
        Button.width(300);
        Button.margin(10);
        Button.backgroundColor(Color.Blue);
        Button.onClick(() => {
            AlertDialog.show({
                title: 'Title',
                message: 'This is message',
                alignment: 'DialogAlignment.CenterEnd',
                primaryButton: {
                    value: '11111111111',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'primaryButton';
                    }
                },
                secondaryButton: {
                    value: 'cancle',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'secondaryButton';
                    }
                },
                cancel: () => {
                    this.currentTest = 'cancel';
                }
            })
                .key('alertDialog7');
        });
        Button.pop();
        Button.createWithLabel('Show Dialog With Two Buttons');
        Button.width(300);
        Button.margin(10);
        Button.backgroundColor(Color.Blue);
        Button.onClick(() => {
            AlertDialog.show({
                title: 'Title',
                message: 'This is message',
                alignment: 'DialogAlignment.BottomStart',
                primaryButton: {
                    value: '11111111111',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'primaryButton';
                    }
                },
                secondaryButton: {
                    value: 'cancle',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'BottomStart';
                    }
                },
                cancel: () => {
                    this.currentTest = 'cancel';
                }
            })
                .key('alertDialog8');
        });
        Button.pop();
        Button.createWithLabel('Show Dialog With Confirm');
        Button.width(300);
        Button.margin(10);
        Button.backgroundColor(Color.Blue);
        Button.onClick(() => {
            AlertDialog.show({
                title: 'Title',
                message: 'This is message',
                gridCount: '1',
                alignment: 'DialogAlignment.BottomEnd',
                confirm: {
                    value: '11111111111',
                    fontColor: '#FFFF0000',
                    backgroundColor: '#FFFFC0CB',
                    action: () => {
                        this.currentTest = 'confirm';
                    }
                },
                cancel: () => {
                    this.currentTest = 'cancel';
                }
            })
                .key('alertDialog9');
        });
        Button.pop();
        Column.pop();
    }
}
loadDocument(new alertdialog("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=AlertDialog.js.map