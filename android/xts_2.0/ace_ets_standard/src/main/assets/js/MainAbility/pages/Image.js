/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Image.ets?entry ***!
  \*************************************************************************************************************/
class image_textcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__Width = new ObservedPropertySimple(0, this, "Width");
        this.__height = new ObservedPropertySimple(0, this, "height");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.Width !== undefined) {
            this.Width = params.Width;
        }
        if (params.height !== undefined) {
            this.height = params.height;
        }
    }
    aboutToBeDeleted() {
        this.__Width.aboutToBeDeleted();
        this.__height.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get Width() {
        return this.__Width.get();
    }
    set Width(newValue) {
        this.__Width.set(newValue);
    }
    get height() {
        return this.__height.get();
    }
    set height(newValue) {
        this.__height.set(newValue);
    }
    onPageShow() {
        console.info('Image page show called');
    }
    onBuildDone() {
        console.info('Image page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Column.create();
        Column.width(300);
        Column.height(300);
        Column.borderColor(Color.Pink);
        Column.borderWidth(4);
        Text.create(`Image page`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Image.create("/resources/rawfile/hand.png");
        Image.matchTextDirection(false);
        Image.fitOriginalSize(false);
        Image.fillColor(0xCCCCCC);
        Image.objectFit(ImageFit.Cover);
        Image.objectRepeat(ImageRepeat.NoRepeat);
        Image.interpolation(ImageInterpolation.None);
        Image.renderMode(ImageRenderMode.Original);
        Image.autoResize(false);
        Image.syncLoad(false);
        Image.sourceSize({ width: 200, height: 100 });
        Image.alt("/resources/rawfile/person.png");
        Image.key('image1');
        Image.create("/resources/rawfile/hand.png");
        Image.objectFit(ImageFit.Contain);
        Image.objectRepeat(ImageRepeat.X);
        Image.interpolation(ImageInterpolation.High);
        Image.renderMode(ImageRenderMode.Template);
        Image.key('image2');
        Image.height(180);
        Image.width(180);
        Image.onComplete((msg) => {
            this.Width = msg.width;
            this.height = msg.height;
            console.info('Width ----' + this.Width);
            console.info('height ----' + this.height);
        });
        Image.onError(() => {
            console.info('load image fail');
        });
        Image.create("/resources/rawfile/hand.png");
        Image.objectFit(ImageFit.Fill);
        Image.objectRepeat(ImageRepeat.Y);
        Image.interpolation(ImageInterpolation.Low);
        Image.key('image3');
        Image.create("/resources/rawfile/hand.png");
        Image.objectFit(ImageFit.None);
        Image.objectRepeat(ImageRepeat.XY);
        Image.interpolation(ImageInterpolation.Medium);
        Image.key('image4');
        Image.create("/resources/rawfile/hand.png");
        Image.objectFit(ImageFit.ScaleDown);
        Image.key('image5');
        Column.pop();
        Flex.pop();
    }
}
loadDocument(new image_textcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Image.js.map