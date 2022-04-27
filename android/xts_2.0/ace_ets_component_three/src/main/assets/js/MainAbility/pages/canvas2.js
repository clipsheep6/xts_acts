/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/canvas2.ets?entry ***!
  \*****************************************************************************************************************************************/
class Canvas2Example extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.scroller = new Scroller();
        this.settings = new RenderingContextSettings(true);
        this.context = new CanvasRenderingContext2D(this.settings);
        this.offContext = new OffscreenCanvasRenderingContext2D(600, 600, this.settings);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.scroller !== undefined) {
            this.scroller = params.scroller;
        }
        if (params.settings !== undefined) {
            this.settings = params.settings;
        }
        if (params.context !== undefined) {
            this.context = params.context;
        }
        if (params.offContext !== undefined) {
            this.offContext = params.offContext;
        }
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    render() {
        Flex.create({ direction: FlexDirection.Row, alignItems: ItemAlign.Start, justifyContent: FlexAlign.Start });
        Flex.width('100%');
        Flex.height('100%');
        Scroll.create(this.scroller);
        Scroll.scrollable(ScrollDirection.Vertical);
        Scroll.scrollBar(BarState.On);
        Scroll.scrollBarColor(Color.Gray);
        Scroll.scrollBarWidth(10);
        Column.create();
        Column.width('100%');
        Column.height('100%');
        Canvas.create(this.context);
        Canvas.width('100%');
        Canvas.height('100%');
        Canvas.backgroundColor('#ffff00');
        Canvas.onReady(() => {
            this.transferFromImageBitmap();
            this.offScreenToDataURL();
        });
        Canvas.key('canvas2');
        Canvas.pop();
        Column.pop();
        Scroll.pop();
        Flex.pop();
    }
    onPageShow() {
    }
    transferFromImageBitmap() {
        this.offContext.fillStyle = '#0000ff';
        this.offContext.fillRect(20, 160, 150, 100);
        let image = this.offContext.transferToImageBitmap();
        this.context.transferFromImageBitmap(image);
    }
    offScreenToDataURL() {
        let dataUrl = this.offContext.toDataURL();
        console.info("[canvas] offContext canvas rendering context2D toDataURL-----" + JSON.stringify(dataUrl));
    }
}
loadDocument(new Canvas2Example("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=canvas2.js.map