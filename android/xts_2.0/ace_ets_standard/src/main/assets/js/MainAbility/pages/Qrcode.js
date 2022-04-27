/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Qrcode.ets?entry ***!
  \**************************************************************************************************************/
class qrcode_textcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__Color = new ObservedPropertySimple(Color.Pink, this, "Color");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.Color !== undefined) {
            this.Color = params.Color;
        }
    }
    aboutToBeDeleted() {
        this.__Color.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get Color() {
        return this.__Color.get();
    }
    set Color(newValue) {
        this.__Color.set(newValue);
    }
    onPageShow() {
        console.info('Qrcode page show called');
    }
    onBuildDone() {
        console.info('Qrcode page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Text.create(`Qrcode page`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        QRCode.create('hello world');
        QRCode.color("#FFFFC0CB");
        QRCode.backgroundColor(this.Color);
        QRCode.width("200");
        QRCode.height("100");
        QRCode.key('qrcode');
        QRCode.pop();
        Flex.pop();
    }
}
loadDocument(new qrcode_textcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Qrcode.js.map