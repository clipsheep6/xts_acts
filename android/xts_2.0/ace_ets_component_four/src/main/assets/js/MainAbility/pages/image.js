/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\image.ets?entry ***!
  \****************************************************************************************************/
class ImageExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__fontSize = new ObservedPropertySimple(9, this, "fontSize");
        this.__fontColor = new ObservedPropertySimple("0xCCCCCC", this, "fontColor");
        this.__textAlign = new ObservedPropertyObject(TextAlign.Start, this, "textAlign");
        this.__textOverflow = new ObservedPropertyObject(TextOverflow.Clip, this, "textOverflow");
        this.__decoration = new ObservedPropertyObject(TextDecorationType.None, this, "decoration");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.fontSize !== undefined) {
            this.fontSize = params.fontSize;
        }
        if (params.fontColor !== undefined) {
            this.fontColor = params.fontColor;
        }
        if (params.textAlign !== undefined) {
            this.textAlign = params.textAlign;
        }
        if (params.textOverflow !== undefined) {
            this.textOverflow = params.textOverflow;
        }
        if (params.decoration !== undefined) {
            this.decoration = params.decoration;
        }
    }
    aboutToBeDeleted() {
        this.__fontSize.aboutToBeDeleted();
        this.__fontColor.aboutToBeDeleted();
        this.__textAlign.aboutToBeDeleted();
        this.__textOverflow.aboutToBeDeleted();
        this.__decoration.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get fontSize() {
        return this.__fontSize.get();
    }
    set fontSize(newValue) {
        this.__fontSize.set(newValue);
    }
    get fontColor() {
        return this.__fontColor.get();
    }
    set fontColor(newValue) {
        this.__fontColor.set(newValue);
    }
    get textAlign() {
        return this.__textAlign.get();
    }
    set textAlign(newValue) {
        this.__textAlign.set(newValue);
    }
    get textOverflow() {
        return this.__textOverflow.get();
    }
    set textOverflow(newValue) {
        this.__textOverflow.set(newValue);
    }
    get decoration() {
        return this.__decoration.get();
    }
    set decoration(newValue) {
        this.__decoration.set(newValue);
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Start, justifyContent: FlexAlign.SpaceBetween });
        Flex.height(600);
        Flex.width(350);
        Flex.padding({ left: 35, right: 35, top: 35 });
        Text.create('string_hello');
        Text.fontSize(this.fontSize);
        Text.fontColor(this.fontColor);
        Text.textAlign(ObservedObject.GetRawObject(this.textAlign));
        Text.textOverflow({ overflow: this.textOverflow });
        Text.decoration({ type: this.decoration, color: Color.Red });
        Text.key('text');
        Text.pop();
        Image.create({ "id": 0, "type": 30000, params: ['test.png'] });
        Image.key('image');
        Flex.pop();
    }
}
loadDocument(new ImageExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=image.js.map