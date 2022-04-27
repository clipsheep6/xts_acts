/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!******************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\gridContainer.ets?entry ***!
  \******************************************************************************************************************************/
class GridContainerExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__sizeType = new ObservedPropertySimple(SizeType.XS, this, "sizeType");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("gridContainer page state change called:" + JSON.stringify(eventData));
                switch (eventData.data.sizeType) {
                    case 'Auto':
                        this.sizeType = SizeType.Auto;
                        break;
                    case 'XS':
                        this.sizeType = SizeType.XS;
                        break;
                    case 'SM':
                        this.sizeType = SizeType.SM;
                        break;
                    case 'MD':
                        this.sizeType = SizeType.MD;
                        break;
                    case 'LG':
                        this.sizeType = SizeType.LG;
                        break;
                    default:
                        this.sizeType = SizeType.Auto;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.sizeType !== undefined) {
            this.sizeType = params.sizeType;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__sizeType.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get sizeType() {
        return this.__sizeType.get();
    }
    set sizeType(newValue) {
        this.__sizeType.set(newValue);
    }
    onPageShow() {
        console.info('gridContainer page show called');
    }
    render() {
        Column.create({ space: 5 });
        Column.debugLine("pages/gridContainer.ets(54:5)");
        GridContainer.create({ columns: 12, sizeType: this.sizeType, gutter: 10, margin: 20 });
        GridContainer.debugLine("pages/gridContainer.ets(55:7)");
        GridContainer.width('90%');
        GridContainer.key('gridContainer');
        GridContainer.margin({ top: 300 });
        Row.create();
        Row.debugLine("pages/gridContainer.ets(56:9)");
        Text.create('1');
        Text.debugLine("pages/gridContainer.ets(57:11)");
        Text.fontSize(20);
        Text.useSizeType({
            xs: { span: 6, offset: 0 },
            sm: { span: 2, offset: 0 },
            md: { span: 2, offset: 0 },
            lg: { span: 2, offset: 0 }
        });
        Text.height(50);
        Text.backgroundColor(0x4582B4);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('2');
        Text.debugLine("pages/gridContainer.ets(68:11)");
        Text.fontSize(20);
        Text.useSizeType({
            xs: { span: 2, offset: 6 },
            sm: { span: 6, offset: 2 },
            md: { span: 2, offset: 2 },
            lg: { span: 2, offset: 2 }
        });
        Text.height(50);
        Text.backgroundColor(0x00BFFF);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('3');
        Text.debugLine("pages/gridContainer.ets(79:11)");
        Text.fontSize(20);
        Text.useSizeType({
            xs: { span: 2, offset: 8 },
            sm: { span: 2, offset: 8 },
            md: { span: 6, offset: 4 },
            lg: { span: 2, offset: 4 }
        });
        Text.height(50);
        Text.backgroundColor(0x4682B4);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Text.create('4');
        Text.debugLine("pages/gridContainer.ets(90:11)");
        Text.fontSize(20);
        Text.useSizeType({
            xs: { span: 2, offset: 10 },
            sm: { span: 2, offset: 10 },
            md: { span: 2, offset: 10 },
            lg: { span: 6, offset: 6 }
        });
        Text.height(50);
        Text.backgroundColor(0x00BFFF);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Row.pop();
        GridContainer.pop();
        Column.pop();
    }
}
loadDocument(new GridContainerExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=gridContainer.js.map