/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\enumsImage.ets?entry ***!
  \********************************************************************************************************************************/
class BackgroundExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.height('100%');
        Column.padding({ top: 5 });
        Text.create('background image repeat along Y');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Row.create();
        Row.backgroundImage('/images/download.png', ImageRepeat.Y);
        Row.backgroundImageSize(ImageSize.Auto);
        Row.width('90%');
        Row.height(500);
        Row.border({ width: 1 });
        Row.key('Image');
        Row.pop();
        Column.pop();
    }
}
loadDocument(new BackgroundExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=enumsImage.js.map