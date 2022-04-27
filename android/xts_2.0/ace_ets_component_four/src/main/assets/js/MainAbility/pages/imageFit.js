/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\imageFit.ets?entry ***!
  \*******************************************************************************************************/
class ImageExample1 extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.on = 'www.example.com';
        this.__src = new ObservedPropertySimple(this.on, this, "src");
        this.__objectFit = new ObservedPropertyObject(Cover, this, "objectFit");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.on !== undefined) {
            this.on = params.on;
        }
        if (params.src !== undefined) {
            this.src = params.src;
        }
        if (params.objectFit !== undefined) {
            this.objectFit = params.objectFit;
        }
    }
    aboutToBeDeleted() {
        this.__src.aboutToBeDeleted();
        this.__objectFit.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get src() {
        return this.__src.get();
    }
    set src(newValue) {
        this.__src.set(newValue);
    }
    get objectFit() {
        return this.__objectFit.get();
    }
    set objectFit(newValue) {
        this.__objectFit.set(newValue);
    }
    render() {
        Column.create();
        Column.height(320);
        Column.width(360);
        Column.padding({ right: 10, top: 10 });
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Start });
        Text.create('objectFit');
        Text.fontSize(16);
        Text.fontColor(0xcccccc);
        Text.height(30);
        Text.pop();
        Row.create({ space: 5 });
        Image.create({ "id": 0, "type": 30000, params: ['ic_health_heart.png'] });
        Image.border({ width: 1 });
        Image.borderStyle(BorderStyle.Dashed);
        Image.objectFit(ImageFit.None);
        Image.width(110);
        Image.height(110);
        Image.overlay('None', { align: Alignment.Bottom, offset: { x: 0, y: 20 } });
        Image.create({ "id": 0, "type": 30000, params: ['ic_health_heart.png'] });
        Image.border({ width: 1 });
        Image.borderStyle(BorderStyle.Dashed);
        Image.objectFit(ImageFit.Auto);
        Image.width(110);
        Image.height(110);
        Image.overlay('Auto', { align: Alignment.Bottom, offset: { x: 0, y: 20 } });
        Image.create({ "id": 0, "type": 30000, params: ['ic_health_heart.png'] });
        Image.border({ width: 1 });
        Image.borderStyle(BorderStyle.Dashed);
        Image.objectFit(ImageFit.Contain);
        Image.width(110);
        Image.height(110);
        Image.overlay('Contain', { align: Alignment.Bottom, offset: { x: 0, y: 20 } });
        Row.pop();
        Flex.pop();
        Column.pop();
    }
}
loadDocument(new ImageExample1("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=imageFit.js.map