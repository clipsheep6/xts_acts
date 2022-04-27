/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***********************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\global.ets?entry ***!
  \***********************************************************************************************************************/
class GlobalExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    onPageShow() {
    }
    render() {
        Flex.create({
            direction: FlexDirection.Column,
            alignItems: ItemAlign.Center,
            justifyContent: FlexAlign.Center
        });
        Flex.width('100%');
        Flex.height('100%');
        Canvas.create(this.context);
        Canvas.width('100%');
        Canvas.height('40%');
        Canvas.backgroundColor('#00ffff');
        Canvas.onReady(() => {
            this.context.imageSmoothingEnabled = false;
            this.testImageBitmapSize();
            this.testOffscreenCanvas();
            this.testImageData();
            this.testImage();
        });
        Canvas.pop();
        Flex.pop();
    }
    testImageBitmapSize() {
        let img = new ImageBitmap("/images/bg.jpg");
        let width = img.width;
        let height = img.height;
        this.context.imageSmoothingEnabled = false;
        this.context.drawImage(img, 30, 950, 160, 100);
        console.log("imagebitmap_width=" + width);
        console.log("imagebitmap_height=" + height);
    }
    testOffscreenCanvas() {
        var offscreen = new OffscreenCanvas(300, 300);
        var offCanvas2 = offscreen.getContext("2d");
        var img = new Image();
        img.src = "/images/bg.jpg";
        offCanvas2.drawImage(img, 0, 0, 100, 100);
        var bitmap = offscreen.transferToImageBitmap();
        this.ctx.transferFromImageBitmap(bitmap);
    }
    testImageData() {
        var offscreen = new OffscreenCanvas(300, 300);
        var offCanvas2 = offscreen.getContext("2d");
        var imageData = offCanvas2.createImageData(100, 100);
        var imgData = imageData.data;
        console.log("imageData_width=" + imageData.width);
        console.log("imageData_height=" + imageData.height);
    }
    testImage() {
        var img = new Image("/images/bg.jpg", 100, 100)
            .onload(() => {
        })
            .onerror(() => {
        });
        console.log("img_width=" + img.width);
        console.log("img_height=" + img.height);
    }
}
loadDocument(new GlobalExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=global.js.map