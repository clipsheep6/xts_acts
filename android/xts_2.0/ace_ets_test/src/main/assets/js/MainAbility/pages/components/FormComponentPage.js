/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/components/FormComponentPage.ets?entry ***!
  \***************************************************************************************************************************************************/
class FormComponentPage extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__dimension = new ObservedPropertySimple(FormDimension.Dimension_2_2, this, "dimension");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.dimension !== undefined) {
            this.dimension = params.dimension;
        }
    }
    aboutToBeDeleted() {
        this.__dimension.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get dimension() {
        return this.__dimension.get();
    }
    set dimension(newValue) {
        this.__dimension.set(newValue);
    }
    render() {
        Column.create();
        FormComponent.create({
            id: 0,
            name: "four_four",
            bundle: "com.example.myapplication",
            ability: "com.example.myapplication.MainAbility",
            module: "fa_widget",
            dimension: this.dimension,
            temporary: true
        });
        FormComponent.size({ width: 100, height: 100 });
        FormComponent.moduleName("fa_widget");
        FormComponent.dimension(this.dimension);
        FormComponent.allowUpdate(true);
        FormComponent.visibility(Visibility.Visible);
        FormComponent.onAcquired((e) => {
            console.log('onAcquired id : ' + e.id);
        });
        FormComponent.onRouter(() => {
            console.log('onRouter : ');
        });
        FormComponent.onError((error) => {
            console.log('error code :' + error.errcode);
            console.log('error msg :' + error.msg);
        });
        Text.create('卡片格式 ：');
        Text.fontSize(15);
        Text.width('100%');
        Text.backgroundColor(0xFAEEE0);
        Text.height(40);
        Text.textAlign(TextAlign.Start);
        Text.fontWeight(FontWeight.Bolder);
        Text.pop();
        Flex.create({ direction: FlexDirection.Row, justifyContent: FlexAlign.Start });
        Flex.width('90%');
        Flex.margin({ top: 5, bottom: 5, left: 10, right: 10 });
        Button.createWithLabel('1X2');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.dimension = FormDimension.Dimension_1_2;
        });
        Button.pop();
        Button.createWithLabel('2X2');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.dimension = FormDimension.Dimension_2_2;
        });
        Button.pop();
        Button.createWithLabel('2X4');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.dimension = FormDimension.Dimension_2_4;
        });
        Button.pop();
        Button.createWithLabel('4X4');
        Button.margin({ right: 10 });
        Button.fontSize(15);
        Button.width(150);
        Button.onClick(() => {
            this.dimension = FormDimension.Dimension_4_4;
        });
        Button.pop();
        Flex.pop();
        Column.pop();
    }
}
loadDocument(new FormComponentPage("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=FormComponentPage.js.map